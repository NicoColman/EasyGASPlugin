// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayTags/Public/Tags_BlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTags_BlueprintFunctionLibrary() {}

// Begin Cross Module References
EANNAGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UTags_BlueprintFunctionLibrary();
EANNAGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UTags_BlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EannaGameplayTags();
// End Cross Module References

// Begin Class UTags_BlueprintFunctionLibrary
void UTags_BlueprintFunctionLibrary::StaticRegisterNativesUTags_BlueprintFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTags_BlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UTags_BlueprintFunctionLibrary_NoRegister()
{
	return UTags_BlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tags_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Tags_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTags_BlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::ClassParams = {
	&UTags_BlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTags_BlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UTags_BlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTags_BlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UTags_BlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTags_BlueprintFunctionLibrary.OuterSingleton;
}
template<> EANNAGAMEPLAYTAGS_API UClass* StaticClass<UTags_BlueprintFunctionLibrary>()
{
	return UTags_BlueprintFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTags_BlueprintFunctionLibrary);
UTags_BlueprintFunctionLibrary::~UTags_BlueprintFunctionLibrary() {}
// End Class UTags_BlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayTags_Public_Tags_BlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTags_BlueprintFunctionLibrary, UTags_BlueprintFunctionLibrary::StaticClass, TEXT("UTags_BlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UTags_BlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTags_BlueprintFunctionLibrary), 3724609415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayTags_Public_Tags_BlueprintFunctionLibrary_h_3494183879(TEXT("/Script/EannaGameplayTags"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayTags_Public_Tags_BlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayTags_Public_Tags_BlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
