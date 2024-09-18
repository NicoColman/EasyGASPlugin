// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/GAS_GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GameplayEffect() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GameplayEffect();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_GameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGAS_GameplayEffect
void UGAS_GameplayEffect::StaticRegisterNativesUGAS_GameplayEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GameplayEffect);
UClass* Z_Construct_UClass_UGAS_GameplayEffect_NoRegister()
{
	return UGAS_GameplayEffect::StaticClass();
}
struct Z_Construct_UClass_UGAS_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom GameplayEffect class for adding custom GameplayEffectComponents.\n */" },
		{ "IncludePath", "GameplayEffects/GAS_GameplayEffect.h" },
		{ "ModuleRelativePath", "Public/GameplayEffects/GAS_GameplayEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Custom GameplayEffect class for adding custom GameplayEffectComponents." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_GameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GameplayEffect_Statics::ClassParams = {
	&UGAS_GameplayEffect::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GameplayEffect()
{
	if (!Z_Registration_Info_UClass_UGAS_GameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GameplayEffect.OuterSingleton, Z_Construct_UClass_UGAS_GameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GameplayEffect.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_GameplayEffect>()
{
	return UGAS_GameplayEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GameplayEffect);
UGAS_GameplayEffect::~UGAS_GameplayEffect() {}
// End Class UGAS_GameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GameplayEffect, UGAS_GameplayEffect::StaticClass, TEXT("UGAS_GameplayEffect"), &Z_Registration_Info_UClass_UGAS_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GameplayEffect), 833183551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffect_h_199958518(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_GAS_GameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
