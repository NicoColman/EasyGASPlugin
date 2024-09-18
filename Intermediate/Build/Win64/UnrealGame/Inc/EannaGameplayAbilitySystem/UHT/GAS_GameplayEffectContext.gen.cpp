// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/GAS_GameplayEffectContext.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GameplayEffectContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_DamageEffectParams();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayEffectContext();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGAS_DamageEffectParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams;
class UScriptStruct* FGAS_DamageEffectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_DamageEffectParams, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_DamageEffectParams"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_DamageEffectParams>()
{
	return FGAS_DamageEffectParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom gameplay effect context that adds additional information to the gameplay effect, add or remove any\n * parameters as needed, this is just an example on how to create a custom context with NetSerialize.\n *\n * FGAS_DamageEffectParams is just a useful struct for correctly passing the parameters to the context.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
		{ "ToolTip", "Custom gameplay effect context that adds additional information to the gameplay effect, add or remove any\nparameters as needed, this is just an example on how to create a custom context with NetSerialize.\n\nFGAS_DamageEffectParams is just a useful struct for correctly passing the parameters to the context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffChance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulseMagnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceMagnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackChance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResultBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static void NewProp_bIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathImpulseMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitResultBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_DamageEffectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent = { "SourceAbilitySystemComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, SourceAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAbilitySystemComponent_MetaData), NewProp_SourceAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent = { "TargetAbilitySystemComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, TargetAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAbilitySystemComponent_MetaData), NewProp_TargetAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
void Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
{
	((FGAS_DamageEffectParams*)Obj)->bIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_DamageEffectParams), &Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalHit_MetaData), NewProp_bIsCriticalHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffChance = { "DebuffChance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DebuffChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffChance_MetaData), NewProp_DebuffChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DeathImpulseMagnitude = { "DeathImpulseMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DeathImpulseMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulseMagnitude_MetaData), NewProp_DeathImpulseMagnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulse_MetaData), NewProp_DeathImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackForceMagnitude = { "KnockbackForceMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, KnockbackForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForceMagnitude_MetaData), NewProp_KnockbackForceMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackChance = { "KnockbackChance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, KnockbackChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackChance_MetaData), NewProp_KnockbackChance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_HitResultBoneName = { "HitResultBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_DamageEffectParams, HitResultBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResultBoneName_MetaData), NewProp_HitResultBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_bIsCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DeathImpulseMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_DeathImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackForceMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewProp_HitResultBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_DamageEffectParams",
	Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::PropPointers),
	sizeof(FGAS_DamageEffectParams),
	alignof(FGAS_DamageEffectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_DamageEffectParams()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.InnerSingleton, Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams.InnerSingleton;
}
// End ScriptStruct FGAS_DamageEffectParams

// Begin ScriptStruct FGAS_GameplayEffectContext
static_assert(std::is_polymorphic<FGAS_GameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGAS_GameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext;
class UScriptStruct* FGAS_GameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_GameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_GameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_GameplayEffectContext>()
{
	return FGAS_GameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Custom gameplay effect context, we make the game use our custom GameplayEffectContext on the AbilitySystemGlobals */" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
		{ "ToolTip", "Custom gameplay effect context, we make the game use our custom GameplayEffectContext on the AbilitySystemGlobals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessfulDebuff_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResultBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffectContext.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockedHit;
	static void NewProp_bIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
	static void NewProp_bIsSuccessfulDebuff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfulDebuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitResultBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_GameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit(void* Obj)
{
	((FGAS_GameplayEffectContext*)Obj)->bIsBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsBlockedHit = { "bIsBlockedHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_GameplayEffectContext), &Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlockedHit_MetaData), NewProp_bIsBlockedHit_MetaData) };
void Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
{
	((FGAS_GameplayEffectContext*)Obj)->bIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_GameplayEffectContext), &Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalHit_MetaData), NewProp_bIsCriticalHit_MetaData) };
void Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit(void* Obj)
{
	((FGAS_GameplayEffectContext*)Obj)->bIsSuccessfulDebuff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff = { "bIsSuccessfulDebuff", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_GameplayEffectContext), &Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSuccessfulDebuff_MetaData), NewProp_bIsSuccessfulDebuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, DebuffDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDamage_MetaData), NewProp_DebuffDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffFrequency_MetaData), NewProp_DebuffFrequency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulse_MetaData), NewProp_DeathImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_HitResultBoneName = { "HitResultBoneName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectContext, HitResultBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResultBoneName_MetaData), NewProp_HitResultBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsBlockedHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_bIsSuccessfulDebuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DebuffFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_DeathImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewProp_HitResultBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"GAS_GameplayEffectContext",
	Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::PropPointers),
	sizeof(FGAS_GameplayEffectContext),
	alignof(FGAS_GameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FGAS_GameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_DamageEffectParams::StaticStruct, Z_Construct_UScriptStruct_FGAS_DamageEffectParams_Statics::NewStructOps, TEXT("GAS_DamageEffectParams"), &Z_Registration_Info_UScriptStruct_GAS_DamageEffectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_DamageEffectParams), 2404838535U) },
		{ FGAS_GameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGAS_GameplayEffectContext_Statics::NewStructOps, TEXT("GAS_GameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GAS_GameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_GameplayEffectContext), 130834896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffectContext_h_4085385485(TEXT("/Script/EannaGameplayAbilitySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
