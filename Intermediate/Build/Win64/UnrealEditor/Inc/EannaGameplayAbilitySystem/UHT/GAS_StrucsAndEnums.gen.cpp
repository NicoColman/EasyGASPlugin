// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_StrucsAndEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_StrucsAndEnums() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Enum EGAS_OverlapComponentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_OverlapComponentType;
static UEnum* EGAS_OverlapComponentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_OverlapComponentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_OverlapComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("EGAS_OverlapComponentType"));
	}
	return Z_Registration_Info_UEnum_EGAS_OverlapComponentType.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_OverlapComponentType>()
{
	return EGAS_OverlapComponentType_StaticEnum();
}
struct Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxComponent.DisplayName", "BoxComponent" },
		{ "BoxComponent.Name", "EGAS_OverlapComponentType::BoxComponent" },
		{ "ModuleRelativePath", "Public/GAS_StrucsAndEnums.h" },
		{ "SphereComponent.DisplayName", "SphereComponent" },
		{ "SphereComponent.Name", "EGAS_OverlapComponentType::SphereComponent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_OverlapComponentType::BoxComponent", (int64)EGAS_OverlapComponentType::BoxComponent },
		{ "EGAS_OverlapComponentType::SphereComponent", (int64)EGAS_OverlapComponentType::SphereComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	"EGAS_OverlapComponentType",
	"EGAS_OverlapComponentType",
	Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType()
{
	if (!Z_Registration_Info_UEnum_EGAS_OverlapComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_OverlapComponentType.InnerSingleton, Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_OverlapComponentType.InnerSingleton;
}
// End Enum EGAS_OverlapComponentType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_StrucsAndEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGAS_OverlapComponentType_StaticEnum, TEXT("EGAS_OverlapComponentType"), &Z_Registration_Info_UEnum_EGAS_OverlapComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3568146154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_StrucsAndEnums_h_3365344898(TEXT("/Script/EannaGameplayAbilitySystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_StrucsAndEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_StrucsAndEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
