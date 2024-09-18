// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_AbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AbilitySystemGlobals() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilitySystemGlobals();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilitySystemGlobals_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGAS_AbilitySystemGlobals
void UGAS_AbilitySystemGlobals::StaticRegisterNativesUGAS_AbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AbilitySystemGlobals);
UClass* Z_Construct_UClass_UGAS_AbilitySystemGlobals_NoRegister()
{
	return UGAS_AbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * IMPORTANT: Initialize the AbilitySystemGlobals, recommended to do it in AssetManager->StartInitialLoading():\n *\x09\x09UAbilitySystemGlobals::Get().InitGlobalData();\n */" },
#endif
		{ "IncludePath", "GAS_AbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMPORTANT: Initialize the AbilitySystemGlobals, recommended to do it in AssetManager->StartInitialLoading():\n            UAbilitySystemGlobals::Get().InitGlobalData();" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::ClassParams = {
	&UGAS_AbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UGAS_AbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UGAS_AbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AbilitySystemGlobals.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_AbilitySystemGlobals>()
{
	return UGAS_AbilitySystemGlobals::StaticClass();
}
UGAS_AbilitySystemGlobals::UGAS_AbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AbilitySystemGlobals);
UGAS_AbilitySystemGlobals::~UGAS_AbilitySystemGlobals() {}
// End Class UGAS_AbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AbilitySystemGlobals, UGAS_AbilitySystemGlobals::StaticClass, TEXT("UGAS_AbilitySystemGlobals"), &Z_Registration_Info_UClass_UGAS_AbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AbilitySystemGlobals), 2113187244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemGlobals_h_4045335300(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
