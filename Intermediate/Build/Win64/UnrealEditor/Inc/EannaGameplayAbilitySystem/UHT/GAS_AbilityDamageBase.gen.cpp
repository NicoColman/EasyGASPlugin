// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayAbilities/GAS_AbilityDamageBase.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/GAS_GameplayEffectContext.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AbilityDamageBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilityDamageBase();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilityDamageBase_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilityInputBase();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_DamageEffectParams();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGAS_AbilityDamageBaseValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues;
class UScriptStruct* FGAS_AbilityDamageBaseValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_AbilityDamageBaseValues"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_AbilityDamageBaseValues>()
{
	return FGAS_AbilityDamageBaseValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for easily creating damage effects in a GA, I would recommend to move to DataAsset.\n * Then this struct should be used for setting the values \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for easily creating damage effects in a GA, I would recommend to move to DataAsset.\nThen this struct should be used for setting the values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class of the damage effect to apply, should use GE_Damage */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of the damage effect to apply, should use GE_Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The policy for the duration of the effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The policy for the duration of the effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMagnitude_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The magnitude of the duration */" },
#endif
		{ "EditCondition", "DurationPolicy == EGameplayEffectDurationType::HasDuration" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The magnitude of the duration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The period of the effect */" },
#endif
		{ "EditCondition", "DurationPolicy == EGameplayEffectDurationType::HasDuration || DurationPolicy == EGameplayEffectDurationType::Infinite" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The period of the effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The magnitude of the damage to apply */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The magnitude of the damage to apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayTag representing the type of damage, should be used in the damage effect */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayTag representing the type of damage, should be used in the damage effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The chance to apply a debuff, when damage get's applied, there is a chance to apply a debuff (see UGAS_AttributeSet)*/" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chance to apply a debuff, when damage get's applied, there is a chance to apply a debuff (see UGAS_AttributeSet)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The duration of the debuff */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration of the debuff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The damage of the debuff */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The damage of the debuff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The frequency of the debuff */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The frequency of the debuff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When applying damage to a target, there is a chance to apply a Death Impulse (see UGAS_AttributeSet) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When applying damage to a target, there is a chance to apply a Death Impulse (see UGAS_AttributeSet)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackChance_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When applying damage to a target, there is a chance to apply a Knockback (see UGAS_AttributeSet) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When applying damage to a target, there is a chance to apply a Knockback (see UGAS_AttributeSet)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The magnitude of the knockback */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The magnitude of the knockback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[] = {
		{ "Category", "Eanna|GAS|Damage|Granted Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tags to apply to the target when applying damage */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tags to apply to the target when applying damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathImpulseMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_AbilityDamageBaseValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationPolicy = { "DurationPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DurationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationPolicy_MetaData), NewProp_DurationPolicy_MetaData) }; // 3168279010
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationMagnitude = { "DurationMagnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DurationMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMagnitude_MetaData), NewProp_DurationMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, Damage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffChance_MetaData), NewProp_DebuffChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulseMagnitude_MetaData), NewProp_DeathImpulseMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackChance_MetaData), NewProp_KnockbackChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForceMagnitude_MetaData), NewProp_KnockbackForceMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_AbilityDamageBaseValues, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTags_MetaData), NewProp_GrantedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DurationMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_DeathImpulseMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_KnockbackChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_KnockbackForceMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewProp_GrantedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_AbilityDamageBaseValues",
	Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::PropPointers),
	sizeof(FGAS_AbilityDamageBaseValues),
	alignof(FGAS_AbilityDamageBaseValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.InnerSingleton, Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues.InnerSingleton;
}
// End ScriptStruct FGAS_AbilityDamageBaseValues

// Begin Class UGAS_AbilityDamageBase Function MakeDamageEffectParamsFromClassDefaults
struct Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics
{
	struct GAS_AbilityDamageBase_eventMakeDamageEffectParamsFromClassDefaults_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eanna|GameplayAbility|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function that sets the WorldContext, Source and Target ASC and AbilityLevel, and then we apply it with\n\x09 *\x09GAS_BlueprintFunctionLibrary::ApplyDamage, see Blueprint Example.\n\x09 */" },
#endif
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that sets the WorldContext, Source and Target ASC and AbilityLevel, and then we apply it with\n     GAS_BlueprintFunctionLibrary::ApplyDamage, see Blueprint Example." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilityDamageBase_eventMakeDamageEffectParamsFromClassDefaults_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilityDamageBase, nullptr, "MakeDamageEffectParamsFromClassDefaults", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::GAS_AbilityDamageBase_eventMakeDamageEffectParamsFromClassDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::GAS_AbilityDamageBase_eventMakeDamageEffectParamsFromClassDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilityDamageBase::execMakeDamageEffectParamsFromClassDefaults)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeDamageEffectParamsFromClassDefaults(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class UGAS_AbilityDamageBase Function MakeDamageEffectParamsFromClassDefaults

// Begin Class UGAS_AbilityDamageBase
void UGAS_AbilityDamageBase::StaticRegisterNativesUGAS_AbilityDamageBase()
{
	UClass* Class = UGAS_AbilityDamageBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeDamageEffectParamsFromClassDefaults", &UGAS_AbilityDamageBase::execMakeDamageEffectParamsFromClassDefaults },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AbilityDamageBase);
UClass* Z_Construct_UClass_UGAS_AbilityDamageBase_NoRegister()
{
	return UGAS_AbilityDamageBase::StaticClass();
}
struct Z_Construct_UClass_UGAS_AbilityDamageBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for any ability that applies damage to a target using the custom Damage ExecuteCalculation.\n */" },
#endif
		{ "IncludePath", "GameplayAbilities/GAS_AbilityDamageBase.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for any ability that applies damage to a target using the custom Damage ExecuteCalculation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageValues_MetaData[] = {
		{ "Category", "Eanna|Damage" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_AbilityDamageBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_AbilityDamageBase_MakeDamageEffectParamsFromClassDefaults, "MakeDamageEffectParamsFromClassDefaults" }, // 3868991093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AbilityDamageBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::NewProp_DamageValues = { "DamageValues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AbilityDamageBase, DamageValues), Z_Construct_UScriptStruct_FGAS_DamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageValues_MetaData), NewProp_DamageValues_MetaData) }; // 1244515390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::NewProp_DamageValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGAS_AbilityInputBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::ClassParams = {
	&UGAS_AbilityDamageBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AbilityDamageBase()
{
	if (!Z_Registration_Info_UClass_UGAS_AbilityDamageBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AbilityDamageBase.OuterSingleton, Z_Construct_UClass_UGAS_AbilityDamageBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AbilityDamageBase.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_AbilityDamageBase>()
{
	return UGAS_AbilityDamageBase::StaticClass();
}
UGAS_AbilityDamageBase::UGAS_AbilityDamageBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AbilityDamageBase);
UGAS_AbilityDamageBase::~UGAS_AbilityDamageBase() {}
// End Class UGAS_AbilityDamageBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_AbilityDamageBaseValues::StaticStruct, Z_Construct_UScriptStruct_FGAS_AbilityDamageBaseValues_Statics::NewStructOps, TEXT("GAS_AbilityDamageBaseValues"), &Z_Registration_Info_UScriptStruct_GAS_AbilityDamageBaseValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_AbilityDamageBaseValues), 3972190759U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AbilityDamageBase, UGAS_AbilityDamageBase::StaticClass, TEXT("UGAS_AbilityDamageBase"), &Z_Registration_Info_UClass_UGAS_AbilityDamageBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AbilityDamageBase), 100872393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_2744017053(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_AbilityDamageBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
