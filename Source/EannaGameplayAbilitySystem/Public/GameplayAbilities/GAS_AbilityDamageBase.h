// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GAS_AbilityInputBase.h"
#include "GameplayEffects/GAS_GameplayEffectContext.h"
#include "GAS_AbilityDamageBase.generated.h"

/**
 * Struct for easily creating damage effects in a GA, I would recommend to move to DataAsset.
 * Then this struct should be used for setting the values 
 */
USTRUCT(BlueprintType)
struct EANNAGAMEPLAYABILITYSYSTEM_API FGAS_AbilityDamageBaseValues
{
	GENERATED_BODY()

	/** The class of the damage effect to apply, should use GE_Damage */
	UPROPERTY(EditAnywhere, Category="Eanna|GAS|Damage")
	TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr;
	/** The policy for the duration of the effect */
	UPROPERTY(EditAnywhere, Category = "Eanna|GAS|Damage")
	EGameplayEffectDurationType DurationPolicy = EGameplayEffectDurationType::Instant;
	/** The magnitude of the duration */
	UPROPERTY(EditAnywhere, Category = "Eanna|GAS|Damage|Duration", meta = (EditCondition = "DurationPolicy == EGameplayEffectDurationType::HasDuration"))
	float DurationMagnitude = 0.f;
	/** The period of the effect */
	UPROPERTY(EditAnywhere, Category = "Eanna|GAS|Damage|Duration", meta = (EditCondition = "DurationPolicy == EGameplayEffectDurationType::HasDuration || DurationPolicy == EGameplayEffectDurationType::Infinite"))
	float Period = 0.f;

	/** The magnitude of the damage to apply */
	UPROPERTY(EditAnywhere, Category = "Eanna|GAS|Damage")
	FScalableFloat Damage = FScalableFloat();
	/** GameplayTag representing the type of damage, should be used in the damage effect */
	UPROPERTY(EditAnywhere, Category = "Eanna|GAS|Damage")
	FGameplayTag DamageType = FGameplayTag::EmptyTag;

	/** The chance to apply a debuff, when damage get's applied, there is a chance to apply a debuff (see UGAS_AttributeSet)*/
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float DebuffChance = 0.f;
	/** The duration of the debuff */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float DebuffDuration = 0.f;
	/** The damage of the debuff */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float DebuffDamage = 0.f;
	/** The frequency of the debuff */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float DebuffFrequency = 0.f;

	/** When applying damage to a target, there is a chance to apply a Death Impulse (see UGAS_AttributeSet) */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float DeathImpulseMagnitude = 0.f;
	/** When applying damage to a target, there is a chance to apply a Knockback (see UGAS_AttributeSet) */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float KnockbackChance = 0.f;
	/** The magnitude of the knockback */
	UPROPERTY(EditDefaultsOnly, Category = "Eanna|GAS|Damage")
	float KnockbackForceMagnitude = 0.f;

	/** The tags to apply to the target when applying damage */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly ,Category = "Eanna|GAS|Damage|Granted Tags")
	FGameplayTagContainer GrantedTags = FGameplayTagContainer();
};


/**
 * Base class for any ability that applies damage to a target using the custom Damage ExecuteCalculation.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_AbilityDamageBase : public UGAS_AbilityInputBase
{
	GENERATED_BODY()

public:
	/**
	 * Function that sets the WorldContext, Source and Target ASC and AbilityLevel, and then we apply it with
	 *	GAS_BlueprintFunctionLibrary::ApplyDamage, see Blueprint Example.
	 */
	UFUNCTION(BlueprintCallable, Category="Eanna|GameplayAbility|Damage")
	void MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor = nullptr);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Eanna|Damage")
	FGAS_DamageEffectParams DamageValues;
};
