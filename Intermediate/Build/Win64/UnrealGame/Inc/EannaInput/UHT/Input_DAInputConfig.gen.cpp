// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaInput/Public/Input_DAInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput_DAInputConfig() {}

// Begin Cross Module References
EANNAINPUT_API UClass* Z_Construct_UClass_UInput_DAInputConfig();
EANNAINPUT_API UClass* Z_Construct_UClass_UInput_DAInputConfig_NoRegister();
EANNAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInput_ActionBase();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EannaInput();
// End Cross Module References

// Begin ScriptStruct FInput_ActionBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Input_ActionBase;
class UScriptStruct* FInput_ActionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Input_ActionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Input_ActionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInput_ActionBase, (UObject*)Z_Construct_UPackage__Script_EannaInput(), TEXT("Input_ActionBase"));
	}
	return Z_Registration_Info_UScriptStruct_Input_ActionBase.OuterSingleton;
}
template<> EANNAINPUT_API UScriptStruct* StaticStruct<FInput_ActionBase>()
{
	return FInput_ActionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInput_ActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input_DAInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "EannaInput|DataAsset" },
		{ "ModuleRelativePath", "Public/Input_DAInputConfig.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "EannaInput|DataAsset" },
		{ "ModuleRelativePath", "Public/Input_DAInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInput_ActionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInput_ActionBase_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInput_ActionBase, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInput_ActionBase_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInput_ActionBase, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInput_ActionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_ActionBase_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_ActionBase_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_ActionBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInput_ActionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaInput,
	nullptr,
	&NewStructOps,
	"Input_ActionBase",
	Z_Construct_UScriptStruct_FInput_ActionBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_ActionBase_Statics::PropPointers),
	sizeof(FInput_ActionBase),
	alignof(FInput_ActionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_ActionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInput_ActionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInput_ActionBase()
{
	if (!Z_Registration_Info_UScriptStruct_Input_ActionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Input_ActionBase.InnerSingleton, Z_Construct_UScriptStruct_FInput_ActionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Input_ActionBase.InnerSingleton;
}
// End ScriptStruct FInput_ActionBase

// Begin Class UInput_DAInputConfig
void UInput_DAInputConfig::StaticRegisterNativesUInput_DAInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInput_DAInputConfig);
UClass* Z_Construct_UClass_UInput_DAInputConfig_NoRegister()
{
	return UInput_DAInputConfig::StaticClass();
}
struct Z_Construct_UClass_UInput_DAInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Input_DAInputConfig.h" },
		{ "ModuleRelativePath", "Public/Input_DAInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "Category", "EannaInput|DataAsset" },
		{ "ModuleRelativePath", "Public/Input_DAInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput_DAInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInput_DAInputConfig_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInput_ActionBase, METADATA_PARAMS(0, nullptr) }; // 691816374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInput_DAInputConfig_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInput_DAInputConfig, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) }; // 691816374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInput_DAInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInput_DAInputConfig_Statics::NewProp_InputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInput_DAInputConfig_Statics::NewProp_InputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_DAInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInput_DAInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_DAInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInput_DAInputConfig_Statics::ClassParams = {
	&UInput_DAInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInput_DAInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInput_DAInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_DAInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInput_DAInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInput_DAInputConfig()
{
	if (!Z_Registration_Info_UClass_UInput_DAInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInput_DAInputConfig.OuterSingleton, Z_Construct_UClass_UInput_DAInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInput_DAInputConfig.OuterSingleton;
}
template<> EANNAINPUT_API UClass* StaticClass<UInput_DAInputConfig>()
{
	return UInput_DAInputConfig::StaticClass();
}
UInput_DAInputConfig::UInput_DAInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInput_DAInputConfig);
UInput_DAInputConfig::~UInput_DAInputConfig() {}
// End Class UInput_DAInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInput_ActionBase::StaticStruct, Z_Construct_UScriptStruct_FInput_ActionBase_Statics::NewStructOps, TEXT("Input_ActionBase"), &Z_Registration_Info_UScriptStruct_Input_ActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInput_ActionBase), 691816374U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInput_DAInputConfig, UInput_DAInputConfig::StaticClass, TEXT("UInput_DAInputConfig"), &Z_Registration_Info_UClass_UInput_DAInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInput_DAInputConfig), 1875692244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_1335139089(TEXT("/Script/EannaInput"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_DAInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
