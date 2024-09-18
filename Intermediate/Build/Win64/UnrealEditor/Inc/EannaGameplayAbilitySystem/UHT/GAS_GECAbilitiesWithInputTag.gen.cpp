// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GECAbilitiesWithInputTag() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGAS_GameplayAbilityWithInputTagSpecConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig;
class UScriptStruct* FGAS_GameplayAbilityWithInputTagSpecConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_GameplayAbilityWithInputTagSpecConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_GameplayAbilityWithInputTagSpecConfig>()
{
	return FGAS_GameplayAbilityWithInputTagSpecConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options on how to configure the GameplayAbilitySpec to grant to an Actor */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options on how to configure the GameplayAbilitySpec to grant to an Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What ability to grant */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What ability to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelScalableFloat_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What level to grant this ability at */" },
#endif
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What level to grant this ability at" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FGameplayTag to bind this ability to */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayTag to bind this ability to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Ability Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What will remove this ability later */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What will remove this ability later" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelScalableFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_GameplayAbilityWithInputTagSpecConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayAbilityWithInputTagSpecConfig, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_LevelScalableFloat = { "LevelScalableFloat", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayAbilityWithInputTagSpecConfig, LevelScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelScalableFloat_MetaData), NewProp_LevelScalableFloat_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayAbilityWithInputTagSpecConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayAbilityWithInputTagSpecConfig, RemovalPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalPolicy_MetaData), NewProp_RemovalPolicy_MetaData) }; // 824766907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_LevelScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_RemovalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewProp_RemovalPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_GameplayAbilityWithInputTagSpecConfig",
	Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::PropPointers),
	sizeof(FGAS_GameplayAbilityWithInputTagSpecConfig),
	alignof(FGAS_GameplayAbilityWithInputTagSpecConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.InnerSingleton, Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig.InnerSingleton;
}
// End ScriptStruct FGAS_GameplayAbilityWithInputTagSpecConfig

// Begin Class UGAS_GECAbilitiesWithInputTag
void UGAS_GECAbilitiesWithInputTag::StaticRegisterNativesUGAS_GECAbilitiesWithInputTag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GECAbilitiesWithInputTag);
UClass* Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_NoRegister()
{
	return UGAS_GECAbilitiesWithInputTag::StaticClass();
}
struct Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameplayEffectComponent for granting GameplayAbilities with input tags.\n */" },
#endif
		{ "IncludePath", "GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayEffectComponent for granting GameplayAbilities with input tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantAbilityWithInputTagConfigs_MetaData[] = {
		{ "Category", "GrantAbilities" },
		{ "ModuleRelativePath", "Public/GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantAbilityWithInputTagConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantAbilityWithInputTagConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GECAbilitiesWithInputTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::NewProp_GrantAbilityWithInputTagConfigs_Inner = { "GrantAbilityWithInputTagConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig, METADATA_PARAMS(0, nullptr) }; // 3033382329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::NewProp_GrantAbilityWithInputTagConfigs = { "GrantAbilityWithInputTagConfigs", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GECAbilitiesWithInputTag, GrantAbilityWithInputTagConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantAbilityWithInputTagConfigs_MetaData), NewProp_GrantAbilityWithInputTagConfigs_MetaData) }; // 3033382329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::NewProp_GrantAbilityWithInputTagConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::NewProp_GrantAbilityWithInputTagConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::ClassParams = {
	&UGAS_GECAbilitiesWithInputTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag()
{
	if (!Z_Registration_Info_UClass_UGAS_GECAbilitiesWithInputTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GECAbilitiesWithInputTag.OuterSingleton, Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GECAbilitiesWithInputTag.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_GECAbilitiesWithInputTag>()
{
	return UGAS_GECAbilitiesWithInputTag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GECAbilitiesWithInputTag);
UGAS_GECAbilitiesWithInputTag::~UGAS_GECAbilitiesWithInputTag() {}
// End Class UGAS_GECAbilitiesWithInputTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_GameplayAbilityWithInputTagSpecConfig::StaticStruct, Z_Construct_UScriptStruct_FGAS_GameplayAbilityWithInputTagSpecConfig_Statics::NewStructOps, TEXT("GAS_GameplayAbilityWithInputTagSpecConfig"), &Z_Registration_Info_UScriptStruct_GAS_GameplayAbilityWithInputTagSpecConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_GameplayAbilityWithInputTagSpecConfig), 3033382329U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GECAbilitiesWithInputTag, UGAS_GECAbilitiesWithInputTag::StaticClass, TEXT("UGAS_GECAbilitiesWithInputTag"), &Z_Registration_Info_UClass_UGAS_GECAbilitiesWithInputTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GECAbilitiesWithInputTag), 1826409977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_3982293346(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_Components_GAS_GECAbilitiesWithInputTag_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
