// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/GAS_OverlapModificationsConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_DAPhysicsVolume() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAPhysicsVolume();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAPhysicsVolume_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGAS_DAPhysicsVolume
void UGAS_DAPhysicsVolume::StaticRegisterNativesUGAS_DAPhysicsVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_DAPhysicsVolume);
UClass* Z_Construct_UClass_UGAS_DAPhysicsVolume_NoRegister()
{
	return UGAS_DAPhysicsVolume::StaticClass();
}
struct Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectActorTag_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Tag for identifying the effect actor */" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
		{ "ToolTip", "Tag for identifying the effect actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActorOnOverlapBegin_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Destroy the actor when an actor overlaps the volume */" },
		{ "EditCondition", "!bDestroyActorOnOverlapEnd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
		{ "ToolTip", "Destroy the actor when an actor overlaps the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActorOnOverlapEnd_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Destroy the actor when an actor stops overlapping the volume */" },
		{ "EditCondition", "!bDestroyActorOnOverlapBegin" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
		{ "ToolTip", "Destroy the actor when an actor stops overlapping the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FluidFriction_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWaterVolume_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapModifications_MetaData[] = {
		{ "Category", "Effect Base|OverlapModifications" },
		{ "ModuleRelativePath", "Public/EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectActorTag;
	static void NewProp_bDestroyActorOnOverlapBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActorOnOverlapBegin;
	static void NewProp_bDestroyActorOnOverlapEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActorOnOverlapEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FluidFriction;
	static void NewProp_bIsWaterVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWaterVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapModifications;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_DAPhysicsVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_EffectActorTag = { "EffectActorTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAPhysicsVolume, EffectActorTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectActorTag_MetaData), NewProp_EffectActorTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapBegin_SetBit(void* Obj)
{
	((UGAS_DAPhysicsVolume*)Obj)->bDestroyActorOnOverlapBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapBegin = { "bDestroyActorOnOverlapBegin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAPhysicsVolume), &Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyActorOnOverlapBegin_MetaData), NewProp_bDestroyActorOnOverlapBegin_MetaData) };
void Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapEnd_SetBit(void* Obj)
{
	((UGAS_DAPhysicsVolume*)Obj)->bDestroyActorOnOverlapEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapEnd = { "bDestroyActorOnOverlapEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAPhysicsVolume), &Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyActorOnOverlapEnd_MetaData), NewProp_bDestroyActorOnOverlapEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_FluidFriction = { "FluidFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAPhysicsVolume, FluidFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FluidFriction_MetaData), NewProp_FluidFriction_MetaData) };
void Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bIsWaterVolume_SetBit(void* Obj)
{
	((UGAS_DAPhysicsVolume*)Obj)->bIsWaterVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bIsWaterVolume = { "bIsWaterVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAPhysicsVolume), &Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bIsWaterVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWaterVolume_MetaData), NewProp_bIsWaterVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_OverlapModifications = { "OverlapModifications", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAPhysicsVolume, OverlapModifications), Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapModifications_MetaData), NewProp_OverlapModifications_MetaData) }; // 3846683847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_EffectActorTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bDestroyActorOnOverlapEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_FluidFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_bIsWaterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::NewProp_OverlapModifications,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::ClassParams = {
	&UGAS_DAPhysicsVolume::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_DAPhysicsVolume()
{
	if (!Z_Registration_Info_UClass_UGAS_DAPhysicsVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_DAPhysicsVolume.OuterSingleton, Z_Construct_UClass_UGAS_DAPhysicsVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_DAPhysicsVolume.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_DAPhysicsVolume>()
{
	return UGAS_DAPhysicsVolume::StaticClass();
}
UGAS_DAPhysicsVolume::UGAS_DAPhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_DAPhysicsVolume);
UGAS_DAPhysicsVolume::~UGAS_DAPhysicsVolume() {}
// End Class UGAS_DAPhysicsVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_DAPhysicsVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_DAPhysicsVolume, UGAS_DAPhysicsVolume::StaticClass, TEXT("UGAS_DAPhysicsVolume"), &Z_Registration_Info_UClass_UGAS_DAPhysicsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_DAPhysicsVolume), 1143068531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_DAPhysicsVolume_h_870327915(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_DAPhysicsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_PhysicsVolumes_GAS_DAPhysicsVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
