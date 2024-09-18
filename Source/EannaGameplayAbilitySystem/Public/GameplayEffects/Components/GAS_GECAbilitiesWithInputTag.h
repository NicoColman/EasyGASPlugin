// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayEffectComponent.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "Abilities/GameplayAbility.h"
#include "GAS_GECAbilitiesWithInputTag.generated.h"

class UGameplayAbility;

/** Options on how to configure the GameplayAbilitySpec to grant to an Actor */
USTRUCT()
struct FGAS_GameplayAbilityWithInputTagSpecConfig
{
	GENERATED_BODY()

	/** What ability to grant */
	UPROPERTY(EditDefaultsOnly, Category = "Ability Definition")
	TSubclassOf<UGameplayAbility> Ability;

	/** What level to grant this ability at */
	UPROPERTY(EditDefaultsOnly, Category = "Ability Definition", DisplayName = "Level", meta=(UIMin=0.0))
	FScalableFloat LevelScalableFloat = FScalableFloat{ 1.0f };

	/** FGameplayTag to bind this ability to */
	UPROPERTY()
	FGameplayTag InputTag = FGameplayTag();

	/** What will remove this ability later */
	UPROPERTY(EditDefaultsOnly, Category = "Ability Definition")
	EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy = EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately;

	bool operator==(const FGAS_GameplayAbilityWithInputTagSpecConfig& Other) const
	{
		return Ability == Other.Ability &&
			   LevelScalableFloat == Other.LevelScalableFloat &&
			   InputTag == Other.InputTag &&
			   RemovalPolicy == Other.RemovalPolicy;
	}
};

/**
 * GameplayEffectComponent for granting GameplayAbilities with input tags.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_GECAbilitiesWithInputTag : public UGameplayEffectComponent
{
	GENERATED_BODY()

public:
	friend class UGameplayEffect;
	
	UGAS_GECAbilitiesWithInputTag();

	UPROPERTY(EditDefaultsOnly, Category = GrantAbilities)
	TArray<FGAS_GameplayAbilityWithInputTagSpecConfig> GrantAbilityWithInputTagConfigs;

	/** Register for the appropriate events when we're applied */
	virtual bool OnActiveGameplayEffectAdded(FActiveGameplayEffectsContainer& ActiveGEContainer, FActiveGameplayEffect& ActiveGE) const override;

#if WITH_EDITOR
	/** Warn on misconfigured Gameplay Effect */
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif

protected:
	/** This allows us to be notified when the owning GameplayEffect has had its inhibition changed (which can happen on the initial application). */
	virtual void OnInhibitionChanged(FActiveGameplayEffectHandle ActiveGEHandle, bool bIsInhibited) const;

	/** We should grant the configured Gameplay Abilities */
	virtual void GrantAbilities(FActiveGameplayEffectHandle ActiveGEHandle) const;

	/** We should remove the configured Gameplay Abilities */
	virtual void RemoveAbilities(FActiveGameplayEffectHandle ActiveGEHandle) const;

private:
	/** We must undo all effects when removed */
	void OnActiveGameplayEffectRemoved(const FGameplayEffectRemovalInfo& RemovalInfo) const;
};
