// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/AbilityTasks/GASATask_CustomShapeOverlap.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASATask_CustomShapeOverlap() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASATask_CustomShapeOverlap();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASATask_CustomShapeOverlap_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Delegate FOnOverlapSignature
struct Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics
{
	struct _Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms, DataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHandle_MetaData), NewProp_DataHandle_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::NewProp_DataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem, nullptr, "OnOverlapSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::_Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::_Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnOverlapSignature, FGameplayAbilityTargetDataHandle const& DataHandle)
{
	struct _Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
	_Script_EannaGameplayAbilitySystem_eventOnOverlapSignature_Parms Parms;
	Parms.DataHandle=DataHandle;
	OnOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnOverlapSignature

// Begin Class UGASATask_CustomShapeOverlap Function DetectCustomBoxOverlap
struct Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics
{
	struct GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms
	{
		UGameplayAbility* OwningAbility;
		FVector BoxExtent;
		TArray<TEnumAsByte<ECollisionChannel> > CollisionChannel;
		bool SelfCast;
		FVector Offset;
		USceneComponent* SceneToAttach;
		FName ActorSocket;
		UGASATask_CustomShapeOverlap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_ActorSocket", "None" },
		{ "CPP_Default_Offset", "" },
		{ "CPP_Default_SceneToAttach", "None" },
		{ "CPP_Default_SelfCast", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCast_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneToAttach_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannel;
	static void NewProp_SelfCast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelfCast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneToAttach;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorSocket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_CollisionChannel_Inner = { "CollisionChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, CollisionChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
void Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SelfCast_SetBit(void* Obj)
{
	((GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms*)Obj)->SelfCast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SelfCast = { "SelfCast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms), &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SelfCast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCast_MetaData), NewProp_SelfCast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SceneToAttach = { "SceneToAttach", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, SceneToAttach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneToAttach_MetaData), NewProp_SceneToAttach_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_ActorSocket = { "ActorSocket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, ActorSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSocket_MetaData), NewProp_ActorSocket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms, ReturnValue), Z_Construct_UClass_UGASATask_CustomShapeOverlap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_CollisionChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SelfCast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_SceneToAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_ActorSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASATask_CustomShapeOverlap, nullptr, "DetectCustomBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::GASATask_CustomShapeOverlap_eventDetectCustomBoxOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASATask_CustomShapeOverlap::execDetectCustomBoxOverlap)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
	P_GET_TARRAY_REF(TEnumAsByte<ECollisionChannel>,Z_Param_Out_CollisionChannel);
	P_GET_UBOOL(Z_Param_SelfCast);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Offset);
	P_GET_OBJECT(USceneComponent,Z_Param_SceneToAttach);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActorSocket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGASATask_CustomShapeOverlap**)Z_Param__Result=UGASATask_CustomShapeOverlap::DetectCustomBoxOverlap(Z_Param_OwningAbility,Z_Param_Out_BoxExtent,Z_Param_Out_CollisionChannel,Z_Param_SelfCast,Z_Param_Out_Offset,Z_Param_SceneToAttach,Z_Param_Out_ActorSocket);
	P_NATIVE_END;
}
// End Class UGASATask_CustomShapeOverlap Function DetectCustomBoxOverlap

// Begin Class UGASATask_CustomShapeOverlap Function DetectCustomSphereOverlap
struct Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics
{
	struct GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms
	{
		UGameplayAbility* OwningAbility;
		TArray<TEnumAsByte<ECollisionChannel> > CollisionChannel;
		float SphereRadius;
		bool SelfCast;
		FVector Offset;
		USceneComponent* SceneToAttach;
		FName ActorSocket;
		UGASATask_CustomShapeOverlap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_ActorSocket", "None" },
		{ "CPP_Default_Offset", "" },
		{ "CPP_Default_SceneToAttach", "None" },
		{ "CPP_Default_SelfCast", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCast_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneToAttach_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static void NewProp_SelfCast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelfCast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneToAttach;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorSocket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_CollisionChannel_Inner = { "CollisionChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, CollisionChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
void Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SelfCast_SetBit(void* Obj)
{
	((GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms*)Obj)->SelfCast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SelfCast = { "SelfCast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms), &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SelfCast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCast_MetaData), NewProp_SelfCast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SceneToAttach = { "SceneToAttach", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, SceneToAttach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneToAttach_MetaData), NewProp_SceneToAttach_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_ActorSocket = { "ActorSocket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, ActorSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSocket_MetaData), NewProp_ActorSocket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms, ReturnValue), Z_Construct_UClass_UGASATask_CustomShapeOverlap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_CollisionChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SelfCast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_SceneToAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_ActorSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASATask_CustomShapeOverlap, nullptr, "DetectCustomSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::GASATask_CustomShapeOverlap_eventDetectCustomSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASATask_CustomShapeOverlap::execDetectCustomSphereOverlap)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_TARRAY_REF(TEnumAsByte<ECollisionChannel>,Z_Param_Out_CollisionChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
	P_GET_UBOOL(Z_Param_SelfCast);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Offset);
	P_GET_OBJECT(USceneComponent,Z_Param_SceneToAttach);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActorSocket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGASATask_CustomShapeOverlap**)Z_Param__Result=UGASATask_CustomShapeOverlap::DetectCustomSphereOverlap(Z_Param_OwningAbility,Z_Param_Out_CollisionChannel,Z_Param_SphereRadius,Z_Param_SelfCast,Z_Param_Out_Offset,Z_Param_SceneToAttach,Z_Param_Out_ActorSocket);
	P_NATIVE_END;
}
// End Class UGASATask_CustomShapeOverlap Function DetectCustomSphereOverlap

// Begin Class UGASATask_CustomShapeOverlap Function OnOverlapBegin
struct Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics
{
	struct GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASATask_CustomShapeOverlap, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::GASATask_CustomShapeOverlap_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASATask_CustomShapeOverlap::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UGASATask_CustomShapeOverlap Function OnOverlapBegin

// Begin Class UGASATask_CustomShapeOverlap Function OnOverlapEnd
struct Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics
{
	struct GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASATask_CustomShapeOverlap, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::GASATask_CustomShapeOverlap_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASATask_CustomShapeOverlap::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UGASATask_CustomShapeOverlap Function OnOverlapEnd

// Begin Class UGASATask_CustomShapeOverlap
void UGASATask_CustomShapeOverlap::StaticRegisterNativesUGASATask_CustomShapeOverlap()
{
	UClass* Class = UGASATask_CustomShapeOverlap::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectCustomBoxOverlap", &UGASATask_CustomShapeOverlap::execDetectCustomBoxOverlap },
		{ "DetectCustomSphereOverlap", &UGASATask_CustomShapeOverlap::execDetectCustomSphereOverlap },
		{ "OnOverlapBegin", &UGASATask_CustomShapeOverlap::execOnOverlapBegin },
		{ "OnOverlapEnd", &UGASATask_CustomShapeOverlap::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASATask_CustomShapeOverlap);
UClass* Z_Construct_UClass_UGASATask_CustomShapeOverlap_NoRegister()
{
	return UGASATask_CustomShapeOverlap::StaticClass();
}
struct Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AbilityTask for creating and detecting overlaps with custom shape components.\n */" },
		{ "IncludePath", "AbilityTasks/GASATask_CustomShapeOverlap.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
		{ "ToolTip", "AbilityTask for creating and detecting overlaps with custom shape components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneToAttach_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CustomShapeOverlap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndOverlap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneToAttach;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomBoxOverlap, "DetectCustomBoxOverlap" }, // 3925779828
		{ &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_DetectCustomSphereOverlap, "DetectCustomSphereOverlap" }, // 4177428796
		{ &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapBegin, "OnOverlapBegin" }, // 2147820795
		{ &Z_Construct_UFunction_UGASATask_CustomShapeOverlap_OnOverlapEnd, "OnOverlapEnd" }, // 604455166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASATask_CustomShapeOverlap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OnBeginOverlap = { "OnBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, OnBeginOverlap), Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginOverlap_MetaData), NewProp_OnBeginOverlap_MetaData) }; // 2879321124
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OnEndOverlap = { "OnEndOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, OnEndOverlap), Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_OnOverlapSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndOverlap_MetaData), NewProp_OnEndOverlap_MetaData) }; // 2879321124
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_SceneToAttach = { "SceneToAttach", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, SceneToAttach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneToAttach_MetaData), NewProp_SceneToAttach_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CustomShapeOverlap, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingActors_MetaData), NewProp_OverlappingActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OnBeginOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OnEndOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_SceneToAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OverlappingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::NewProp_OverlappingActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::ClassParams = {
	&UGASATask_CustomShapeOverlap::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASATask_CustomShapeOverlap()
{
	if (!Z_Registration_Info_UClass_UGASATask_CustomShapeOverlap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASATask_CustomShapeOverlap.OuterSingleton, Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASATask_CustomShapeOverlap.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGASATask_CustomShapeOverlap>()
{
	return UGASATask_CustomShapeOverlap::StaticClass();
}
UGASATask_CustomShapeOverlap::UGASATask_CustomShapeOverlap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASATask_CustomShapeOverlap);
UGASATask_CustomShapeOverlap::~UGASATask_CustomShapeOverlap() {}
// End Class UGASATask_CustomShapeOverlap

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASATask_CustomShapeOverlap, UGASATask_CustomShapeOverlap::StaticClass, TEXT("UGASATask_CustomShapeOverlap"), &Z_Registration_Info_UClass_UGASATask_CustomShapeOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASATask_CustomShapeOverlap), 150178564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_1625884018(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
