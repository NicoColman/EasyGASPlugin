// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_PhysicsVolumeWater() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_PhysicsVolume();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_PhysicsVolumeWater();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_PhysicsVolumeWater_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGAS_WaterVolumeConditional
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional;
class UScriptStruct* FGAS_WaterVolumeConditional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_WaterVolumeConditional"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_WaterVolumeConditional>()
{
	return FGAS_WaterVolumeConditional::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_WaterVolumeConditional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_WaterVolumeConditional",
	nullptr,
	0,
	sizeof(FGAS_WaterVolumeConditional),
	alignof(FGAS_WaterVolumeConditional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.InnerSingleton, Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional.InnerSingleton;
}
// End ScriptStruct FGAS_WaterVolumeConditional

// Begin Class AGAS_PhysicsVolumeWater
void AGAS_PhysicsVolumeWater::StaticRegisterNativesAGAS_PhysicsVolumeWater()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_PhysicsVolumeWater);
UClass* Z_Construct_UClass_AGAS_PhysicsVolumeWater_NoRegister()
{
	return AGAS_PhysicsVolumeWater::StaticClass();
}
struct Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Example class for water physics volume using OnConditional Policies. This class checks if the player's head or spine\n *\x09is under the water volume so we can apply or remove conditional.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Example class for water physics volume using OnConditional Policies. This class checks if the player's head or spine\n    is under the water volume so we can apply or remove conditional." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalMap_MetaData[] = {
		{ "Category", "GAS|WaterVolume" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionalMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ConditionalMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_PhysicsVolumeWater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap_ValueProp = { "ConditionalMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional, METADATA_PARAMS(0, nullptr) }; // 2342087327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap_Key_KeyProp = { "ConditionalMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap = { "ConditionalMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_PhysicsVolumeWater, ConditionalMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalMap_MetaData), NewProp_ConditionalMap_MetaData) }; // 2342087327
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::NewProp_ConditionalMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGAS_PhysicsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::ClassParams = {
	&AGAS_PhysicsVolumeWater::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_PhysicsVolumeWater()
{
	if (!Z_Registration_Info_UClass_AGAS_PhysicsVolumeWater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_PhysicsVolumeWater.OuterSingleton, Z_Construct_UClass_AGAS_PhysicsVolumeWater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_PhysicsVolumeWater.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<AGAS_PhysicsVolumeWater>()
{
	return AGAS_PhysicsVolumeWater::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_PhysicsVolumeWater);
AGAS_PhysicsVolumeWater::~AGAS_PhysicsVolumeWater() {}
// End Class AGAS_PhysicsVolumeWater

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_WaterVolumeConditional::StaticStruct, Z_Construct_UScriptStruct_FGAS_WaterVolumeConditional_Statics::NewStructOps, TEXT("GAS_WaterVolumeConditional"), &Z_Registration_Info_UScriptStruct_GAS_WaterVolumeConditional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_WaterVolumeConditional), 2342087327U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_PhysicsVolumeWater, AGAS_PhysicsVolumeWater::StaticClass, TEXT("AGAS_PhysicsVolumeWater"), &Z_Registration_Info_UClass_AGAS_PhysicsVolumeWater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_PhysicsVolumeWater), 4226836868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_2024771828(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolumeWater_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
