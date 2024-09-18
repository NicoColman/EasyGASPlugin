// Eanna Entertainment


#include "GAS_AbilitySystemComponent.h"

#include "GAS_AttributeSet.h"
#include "GameplayAbilities/GAS_AbilityInputBase.h"
#include "GameplayEffects/GAS_GameplayEffect.h"


UGAS_AbilitySystemComponent::UGAS_AbilitySystemComponent()
{
}

void UGAS_AbilitySystemComponent::InitializeAbilitySystem_Implementation(AActor* InActor, AActor* InAvatar,
	const TArray<TSubclassOf<UGameplayEffect>>& InGameplayEffects, const int32 InLevel,
	const TArray<TSubclassOf<UGameplayAbility>>& InAbilities,
	const TArray<TSubclassOf<UGameplayAbility>>& InPassiveAbilities, const int32 InAbilitiesLevel)
{
	InitAbilityActorInfo(InActor, InAvatar);
	AbilityActorInfoSet();
	InitializeAttributes(InGameplayEffects, InLevel);
	if (InAvatar->HasAuthority())
	{
		InitializeGameplayAbilities(InAbilities, InAbilitiesLevel);
		InitializePassiveGameplayAbilities(InPassiveAbilities, InAbilitiesLevel);
	}
}

void UGAS_AbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UGAS_AbilitySystemComponent::ClientEffectApplied);
}

void UGAS_AbilitySystemComponent::InitializeAttributes(
	const TArray<TSubclassOf<UGameplayEffect>>& GameplayEffects, const int32 Level)
{
	for (const TSubclassOf<UGameplayEffect> Effect : GameplayEffects)
	{
		if (!Effect) continue;
		ApplyEffectToSelf(Effect, Level);
	}
}

void UGAS_AbilitySystemComponent::InitializeGameplayAbilities(
	const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level)
{
	GiveAbilitiesWithInputTag(Abilities, Level,true);
}

void UGAS_AbilitySystemComponent::InitializePassiveGameplayAbilities(
	const TArray<TSubclassOf<UGameplayAbility>>& PassiveAbilities, const int32 Level)
{
	for (const TSubclassOf<UGameplayAbility> Ability : PassiveAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability, Level, 0);
		GiveAbilityAndActivateOnce(AbilitySpec);
	}
}

FGameplayAbilitySpecHandle UGAS_AbilitySystemComponent::GiveAbilityWithInputTag(
	const TSubclassOf<UGameplayAbility>& Ability, const int32 Level)
{
	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability, Level, 0);
	
	if (const UGAS_AbilityInputBase* AbilityBase = Cast<UGAS_AbilityInputBase>(AbilitySpec.Ability))
	{
		AbilitySpec.DynamicAbilityTags.AddTag(AbilityBase->InputTag);
		GiveAbility(AbilitySpec);
		return AbilitySpec.Handle;
	}
	return FGameplayAbilitySpecHandle();
}

TArray<FGameplayAbilitySpecHandle> UGAS_AbilitySystemComponent::GiveAbilitiesWithInputTag(
	const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level, const bool bGiveIfNotInputAbility)
{
	TArray<FGameplayAbilitySpecHandle> AbilityHandles;
	for (const TSubclassOf<UGameplayAbility>& Ability : Abilities)
	{
		if (const FGameplayAbilitySpecHandle Handle = GiveAbilityWithInputTag(Ability, Level); Handle.IsValid())
		{
			AbilityHandles.Add(Handle);
		}
		else if (bGiveIfNotInputAbility)
		{
			FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability, Level, 0);
			if (const FGameplayAbilitySpecHandle NoInputHandle = GiveAbility(AbilitySpec); NoInputHandle.IsValid())
			{
				AbilityHandles.Add(NoInputHandle);
			}
		}
	}
	return AbilityHandles;
}

void UGAS_AbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag)) continue;
		
		AbilitySpecInputPressed(AbilitySpec);
		if (!AbilitySpec.IsActive())
		{
			TryActivateAbility(AbilitySpec.Handle);
			// if (InputTag != FUtilGameplayTags::GetInputTags().InputTag_LMB) break;
		}
	}
}

void UGAS_AbilitySystemComponent::AbilityInputTagPressed(const FGameplayTag InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag)) continue;
		
		AbilitySpecInputPressed(AbilitySpec);
		if (AbilitySpec.IsActive())
		{
			InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, AbilitySpec.Handle, AbilitySpec.ActivationInfo.GetActivationPredictionKey());
		}
	}
}

void UGAS_AbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag) && AbilitySpec.IsActive())
		{
			AbilitySpecInputReleased(AbilitySpec);
			InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, AbilitySpec.Handle, AbilitySpec.ActivationInfo.GetActivationPredictionKey());
		}
	}
}

FAbilitySpecWrapper UGAS_AbilitySystemComponent::GetSpecFromAbilityTag(
	const FGameplayTag& AbilityTag)
{
	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		for (const FGameplayTag& Tag : AbilitySpec.Ability->AbilityTags)
		{
			if (!Tag.MatchesTag(AbilityTag)) continue;
			return FAbilitySpecWrapper(AbilitySpec);
		}
	}
	return FAbilitySpecWrapper();
}

TArray<FAbilitySpecWrapper> UGAS_AbilitySystemComponent::GetSpecsFromAbilityTags(
	const FGameplayTagContainer& TagContainer)
{
	TArray<FAbilitySpecWrapper> AbilitySpecsFromTag;
	for (const FGameplayTag& Tag : TagContainer)
	{
		const FAbilitySpecWrapper& WrappedSpec = GetSpecFromAbilityTag(Tag);
		if (WrappedSpec.IsEmpty()) continue;

		AbilitySpecsFromTag.Add(WrappedSpec);
	}
	return AbilitySpecsFromTag;
}

FGameplayAttribute UGAS_AbilitySystemComponent::GetAttributeFromTag(
	const FGameplayTag& AttributeTag) const
{
	const UGAS_AttributeSet* AttributeSet = GetSet<UGAS_AttributeSet>();

	const TStaticFuncPtr<FGameplayAttribute()>* AttributeFunc = AttributeSet->TagsToAttributes.Find(AttributeTag);
	if (AttributeFunc)
	{
		return (*AttributeFunc)();
	}

	return FGameplayAttribute();
}

void UGAS_AbilitySystemComponent::SetAttributeValueFromTag(const FGameplayTag& AttributeTag,
	const float NewValue)
{
	SetNumericAttributeBase(GetAttributeFromTag(AttributeTag), NewValue);
}

FGameplayEffectSpecHandle UGAS_AbilitySystemComponent::GASMakeOutGoingSpec(
	const TSubclassOf<UGAS_GameplayEffect>& GameplayEffectClass, const float Level, FGameplayEffectContextHandle Context)
{
	// TODO: Implement profiling and performance tracking:
	// SCOPE_CYCLE_COUNTER(STAT_GetOutgoingSpec);
	if (Context.IsValid() == false)
	{
		Context = MakeEffectContext();
	}

	if (GameplayEffectClass)
	{
		UGAS_GameplayEffect* GameplayEffect = GameplayEffectClass->GetDefaultObject<UGAS_GameplayEffect>();

		FGameplayEffectSpec* NewSpec = new FGameplayEffectSpec(GameplayEffect, Context, Level);
		return FGameplayEffectSpecHandle(NewSpec);
	}

	return FGameplayEffectSpecHandle(nullptr);
}

void UGAS_AbilitySystemComponent::ApplyEffectToSelf(const TSubclassOf<UGameplayEffect>& Effect, const int32 Level)
{
	FGameplayEffectContextHandle EffectContext = MakeEffectContext();
	EffectContext.AddSourceObject(GetOwner());
	const FGameplayEffectSpecHandle SpecHandle = MakeOutgoingSpec(Effect, Level, EffectContext);
	if (SpecHandle.IsValid())
	{
		ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

void UGAS_AbilitySystemComponent::ClientEffectApplied_Implementation(UAbilitySystemComponent* ASC,
                                                                     const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	FGameplayTagContainer TagContainer;
	SpecApplied.GetAllAssetTags(TagContainer);
}
