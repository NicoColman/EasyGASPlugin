// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayAbilities/GAS_GameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GameplayAbility() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GameplayAbility();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGAS_GameplayAbility
void UGAS_GameplayAbility::StaticRegisterNativesUGAS_GameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GameplayAbility);
UClass* Z_Construct_UClass_UGAS_GameplayAbility_NoRegister()
{
	return UGAS_GameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UGAS_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom GameplayAbility class that adds extra base functionality\n */" },
		{ "IncludePath", "GameplayAbilities/GAS_GameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_GameplayAbility.h" },
		{ "ToolTip", "Custom GameplayAbility class that adds extra base functionality" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspendOwnedTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/* Tags that will be suspended when this ability is activated, and when this ability ends, the tags will be restored. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_GameplayAbility.h" },
		{ "ToolTip", "Tags that will be suspended when this ability is activated, and when this ability ends, the tags will be restored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspendOwnedParentTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/* Parent tags that will be suspended together with child tags when this ability is activated, and when this ability ends, the tags will be restored. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GAS_GameplayAbility.h" },
		{ "ToolTip", "Parent tags that will be suspended together with child tags when this ability is activated, and when this ability ends, the tags will be restored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuspendOwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuspendOwnedParentTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_SuspendOwnedTags = { "SuspendOwnedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GameplayAbility, SuspendOwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspendOwnedTags_MetaData), NewProp_SuspendOwnedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_SuspendOwnedParentTags = { "SuspendOwnedParentTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GameplayAbility, SuspendOwnedParentTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspendOwnedParentTags_MetaData), NewProp_SuspendOwnedParentTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_SuspendOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_SuspendOwnedParentTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_GameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::ClassParams = {
	&UGAS_GameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGAS_GameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GameplayAbility.OuterSingleton, Z_Construct_UClass_UGAS_GameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GameplayAbility.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_GameplayAbility>()
{
	return UGAS_GameplayAbility::StaticClass();
}
UGAS_GameplayAbility::UGAS_GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GameplayAbility);
UGAS_GameplayAbility::~UGAS_GameplayAbility() {}
// End Class UGAS_GameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_GameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GameplayAbility, UGAS_GameplayAbility::StaticClass, TEXT("UGAS_GameplayAbility"), &Z_Registration_Info_UClass_UGAS_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GameplayAbility), 3769069205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_GameplayAbility_h_2824697219(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayAbilities_GAS_GameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
