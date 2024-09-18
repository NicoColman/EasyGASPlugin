// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct EANNAGAMEPLAYTAGS_API FTags_GAS
{
public:
	/** This function should be called to initialize the native gameplay tags for the game.
	 * Its recommended to call this function in AssetManager->StartInitialLoading(); */
	static void InitializeNativeGameplayTags();

	struct FAttributeTags
	{
		FGameplayTag Attribute_Primary_MaxHealth;
		FGameplayTag Attribute_Primary_Health;
		FGameplayTag Attribute_Primary_HealthRegeneration;
		FGameplayTag Attribute_Primary_Speed;
		FGameplayTag Attribute_Primary_JumpHeight;
		FGameplayTag Attribute_Secondary_BlockChance;
		FGameplayTag Attribute_Secondary_CriticalHitChance;
		FGameplayTag Attribute_Secondary_CriticalHitDamage;
		FGameplayTag Attribute_Secondary_CriticalHitResistance;
		FGameplayTag Attribute_Resistance_Fire;
		FGameplayTag Attribute_Resistance_Lightning;
	};

	struct FGameplayEffectTags
	{
		/** Damage are not considered as a status effect, but we will add it here for now. */
		FGameplayTag GameplayEffect_Damage_Fire;
		FGameplayTag GameplayEffect_Damage_Lightning;
		
		FGameplayTag GameplayEffect_DOT_Fire;
		FGameplayTag GameplayEffect_DOT_Lightning;

		TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
	};

	struct FEffectStatusTags
	{
		FGameplayTag EffectStatus_DOT_Fire;
		FGameplayTag EffectStatus_DOT_Lightning;

		// FGameplayTag EffectStatus_Buff_HealOverTime;

		// FGameplayTag EffectStatus_CC_Stun;

		// ..

		TMap<FGameplayTag, FGameplayTag> DamageTypeToEffectStatus;
	};
	
	struct FSetByCallerTags
	{
		FGameplayTag SetByCaller_Damage;
		FGameplayTag SetByCaller_Probability;
		FGameplayTag SetByCaller_Duration;
		FGameplayTag SetByCaller_Frequency;
	};
	
	struct FGameplayAbilityTags
	{
		FGameplayTag GameplayAbility_Sprint;
		FGameplayTag GameplayAbility_Jump;
	};

	struct FCooldownTags
	{
		
	};

	struct FGameplayCueTags
	{
		
	};

	struct FEventTags
	{
		
	};

	struct FTargetDataTags
	{
		FGameplayTag TargetData_OverlapBegin;
		FGameplayTag TargetData_OverlapEnd;

		FGameplayTag TargetData_Success;
	};

private:
	static FTags_GAS GasTags;
	static FAttributeTags AttributeTags;
	static FGameplayEffectTags GameplayEffectTags;
	static FEffectStatusTags EffectStatusTags;
	static FSetByCallerTags SetByCallerTags;
	static FGameplayAbilityTags GameplayAbilityTags;
	static FCooldownTags CooldownTags;
	static FGameplayCueTags GameplayCueTags;
	static FEventTags EventTags;
	static FTargetDataTags TargetDataTags;

public:
	static const FTags_GAS& Get() { return GasTags; }
	static const FAttributeTags& GetAttributeTags() { return AttributeTags; }
	static const FGameplayEffectTags& GetGameplayEffectTags() { return GameplayEffectTags; }
	static const FEffectStatusTags& GetEffectStatusTags() { return EffectStatusTags; }
	static const FSetByCallerTags& GetSetByCallerTags() { return SetByCallerTags; }
	static const FGameplayAbilityTags& GetGameplayAbilityTags() { return GameplayAbilityTags; }
	static const FCooldownTags& GetCooldownTags() { return CooldownTags; }
	static const FGameplayCueTags& GetGameplayCueTags() { return GameplayCueTags; }
	static const FEventTags& GetEventTags() { return EventTags; }
	static const FTargetDataTags& GetTargetDataTags() { return TargetDataTags; }
};

