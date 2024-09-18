// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_PhysicsVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_PhysicsVolume();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_PhysicsVolume_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAPhysicsVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class AGAS_PhysicsVolume
void AGAS_PhysicsVolume::StaticRegisterNativesAGAS_PhysicsVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_PhysicsVolume);
UClass* Z_Construct_UClass_AGAS_PhysicsVolume_NoRegister()
{
	return AGAS_PhysicsVolume::StaticClass();
}
struct Z_Construct_UClass_AGAS_PhysicsVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Highly configurable Physics Volume that can apply Gameplay Effects and Gameplay Tags to actors that overlap with it.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Highly configurable Physics Volume that can apply Gameplay Effects and Gameplay Tags to actors that overlap with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolumeDataAsset_MetaData[] = {
		{ "Category", "GASPhysicsVolumeBase" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "GASPhysicsVolumeBase" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsVolumeDataAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_PhysicsVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_PhysicsVolumeDataAsset = { "PhysicsVolumeDataAsset", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_PhysicsVolume, PhysicsVolumeDataAsset), Z_Construct_UClass_UGAS_DAPhysicsVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVolumeDataAsset_MetaData), NewProp_PhysicsVolumeDataAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_PhysicsVolume, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_PhysicsVolume, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingActors_MetaData), NewProp_OverlappingActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_PhysicsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_PhysicsVolumeDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_OverlappingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PhysicsVolume_Statics::NewProp_OverlappingActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_PhysicsVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_PhysicsVolume_Statics::ClassParams = {
	&AGAS_PhysicsVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGAS_PhysicsVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PhysicsVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_PhysicsVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_PhysicsVolume()
{
	if (!Z_Registration_Info_UClass_AGAS_PhysicsVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_PhysicsVolume.OuterSingleton, Z_Construct_UClass_AGAS_PhysicsVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_PhysicsVolume.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<AGAS_PhysicsVolume>()
{
	return AGAS_PhysicsVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_PhysicsVolume);
AGAS_PhysicsVolume::~AGAS_PhysicsVolume() {}
// End Class AGAS_PhysicsVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_PhysicsVolume, AGAS_PhysicsVolume::StaticClass, TEXT("AGAS_PhysicsVolume"), &Z_Registration_Info_UClass_AGAS_PhysicsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_PhysicsVolume), 2172559350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolume_h_1489041521(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_PhysicsVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
