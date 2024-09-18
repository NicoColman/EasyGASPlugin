// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/GAS_OverlapModificationsConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_DAOverlapActor() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAOverlapActor();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAOverlapActor_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType();
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
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
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
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

// Begin Enum EGAS_ObjectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_ObjectType;
static UEnum* EGAS_ObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_ObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_ObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("EGAS_ObjectType"));
	}
	return Z_Registration_Info_UEnum_EGAS_ObjectType.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ObjectType>()
{
	return EGAS_ObjectType_StaticEnum();
}
struct Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGAS_ObjectType::None" },
		{ "SkeletalMesh.DisplayName", "SkeletalMesh" },
		{ "SkeletalMesh.Name", "EGAS_ObjectType::SkeletalMesh" },
		{ "StaticMesh.DisplayName", "StaticMesh" },
		{ "StaticMesh.Name", "EGAS_ObjectType::StaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_ObjectType::None", (int64)EGAS_ObjectType::None },
		{ "EGAS_ObjectType::StaticMesh", (int64)EGAS_ObjectType::StaticMesh },
		{ "EGAS_ObjectType::SkeletalMesh", (int64)EGAS_ObjectType::SkeletalMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	"EGAS_ObjectType",
	"EGAS_ObjectType",
	Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType()
{
	if (!Z_Registration_Info_UEnum_EGAS_ObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_ObjectType.InnerSingleton, Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_ObjectType.InnerSingleton;
}
// End Enum EGAS_ObjectType

// Begin Class UGAS_DAOverlapActor
void UGAS_DAOverlapActor::StaticRegisterNativesUGAS_DAOverlapActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_DAOverlapActor);
UClass* Z_Construct_UClass_UGAS_DAOverlapActor_NoRegister()
{
	return UGAS_DAOverlapActor::StaticClass();
}
struct Z_Construct_UClass_UGAS_DAOverlapActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectActorTag_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Tag for identifying the effect actor */" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "Tag for identifying the effect actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActorOnOverlapBegin_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Destroy the actor when an actor overlaps the volume */" },
		{ "EditCondition", "!bDestroyActorOnOverlapEnd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "Destroy the actor when an actor overlaps the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActorOnOverlapEnd_MetaData[] = {
		{ "Category", "Effect Base|Actor" },
		{ "Comment", "/** Destroy the actor when an actor stops overlapping the volume */" },
		{ "EditCondition", "!bDestroyActorOnOverlapBegin" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "Destroy the actor when an actor stops overlapping the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponentType_MetaData[] = {
		{ "Category", "Effect Base|Overlap" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverlapDebugOptions_MetaData[] = {
		{ "Category", "Effect Base|Overlap" },
		{ "Comment", "// UPROPERTY(EditAnywhere, Category = \"Effect Base|Overlap\")\n// float OverlapRadius = 300.f;\n" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Effect Base|Overlap\")\nfloat OverlapRadius = 300.f;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverlapComponent_MetaData[] = {
		{ "Category", "Effect Base|Overlap" },
		{ "Comment", "/** Show the overlap component in the world */" },
		{ "EditCondition", "bShowOverlapDebugOptions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "Show the overlap component in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "Effect Base|ObjectType" },
		{ "Comment", "/**\n\x09 *  Object Type\n\x09 */" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
		{ "ToolTip", "Object Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshEffectActor_MetaData[] = {
		{ "Category", "Effect Base|ObjectType" },
		{ "EditCondition", "ObjectType == EGAS_ObjectType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshEffectActor_MetaData[] = {
		{ "Category", "Effect Base|ObjectType" },
		{ "EditCondition", "ObjectType == EGAS_ObjectType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorScale_MetaData[] = {
		{ "Category", "Effect Base|ObjectType" },
		{ "EditCondition", "ObjectType == EGAS_ObjectType::SkeletalMesh || ObjectType == EGAS_ObjectType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapModifications_MetaData[] = {
		{ "Category", "Effect Base|OverlapModifications" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_DAOverlapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectActorTag;
	static void NewProp_bDestroyActorOnOverlapBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActorOnOverlapBegin;
	static void NewProp_bDestroyActorOnOverlapEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActorOnOverlapEnd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlapComponentType;
	static void NewProp_bShowOverlapDebugOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverlapDebugOptions;
	static void NewProp_bShowOverlapComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverlapComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshEffectActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshEffectActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapModifications;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_DAOverlapActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_EffectActorTag = { "EffectActorTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, EffectActorTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectActorTag_MetaData), NewProp_EffectActorTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapBegin_SetBit(void* Obj)
{
	((UGAS_DAOverlapActor*)Obj)->bDestroyActorOnOverlapBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapBegin = { "bDestroyActorOnOverlapBegin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAOverlapActor), &Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyActorOnOverlapBegin_MetaData), NewProp_bDestroyActorOnOverlapBegin_MetaData) };
void Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapEnd_SetBit(void* Obj)
{
	((UGAS_DAOverlapActor*)Obj)->bDestroyActorOnOverlapEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapEnd = { "bDestroyActorOnOverlapEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAOverlapActor), &Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyActorOnOverlapEnd_MetaData), NewProp_bDestroyActorOnOverlapEnd_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapComponentType = { "OverlapComponentType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, OverlapComponentType), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_OverlapComponentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponentType_MetaData), NewProp_OverlapComponentType_MetaData) }; // 1976998655
void Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapDebugOptions_SetBit(void* Obj)
{
	((UGAS_DAOverlapActor*)Obj)->bShowOverlapDebugOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapDebugOptions = { "bShowOverlapDebugOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAOverlapActor), &Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapDebugOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOverlapDebugOptions_MetaData), NewProp_bShowOverlapDebugOptions_MetaData) };
void Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapComponent_SetBit(void* Obj)
{
	((UGAS_DAOverlapActor*)Obj)->bShowOverlapComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapComponent = { "bShowOverlapComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGAS_DAOverlapActor), &Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOverlapComponent_MetaData), NewProp_bShowOverlapComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, ObjectType), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 4181707146
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_StaticMeshEffectActor = { "StaticMeshEffectActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, StaticMeshEffectActor), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshEffectActor_MetaData), NewProp_StaticMeshEffectActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_SkeletalMeshEffectActor = { "SkeletalMeshEffectActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, SkeletalMeshEffectActor), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshEffectActor_MetaData), NewProp_SkeletalMeshEffectActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ActorScale = { "ActorScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, ActorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorScale_MetaData), NewProp_ActorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapModifications = { "OverlapModifications", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_DAOverlapActor, OverlapModifications), Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapModifications_MetaData), NewProp_OverlapModifications_MetaData) }; // 3846683847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_DAOverlapActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_EffectActorTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bDestroyActorOnOverlapEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapComponentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapDebugOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_bShowOverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ObjectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_StaticMeshEffectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_SkeletalMeshEffectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_ActorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_DAOverlapActor_Statics::NewProp_OverlapModifications,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAOverlapActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_DAOverlapActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAOverlapActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_DAOverlapActor_Statics::ClassParams = {
	&UGAS_DAOverlapActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAS_DAOverlapActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAOverlapActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_DAOverlapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_DAOverlapActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_DAOverlapActor()
{
	if (!Z_Registration_Info_UClass_UGAS_DAOverlapActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_DAOverlapActor.OuterSingleton, Z_Construct_UClass_UGAS_DAOverlapActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_DAOverlapActor.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_DAOverlapActor>()
{
	return UGAS_DAOverlapActor::StaticClass();
}
UGAS_DAOverlapActor::UGAS_DAOverlapActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_DAOverlapActor);
UGAS_DAOverlapActor::~UGAS_DAOverlapActor() {}
// End Class UGAS_DAOverlapActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGAS_OverlapComponentType_StaticEnum, TEXT("EGAS_OverlapComponentType"), &Z_Registration_Info_UEnum_EGAS_OverlapComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1976998655U) },
		{ EGAS_ObjectType_StaticEnum, TEXT("EGAS_ObjectType"), &Z_Registration_Info_UEnum_EGAS_ObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4181707146U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_DAOverlapActor, UGAS_DAOverlapActor::StaticClass, TEXT("UGAS_DAOverlapActor"), &Z_Registration_Info_UClass_UGAS_DAOverlapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_DAOverlapActor), 189945651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_1635780440(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
