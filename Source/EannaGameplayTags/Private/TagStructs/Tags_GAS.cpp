// Eanna Entertainment


#include "TagStructs/Tags_GAS.h"

#include "GameplayTagsManager.h"

FTags_GAS FTags_GAS::GasTags;
FTags_GAS::FAttributeTags FTags_GAS::AttributeTags;
FTags_GAS::FGameplayEffectTags FTags_GAS::GameplayEffectTags;
FTags_GAS::FEffectStatusTags FTags_GAS::EffectStatusTags;
FTags_GAS::FSetByCallerTags FTags_GAS::SetByCallerTags;
FTags_GAS::FGameplayAbilityTags FTags_GAS::GameplayAbilityTags;
FTags_GAS::FCooldownTags FTags_GAS::CooldownTags;
FTags_GAS::FGameplayCueTags FTags_GAS::GameplayCueTags;
FTags_GAS::FEventTags FTags_GAS::EventTags;
FTags_GAS::FTargetDataTags FTags_GAS::TargetDataTags;

void FTags_GAS::InitializeNativeGameplayTags()
{
	UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

	/**
	 * Attribute Tags
	 */
	
	AttributeTags.Attribute_Primary_MaxHealth = TagsManager.AddNativeGameplayTag(
	FName("Attribute.Primary.MaxHealth"),
	FString("Attribute Primary MaxHealth")
	);
	AttributeTags.Attribute_Primary_Health = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Primary.Health"),
		FString("Attribute Primary Health")
	);
	AttributeTags.Attribute_Primary_HealthRegeneration = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Primary.HealthRegeneration"),
		FString("Attribute Primary HealthRegeneration")
	);
	AttributeTags.Attribute_Primary_Speed = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Primary.Speed"),
		FString("Attribute Primary Speed")
	);
	AttributeTags.Attribute_Primary_JumpHeight = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Primary.JumpHeight"),
		FString("Attribute Primary JumpHeight")
	);
	AttributeTags.Attribute_Secondary_BlockChance = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Secondary.BlockChance"),
		FString("Attribute Secondary BlockChance")
	);
	AttributeTags.Attribute_Secondary_CriticalHitChance = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Secondary.CriticalHitChance"),
		FString("Attribute Secondary CriticalHitChance")
	);
	AttributeTags.Attribute_Secondary_CriticalHitDamage = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Secondary.CriticalHitDamage"),
		FString("Attribute Secondary CriticalHitDamage")
	);
	AttributeTags.Attribute_Secondary_CriticalHitResistance = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Secondary.CriticalHitResistance"),
		FString("Attribute Secondary CriticalHitResistance")
	);
	AttributeTags.Attribute_Resistance_Fire = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Resistance.FireResistance"),
		FString("Attribute Resistance FireResistance")
	);
	AttributeTags.Attribute_Resistance_Lightning = TagsManager.AddNativeGameplayTag(
		FName("Attribute.Resistance.LightningResistance"),
		FString("Attribute Resistance LightningResistance")
	);

	/**
	 * Gameplay Effect Tags
	 */
	GameplayEffectTags.GameplayEffect_Damage_Fire = TagsManager.AddNativeGameplayTag(
		FName("GameplayEffect.Damage.Fire"),
		FString("GameplayEffect Damage Fire")
	);
	GameplayEffectTags.GameplayEffect_Damage_Lightning = TagsManager.AddNativeGameplayTag(
		FName("GameplayEffect.Damage.Lightning"),
		FString("GameplayEffect Damage Lightning")
	);
	GameplayEffectTags.GameplayEffect_DOT_Fire = TagsManager.AddNativeGameplayTag(
		FName("GameplayEffect.DOT.Fire"),
		FString("GameplayEffect DOT Fire")
	);
	GameplayEffectTags.GameplayEffect_DOT_Lightning = TagsManager.AddNativeGameplayTag(
		FName("GameplayEffect.DOT.Lightning"),
		FString("GameplayEffect DOT Lightning")
	);

	GameplayEffectTags.DamageTypesToResistances.Add(GameplayEffectTags.GameplayEffect_Damage_Fire, AttributeTags.Attribute_Resistance_Fire);
	GameplayEffectTags.DamageTypesToResistances.Add(GameplayEffectTags.GameplayEffect_Damage_Lightning, AttributeTags.Attribute_Resistance_Lightning);
	
	
	/**
	 * Effect Status Tags
	 */
	EffectStatusTags.EffectStatus_DOT_Fire = TagsManager.AddNativeGameplayTag(
		FName("EffectStatus.DOT.Fire"),
		FString("EffectStatus DOT Fire")
	);
	EffectStatusTags.EffectStatus_DOT_Lightning = TagsManager.AddNativeGameplayTag(
		FName("EffectStatus.DOT.Lightning"),
		FString("EffectStatus DOT Lightning")
	);
	
	EffectStatusTags.DamageTypeToEffectStatus.Add(GameplayEffectTags.GameplayEffect_Damage_Fire, AttributeTags.Attribute_Resistance_Fire);
	EffectStatusTags.DamageTypeToEffectStatus.Add(GameplayEffectTags.GameplayEffect_Damage_Lightning,  AttributeTags.Attribute_Resistance_Lightning);

	
	/*
	 * SetByCaller Tags
	 */
	SetByCallerTags.SetByCaller_Damage = TagsManager.AddNativeGameplayTag(
		FName("SetByCaller.Damage"),
		FString("SetByCaller Damage")
	);
	SetByCallerTags.SetByCaller_Probability = TagsManager.AddNativeGameplayTag(
		FName("SetByCaller.Probability"),
		FString("SetByCaller DamageType")
	);
	SetByCallerTags.SetByCaller_Duration = TagsManager.AddNativeGameplayTag(
		FName("SetByCaller.Duration"),
		FString("SetByCaller Duration")
	);
	SetByCallerTags.SetByCaller_Frequency = TagsManager.AddNativeGameplayTag(
		FName("SetByCaller.Frequency"),
		FString("SetByCaller Frequency")
	);

	/**
	 * Gameplay Ability Tags
	 */
	GameplayAbilityTags.GameplayAbility_Sprint = TagsManager.AddNativeGameplayTag(
		FName("GameplayAbility.Sprint"),
		FString("GameplayAbility Sprint")
	);
	GameplayAbilityTags.GameplayAbility_Jump = TagsManager.AddNativeGameplayTag(
		FName("GameplayAbility.Jump"),
		FString("GameplayAbility Jump")
	);
	

	/**
	 * Cooldown Tags
	 */


	/**
	 * Gameplay Cue Tags
	 */


	/**
	 * Event Tags
	 */


	/**
	 * Target Data Tags
	 */

	TargetDataTags.TargetData_OverlapBegin = TagsManager.AddNativeGameplayTag(
		FName("TargetData.OverlapBegin"),
		FString("TargetData OverlapBegin")
	);
	TargetDataTags.TargetData_OverlapEnd = TagsManager.AddNativeGameplayTag(
		FName("TargetData.OverlapEnd"),
		FString("TargetData OverlapEnd")
	);
	TargetDataTags.TargetData_Success = TagsManager.AddNativeGameplayTag(
		FName("TargetData.Success"),
		FString("TargetData Success")
	);
}
