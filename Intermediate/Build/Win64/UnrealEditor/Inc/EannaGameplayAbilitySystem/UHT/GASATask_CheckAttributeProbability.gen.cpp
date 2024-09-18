// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/AbilityTasks/GASATask_CheckAttributeProbability.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASATask_CheckAttributeProbability() {}

// Begin Cross Module References
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASATask_CheckAttributeProbability();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASATask_CheckAttributeProbability_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Delegate FCheckAttributeProbability
struct Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics
{
	struct _Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CheckAttributeProbability.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms), &Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem, nullptr, "CheckAttributeProbability__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::_Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::_Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCheckAttributeProbability_DelegateWrapper(const FMulticastScriptDelegate& CheckAttributeProbability, bool bSuccess)
{
	struct _Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms
	{
		bool bSuccess;
	};
	_Script_EannaGameplayAbilitySystem_eventCheckAttributeProbability_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	CheckAttributeProbability.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCheckAttributeProbability

// Begin Class UGASATask_CheckAttributeProbability Function CheckAttributeProbability
struct Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics
{
	struct GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTag AttributeTag;
		UGASATask_CheckAttributeProbability* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instead of passing an attribute, we pass a tag to the attribute. Easier so need to call UAttributeSet on GA. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CheckAttributeProbability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instead of passing an attribute, we pass a tag to the attribute. Easier so need to call UAttributeSet on GA." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTag_MetaData), NewProp_AttributeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms, ReturnValue), Z_Construct_UClass_UGASATask_CheckAttributeProbability_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASATask_CheckAttributeProbability, nullptr, "CheckAttributeProbability", nullptr, nullptr, Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::GASATask_CheckAttributeProbability_eventCheckAttributeProbability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASATask_CheckAttributeProbability::execCheckAttributeProbability)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AttributeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGASATask_CheckAttributeProbability**)Z_Param__Result=UGASATask_CheckAttributeProbability::CheckAttributeProbability(Z_Param_OwningAbility,Z_Param_Out_AttributeTag);
	P_NATIVE_END;
}
// End Class UGASATask_CheckAttributeProbability Function CheckAttributeProbability

// Begin Class UGASATask_CheckAttributeProbability
void UGASATask_CheckAttributeProbability::StaticRegisterNativesUGASATask_CheckAttributeProbability()
{
	UClass* Class = UGASATask_CheckAttributeProbability::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAttributeProbability", &UGASATask_CheckAttributeProbability::execCheckAttributeProbability },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASATask_CheckAttributeProbability);
UClass* Z_Construct_UClass_UGASATask_CheckAttributeProbability_NoRegister()
{
	return UGASATask_CheckAttributeProbability::StaticClass();
}
struct Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Ability task for checking the probability of an attribute, very useful for custom Critical Hit, Dodge, logic.\n */" },
#endif
		{ "IncludePath", "AbilityTasks/GASATask_CheckAttributeProbability.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CheckAttributeProbability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability task for checking the probability of an attribute, very useful for custom Critical Hit, Dodge, logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProbabilityChecked_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GASATask_CheckAttributeProbability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProbabilityChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASATask_CheckAttributeProbability_CheckAttributeProbability, "CheckAttributeProbability" }, // 2805570087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASATask_CheckAttributeProbability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::NewProp_OnProbabilityChecked = { "OnProbabilityChecked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASATask_CheckAttributeProbability, OnProbabilityChecked), Z_Construct_UDelegateFunction_EannaGameplayAbilitySystem_CheckAttributeProbability__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProbabilityChecked_MetaData), NewProp_OnProbabilityChecked_MetaData) }; // 753741870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::NewProp_OnProbabilityChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::ClassParams = {
	&UGASATask_CheckAttributeProbability::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASATask_CheckAttributeProbability()
{
	if (!Z_Registration_Info_UClass_UGASATask_CheckAttributeProbability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASATask_CheckAttributeProbability.OuterSingleton, Z_Construct_UClass_UGASATask_CheckAttributeProbability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASATask_CheckAttributeProbability.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGASATask_CheckAttributeProbability>()
{
	return UGASATask_CheckAttributeProbability::StaticClass();
}
UGASATask_CheckAttributeProbability::UGASATask_CheckAttributeProbability(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASATask_CheckAttributeProbability);
UGASATask_CheckAttributeProbability::~UGASATask_CheckAttributeProbability() {}
// End Class UGASATask_CheckAttributeProbability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CheckAttributeProbability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASATask_CheckAttributeProbability, UGASATask_CheckAttributeProbability::StaticClass, TEXT("UGASATask_CheckAttributeProbability"), &Z_Registration_Info_UClass_UGASATask_CheckAttributeProbability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASATask_CheckAttributeProbability), 2395991448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CheckAttributeProbability_h_667254830(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CheckAttributeProbability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CheckAttributeProbability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
