// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_BlueprintFunctionLibrary.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/GAS_GameplayEffectContext.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_BlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicGEConfig();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_DamageEffectParams();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FDynamicGEConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicGEConfig;
class UScriptStruct* FDynamicGEConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicGEConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicGEConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicGEConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("DynamicGEConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicGEConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FDynamicGEConfig>()
{
	return FDynamicGEConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicGEConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Struct for configuring a Dynamic GameplayEffect\n */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for configuring a Dynamic GameplayEffect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMagnitude_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiersInfo_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackingType_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToGrant_MetaData[] = {
		{ "Category", "FDynamicGEConfig" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMagnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiersInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiersInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StackingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StackingType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicGEConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectTag_MetaData), NewProp_EffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationPolicy = { "DurationPolicy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, DurationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationPolicy_MetaData), NewProp_DurationPolicy_MetaData) }; // 3168279010
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationMagnitude = { "DurationMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, DurationMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMagnitude_MetaData), NewProp_DurationMagnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_ModifiersInfo_Inner = { "ModifiersInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayModifierInfo, METADATA_PARAMS(0, nullptr) }; // 681961912
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_ModifiersInfo = { "ModifiersInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, ModifiersInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiersInfo_MetaData), NewProp_ModifiersInfo_MetaData) }; // 681961912
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackingType = { "StackingType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, StackingType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackingType_MetaData), NewProp_StackingType_MetaData) }; // 1949300194
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, StackLimitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackLimitCount_MetaData), NewProp_StackLimitCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_TagsToGrant = { "TagsToGrant", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicGEConfig, TagsToGrant), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToGrant_MetaData), NewProp_TagsToGrant_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_EffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_DurationMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_ModifiersInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_ModifiersInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_StackLimitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewProp_TagsToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"DynamicGEConfig",
	Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::PropPointers),
	sizeof(FDynamicGEConfig),
	alignof(FDynamicGEConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicGEConfig()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicGEConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicGEConfig.InnerSingleton, Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicGEConfig.InnerSingleton;
}
// End ScriptStruct FDynamicGEConfig

// Begin Class UGAS_BlueprintFunctionLibrary Function ApplyDamageEffect
struct Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics
{
	struct GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms
	{
		FGAS_DamageEffectParams DamageEffectParams;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GrantedTags" },
		{ "Category", "GAS|DamageLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a damage effect to an actor using GE_Damage. GAS_ExecCaclDamage lets us apply a debuff, the debuff should\n\x09 *\x09treat like small damage for a duration after applying the main Damage, i.e. if we apply fire damage, the\n\x09 *\x09target would keep burning for a few seconds after the initial hit. The Duration Policy should be set to\n\x09 *\x09only modify the main damage, not the debuff.\n\x09 *\n\x09 *\x09@param DamageEffectParams: Struct containing all the necessary parameters for the damage effect, if in\n\x09 *\x09\x09GameplayAbility use \"MakeDamageEffectParamsFromClassDefaults\" to easily create the struct.\n\x09 *\x09@param GrantedTags: Tags to grant to the actor when applying the effect, only for DurationPolicy != Instant\n\x09 */" },
#endif
		{ "CPP_Default_GrantedTags", "()" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a damage effect to an actor using GE_Damage. GAS_ExecCaclDamage lets us apply a debuff, the debuff should\n     treat like small damage for a duration after applying the main Damage, i.e. if we apply fire damage, the\n     target would keep burning for a few seconds after the initial hit. The Duration Policy should be set to\n     only modify the main damage, not the debuff.\n\n     @param DamageEffectParams: Struct containing all the necessary parameters for the damage effect, if in\n             GameplayAbility use \"MakeDamageEffectParamsFromClassDefaults\" to easily create the struct.\n     @param GrantedTags: Tags to grant to the actor when applying the effect, only for DurationPolicy != Instant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams = { "DamageEffectParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms, DamageEffectParams), Z_Construct_UScriptStruct_FGAS_DamageEffectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectParams_MetaData), NewProp_DamageEffectParams_MetaData) }; // 1244515390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTags_MetaData), NewProp_GrantedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_DamageEffectParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_GrantedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_BlueprintFunctionLibrary, nullptr, "ApplyDamageEffect", nullptr, nullptr, Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::GAS_BlueprintFunctionLibrary_eventApplyDamageEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_BlueprintFunctionLibrary::execApplyDamageEffect)
{
	P_GET_STRUCT_REF(FGAS_DamageEffectParams,Z_Param_Out_DamageEffectParams);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=UGAS_BlueprintFunctionLibrary::ApplyDamageEffect(Z_Param_Out_DamageEffectParams,Z_Param_Out_GrantedTags);
	P_NATIVE_END;
}
// End Class UGAS_BlueprintFunctionLibrary Function ApplyDamageEffect

// Begin Class UGAS_BlueprintFunctionLibrary
void UGAS_BlueprintFunctionLibrary::StaticRegisterNativesUGAS_BlueprintFunctionLibrary()
{
	UClass* Class = UGAS_BlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageEffect", &UGAS_BlueprintFunctionLibrary::execApplyDamageEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_BlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_NoRegister()
{
	return UGAS_BlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_BlueprintFunctionLibrary_ApplyDamageEffect, "ApplyDamageEffect" }, // 1494879891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_BlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::ClassParams = {
	&UGAS_BlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGAS_BlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_BlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_BlueprintFunctionLibrary.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_BlueprintFunctionLibrary>()
{
	return UGAS_BlueprintFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_BlueprintFunctionLibrary);
UGAS_BlueprintFunctionLibrary::~UGAS_BlueprintFunctionLibrary() {}
// End Class UGAS_BlueprintFunctionLibrary

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetDamageType
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetDamageType_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDamageType_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDamageType_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetDamageType", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetDamageType)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetDamageType(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetDamageType

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetDeathImpulse
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetDeathImpulse_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDeathImpulse_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDeathImpulse_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetDeathImpulse", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDeathImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDeathImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetDeathImpulse)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetDeathImpulse(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetDeathImpulse

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffDamage
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDamage_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDamage_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetDebuffDamage", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffDamage)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDamage(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffDamage

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffDuration
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDuration_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDuration_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetDebuffDuration", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffDuration)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDuration(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffDuration

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffFrequency
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffFrequency_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffFrequency_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetDebuffFrequency", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetDebuffFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffFrequency)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetDebuffFrequency(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetDebuffFrequency

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetHitResultBoneName
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetHitResultBoneName_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetHitResultBoneName_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetHitResultBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetHitResultBoneName", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetHitResultBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetHitResultBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetHitResultBoneName)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetHitResultBoneName(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetHitResultBoneName

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function GetKnockbackForce
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventGetKnockbackForce_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetKnockbackForce_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventGetKnockbackForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "GetKnockbackForce", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetKnockbackForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::GAS_GEContextBlueprintFunctionLibrary_eventGetKnockbackForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execGetKnockbackForce)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::GetKnockbackForce(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function GetKnockbackForce

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function IsBlockedHit
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "IsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsBlockedHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execIsBlockedHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::IsBlockedHit(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function IsBlockedHit

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function IsCriticalHit
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execIsCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::IsCriticalHit(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function IsCriticalHit

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function IsSuccessfulDebuff
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "IsSuccessfulDebuff", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::GAS_GEContextBlueprintFunctionLibrary_eventIsSuccessfulDebuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execIsSuccessfulDebuff)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGAS_GEContextBlueprintFunctionLibrary::IsSuccessfulDebuff(Z_Param_Out_EffectContext);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function IsSuccessfulDebuff

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetBlockedHit
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool bBlockedHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If exposed to BP add \"UPARAM(ref) FGameplayEffectContextHandle& EffectContext\" instead of \"FGameplayEffectContextHandle& EffectContext\"\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If exposed to BP add \"UPARAM(ref) FGameplayEffectContextHandle& EffectContext\" instead of \"FGameplayEffectContextHandle& EffectContext\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_bBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockedHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_bBlockedHit_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms*)Obj)->bBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_bBlockedHit = { "bBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_bBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::NewProp_bBlockedHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetBlockedHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetBlockedHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_UBOOL(Z_Param_bBlockedHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetBlockedHit(Z_Param_Out_EffectContext,Z_Param_bBlockedHit);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetBlockedHit

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetCriticalHit
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool bCriticalHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_bCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCriticalHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_bCriticalHit_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms*)Obj)->bCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_bCriticalHit = { "bCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_bCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::NewProp_bCriticalHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_UBOOL(Z_Param_bCriticalHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetCriticalHit(Z_Param_Out_EffectContext,Z_Param_bCriticalHit);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetCriticalHit

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetDamageType
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetDamageType_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FGameplayTag DamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDamageType_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDamageType_Parms, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetDamageType", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetDamageType)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DamageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetDamageType(Z_Param_Out_EffectContext,Z_Param_Out_DamageType);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetDamageType

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetDeathImpulse
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetDeathImpulse_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FVector DeathImpulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeathImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDeathImpulse_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::NewProp_DeathImpulse = { "DeathImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDeathImpulse_Parms, DeathImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathImpulse_MetaData), NewProp_DeathImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::NewProp_DeathImpulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetDeathImpulse", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDeathImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDeathImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetDeathImpulse)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DeathImpulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetDeathImpulse(Z_Param_Out_EffectContext,Z_Param_Out_DeathImpulse);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetDeathImpulse

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffDamage
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDamage_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float DebuffDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDamage_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::NewProp_DebuffDamage = { "DebuffDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDamage_Parms, DebuffDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::NewProp_DebuffDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetDebuffDamage", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffDamage)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDamage(Z_Param_Out_EffectContext,Z_Param_DebuffDamage);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffDamage

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffDuration
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDuration_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float DebuffDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDuration_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDuration_Parms, DebuffDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::NewProp_DebuffDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetDebuffDuration", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffDuration)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDuration(Z_Param_Out_EffectContext,Z_Param_DebuffDuration);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffDuration

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffFrequency
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffFrequency_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		float DebuffFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffFrequency_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffFrequency_Parms, DebuffFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::NewProp_DebuffFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetDebuffFrequency", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetDebuffFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffFrequency)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetDebuffFrequency(Z_Param_Out_EffectContext,Z_Param_DebuffFrequency);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetDebuffFrequency

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetHitResultBoneName
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetHitResultBoneName_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FName HitResultBoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResultBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitResultBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetHitResultBoneName_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::NewProp_HitResultBoneName = { "HitResultBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetHitResultBoneName_Parms, HitResultBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResultBoneName_MetaData), NewProp_HitResultBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::NewProp_HitResultBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetHitResultBoneName", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetHitResultBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetHitResultBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetHitResultBoneName)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_HitResultBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetHitResultBoneName(Z_Param_Out_EffectContext,Z_Param_Out_HitResultBoneName);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetHitResultBoneName

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetKnockbackForce
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetKnockbackForce_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		FVector KnockbackForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetKnockbackForce_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetKnockbackForce_Parms, KnockbackForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::NewProp_KnockbackForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetKnockbackForce", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetKnockbackForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetKnockbackForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetKnockbackForce)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_KnockbackForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetKnockbackForce(Z_Param_Out_EffectContext,Z_Param_Out_KnockbackForce);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetKnockbackForce

// Begin Class UGAS_GEContextBlueprintFunctionLibrary Function SetSuccessfulDebuff
struct Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics
{
	struct GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms
	{
		FGameplayEffectContextHandle EffectContext;
		bool bSuccessfulDebuff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|GameplayEffectContext" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static void NewProp_bSuccessfulDebuff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessfulDebuff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_bSuccessfulDebuff_SetBit(void* Obj)
{
	((GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms*)Obj)->bSuccessfulDebuff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_bSuccessfulDebuff = { "bSuccessfulDebuff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms), &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_bSuccessfulDebuff_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::NewProp_bSuccessfulDebuff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, nullptr, "SetSuccessfulDebuff", nullptr, nullptr, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::GAS_GEContextBlueprintFunctionLibrary_eventSetSuccessfulDebuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GEContextBlueprintFunctionLibrary::execSetSuccessfulDebuff)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
	P_GET_UBOOL(Z_Param_bSuccessfulDebuff);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGAS_GEContextBlueprintFunctionLibrary::SetSuccessfulDebuff(Z_Param_Out_EffectContext,Z_Param_bSuccessfulDebuff);
	P_NATIVE_END;
}
// End Class UGAS_GEContextBlueprintFunctionLibrary Function SetSuccessfulDebuff

// Begin Class UGAS_GEContextBlueprintFunctionLibrary
void UGAS_GEContextBlueprintFunctionLibrary::StaticRegisterNativesUGAS_GEContextBlueprintFunctionLibrary()
{
	UClass* Class = UGAS_GEContextBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDamageType", &UGAS_GEContextBlueprintFunctionLibrary::execGetDamageType },
		{ "GetDeathImpulse", &UGAS_GEContextBlueprintFunctionLibrary::execGetDeathImpulse },
		{ "GetDebuffDamage", &UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffDamage },
		{ "GetDebuffDuration", &UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffDuration },
		{ "GetDebuffFrequency", &UGAS_GEContextBlueprintFunctionLibrary::execGetDebuffFrequency },
		{ "GetHitResultBoneName", &UGAS_GEContextBlueprintFunctionLibrary::execGetHitResultBoneName },
		{ "GetKnockbackForce", &UGAS_GEContextBlueprintFunctionLibrary::execGetKnockbackForce },
		{ "IsBlockedHit", &UGAS_GEContextBlueprintFunctionLibrary::execIsBlockedHit },
		{ "IsCriticalHit", &UGAS_GEContextBlueprintFunctionLibrary::execIsCriticalHit },
		{ "IsSuccessfulDebuff", &UGAS_GEContextBlueprintFunctionLibrary::execIsSuccessfulDebuff },
		{ "SetBlockedHit", &UGAS_GEContextBlueprintFunctionLibrary::execSetBlockedHit },
		{ "SetCriticalHit", &UGAS_GEContextBlueprintFunctionLibrary::execSetCriticalHit },
		{ "SetDamageType", &UGAS_GEContextBlueprintFunctionLibrary::execSetDamageType },
		{ "SetDeathImpulse", &UGAS_GEContextBlueprintFunctionLibrary::execSetDeathImpulse },
		{ "SetDebuffDamage", &UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffDamage },
		{ "SetDebuffDuration", &UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffDuration },
		{ "SetDebuffFrequency", &UGAS_GEContextBlueprintFunctionLibrary::execSetDebuffFrequency },
		{ "SetHitResultBoneName", &UGAS_GEContextBlueprintFunctionLibrary::execSetHitResultBoneName },
		{ "SetKnockbackForce", &UGAS_GEContextBlueprintFunctionLibrary::execSetKnockbackForce },
		{ "SetSuccessfulDebuff", &UGAS_GEContextBlueprintFunctionLibrary::execSetSuccessfulDebuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GEContextBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_NoRegister()
{
	return UGAS_GEContextBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09""Blueprint Function Library for Setting and Getting Values from GAS_GameplayEffectContext\n */" },
#endif
		{ "IncludePath", "GAS_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for Setting and Getting Values from GAS_GameplayEffectContext" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDamageType, "GetDamageType" }, // 1884209995
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDeathImpulse, "GetDeathImpulse" }, // 2553355001
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDamage, "GetDebuffDamage" }, // 125063507
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffDuration, "GetDebuffDuration" }, // 1986089423
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetDebuffFrequency, "GetDebuffFrequency" }, // 909151767
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetHitResultBoneName, "GetHitResultBoneName" }, // 1875879806
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_GetKnockbackForce, "GetKnockbackForce" }, // 222782295
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsBlockedHit, "IsBlockedHit" }, // 1034532820
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsCriticalHit, "IsCriticalHit" }, // 511922870
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_IsSuccessfulDebuff, "IsSuccessfulDebuff" }, // 2777728046
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetBlockedHit, "SetBlockedHit" }, // 791536548
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetCriticalHit, "SetCriticalHit" }, // 1269734117
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDamageType, "SetDamageType" }, // 2567171925
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDeathImpulse, "SetDeathImpulse" }, // 60693817
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDamage, "SetDebuffDamage" }, // 710398
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffDuration, "SetDebuffDuration" }, // 1197180745
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetDebuffFrequency, "SetDebuffFrequency" }, // 2550048533
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetHitResultBoneName, "SetHitResultBoneName" }, // 2955872936
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetKnockbackForce, "SetKnockbackForce" }, // 3274903268
		{ &Z_Construct_UFunction_UGAS_GEContextBlueprintFunctionLibrary_SetSuccessfulDebuff, "SetSuccessfulDebuff" }, // 1080403520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GEContextBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::ClassParams = {
	&UGAS_GEContextBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGAS_GEContextBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GEContextBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GEContextBlueprintFunctionLibrary.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_GEContextBlueprintFunctionLibrary>()
{
	return UGAS_GEContextBlueprintFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GEContextBlueprintFunctionLibrary);
UGAS_GEContextBlueprintFunctionLibrary::~UGAS_GEContextBlueprintFunctionLibrary() {}
// End Class UGAS_GEContextBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicGEConfig::StaticStruct, Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewStructOps, TEXT("DynamicGEConfig"), &Z_Registration_Info_UScriptStruct_DynamicGEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicGEConfig), 3382353993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_BlueprintFunctionLibrary, UGAS_BlueprintFunctionLibrary::StaticClass, TEXT("UGAS_BlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGAS_BlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_BlueprintFunctionLibrary), 348927952U) },
		{ Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, UGAS_GEContextBlueprintFunctionLibrary::StaticClass, TEXT("UGAS_GEContextBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGAS_GEContextBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GEContextBlueprintFunctionLibrary), 221011555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_3452067057(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
