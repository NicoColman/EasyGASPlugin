// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/OverlapActors/GAS_OverlapActor.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/GAS_OverlapModificationsConfig.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_OverlapActor() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_OverlapActor();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_OverlapActor_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_DAOverlapActor_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Class AGAS_OverlapActor Function GetEffectActorDataAsset
struct Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics
{
	struct GAS_OverlapActor_eventGetEffectActorDataAsset_Parms
	{
		UGAS_DAOverlapActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASOverlapActor" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventGetEffectActorDataAsset_Parms, ReturnValue), Z_Construct_UClass_UGAS_DAOverlapActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_OverlapActor, nullptr, "GetEffectActorDataAsset", nullptr, nullptr, Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::GAS_OverlapActor_eventGetEffectActorDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::GAS_OverlapActor_eventGetEffectActorDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_OverlapActor::execGetEffectActorDataAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGAS_DAOverlapActor**)Z_Param__Result=P_THIS->GetEffectActorDataAsset();
	P_NATIVE_END;
}
// End Class AGAS_OverlapActor Function GetEffectActorDataAsset

// Begin Class AGAS_OverlapActor Function OnBeginOverlap
struct Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics
{
	struct GAS_OverlapActor_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((GAS_OverlapActor_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_OverlapActor_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_OverlapActor, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::GAS_OverlapActor_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::GAS_OverlapActor_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_OverlapActor::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AGAS_OverlapActor Function OnBeginOverlap

// Begin Class AGAS_OverlapActor Function OnEndOverlap
struct Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics
{
	struct GAS_OverlapActor_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_OverlapActor_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_OverlapActor, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::GAS_OverlapActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::GAS_OverlapActor_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_OverlapActor::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AGAS_OverlapActor Function OnEndOverlap

// Begin Class AGAS_OverlapActor
void AGAS_OverlapActor::StaticRegisterNativesAGAS_OverlapActor()
{
	UClass* Class = AGAS_OverlapActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEffectActorDataAsset", &AGAS_OverlapActor::execGetEffectActorDataAsset },
		{ "OnBeginOverlap", &AGAS_OverlapActor::execOnBeginOverlap },
		{ "OnEndOverlap", &AGAS_OverlapActor::execOnEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_OverlapActor);
UClass* Z_Construct_UClass_AGAS_OverlapActor_NoRegister()
{
	return AGAS_OverlapActor::StaticClass();
}
struct Z_Construct_UClass_AGAS_OverlapActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffectActors/OverlapActors/GAS_OverlapActor.h" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnOverlapBegin_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEffectOverlapEnd_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapModificationsConfig_MetaData[] = {
		{ "Category", "OvelapModificationsConfig" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapActorDataAsset_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[] = {
		{ "Category", "GASOverlapActor" },
		{ "ModuleRelativePath", "Public/EffectActors/OverlapActors/GAS_OverlapActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDestroyOnOverlapBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnOverlapBegin;
	static void NewProp_bDestroyOnEffectOverlapEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEffectOverlapEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapModificationsConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapActorDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_OverlapActor_GetEffectActorDataAsset, "GetEffectActorDataAsset" }, // 1169900608
		{ &Z_Construct_UFunction_AGAS_OverlapActor_OnBeginOverlap, "OnBeginOverlap" }, // 1082680516
		{ &Z_Construct_UFunction_AGAS_OverlapActor_OnEndOverlap, "OnEndOverlap" }, // 492208874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_OverlapActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnOverlapBegin_SetBit(void* Obj)
{
	((AGAS_OverlapActor*)Obj)->bDestroyOnOverlapBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnOverlapBegin = { "bDestroyOnOverlapBegin", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_OverlapActor), &Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnOverlapBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnOverlapBegin_MetaData), NewProp_bDestroyOnOverlapBegin_MetaData) };
void Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnEffectOverlapEnd_SetBit(void* Obj)
{
	((AGAS_OverlapActor*)Obj)->bDestroyOnEffectOverlapEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnEffectOverlapEnd = { "bDestroyOnEffectOverlapEnd", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAS_OverlapActor), &Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnEffectOverlapEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnEffectOverlapEnd_MetaData), NewProp_bDestroyOnEffectOverlapEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlapModificationsConfig = { "OverlapModificationsConfig", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, OverlapModificationsConfig), Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapModificationsConfig_MetaData), NewProp_OverlapModificationsConfig_MetaData) }; // 1270480159
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlapActorDataAsset = { "OverlapActorDataAsset", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, OverlapActorDataAsset), Z_Construct_UClass_UGAS_DAOverlapActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapActorDataAsset_MetaData), NewProp_OverlapActorDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_OverlapActor, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingActors_MetaData), NewProp_OverlappingActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_OverlapActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnOverlapBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_bDestroyOnEffectOverlapEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlapModificationsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlapActorDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlappingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_OverlapActor_Statics::NewProp_OverlappingActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_OverlapActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_OverlapActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_OverlapActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_OverlapActor_Statics::ClassParams = {
	&AGAS_OverlapActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_OverlapActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_OverlapActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_OverlapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_OverlapActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_OverlapActor()
{
	if (!Z_Registration_Info_UClass_AGAS_OverlapActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_OverlapActor.OuterSingleton, Z_Construct_UClass_AGAS_OverlapActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_OverlapActor.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<AGAS_OverlapActor>()
{
	return AGAS_OverlapActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_OverlapActor);
AGAS_OverlapActor::~AGAS_OverlapActor() {}
// End Class AGAS_OverlapActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_OverlapActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_OverlapActor, AGAS_OverlapActor::StaticClass, TEXT("AGAS_OverlapActor"), &Z_Registration_Info_UClass_AGAS_OverlapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_OverlapActor), 4158113779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_OverlapActor_h_3702132290(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_OverlapActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_OverlapActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
