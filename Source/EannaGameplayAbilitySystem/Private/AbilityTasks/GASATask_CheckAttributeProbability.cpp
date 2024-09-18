// Eanna Entertainment


#include "AbilityTasks/GASATask_CheckAttributeProbability.h"

#include "GameplayTagContainer.h"
#include "GAS_AbilitySystemComponent.h"
#include "TagStructs/Tags_GAS.h"

UGASATask_CheckAttributeProbability* UGASATask_CheckAttributeProbability::CheckAttributeProbability(
	UGameplayAbility* OwningAbility, const FGameplayTag& AttributeTag)
{
	UGASATask_CheckAttributeProbability* MyObj = NewAbilityTask<UGASATask_CheckAttributeProbability>(OwningAbility);
	MyObj->AttributeTag = AttributeTag;
	return MyObj;
}

void UGASATask_CheckAttributeProbability::Activate()
{
	if (Ability->GetCurrentActorInfo()->IsLocallyControlled())
	{
		CalculateProbability();
	}
	else
	{
		// If not locally controlled means we are server or another client, so we need to wait for boolean data.
		const FGameplayAbilitySpecHandle AbilitySpecHandle = GetAbilitySpecHandle();
		const FPredictionKey ActivationPredictionKey = GetActivationPredictionKey();
		AbilitySystemComponent.Get()->AbilityTargetDataSetDelegate(AbilitySpecHandle, ActivationPredictionKey).AddUObject(this, &UGASATask_CheckAttributeProbability::OnProbabilityEventReplicated);
		const bool bCalledDelegate = AbilitySystemComponent.Get()->CallReplicatedTargetDataDelegatesIfSet(AbilitySpecHandle, ActivationPredictionKey);
		if (!bCalledDelegate)
		{
			SetWaitingOnRemotePlayerData();
		}
	}
}

void UGASATask_CheckAttributeProbability::CalculateProbability() const
{
	UGAS_AbilitySystemComponent* const ASC = Cast<UGAS_AbilitySystemComponent>(AbilitySystemComponent.Get());
	FScopedPredictionWindow ScopedPrediction(ASC);

	const float SourceProbability = ASC->GetNumericAttribute(ASC->GetAttributeFromTag(AttributeTag)) / 100.0f;
	const float AdjustedProbability = FMath::Clamp(SourceProbability, 0.f, 1.f);

	const bool bSuccess = FMath::RandRange(0.f, 1.f) <= AdjustedProbability;

	const FGameplayTag EventTag = bSuccess ? FTags_GAS::GetTargetDataTags().TargetData_Success : FGameplayTag::EmptyTag;
	

	/* We set the replicated data, if it bSuccess, we will have a target data, otherwise it will be empty. This is
	 * a trick to send a boolean data to the server and clients. If we find a better way to send boolean data
	 * we can change this. */
	AbilitySystemComponent->ServerSetReplicatedTargetData(
		GetAbilitySpecHandle(),
		GetActivationPredictionKey(),
		FGameplayAbilityTargetDataHandle(),
		EventTag,
		AbilitySystemComponent->ScopedPredictionKey
		);

	// Local Broadcast
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnProbabilityChecked.Broadcast(bSuccess);
	}
}

void UGASATask_CheckAttributeProbability::OnProbabilityEventReplicated(const FGameplayAbilityTargetDataHandle& Data,
	FGameplayTag ActivationTag)
{
	AbilitySystemComponent.Get()->ConsumeClientReplicatedTargetData(GetAbilitySpecHandle(), GetActivationPredictionKey());
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnProbabilityChecked.Broadcast(ActivationTag == FTags_GAS::GetTargetDataTags().TargetData_Success);
	}
}
