// Eanna Entertainment


#include "GameplayAbilities/GAS_GameplayAbility.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "EannaGameplayAbilitySystem/GAS_LogChannel.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

namespace FAbilitySystemTweaks
{
	int ClearAbilityTimers = 1;
	FAutoConsoleVariableRef CVarClearAbilityTimers(TEXT("AbilitySystem.ClearAbilityTimers"), FAbilitySystemTweaks::ClearAbilityTimers, TEXT("Whether to call ClearAllTimersForObject as part of EndAbility call"), ECVF_Default);
}


/** This is basically a copy of the original UGameplayAbility::PreActivate function with the addition of HandlePreEventSuspensionTags */
void UGAS_GameplayAbility::PreActivate(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	FOnGameplayAbilityEnded::FDelegate* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData)
{
UAbilitySystemComponent* Comp = ActorInfo->AbilitySystemComponent.Get();

	//Flush any remaining server moves before activating the ability.
	//	Flushing the server moves prevents situations where previously pending move's DeltaTimes are figured into montages that are about to play and update.
	//	When this happened, clients would have a smaller delta time than the server which meant the server would get ahead and receive their notifies before the client, etc.
	//	The system depends on the server not getting ahead, so it's important to send along any previously pending server moves here.
	AActor* const MyActor = ActorInfo->AvatarActor.Get();
	if (MyActor && !ActorInfo->IsNetAuthority())
	{
		ACharacter* MyCharacter = Cast<ACharacter>(MyActor);
		if (MyCharacter)
		{
			UCharacterMovementComponent* CharMoveComp = Cast<UCharacterMovementComponent>(MyCharacter->GetMovementComponent());

			if (CharMoveComp)
			{
				CharMoveComp->FlushServerMoves();
			}
		}
	}

	if (GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
	{
		bIsActive = true;
		bIsBlockingOtherAbilities = true;
		bIsCancelable = true;
	}

	RemoteInstanceEnded = false;

	// This must be called before we start applying tags and blocking or canceling other abilities.
	// We could set off a chain that results in calling functions on this ability that rely on the current info being set.
	SetCurrentInfo(Handle, ActorInfo, ActivationInfo);

	if (TriggerEventData && IsInstantiated())
	{
		CurrentEventData = *TriggerEventData;
	}

	Comp->HandleChangeAbilityCanBeCanceled(AbilityTags, this, true);

	// Custom functionality
	HandlePreEventSuspensionTags(Comp);
	
	Comp->AddLooseGameplayTags(ActivationOwnedTags);

	if (UAbilitySystemGlobals::Get().ShouldReplicateActivationOwnedTags())
	{
		Comp->AddReplicatedLooseGameplayTags(ActivationOwnedTags);
	}

	if (OnGameplayAbilityEndedDelegate)
	{
		OnGameplayAbilityEnded.Add(*OnGameplayAbilityEndedDelegate);
	}

	Comp->NotifyAbilityActivated(Handle, this);

	Comp->ApplyAbilityBlockAndCancelTags(AbilityTags, this, true, BlockAbilitiesWithTag, true, CancelAbilitiesWithTag);

	// Spec's active count must be incremented after applying blockor cancel tags, otherwise the ability runs the risk of cancelling itself inadvertantly before it completely activates.
	FGameplayAbilitySpec* Spec = Comp->FindAbilitySpecFromHandle(Handle);
	if (!Spec)
	{
		UE_LOG(LogGAS_GameplayAbility, Warning, TEXT("PreActivate called with a valid handle but no matching ability spec was found. Handle: %s ASC: %s. AvatarActor: %s"), *Handle.ToString(), *(Comp->GetPathName()), *GetNameSafe(Comp->GetAvatarActor_Direct()));
		return;
	}

	// make sure we do not incur a roll over if we go over the uint8 max, this will need to be updated if the var size changes
	if (LIKELY(Spec->ActiveCount < UINT8_MAX))
	{
		Spec->ActiveCount++;
	}
	else
	{
		UE_LOG(LogGAS_GameplayAbility, Warning, TEXT("PreActivate %s called when the Spec->ActiveCount (%d) >= UINT8_MAX"), *GetName(), (int32)Spec->ActiveCount)
	}
}

/** This is basically a copy of the original UGameplayAbility::EndAbility function with the addition of HandlePreEventSuspensionTags */
void UGAS_GameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
if (!IsEndAbilityValid(Handle, ActorInfo)) return;
		
	if (ScopeLockCount > 0)
	{
		UE_LOG(LogGAS_GameplayAbility, Verbose, TEXT("Attempting to end Ability %s but ScopeLockCount was greater than 0, adding end to the WaitingToExecute Array"), *GetName());
		WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &UGAS_GameplayAbility::EndAbility, Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
		return;
	}
    
    if (GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
    {
        bIsAbilityEnding = true;
    }

	// Give blueprint a chance to react
	K2_OnEndAbility(bWasCancelled);

	// Protect against blueprint causing us to EndAbility already
	if (bIsActive == false && GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
	{
		return;
	}

	// Stop any timers or latent actions for the ability
	UWorld* MyWorld = GetWorld();
	if (MyWorld)
	{
		MyWorld->GetLatentActionManager().RemoveActionsForObject(this);
		if (FAbilitySystemTweaks::ClearAbilityTimers)
		{
			MyWorld->GetTimerManager().ClearAllTimersForObject(this);
		}
	}

	// Execute our delegate and unbind it, as we are no longer active and listeners can re-register when we become active again.
	OnGameplayAbilityEnded.Broadcast(this);
	OnGameplayAbilityEnded.Clear();

	OnGameplayAbilityEndedWithData.Broadcast(FAbilityEndedData(this, Handle, bReplicateEndAbility, bWasCancelled));
	OnGameplayAbilityEndedWithData.Clear();

	if (GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
	{
		bIsActive = false;
		bIsAbilityEnding = false;
	}

	// Tell all our tasks that we are finished and they should cleanup
	for (int32 TaskIdx = ActiveTasks.Num() - 1; TaskIdx >= 0 && ActiveTasks.Num() > 0; --TaskIdx)
	{
		UGameplayTask* Task = ActiveTasks[TaskIdx];
		if (Task)
		{
			Task->TaskOwnerEnded();
		}
	}
	ActiveTasks.Reset();	// Empty the array but don't resize memory, since this object is probably going to be destroyed very soon anyways.

	if (UAbilitySystemComponent* const AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get())
	{
		if (bReplicateEndAbility)
		{
			AbilitySystemComponent->ReplicateEndOrCancelAbility(Handle, ActivationInfo, this, false);
		}

		// Remove tags we added to owner
		AbilitySystemComponent->RemoveLooseGameplayTags(ActivationOwnedTags);

		if (UAbilitySystemGlobals::Get().ShouldReplicateActivationOwnedTags())
		{
			AbilitySystemComponent->RemoveReplicatedLooseGameplayTags(ActivationOwnedTags);
		}

		// Add back any tags we removed in PreActivate
		AbilitySystemComponent->AddLooseGameplayTags(SuspensionTagsToBeAdded);

		// Remove tracked GameplayCues that we added
		for (FGameplayTag& GameplayCueTag : TrackedGameplayCues)
		{
			AbilitySystemComponent->RemoveGameplayCue(GameplayCueTag);
		}
		TrackedGameplayCues.Empty();

		if (CanBeCanceled())
		{
			// If we're still cancelable, cancel it now
			AbilitySystemComponent->HandleChangeAbilityCanBeCanceled(AbilityTags, this, false);
		}
		
		if (IsBlockingOtherAbilities())
		{
			// If we're still blocking other abilities, cancel now
			AbilitySystemComponent->ApplyAbilityBlockAndCancelTags(AbilityTags, this, false, BlockAbilitiesWithTag, false, CancelAbilitiesWithTag);
		}

		AbilitySystemComponent->ClearAbilityReplicatedDataCache(Handle, CurrentActivationInfo);

		// Tell owning AbilitySystemComponent that we ended so it can do stuff (including MarkPendingKill us)
		AbilitySystemComponent->NotifyAbilityEnded(Handle, this, bWasCancelled);
	}

	if (IsInstantiated())
	{
		CurrentEventData = FGameplayEventData{};
	}
}

void UGAS_GameplayAbility::HandlePreEventSuspensionTags(UAbilitySystemComponent* ASC)
{
	if (SuspendOwnedTags.Num())
	{
		for (const FGameplayTag& Tag : SuspendOwnedTags)
		{
			if (!ASC->HasMatchingGameplayTag(Tag)) continue;
			ASC->RemoveLooseGameplayTag(Tag);
			SuspensionTagsToBeAdded.AddTag(Tag);
		}
	}

	if (SuspendOwnedParentTags.Num())
	{
		FGameplayTagContainer OwnedTags;
		ASC->GetOwnedGameplayTags(OwnedTags);
		
		for (const FGameplayTag& Tag : OwnedTags.Filter(SuspendOwnedParentTags))
		{
			if (!SuspendOwnedParentTags.HasTag(Tag.RequestDirectParent())) continue;
			ASC->RemoveLooseGameplayTag(Tag);
			SuspensionTagsToBeAdded.AddTag(Tag);
		}
	}
}
