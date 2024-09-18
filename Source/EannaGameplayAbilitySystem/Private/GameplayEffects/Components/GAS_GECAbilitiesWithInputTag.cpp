// Eanna Entertainment


#include "GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h"

#include "AbilitySystemComponent.h"
#include "EannaGameplayAbilitySystem/GAS_LogChannel.h"
#include "GameplayAbilities/GAS_AbilityInputBase.h"
#include "Misc/DataValidation.h"


#define LOCTEXT_NAMESPACE "GAS_GECAbilitiesWithInputTag"


UGAS_GECAbilitiesWithInputTag::UGAS_GECAbilitiesWithInputTag()
{
#if WITH_EDITORONLY_DATA
	EditorFriendlyName = TEXT("Grant Abilities With Input Tag While Active");
#endif
}

// Reminder: this is happening on the authority only
void UGAS_GECAbilitiesWithInputTag::OnInhibitionChanged(FActiveGameplayEffectHandle ActiveGEHandle,
	bool bIsInhibited) const
{
	if (bIsInhibited)
	{
		RemoveAbilities(ActiveGEHandle);
	}
	else
	{
		GrantAbilities(ActiveGEHandle);
	}
}

// Reminder: this is happening on the authority only
void UGAS_GECAbilitiesWithInputTag::GrantAbilities(FActiveGameplayEffectHandle ActiveGEHandle) const
{
	UAbilitySystemComponent* ASC = ActiveGEHandle.GetOwningAbilitySystemComponent();
	if (!ensure(ASC))
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("%s was passed an ActiveGEHandle %s which did not have a valid associated AbilitySystemComponent"), ANSI_TO_TCHAR(__func__), *ActiveGEHandle.ToString());
		return;
	}

	if (ASC->bSuppressGrantAbility)
	{
		UE_LOG(LogGAS_GameplayEffect, Warning, TEXT("%s suppressed by %s bSuppressGrantAbility"), *GetName(), *ASC->GetName());
		return;
	}

	const FActiveGameplayEffect* ActiveGE = ASC->GetActiveGameplayEffect(ActiveGEHandle);
	if (!ActiveGE)
	{
		UE_LOG(LogGAS_GameplayEffect, Warning, TEXT("ActiveGEHandle %s did not corresponds to Active Gameplay Effect on %s. This could potentially happen if you remove the GE during the application of other GE's"), *ActiveGEHandle.ToString(), *ASC->GetName());
		return;
	}
	const FGameplayEffectSpec& ActiveGESpec = ActiveGE->Spec;

	const TArray<FGameplayAbilitySpec>& AllAbilities = ASC->GetActivatableAbilities();
	for (const FGAS_GameplayAbilityWithInputTagSpecConfig& AbilityConfig : GrantAbilityWithInputTagConfigs)
	{
		// Check that we're configured
		const UGameplayAbility* AbilityCDO = AbilityConfig.Ability.GetDefaultObject();
		if (!AbilityCDO)
		{
			continue;
		}

		// Only do this if we haven't assigned the ability yet! This prevents cases where stacking GEs
		// would regrant the ability every time the stack was applied
		const bool bAlreadyGrantedAbility = AllAbilities.ContainsByPredicate([ASC, AbilityCDO, &ActiveGEHandle](FGameplayAbilitySpec& Spec) { return Spec.Ability == AbilityCDO && Spec.GameplayEffectHandle == ActiveGEHandle; });
		if (bAlreadyGrantedAbility)
		{
			continue;
		}

		const FString ContextString = FString::Printf(TEXT("%s for %s from %s"), ANSI_TO_TCHAR(__func__), *AbilityCDO->GetName(), *GetNameSafe(ActiveGESpec.Def));
		const int32 Level = static_cast<int32>(AbilityConfig.LevelScalableFloat.GetValueAtLevel(ActiveGESpec.GetLevel(), &ContextString));

		const UGAS_AbilityInputBase* InputAbilityCDO = Cast<UGAS_AbilityInputBase>(AbilityCDO);
		// Now grant that ability to the owning actor
		FGameplayAbilitySpec AbilitySpec{ AbilityConfig.Ability, Level, 0, ActiveGESpec.GetEffectContext().GetSourceObject() };
		AbilitySpec.SetByCallerTagMagnitudes = ActiveGESpec.SetByCallerTagMagnitudes;
		AbilitySpec.GameplayEffectHandle = ActiveGEHandle;
		AbilitySpec.DynamicAbilityTags.AddTag(InputAbilityCDO->InputTag);

		ASC->GiveAbility(AbilitySpec);
	}
}

void UGAS_GECAbilitiesWithInputTag::RemoveAbilities(FActiveGameplayEffectHandle ActiveGEHandle) const
{
	UAbilitySystemComponent* ASC = ActiveGEHandle.GetOwningAbilitySystemComponent();
	if (!ensure(ASC))
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("%s was passed an ActiveGEHandle %s which did not have a valid associated AbilitySystemComponent"), ANSI_TO_TCHAR(__func__), *ActiveGEHandle.ToString());
		return;
	}

	const FScopedAbilityListLock ScopedAbilityListLock(*ASC);
	const TArray<const FGameplayAbilitySpec*> GrantedAbilities = ASC->FindAbilitySpecsFromGEHandle(ScopedAbilityListLock, ActiveGEHandle, EConsiderPending::All);
	for (const FGAS_GameplayAbilityWithInputTagSpecConfig& AbilityConfig : GrantAbilityWithInputTagConfigs)
	{
		// Check that we're configured
		const UGameplayAbility* AbilityCDO = AbilityConfig.Ability.GetDefaultObject();
		if (!AbilityCDO)
		{
			continue;
		}

		// See if we were granted, and if so we can remove it
		const FGameplayAbilitySpec* const* AbilitySpecItem = GrantedAbilities.FindByPredicate([AbilityCDO](const FGameplayAbilitySpec* Spec) { return Spec->Ability == AbilityCDO; });
		if (!AbilitySpecItem || !(*AbilitySpecItem))
		{
			continue;
		}
		const FGameplayAbilitySpec& AbilitySpecDef = (**AbilitySpecItem);

		switch (AbilityConfig.RemovalPolicy)
		{
		case EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately:
			{
				ASC->ClearAbility(AbilitySpecDef.Handle);
				break;
			}
		case EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd:
			{
				ASC->SetRemoveAbilityOnEnd(AbilitySpecDef.Handle);
				break;
			}
		default:
			{
				// Do nothing to granted ability
				break;
			}
		}
	}
}

bool UGAS_GECAbilitiesWithInputTag::OnActiveGameplayEffectAdded(
	FActiveGameplayEffectsContainer& ActiveGEContainer, FActiveGameplayEffect& ActiveGE) const
{
	if (ActiveGEContainer.IsNetAuthority())
	{
		ActiveGE.EventSet.OnEffectRemoved.AddUObject(this, &UGAS_GECAbilitiesWithInputTag::OnActiveGameplayEffectRemoved);
		ActiveGE.EventSet.OnInhibitionChanged.AddUObject(this, &UGAS_GECAbilitiesWithInputTag::OnInhibitionChanged);
	}

	return true;
}

void UGAS_GECAbilitiesWithInputTag::OnActiveGameplayEffectRemoved(
	const FGameplayEffectRemovalInfo& RemovalInfo) const
{
	const FActiveGameplayEffect* ActiveGE = RemovalInfo.ActiveEffect;
	if (!ensure(ActiveGE))
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("FGameplayEffectRemovalInfo::ActiveEffect was not populated in %s"), ANSI_TO_TCHAR(__func__));
		return;
	}

	RemoveAbilities(ActiveGE->Handle);
}

#if WITH_EDITOR
EDataValidationResult UGAS_GECAbilitiesWithInputTag::IsDataValid(
	FDataValidationContext& Context) const
{
	EDataValidationResult Result = Super::IsDataValid(Context);

	if (GetOwner()->DurationPolicy == EGameplayEffectDurationType::Instant)
	{
		if (GrantAbilityWithInputTagConfigs.Num() > 0)
		{
			Context.AddError(FText::FormatOrdered(LOCTEXT("InstantDoesNotWorkWithGrantAbilities", "GrantAbilityConfigs does not work with Instant Effects: {0}."), FText::FromString(GetClass()->GetName())));
			Result = EDataValidationResult::Invalid;
		}
	}

	for (int Index = 0; Index < GrantAbilityWithInputTagConfigs.Num(); ++Index)
	{
		const TSubclassOf<UGameplayAbility> AbilityClass = GrantAbilityWithInputTagConfigs[Index].Ability;
		for (int CheckIndex = Index + 1; CheckIndex < GrantAbilityWithInputTagConfigs.Num(); ++CheckIndex)
		{
			if (AbilityClass == GrantAbilityWithInputTagConfigs[CheckIndex].Ability)
			{
				Context.AddError(FText::FormatOrdered(LOCTEXT("GrantAbilitiesMustBeUnique", "Multiple Abilities of the same type cannot be granted by {0}."), FText::FromString(GetClass()->GetName())));
				Result = EDataValidationResult::Invalid;
			}
		}
	}

	return Result;
}
#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
