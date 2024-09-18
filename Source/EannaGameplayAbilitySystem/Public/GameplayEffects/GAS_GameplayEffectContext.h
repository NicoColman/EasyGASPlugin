// Eanna Entertainment

#pragma once
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h"

#include "GAS_GameplayEffectContext.generated.h"

class UAbilitySystemComponent;

/**
 * Custom gameplay effect context that adds additional information to the gameplay effect, add or remove any
 * parameters as needed, this is just an example on how to create a custom context with NetSerialize.
 *
 * FGAS_DamageEffectParams is just a useful struct for correctly passing the parameters to the context.
 */

USTRUCT(BlueprintType)
struct FGAS_DamageEffectParams
{
	GENERATED_BODY()

	FGAS_DamageEffectParams()
	{
	}

	/** World context object, no need to expose to BP, use "MakeDamageEffectParamsFromClassDefaults" */
	UPROPERTY()
	TObjectPtr<UObject> WorldContextObject = nullptr;

	/** Source AbilitySystemComponent, no need to expose to BP, use "MakeDamageEffectParamsFromClassDefaults" */
	TObjectPtr<UAbilitySystemComponent> SourceAbilitySystemComponent = nullptr;
	/** Target AbilitySystemComponent, no need to expose to BP, use "MakeDamageEffectParamsFromClassDefaults" */
	TObjectPtr<UAbilitySystemComponent> TargetAbilitySystemComponent = nullptr;

	/** Sets the Ability Level if FScalableFloat is used, no need to expose to BP, use "MakeDamageEffectParamsFromClassDefaults" */
	UPROPERTY(BlueprintReadWrite, Category = "Eanna|Damage|Ability")
	float AbilityLevel = 1.f;

	/** The class of the damage effect to apply, for this case use GE_Damage */
	UPROPERTY(EditAnywhere, Category="Eanna|Damage|Main")
	TSubclassOf<UGameplayEffect> DamageEffectClass = nullptr;

	/** Set the Duration Policy of the main Damage (GE_Damage), NOT the debuff damage. */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Main")
	EGameplayEffectDurationType DurationPolicy = EGameplayEffectDurationType::Instant;

	/** Set the Duration Magnitude of the main Damage (GE_Damage), NOT the debuff damage. */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Main|Duration", meta = (EditCondition = "DurationPolicy == EGameplayEffectDurationType::HasDuration", EditConditionHides))
	float DurationMagnitude = 0.f;
	/** Set the Period of the main Damage (GE_Damage), NOT the debuff damage. */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Main|Duration", meta = (EditCondition = "DurationPolicy == EGameplayEffectDurationType::HasDuration || DurationPolicy == EGameplayEffectDurationType::Infinite", EditConditionHides))
	float Period = 0.f;

	/** Set the Damage value of the main Damage (GE_Damage), NOT the debuff damage. */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Main")
	FScalableFloat Damage = FScalableFloat();

	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Main")
	FGameplayTag DamageType = FGameplayTag::EmptyTag;
	
	/*
	 * If using GE_Damage, we calculate if the Effect could apply a Debuff (small extra damage after the main damage)
	 *	using GAS_ExecCalDamage, if the Debuff is successful, we apply the debuff damage to the target. I.e. if we apply
	 *	fire damage, the target would keep burning for a few seconds after the initial hit.
	 *	That debuff chance or probability gets calculated in GAS_ExecCalcDamage and then applied on GAS_AttributeSet::Debuff
	 */
	/** Damage of the debuff */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Debuff")
	float DebuffDamage = 0.f;
	/** Chance of applying a debuff. 0 - 100 */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Debuff", meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0"))
	float DebuffChance = 0.f;
	/** Duration of the debuff */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Debuff")
	float DebuffDuration = 0.f;
	/** Frequency of the debuff */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Debuff")
	float DebuffFrequency = 0.f;

	/** Impulse applied to the target on death */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Impulse")
	float DeathImpulseMagnitude = 0.f;
	/** Knockback force applied to the target */
	UPROPERTY(BlueprintReadWrite, Category = "Eanna|Damage|Impulse")
	FVector DeathImpulse = FVector::ZeroVector;

	/** Knockback force applied to the target, should be set on the GA */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Impulse")
	float KnockbackForceMagnitude = 0.f;
	/** Chance of applying a knockback. 0 - 100 */
	UPROPERTY(EditAnywhere, Category = "Eanna|Damage|Impulse", meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0"))
	float KnockbackChance = 0.f;
	/** Knockback force applied to the target, should be set on the GA*/
	UPROPERTY(BlueprintReadWrite, Category = "Eanna|Damage|Impulse")
	FVector KnockbackForce = FVector::ZeroVector;

	/** Hit result bone name, should be set on the GA */
	UPROPERTY(BlueprintReadWrite, Category = "Eanna|Damage|HitResult")
	FName HitResultBoneName = NAME_None;

	/** If the hit was a critical hit, should be set on the GA */
	UPROPERTY(BlueprintReadWrite, Category = "Eanna|Damage|HitResult")
	bool bIsCriticalHit = false;
};

/** Custom gameplay effect context, we make the game use our custom GameplayEffectContext on the AbilitySystemGlobals */
USTRUCT(BlueprintType)
struct FGAS_GameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()

	void SetIsCriticalHit(const bool bInIsCriticalHit) { bIsCriticalHit = bInIsCriticalHit; }
	void SetIsBlockedHit(const bool bInIsBlockedHit) { bIsBlockedHit = bInIsBlockedHit; }
	void SetIsSuccessfulDebuff(const bool bInIsSuccessfulDebuff) { bIsSuccessfulDebuff = bInIsSuccessfulDebuff; }
	void SetDebuffDamage(const float InDebuffDamage) { DebuffDamage = InDebuffDamage; }
	void SetDebuffDuration(const float InDebuffDuration) { DebuffDuration = InDebuffDuration; }
	void SetDebuffFrequency(const float InDebuffFrequency) { DebuffFrequency = InDebuffFrequency; }
	void SetDamageType(const TSharedPtr<FGameplayTag>& InDamageType) { DamageType = InDamageType; }
	void SetDeathImpulse(const FVector& InDeathImpulse) { DeathImpulse = InDeathImpulse; }
	void SetKnockbackForce(const FVector& InKnockbackForce) { KnockbackForce = InKnockbackForce; }
	void SetHitResultBoneName(const FName& InHitResultBoneName) { HitResultBoneName = InHitResultBoneName; }

	virtual UScriptStruct* GetScriptStruct() const
	{
		return StaticStruct();
	}

	/** Creates a copy of this context, used to duplicate for later modifications */
	virtual FGAS_GameplayEffectContext* Duplicate() const
	{
		FGAS_GameplayEffectContext* NewContext = new FGAS_GameplayEffectContext();
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

	/** Custom serialization, subclasses must override this */
	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);

protected:
	UPROPERTY()
	bool bIsBlockedHit = false;

	UPROPERTY()
	bool bIsCriticalHit = false;

	UPROPERTY()
	bool bIsSuccessfulDebuff = false;

	UPROPERTY()
	float DebuffDamage = 0.f;

	UPROPERTY()
	float DebuffDuration = 0.f;

	UPROPERTY()
	float DebuffFrequency = 0.f;

	TSharedPtr<FGameplayTag> DamageType;

	UPROPERTY()
	FVector DeathImpulse = FVector::ZeroVector;

	UPROPERTY()
	FVector KnockbackForce = FVector::ZeroVector;

	UPROPERTY()
	FName HitResultBoneName = NAME_None;

public:
	bool IsBlockedHit() const { return bIsBlockedHit; }
	bool IsCriticalHit() const { return bIsCriticalHit; }
	bool IsSuccessfulDebuff() const { return bIsSuccessfulDebuff; }
	float GetDebuffDamage() const { return DebuffDamage; }
	float GetDebuffDuration() const { return DebuffDuration; }
	float GetDebuffFrequency() const { return DebuffFrequency; }
	TSharedPtr<FGameplayTag> GetDamageType() const { return DamageType; }
	FVector GetDeathImpulse() const { return DeathImpulse; }
	FVector GetKnockbackForce() const { return KnockbackForce; }
	FName GetHitResultBoneName() const { return HitResultBoneName; }
};

template <>
struct TStructOpsTypeTraits<FGAS_GameplayEffectContext> : public TStructOpsTypeTraitsBase2<FGAS_GameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};
