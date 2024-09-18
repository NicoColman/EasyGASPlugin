// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_AttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AttributeSet() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AttributeSet();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AttributeSet_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_EffectProperties();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGAS_EffectProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_EffectProperties;
class UScriptStruct* FGAS_EffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_EffectProperties, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_EffectProperties.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_EffectProperties>()
{
	return FGAS_EffectProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct to hold all the necessary effect properties so we can easily access them later\n */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct to hold all the necessary effect properties so we can easily access them later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_EffectProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_EffectProperties, TargetController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewProp_TargetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_EffectProperties",
	Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::PropPointers),
	sizeof(FGAS_EffectProperties),
	alignof(FGAS_EffectProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_EffectProperties()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_EffectProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_EffectProperties.InnerSingleton;
}
// End ScriptStruct FGAS_EffectProperties

// Begin Class UGAS_AttributeSet Function OnRep_BlockChance
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics
{
	struct GAS_AttributeSet_eventOnRep_BlockChance_Parms
	{
		FGameplayAttributeData OldBlockChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldBlockChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance = { "OldBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_BlockChance_Parms, OldBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldBlockChance_MetaData), NewProp_OldBlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::GAS_AttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::GAS_AttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_BlockChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBlockChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockChance(Z_Param_Out_OldBlockChance);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_BlockChance

// Begin Class UGAS_AttributeSet Function OnRep_CriticalHitChance
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics
{
	struct GAS_AttributeSet_eventOnRep_CriticalHitChance_Parms
	{
		FGameplayAttributeData OldCriticalHitChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance = { "OldCriticalHitChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_CriticalHitChance_Parms, OldCriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCriticalHitChance_MetaData), NewProp_OldCriticalHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_CriticalHitChance", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::GAS_AttributeSet_eventOnRep_CriticalHitChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::GAS_AttributeSet_eventOnRep_CriticalHitChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_CriticalHitChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitChance(Z_Param_Out_OldCriticalHitChance);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_CriticalHitChance

// Begin Class UGAS_AttributeSet Function OnRep_CriticalHitDamage
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics
{
	struct GAS_AttributeSet_eventOnRep_CriticalHitDamage_Parms
	{
		FGameplayAttributeData OldCriticalHitDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage = { "OldCriticalHitDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_CriticalHitDamage_Parms, OldCriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCriticalHitDamage_MetaData), NewProp_OldCriticalHitDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_CriticalHitDamage", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::GAS_AttributeSet_eventOnRep_CriticalHitDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::GAS_AttributeSet_eventOnRep_CriticalHitDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_CriticalHitDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitDamage(Z_Param_Out_OldCriticalHitDamage);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_CriticalHitDamage

// Begin Class UGAS_AttributeSet Function OnRep_CriticalHitResistance
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics
{
	struct GAS_AttributeSet_eventOnRep_CriticalHitResistance_Parms
	{
		FGameplayAttributeData OldCriticalHitResistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance = { "OldCriticalHitResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_CriticalHitResistance_Parms, OldCriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCriticalHitResistance_MetaData), NewProp_OldCriticalHitResistance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_CriticalHitResistance", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::GAS_AttributeSet_eventOnRep_CriticalHitResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::GAS_AttributeSet_eventOnRep_CriticalHitResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_CriticalHitResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitResistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitResistance(Z_Param_Out_OldCriticalHitResistance);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_CriticalHitResistance

// Begin Class UGAS_AttributeSet Function OnRep_FireResistance
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics
{
	struct GAS_AttributeSet_eventOnRep_FireResistance_Parms
	{
		FGameplayAttributeData OldFireResistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFireResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFireResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance = { "OldFireResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_FireResistance_Parms, OldFireResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFireResistance_MetaData), NewProp_OldFireResistance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_FireResistance", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::GAS_AttributeSet_eventOnRep_FireResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::GAS_AttributeSet_eventOnRep_FireResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_FireResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFireResistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FireResistance(Z_Param_Out_OldFireResistance);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_FireResistance

// Begin Class UGAS_AttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics
{
	struct GAS_AttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::GAS_AttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::GAS_AttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_Health

// Begin Class UGAS_AttributeSet Function OnRep_HealthRegeneration
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics
{
	struct GAS_AttributeSet_eventOnRep_HealthRegeneration_Parms
	{
		FGameplayAttributeData OldHealthRegeneration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegeneration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration = { "OldHealthRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_HealthRegeneration_Parms, OldHealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegeneration_MetaData), NewProp_OldHealthRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_HealthRegeneration", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::GAS_AttributeSet_eventOnRep_HealthRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::GAS_AttributeSet_eventOnRep_HealthRegeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_HealthRegeneration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegeneration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegeneration(Z_Param_Out_OldHealthRegeneration);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_HealthRegeneration

// Begin Class UGAS_AttributeSet Function OnRep_JumpHeight
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics
{
	struct GAS_AttributeSet_eventOnRep_JumpHeight_Parms
	{
		FGameplayAttributeData OldJumpHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldJumpHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldJumpHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::NewProp_OldJumpHeight = { "OldJumpHeight", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_JumpHeight_Parms, OldJumpHeight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldJumpHeight_MetaData), NewProp_OldJumpHeight_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::NewProp_OldJumpHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_JumpHeight", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::GAS_AttributeSet_eventOnRep_JumpHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::GAS_AttributeSet_eventOnRep_JumpHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_JumpHeight)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldJumpHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_JumpHeight(Z_Param_Out_OldJumpHeight);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_JumpHeight

// Begin Class UGAS_AttributeSet Function OnRep_LightningResistance
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics
{
	struct GAS_AttributeSet_eventOnRep_LightningResistance_Parms
	{
		FGameplayAttributeData OldLightningResistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldLightningResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldLightningResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance = { "OldLightningResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_LightningResistance_Parms, OldLightningResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldLightningResistance_MetaData), NewProp_OldLightningResistance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_LightningResistance", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::GAS_AttributeSet_eventOnRep_LightningResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::GAS_AttributeSet_eventOnRep_LightningResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_LightningResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLightningResistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LightningResistance(Z_Param_Out_OldLightningResistance);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_LightningResistance

// Begin Class UGAS_AttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics
{
	struct GAS_AttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09OnRep Functions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnRep Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::GAS_AttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::GAS_AttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_MaxHealth

// Begin Class UGAS_AttributeSet Function OnRep_Speed
struct Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics
{
	struct GAS_AttributeSet_eventOnRep_Speed_Parms
	{
		FGameplayAttributeData OldSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpeed_MetaData), NewProp_OldSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AttributeSet, nullptr, "OnRep_Speed", nullptr, nullptr, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::GAS_AttributeSet_eventOnRep_Speed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::GAS_AttributeSet_eventOnRep_Speed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AttributeSet::execOnRep_Speed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
	P_NATIVE_END;
}
// End Class UGAS_AttributeSet Function OnRep_Speed

// Begin Class UGAS_AttributeSet
void UGAS_AttributeSet::StaticRegisterNativesUGAS_AttributeSet()
{
	UClass* Class = UGAS_AttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BlockChance", &UGAS_AttributeSet::execOnRep_BlockChance },
		{ "OnRep_CriticalHitChance", &UGAS_AttributeSet::execOnRep_CriticalHitChance },
		{ "OnRep_CriticalHitDamage", &UGAS_AttributeSet::execOnRep_CriticalHitDamage },
		{ "OnRep_CriticalHitResistance", &UGAS_AttributeSet::execOnRep_CriticalHitResistance },
		{ "OnRep_FireResistance", &UGAS_AttributeSet::execOnRep_FireResistance },
		{ "OnRep_Health", &UGAS_AttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegeneration", &UGAS_AttributeSet::execOnRep_HealthRegeneration },
		{ "OnRep_JumpHeight", &UGAS_AttributeSet::execOnRep_JumpHeight },
		{ "OnRep_LightningResistance", &UGAS_AttributeSet::execOnRep_LightningResistance },
		{ "OnRep_MaxHealth", &UGAS_AttributeSet::execOnRep_MaxHealth },
		{ "OnRep_Speed", &UGAS_AttributeSet::execOnRep_Speed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AttributeSet);
UClass* Z_Construct_UClass_UGAS_AttributeSet_NoRegister()
{
	return UGAS_AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UGAS_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS_AttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Primary Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegeneration_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitDamage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitResistance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Resistance Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Resistance Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightningResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Meta Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Meta Attributes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegeneration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightningResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 698630369
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitChance, "OnRep_CriticalHitChance" }, // 3394980235
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitDamage, "OnRep_CriticalHitDamage" }, // 3027184768
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_CriticalHitResistance, "OnRep_CriticalHitResistance" }, // 3290826405
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_FireResistance, "OnRep_FireResistance" }, // 4291205772
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Health, "OnRep_Health" }, // 858559658
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_HealthRegeneration, "OnRep_HealthRegeneration" }, // 683610259
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_JumpHeight, "OnRep_JumpHeight" }, // 2491813582
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_LightningResistance, "OnRep_LightningResistance" }, // 1505099600
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3040179815
		{ &Z_Construct_UFunction_UGAS_AttributeSet_OnRep_Speed, "OnRep_Speed" }, // 3803587589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthRegeneration = { "HealthRegeneration", "OnRep_HealthRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, HealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegeneration_MetaData), NewProp_HealthRegeneration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_JumpHeight = { "JumpHeight", "OnRep_JumpHeight", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, JumpHeight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitChance = { "CriticalHitChance", "OnRep_CriticalHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, CriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitChance_MetaData), NewProp_CriticalHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitDamage = { "CriticalHitDamage", "OnRep_CriticalHitDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, CriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitDamage_MetaData), NewProp_CriticalHitDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitResistance = { "CriticalHitResistance", "OnRep_CriticalHitResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, CriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitResistance_MetaData), NewProp_CriticalHitResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_FireResistance = { "FireResistance", "OnRep_FireResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, FireResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireResistance_MetaData), NewProp_FireResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_LightningResistance = { "LightningResistance", "OnRep_LightningResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, LightningResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightningResistance_MetaData), NewProp_LightningResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AttributeSet, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamage_MetaData), NewProp_IncomingDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthRegeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_CriticalHitResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_FireResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_LightningResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_IncomingDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AttributeSet_Statics::ClassParams = {
	&UGAS_AttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AttributeSet()
{
	if (!Z_Registration_Info_UClass_UGAS_AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AttributeSet.OuterSingleton, Z_Construct_UClass_UGAS_AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AttributeSet.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_AttributeSet>()
{
	return UGAS_AttributeSet::StaticClass();
}
void UGAS_AttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_HealthRegeneration(TEXT("HealthRegeneration"));
	static const FName Name_Speed(TEXT("Speed"));
	static const FName Name_JumpHeight(TEXT("JumpHeight"));
	static const FName Name_BlockChance(TEXT("BlockChance"));
	static const FName Name_CriticalHitChance(TEXT("CriticalHitChance"));
	static const FName Name_CriticalHitDamage(TEXT("CriticalHitDamage"));
	static const FName Name_CriticalHitResistance(TEXT("CriticalHitResistance"));
	static const FName Name_FireResistance(TEXT("FireResistance"));
	static const FName Name_LightningResistance(TEXT("LightningResistance"));
	const bool bIsValid = true
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_HealthRegeneration == ClassReps[(int32)ENetFields_Private::HealthRegeneration].Property->GetFName()
		&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName()
		&& Name_JumpHeight == ClassReps[(int32)ENetFields_Private::JumpHeight].Property->GetFName()
		&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
		&& Name_CriticalHitChance == ClassReps[(int32)ENetFields_Private::CriticalHitChance].Property->GetFName()
		&& Name_CriticalHitDamage == ClassReps[(int32)ENetFields_Private::CriticalHitDamage].Property->GetFName()
		&& Name_CriticalHitResistance == ClassReps[(int32)ENetFields_Private::CriticalHitResistance].Property->GetFName()
		&& Name_FireResistance == ClassReps[(int32)ENetFields_Private::FireResistance].Property->GetFName()
		&& Name_LightningResistance == ClassReps[(int32)ENetFields_Private::LightningResistance].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGAS_AttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AttributeSet);
UGAS_AttributeSet::~UGAS_AttributeSet() {}
// End Class UGAS_AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_EffectProperties::StaticStruct, Z_Construct_UScriptStruct_FGAS_EffectProperties_Statics::NewStructOps, TEXT("GAS_EffectProperties"), &Z_Registration_Info_UScriptStruct_GAS_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_EffectProperties), 255317544U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AttributeSet, UGAS_AttributeSet::StaticClass, TEXT("UGAS_AttributeSet"), &Z_Registration_Info_UClass_UGAS_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AttributeSet), 3217478057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_4022543902(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AttributeSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
