// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaDemo/Public/Demo_AssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo_AssetManager() {}

// Begin Cross Module References
EANNADEMO_API UClass* Z_Construct_UClass_UDemo_AssetManager();
EANNADEMO_API UClass* Z_Construct_UClass_UDemo_AssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_EannaDemo();
// End Cross Module References

// Begin Class UDemo_AssetManager
void UDemo_AssetManager::StaticRegisterNativesUDemo_AssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemo_AssetManager);
UClass* Z_Construct_UClass_UDemo_AssetManager_NoRegister()
{
	return UDemo_AssetManager::StaticClass();
}
struct Z_Construct_UClass_UDemo_AssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Asset Manager example, this should be replaced with your own Asset Manager class, remember to update the DefaultEngine.ini [AssetManager] section.\n * We use the Asset Manager to load the NativeGameplayTags and the AbilitySystemGlobals.\n *\n * Added in DefaultEngine.ini:\n *\x09\x09[/Script/Engine.Engine]\n *\x09\x09+ActiveGameNameRedirects=(OldGameName=\"TP_ThirdPersonBP\",NewGameName=\"/Script/EannaMMAS\")\n *\x09\x09+ActiveGameNameRedirects=(OldGameName=\"/Script/TP_ThirdPersonBP\",NewGameName=\"/Script/EannaMMAS\")\n *\x09\x09""AssetManagerClassName=/Script/EannaDemo.Demo_AssetManager\n *\n * // Here we set the AssetManagerClassName to our custom AssetManager class: YourModuleName.YourAssetManagerClassName\n *\n *\x09""For using our custom AbilitySystemGlobals class we need to add the following to the DefaultGame.ini:\n *\x09\x09[/Script/GameplayAbilities.AbilitySystemGlobals]\n *\x09\x09+AbilitySystemGlobalsClassName=\"/Script/EannaGameplayAbilitySystem.GAS_AbilitySystemGlobals\"\n */" },
#endif
		{ "IncludePath", "Demo_AssetManager.h" },
		{ "ModuleRelativePath", "Public/Demo_AssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset Manager example, this should be replaced with your own Asset Manager class, remember to update the DefaultEngine.ini [AssetManager] section.\nWe use the Asset Manager to load the NativeGameplayTags and the AbilitySystemGlobals.\n\nAdded in DefaultEngine.ini:\n            [/Script/Engine.Engine]\n            +ActiveGameNameRedirects=(OldGameName=\"TP_ThirdPersonBP\",NewGameName=\"/Script/EannaMMAS\")\n            +ActiveGameNameRedirects=(OldGameName=\"/Script/TP_ThirdPersonBP\",NewGameName=\"/Script/EannaMMAS\")\n            AssetManagerClassName=/Script/EannaDemo.Demo_AssetManager\n\n// Here we set the AssetManagerClassName to our custom AssetManager class: YourModuleName.YourAssetManagerClassName\n\n    For using our custom AbilitySystemGlobals class we need to add the following to the DefaultGame.ini:\n            [/Script/GameplayAbilities.AbilitySystemGlobals]\n            +AbilitySystemGlobalsClassName=\"/Script/EannaGameplayAbilitySystem.GAS_AbilitySystemGlobals\"" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemo_AssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDemo_AssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemo_AssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemo_AssetManager_Statics::ClassParams = {
	&UDemo_AssetManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDemo_AssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDemo_AssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDemo_AssetManager()
{
	if (!Z_Registration_Info_UClass_UDemo_AssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemo_AssetManager.OuterSingleton, Z_Construct_UClass_UDemo_AssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDemo_AssetManager.OuterSingleton;
}
template<> EANNADEMO_API UClass* StaticClass<UDemo_AssetManager>()
{
	return UDemo_AssetManager::StaticClass();
}
UDemo_AssetManager::UDemo_AssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDemo_AssetManager);
UDemo_AssetManager::~UDemo_AssetManager() {}
// End Class UDemo_AssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_Demo_AssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDemo_AssetManager, UDemo_AssetManager::StaticClass, TEXT("UDemo_AssetManager"), &Z_Registration_Info_UClass_UDemo_AssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemo_AssetManager), 1141742164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_Demo_AssetManager_h_1116183342(TEXT("/Script/EannaDemo"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_Demo_AssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_Demo_AssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
