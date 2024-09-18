// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_BlueprintFunctionLibrary.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_BlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicGEConfig();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
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
		{ "Comment", "/**\n *\x09Struct for configuring a Dynamic GameplayEffect\n */" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
		{ "ToolTip", "Struct for configuring a Dynamic GameplayEffect" },
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

// Begin Class UGAS_BlueprintFunctionLibrary
void UGAS_BlueprintFunctionLibrary::StaticRegisterNativesUGAS_BlueprintFunctionLibrary()
{
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
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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

// Begin Class UGAS_GEContextBlueprintFunctionLibrary
void UGAS_GEContextBlueprintFunctionLibrary::StaticRegisterNativesUGAS_GEContextBlueprintFunctionLibrary()
{
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
		{ "Comment", "/**\n *\x09""Blueprint Function Library for Setting and Getting Values from GAS_GameplayEffectContext\n */" },
		{ "IncludePath", "GAS_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GAS_BlueprintFunctionLibrary.h" },
		{ "ToolTip", "Blueprint Function Library for Setting and Getting Values from GAS_GameplayEffectContext" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicGEConfig::StaticStruct, Z_Construct_UScriptStruct_FDynamicGEConfig_Statics::NewStructOps, TEXT("DynamicGEConfig"), &Z_Registration_Info_UScriptStruct_DynamicGEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicGEConfig), 3294241685U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_BlueprintFunctionLibrary, UGAS_BlueprintFunctionLibrary::StaticClass, TEXT("UGAS_BlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGAS_BlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_BlueprintFunctionLibrary), 4171947685U) },
		{ Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary, UGAS_GEContextBlueprintFunctionLibrary::StaticClass, TEXT("UGAS_GEContextBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGAS_GEContextBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GEContextBlueprintFunctionLibrary), 619388315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_3715319448(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
