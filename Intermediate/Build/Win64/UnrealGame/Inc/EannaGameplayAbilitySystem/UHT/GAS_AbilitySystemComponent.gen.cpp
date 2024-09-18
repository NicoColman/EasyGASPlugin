// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/GAS_AbilitySystemComponent.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayAbilitySpec.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AbilitySystemComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_InterfaceASC_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySpecWrapper();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FAbilitySpecWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilitySpecWrapper;
class UScriptStruct* FAbilitySpecWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilitySpecWrapper, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("AbilitySpecWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FAbilitySpecWrapper>()
{
	return FAbilitySpecWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper for FGameplayAbilitySpec to allow for Blueprint exposure */" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
		{ "ToolTip", "Wrapper for FGameplayAbilitySpec to allow for Blueprint exposure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "Category", "GAS|FAbilitySpecWrapper" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilitySpecWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilitySpecWrapper, Spec), Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 3358803124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::NewProp_Spec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"AbilitySpecWrapper",
	Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::PropPointers),
	sizeof(FAbilitySpecWrapper),
	alignof(FAbilitySpecWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilitySpecWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.InnerSingleton, Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilitySpecWrapper.InnerSingleton;
}
// End ScriptStruct FAbilitySpecWrapper

// Begin Class UGAS_AbilitySystemComponent Function AbilityActorInfoSet
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC|Init" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "AbilityActorInfoSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execAbilityActorInfoSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbilityActorInfoSet();
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function AbilityActorInfoSet

// Begin Class UGAS_AbilitySystemComponent Function ClientEffectApplied
struct GAS_AbilitySystemComponent_eventClientEffectApplied_Parms
{
	UAbilitySystemComponent* ASC;
	FGameplayEffectSpec SpecApplied;
	FActiveGameplayEffectHandle ActiveHandle;
};
static FName NAME_UGAS_AbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
void UGAS_AbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* ASC, FGameplayEffectSpec const& SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	GAS_AbilitySystemComponent_eventClientEffectApplied_Parms Parms;
	Parms.ASC=ASC;
	Parms.SpecApplied=SpecApplied;
	Parms.ActiveHandle=ActiveHandle;
	ProcessEvent(FindFunctionChecked(NAME_UGAS_AbilitySystemComponent_ClientEffectApplied),&Parms);
}
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecApplied_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecApplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventClientEffectApplied_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_SpecApplied = { "SpecApplied", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventClientEffectApplied_Parms, SpecApplied), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecApplied_MetaData), NewProp_SpecApplied_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventClientEffectApplied_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_SpecApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), sizeof(GAS_AbilitySystemComponent_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams) };
static_assert(sizeof(GAS_AbilitySystemComponent_eventClientEffectApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execClientEffectApplied)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
	P_GET_STRUCT(FGameplayEffectSpec,Z_Param_SpecApplied);
	P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEffectApplied_Implementation(Z_Param_ASC,Z_Param_SpecApplied,Z_Param_ActiveHandle);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function ClientEffectApplied

// Begin Class UGAS_AbilitySystemComponent Function GetAttributeFromTag
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics
{
	struct GAS_AbilitySystemComponent_eventGetAttributeFromTag_Parms
	{
		FGameplayTag AttributeTag;
		FGameplayAttribute ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetAttributeFromTag_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTag_MetaData), NewProp_AttributeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetAttributeFromTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "GetAttributeFromTag", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::GAS_AbilitySystemComponent_eventGetAttributeFromTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::GAS_AbilitySystemComponent_eventGetAttributeFromTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execGetAttributeFromTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AttributeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAttribute*)Z_Param__Result=P_THIS->GetAttributeFromTag(Z_Param_Out_AttributeTag);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function GetAttributeFromTag

// Begin Class UGAS_AbilitySystemComponent Function GetSpecFromAbilityTag
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics
{
	struct GAS_AbilitySystemComponent_eventGetSpecFromAbilityTag_Parms
	{
		FGameplayTag AbilityTag;
		FAbilitySpecWrapper ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetSpecFromAbilityTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetSpecFromAbilityTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FAbilitySpecWrapper, METADATA_PARAMS(0, nullptr) }; // 163766343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "GetSpecFromAbilityTag", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::GAS_AbilitySystemComponent_eventGetSpecFromAbilityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::GAS_AbilitySystemComponent_eventGetSpecFromAbilityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execGetSpecFromAbilityTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAbilitySpecWrapper*)Z_Param__Result=P_THIS->GetSpecFromAbilityTag(Z_Param_Out_AbilityTag);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function GetSpecFromAbilityTag

// Begin Class UGAS_AbilitySystemComponent Function GetSpecsFromAbilityTags
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics
{
	struct GAS_AbilitySystemComponent_eventGetSpecsFromAbilityTags_Parms
	{
		FGameplayTagContainer TagContainer;
		TArray<FAbilitySpecWrapper> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetSpecsFromAbilityTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagContainer_MetaData), NewProp_TagContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilitySpecWrapper, METADATA_PARAMS(0, nullptr) }; // 163766343
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGetSpecsFromAbilityTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 163766343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "GetSpecsFromAbilityTags", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::GAS_AbilitySystemComponent_eventGetSpecsFromAbilityTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::GAS_AbilitySystemComponent_eventGetSpecsFromAbilityTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execGetSpecsFromAbilityTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAbilitySpecWrapper>*)Z_Param__Result=P_THIS->GetSpecsFromAbilityTags(Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function GetSpecsFromAbilityTags

// Begin Class UGAS_AbilitySystemComponent Function GiveAbilitiesWithInputTag
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics
{
	struct GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms
	{
		TArray<TSubclassOf<UGameplayAbility> > Abilities;
		int32 Level;
		bool bGiveIfNotInputAbility;
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "CPP_Default_bGiveIfNotInputAbility", "false" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGiveIfNotInputAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static void NewProp_bGiveIfNotInputAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGiveIfNotInputAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_bGiveIfNotInputAbility_SetBit(void* Obj)
{
	((GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms*)Obj)->bGiveIfNotInputAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_bGiveIfNotInputAbility = { "bGiveIfNotInputAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms), &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_bGiveIfNotInputAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGiveIfNotInputAbility_MetaData), NewProp_bGiveIfNotInputAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_bGiveIfNotInputAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "GiveAbilitiesWithInputTag", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::GAS_AbilitySystemComponent_eventGiveAbilitiesWithInputTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execGiveAbilitiesWithInputTag)
{
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_Abilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_UBOOL(Z_Param_bGiveIfNotInputAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GiveAbilitiesWithInputTag(Z_Param_Out_Abilities,Z_Param_Level,Z_Param_bGiveIfNotInputAbility);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function GiveAbilitiesWithInputTag

// Begin Class UGAS_AbilitySystemComponent Function GiveAbilityWithInput
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics
{
	struct GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms
	{
		const TSubclassOf<UGameplayAbility> Ability;
		int32 Level;
		FGameplayAbilitySpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "GiveAbilityWithInput", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::GAS_AbilitySystemComponent_eventGiveAbilityWithInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execGiveAbilityWithInput)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayAbility>,Z_Param_Out_Ability);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilitySpecHandle*)Z_Param__Result=P_THIS->GiveAbilityWithInput(Z_Param_Out_Ability,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function GiveAbilityWithInput

// Begin Class UGAS_AbilitySystemComponent Function InitializeAttributes
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics
{
	struct GAS_AbilitySystemComponent_eventInitializeAttributes_Parms
	{
		TArray<TSubclassOf<UGameplayEffect> > GameplayEffects;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC|Init" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializeAttributes_Parms, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializeAttributes_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_GameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "InitializeAttributes", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::GAS_AbilitySystemComponent_eventInitializeAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::GAS_AbilitySystemComponent_eventInitializeAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execInitializeAttributes)
{
	P_GET_TARRAY_REF(TSubclassOf<UGameplayEffect>,Z_Param_Out_GameplayEffects);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAttributes(Z_Param_Out_GameplayEffects,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function InitializeAttributes

// Begin Class UGAS_AbilitySystemComponent Function InitializeGameplayAbilities
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics
{
	struct GAS_AbilitySystemComponent_eventInitializeGameplayAbilities_Parms
	{
		TArray<TSubclassOf<UGameplayAbility> > Abilities;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC|Init" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializeGameplayAbilities_Parms, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializeGameplayAbilities_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "InitializeGameplayAbilities", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::GAS_AbilitySystemComponent_eventInitializeGameplayAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::GAS_AbilitySystemComponent_eventInitializeGameplayAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execInitializeGameplayAbilities)
{
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_Abilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGameplayAbilities(Z_Param_Out_Abilities,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function InitializeGameplayAbilities

// Begin Class UGAS_AbilitySystemComponent Function InitializePassiveGameplayAbilities
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics
{
	struct GAS_AbilitySystemComponent_eventInitializePassiveGameplayAbilities_Parms
	{
		TArray<TSubclassOf<UGameplayAbility> > PassiveAbilities;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC|Init" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_PassiveAbilities_Inner = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_PassiveAbilities = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializePassiveGameplayAbilities_Parms, PassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilities_MetaData), NewProp_PassiveAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventInitializePassiveGameplayAbilities_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_PassiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_PassiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "InitializePassiveGameplayAbilities", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::GAS_AbilitySystemComponent_eventInitializePassiveGameplayAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::GAS_AbilitySystemComponent_eventInitializePassiveGameplayAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execInitializePassiveGameplayAbilities)
{
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_PassiveAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePassiveGameplayAbilities(Z_Param_Out_PassiveAbilities,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function InitializePassiveGameplayAbilities

// Begin Class UGAS_AbilitySystemComponent Function SetAttributeValueFromTag
struct Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics
{
	struct GAS_AbilitySystemComponent_eventSetAttributeValueFromTag_Parms
	{
		FGameplayTag AttributeTag;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|ASC" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventSetAttributeValueFromTag_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTag_MetaData), NewProp_AttributeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySystemComponent_eventSetAttributeValueFromTag_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySystemComponent, nullptr, "SetAttributeValueFromTag", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::GAS_AbilitySystemComponent_eventSetAttributeValueFromTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::GAS_AbilitySystemComponent_eventSetAttributeValueFromTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySystemComponent::execSetAttributeValueFromTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AttributeTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttributeValueFromTag(Z_Param_Out_AttributeTag,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySystemComponent Function SetAttributeValueFromTag

// Begin Class UGAS_AbilitySystemComponent
void UGAS_AbilitySystemComponent::StaticRegisterNativesUGAS_AbilitySystemComponent()
{
	UClass* Class = UGAS_AbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbilityActorInfoSet", &UGAS_AbilitySystemComponent::execAbilityActorInfoSet },
		{ "ClientEffectApplied", &UGAS_AbilitySystemComponent::execClientEffectApplied },
		{ "GetAttributeFromTag", &UGAS_AbilitySystemComponent::execGetAttributeFromTag },
		{ "GetSpecFromAbilityTag", &UGAS_AbilitySystemComponent::execGetSpecFromAbilityTag },
		{ "GetSpecsFromAbilityTags", &UGAS_AbilitySystemComponent::execGetSpecsFromAbilityTags },
		{ "GiveAbilitiesWithInputTag", &UGAS_AbilitySystemComponent::execGiveAbilitiesWithInputTag },
		{ "GiveAbilityWithInput", &UGAS_AbilitySystemComponent::execGiveAbilityWithInput },
		{ "InitializeAttributes", &UGAS_AbilitySystemComponent::execInitializeAttributes },
		{ "InitializeGameplayAbilities", &UGAS_AbilitySystemComponent::execInitializeGameplayAbilities },
		{ "InitializePassiveGameplayAbilities", &UGAS_AbilitySystemComponent::execInitializePassiveGameplayAbilities },
		{ "SetAttributeValueFromTag", &UGAS_AbilitySystemComponent::execSetAttributeValueFromTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AbilitySystemComponent);
UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister()
{
	return UGAS_AbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS_AbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GAS_AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_AbilityActorInfoSet, "AbilityActorInfoSet" }, // 469740584
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 1846278270
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetAttributeFromTag, "GetAttributeFromTag" }, // 2054716753
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecFromAbilityTag, "GetSpecFromAbilityTag" }, // 3403373835
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GetSpecsFromAbilityTags, "GetSpecsFromAbilityTags" }, // 1547304381
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilitiesWithInputTag, "GiveAbilitiesWithInputTag" }, // 1923983262
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_GiveAbilityWithInput, "GiveAbilityWithInput" }, // 3439314690
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeAttributes, "InitializeAttributes" }, // 1420828857
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializeGameplayAbilities, "InitializeGameplayAbilities" }, // 3460886376
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_InitializePassiveGameplayAbilities, "InitializePassiveGameplayAbilities" }, // 433336337
		{ &Z_Construct_UFunction_UGAS_AbilitySystemComponent_SetAttributeValueFromTag, "SetAttributeValueFromTag" }, // 1808082541
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGAS_InterfaceASC_NoRegister, (int32)VTABLE_OFFSET(UGAS_AbilitySystemComponent, IGAS_InterfaceASC), false },  // 3254968271
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::ClassParams = {
	&UGAS_AbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGAS_AbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AbilitySystemComponent.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_AbilitySystemComponent>()
{
	return UGAS_AbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AbilitySystemComponent);
UGAS_AbilitySystemComponent::~UGAS_AbilitySystemComponent() {}
// End Class UGAS_AbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilitySpecWrapper::StaticStruct, Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics::NewStructOps, TEXT("AbilitySpecWrapper"), &Z_Registration_Info_UScriptStruct_AbilitySpecWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilitySpecWrapper), 163766343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AbilitySystemComponent, UGAS_AbilitySystemComponent::StaticClass, TEXT("UGAS_AbilitySystemComponent"), &Z_Registration_Info_UClass_UGAS_AbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AbilitySystemComponent), 2805563482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_2638126964(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
