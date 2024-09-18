// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GameplayEffects/ExecCalculations/GAS_ExecCalcDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_ExecCalcDamage() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_ExecCalcDamage();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_ExecCalcDamage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGAS_ExecCalcDamage
void UGAS_ExecCalcDamage::StaticRegisterNativesUGAS_ExecCalcDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_ExecCalcDamage);
UClass* Z_Construct_UClass_UGAS_ExecCalcDamage_NoRegister()
{
	return UGAS_ExecCalcDamage::StaticClass();
}
struct Z_Construct_UClass_UGAS_ExecCalcDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayEffects/ExecCalculations/GAS_ExecCalcDamage.h" },
		{ "ModuleRelativePath", "Public/GameplayEffects/ExecCalculations/GAS_ExecCalcDamage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_ExecCalcDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::ClassParams = {
	&UGAS_ExecCalcDamage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_ExecCalcDamage()
{
	if (!Z_Registration_Info_UClass_UGAS_ExecCalcDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_ExecCalcDamage.OuterSingleton, Z_Construct_UClass_UGAS_ExecCalcDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_ExecCalcDamage.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_ExecCalcDamage>()
{
	return UGAS_ExecCalcDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_ExecCalcDamage);
UGAS_ExecCalcDamage::~UGAS_ExecCalcDamage() {}
// End Class UGAS_ExecCalcDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_ExecCalculations_GAS_ExecCalcDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_ExecCalcDamage, UGAS_ExecCalcDamage::StaticClass, TEXT("UGAS_ExecCalcDamage"), &Z_Registration_Info_UClass_UGAS_ExecCalcDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_ExecCalcDamage), 991133852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_ExecCalculations_GAS_ExecCalcDamage_h_3980283066(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_ExecCalculations_GAS_ExecCalcDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GameplayEffects_ExecCalculations_GAS_ExecCalcDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
