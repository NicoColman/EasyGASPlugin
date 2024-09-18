// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/EffectActors/GAS_OverlapModificationsConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_OverlapModificationsConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy();
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount();
EANNAGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayTagConfig();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_PolicyConfig();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect();
EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Enum EGAS_ComponentAmount
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_ComponentAmount;
static UEnum* EGAS_ComponentAmount_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_ComponentAmount.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_ComponentAmount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("EGAS_ComponentAmount"));
	}
	return Z_Registration_Info_UEnum_EGAS_ComponentAmount.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ComponentAmount>()
{
	return EGAS_ComponentAmount_StaticEnum();
}
struct Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Enum to determine the amount of the components that will be used in the configuration.\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "Multiple.DisplayName", "Multiple" },
		{ "Multiple.Name", "EGAS_ComponentAmount::Multiple" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGAS_ComponentAmount::None" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "EGAS_ComponentAmount::Single" },
		{ "ToolTip", "Enum to determine the amount of the components that will be used in the configuration." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_ComponentAmount::None", (int64)EGAS_ComponentAmount::None },
		{ "EGAS_ComponentAmount::Single", (int64)EGAS_ComponentAmount::Single },
		{ "EGAS_ComponentAmount::Multiple", (int64)EGAS_ComponentAmount::Multiple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	"EGAS_ComponentAmount",
	"EGAS_ComponentAmount",
	Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount()
{
	if (!Z_Registration_Info_UEnum_EGAS_ComponentAmount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_ComponentAmount.InnerSingleton, Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_ComponentAmount.InnerSingleton;
}
// End Enum EGAS_ComponentAmount

// Begin Enum EGAS_ApplicationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_ApplicationPolicy;
static UEnum* EGAS_ApplicationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("EGAS_ApplicationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ApplicationPolicy>()
{
	return EGAS_ApplicationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyOnBeginCondition.DisplayName", "Apply On Begin Condition" },
		{ "ApplyOnBeginCondition.Name", "EGAS_ApplicationPolicy::ApplyOnBeginCondition" },
		{ "ApplyOnBeginOverlap.DisplayName", "Apply On Begin Overlap" },
		{ "ApplyOnBeginOverlap.Name", "EGAS_ApplicationPolicy::ApplyOnBeginOverlap" },
		{ "ApplyOnEndCondition.DisplayName", "Apply On End Condition" },
		{ "ApplyOnEndCondition.Name", "EGAS_ApplicationPolicy::ApplyOnEndCondition" },
		{ "ApplyOnEndOverlap.DisplayName", "Apply On End Overlap " },
		{ "ApplyOnEndOverlap.Name", "EGAS_ApplicationPolicy::ApplyOnEndOverlap" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * When to apply the effect, ApplyOnCondition will only be applied if the condition is met,\n * the condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,\n * using priority to determine the order.\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "When to apply the effect, ApplyOnCondition will only be applied if the condition is met,\nthe condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,\nusing priority to determine the order." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_ApplicationPolicy::ApplyOnBeginOverlap", (int64)EGAS_ApplicationPolicy::ApplyOnBeginOverlap },
		{ "EGAS_ApplicationPolicy::ApplyOnEndOverlap", (int64)EGAS_ApplicationPolicy::ApplyOnEndOverlap },
		{ "EGAS_ApplicationPolicy::ApplyOnBeginCondition", (int64)EGAS_ApplicationPolicy::ApplyOnBeginCondition },
		{ "EGAS_ApplicationPolicy::ApplyOnEndCondition", (int64)EGAS_ApplicationPolicy::ApplyOnEndCondition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	"EGAS_ApplicationPolicy",
	"EGAS_ApplicationPolicy",
	Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.InnerSingleton, Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_ApplicationPolicy.InnerSingleton;
}
// End Enum EGAS_ApplicationPolicy

// Begin Enum EGAS_RemovalPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_RemovalPolicy;
static UEnum* EGAS_RemovalPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_RemovalPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_RemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("EGAS_RemovalPolicy"));
	}
	return Z_Registration_Info_UEnum_EGAS_RemovalPolicy.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_RemovalPolicy>()
{
	return EGAS_RemovalPolicy_StaticEnum();
}
struct Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * When to remove the effect, RemoveOnCondition will only be applied if the condition is met,\n * the condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,\n * using priority to determine the order.\n */" },
		{ "DoNotRemove.DisplayName", "Do Not Remove" },
		{ "DoNotRemove.Name", "EGAS_RemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "RemoveOnBeginCondition.DisplayName", "Remove On Begin Condition" },
		{ "RemoveOnBeginCondition.Name", "EGAS_RemovalPolicy::RemoveOnBeginCondition" },
		{ "RemoveOnEndCondition.DisplayName", "Remove On End Condition" },
		{ "RemoveOnEndCondition.Name", "EGAS_RemovalPolicy::RemoveOnEndCondition" },
		{ "RemoveOnEndOverlap.DisplayName", "Remove On End Overlap " },
		{ "RemoveOnEndOverlap.Name", "EGAS_RemovalPolicy::RemoveOnEndOverlap" },
		{ "ToolTip", "When to remove the effect, RemoveOnCondition will only be applied if the condition is met,\nthe condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,\nusing priority to determine the order." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_RemovalPolicy::DoNotRemove", (int64)EGAS_RemovalPolicy::DoNotRemove },
		{ "EGAS_RemovalPolicy::RemoveOnEndOverlap", (int64)EGAS_RemovalPolicy::RemoveOnEndOverlap },
		{ "EGAS_RemovalPolicy::RemoveOnBeginCondition", (int64)EGAS_RemovalPolicy::RemoveOnBeginCondition },
		{ "EGAS_RemovalPolicy::RemoveOnEndCondition", (int64)EGAS_RemovalPolicy::RemoveOnEndCondition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	"EGAS_RemovalPolicy",
	"EGAS_RemovalPolicy",
	Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy()
{
	if (!Z_Registration_Info_UEnum_EGAS_RemovalPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_RemovalPolicy.InnerSingleton, Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_RemovalPolicy.InnerSingleton;
}
// End Enum EGAS_RemovalPolicy

// Begin ScriptStruct FGAS_PolicyConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_PolicyConfig;
class UScriptStruct* FGAS_PolicyConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_PolicyConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_PolicyConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_PolicyConfig>()
{
	return FGAS_PolicyConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationPolicy_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalPriority_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "Comment", "/**\n\x09 *  Priority to determine the order of the effects, let's say we have 2 effects that should be applied on the\n\x09 *  different condition. In the custom functionality we specify which Conditional by passing the Priority number.\n\x09 */" },
		{ "EditCondition", "ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnBeginCondition || ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnEndCondition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Priority to determine the order of the effects, let's say we have 2 effects that should be applied on the\ndifferent condition. In the custom functionality we specify which Conditional by passing the Priority number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReApplyOnEndCondition_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "Comment", "/**\n\x09 * Whether to re-apply an Effect / Tag that was applied on BeginOverlap with Removal Policy RemoveOnBeginCondition\n\x09 * and we would like to re-apply it on EndCondition.\n\x09 * TODO: Possibly expand it so it reapplies on a specific condition.\n\x09 */" },
		{ "EditCondition", "RemovalPolicy == EGAS_RemovalPolicy::RemoveOnBeginCondition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Whether to re-apply an Effect / Tag that was applied on BeginOverlap with Removal Policy RemoveOnBeginCondition\nand we would like to re-apply it on EndCondition.\nTODO: Possibly expand it so it reapplies on a specific condition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "EditCondition", "ApplicationPolicy != EGAS_ApplicationPolicy::ApplyOnEndOverlap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveEvenIfConditionNotMet_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "Comment", "/** Whether to remove the effect even if the condition is not met and the Character leaves the Overlap. */" },
		{ "EditCondition", "RemovalPolicy == EGAS_RemovalPolicy::RemoveOnEndCondition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Whether to remove the effect even if the condition is not met and the Character leaves the Overlap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToEnemies_MetaData[] = {
		{ "Category", "Effect Base|Policy Config" },
		{ "Comment", "/** Whether to apply the effect to the enemies. */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Whether to apply the effect to the enemies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplicationPolicy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConditionalPriority;
	static void NewProp_bReApplyOnEndCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReApplyOnEndCondition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
	static void NewProp_bRemoveEvenIfConditionNotMet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveEvenIfConditionNotMet;
	static void NewProp_bApplyToEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_PolicyConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ApplicationPolicy = { "ApplicationPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_PolicyConfig, ApplicationPolicy), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationPolicy_MetaData), NewProp_ApplicationPolicy_MetaData) }; // 2472791399
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ConditionalPriority = { "ConditionalPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_PolicyConfig, ConditionalPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalPriority_MetaData), NewProp_ConditionalPriority_MetaData) };
void Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bReApplyOnEndCondition_SetBit(void* Obj)
{
	((FGAS_PolicyConfig*)Obj)->bReApplyOnEndCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bReApplyOnEndCondition = { "bReApplyOnEndCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_PolicyConfig), &Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bReApplyOnEndCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReApplyOnEndCondition_MetaData), NewProp_bReApplyOnEndCondition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_PolicyConfig, RemovalPolicy), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_RemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalPolicy_MetaData), NewProp_RemovalPolicy_MetaData) }; // 258078430
void Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bRemoveEvenIfConditionNotMet_SetBit(void* Obj)
{
	((FGAS_PolicyConfig*)Obj)->bRemoveEvenIfConditionNotMet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bRemoveEvenIfConditionNotMet = { "bRemoveEvenIfConditionNotMet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_PolicyConfig), &Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bRemoveEvenIfConditionNotMet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveEvenIfConditionNotMet_MetaData), NewProp_bRemoveEvenIfConditionNotMet_MetaData) };
void Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bApplyToEnemies_SetBit(void* Obj)
{
	((FGAS_PolicyConfig*)Obj)->bApplyToEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bApplyToEnemies = { "bApplyToEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_PolicyConfig), &Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bApplyToEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToEnemies_MetaData), NewProp_bApplyToEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_ConditionalPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bReApplyOnEndCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_RemovalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_RemovalPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bRemoveEvenIfConditionNotMet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewProp_bApplyToEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_PolicyConfig",
	Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::PropPointers),
	sizeof(FGAS_PolicyConfig),
	alignof(FGAS_PolicyConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_PolicyConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.InnerSingleton, Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_PolicyConfig.InnerSingleton;
}
// End ScriptStruct FGAS_PolicyConfig

// Begin ScriptStruct FGAS_GameplayEffectConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig;
class UScriptStruct* FGAS_GameplayEffectConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_GameplayEffectConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_GameplayEffectConfig>()
{
	return FGAS_GameplayEffectConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Configuration for the GameplayEffect, it allows to set the level of the effect and the PolicyConfig.\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Configuration for the GameplayEffect, it allows to set the level of the effect and the PolicyConfig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects|Config" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolicyConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects|Config" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolicyConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_GameplayEffectConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectConfig, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::NewProp_PolicyConfig = { "PolicyConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayEffectConfig, PolicyConfig), Z_Construct_UScriptStruct_FGAS_PolicyConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolicyConfig_MetaData), NewProp_PolicyConfig_MetaData) }; // 1454029934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::NewProp_EffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::NewProp_PolicyConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_GameplayEffectConfig",
	Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::PropPointers),
	sizeof(FGAS_GameplayEffectConfig),
	alignof(FGAS_GameplayEffectConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.InnerSingleton, Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig.InnerSingleton;
}
// End ScriptStruct FGAS_GameplayEffectConfig

// Begin ScriptStruct FGAS_GameplayTagConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig;
class UScriptStruct* FGAS_GameplayTagConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_GameplayTagConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_GameplayTagConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_GameplayTagConfig>()
{
	return FGAS_GameplayTagConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Configuration for the GameplayTags, it allows to set the size of the tag and the PolicyConfig.\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Configuration for the GameplayTags, it allows to set the size of the tag and the PolicyConfig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagSize_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags|Config" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolicyConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags|Config" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolicyConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_GameplayTagConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::NewProp_TagSize = { "TagSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayTagConfig, TagSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagSize_MetaData), NewProp_TagSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::NewProp_PolicyConfig = { "PolicyConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_GameplayTagConfig, PolicyConfig), Z_Construct_UScriptStruct_FGAS_PolicyConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolicyConfig_MetaData), NewProp_PolicyConfig_MetaData) }; // 1454029934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::NewProp_TagSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::NewProp_PolicyConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_GameplayTagConfig",
	Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::PropPointers),
	sizeof(FGAS_GameplayTagConfig),
	alignof(FGAS_GameplayTagConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_GameplayTagConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.InnerSingleton, Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig.InnerSingleton;
}
// End ScriptStruct FGAS_GameplayTagConfig

// Begin ScriptStruct FGAS_StoredGameplayTagInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo;
class UScriptStruct* FGAS_StoredGameplayTagInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_StoredGameplayTagInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_StoredGameplayTagInfo>()
{
	return FGAS_StoredGameplayTagInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to store the GameplayTag Config for later removal\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Struct to store the GameplayTag Config for later removal" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_StoredGameplayTagInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_StoredGameplayTagInfo",
	nullptr,
	0,
	sizeof(FGAS_StoredGameplayTagInfo),
	alignof(FGAS_StoredGameplayTagInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.InnerSingleton, Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo.InnerSingleton;
}
// End ScriptStruct FGAS_StoredGameplayTagInfo

// Begin ScriptStruct FGAS_StoredActiveGameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect;
class UScriptStruct* FGAS_StoredActiveGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_StoredActiveGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_StoredActiveGameplayEffect>()
{
	return FGAS_StoredActiveGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to store the ActiveGameplayEffect Config for later removal\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Struct to store the ActiveGameplayEffect Config for later removal" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_StoredActiveGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_StoredActiveGameplayEffect",
	nullptr,
	0,
	sizeof(FGAS_StoredActiveGameplayEffect),
	alignof(FGAS_StoredActiveGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect.InnerSingleton;
}
// End ScriptStruct FGAS_StoredActiveGameplayEffect

// Begin ScriptStruct FGAS_OverlapModificationsConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig;
class UScriptStruct* FGAS_OverlapModificationsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig, (UObject*)Z_Construct_UPackage__Script_EannaGameplayAbilitySystem(), TEXT("GAS_OverlapModificationsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGAS_OverlapModificationsConfig>()
{
	return FGAS_OverlapModificationsConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Main struct that holds the GameplayEffects and GameplayTags configurations with the necessary functions to apply and remove them.\n */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Main struct that holds the GameplayEffects and GameplayTags configurations with the necessary functions to apply and remove them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsAmount_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "Comment", "/*\n\x09 * GameplayEffects\n\x09 */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "* GameplayEffects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSameEffectConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "Comment", "/**\n\x09 * Whether to use the same Effect Config for all the effects or use different ones.\n\x09 * If set to true, it will use the EffectConfig for all the effects, otherwise it will use the MultipleEffectsConfig.\n\x09 */" },
		{ "EditCondition", "EffectsAmount == EGAS_ComponentAmount::Multiple" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Whether to use the same Effect Config for all the effects or use different ones.\nIf set to true, it will use the EffectConfig for all the effects, otherwise it will use the MultipleEffectsConfig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectToApply_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "Comment", "/** The Effect to apply, if the EffectsAmount is set to Single. */" },
		{ "EditCondition", "EffectsAmount == EGAS_ComponentAmount::Single" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Effect to apply, if the EffectsAmount is set to Single." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsToApply_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "Comment", "/** The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to true. */" },
		{ "EditCondition", "(EffectsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameEffectConfig)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "EditCondition", "EffectsAmount == EGAS_ComponentAmount::Single || (EffectsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameEffectConfig)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultipleEffectsConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayEffects" },
		{ "Comment", "/** The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to false. */" },
		{ "EditCondition", "EffectsAmount == EGAS_ComponentAmount::Multiple && !bShouldUseSameEffectConfig" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsAmount_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "Comment", "/*\n\x09 * GameplayTags\n\x09 */" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "* GameplayTags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSameTagConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "Comment", "/**\n\x09 * Whether to use the same Tag Config for all the tags or use different ones.\n\x09 * If set to true, it will use the TagConfig for all the tags, otherwise it will use the MultipleTagsConfig.\n\x09 */" },
		{ "EditCondition", "TagsAmount == EGAS_ComponentAmount::Multiple" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "Whether to use the same Tag Config for all the tags or use different ones.\nIf set to true, it will use the TagConfig for all the tags, otherwise it will use the MultipleTagsConfig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagToApply_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "Comment", "/** The Tag to apply, if the TagsAmount is set to Single. */" },
		{ "EditCondition", "TagsAmount == EGAS_ComponentAmount::Single" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Tag to apply, if the TagsAmount is set to Single." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToApply_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "Comment", "/** The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to true. */" },
		{ "EditCondition", "TagsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameTagConfig" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "EditCondition", "TagsAmount == EGAS_ComponentAmount::Single || (TagsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameTagConfig)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultipleTagsConfig_MetaData[] = {
		{ "Category", "Effect Base|GameplayTags" },
		{ "Comment", "/** The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to false. */" },
		{ "EditCondition", "TagsAmount == EGAS_ComponentAmount::Multiple && !bShouldUseSameTagConfig" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
		{ "ToolTip", "The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffectActors/GAS_OverlapModificationsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectsAmount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectsAmount;
	static void NewProp_bShouldUseSameEffectConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSameEffectConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectToApply;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectsToApply_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleEffectsConfig_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MultipleEffectsConfig_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MultipleEffectsConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagsAmount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagsAmount;
	static void NewProp_bShouldUseSameTagConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSameTagConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleTagsConfig_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleTagsConfig_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MultipleTagsConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAS_OverlapModificationsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsAmount = { "EffectsAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, EffectsAmount), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsAmount_MetaData), NewProp_EffectsAmount_MetaData) }; // 1135137727
void Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameEffectConfig_SetBit(void* Obj)
{
	((FGAS_OverlapModificationsConfig*)Obj)->bShouldUseSameEffectConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameEffectConfig = { "bShouldUseSameEffectConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_OverlapModificationsConfig), &Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameEffectConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldUseSameEffectConfig_MetaData), NewProp_bShouldUseSameEffectConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectToApply = { "EffectToApply", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, EffectToApply), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectToApply_MetaData), NewProp_EffectToApply_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsToApply_Inner = { "EffectsToApply", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsToApply = { "EffectsToApply", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, EffectsToApply), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsToApply_MetaData), NewProp_EffectsToApply_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectConfig = { "EffectConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, EffectConfig), Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectConfig_MetaData), NewProp_EffectConfig_MetaData) }; // 360488966
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig_ValueProp = { "MultipleEffectsConfig", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig, METADATA_PARAMS(0, nullptr) }; // 360488966
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig_Key_KeyProp = { "MultipleEffectsConfig_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig = { "MultipleEffectsConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, MultipleEffectsConfig), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultipleEffectsConfig_MetaData), NewProp_MultipleEffectsConfig_MetaData) }; // 360488966
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsAmount = { "TagsAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, TagsAmount), Z_Construct_UEnum_EannaGameplayAbilitySystem_EGAS_ComponentAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsAmount_MetaData), NewProp_TagsAmount_MetaData) }; // 1135137727
void Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameTagConfig_SetBit(void* Obj)
{
	((FGAS_OverlapModificationsConfig*)Obj)->bShouldUseSameTagConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameTagConfig = { "bShouldUseSameTagConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGAS_OverlapModificationsConfig), &Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameTagConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldUseSameTagConfig_MetaData), NewProp_bShouldUseSameTagConfig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagToApply = { "TagToApply", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, TagToApply), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagToApply_MetaData), NewProp_TagToApply_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsToApply = { "TagsToApply", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, TagsToApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToApply_MetaData), NewProp_TagsToApply_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagConfig = { "TagConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, TagConfig), Z_Construct_UScriptStruct_FGAS_GameplayTagConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagConfig_MetaData), NewProp_TagConfig_MetaData) }; // 4158695337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig_ValueProp = { "MultipleTagsConfig", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGAS_GameplayTagConfig, METADATA_PARAMS(0, nullptr) }; // 4158695337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig_Key_KeyProp = { "MultipleTagsConfig_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig = { "MultipleTagsConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, MultipleTagsConfig), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultipleTagsConfig_MetaData), NewProp_MultipleTagsConfig_MetaData) }; // 1298103297 4158695337
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectContextObject = { "EffectContextObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGAS_OverlapModificationsConfig, EffectContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextObject_MetaData), NewProp_EffectContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsAmount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameEffectConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsToApply_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectsToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleEffectsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsAmount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_bShouldUseSameTagConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagsToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_TagConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_MultipleTagsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewProp_EffectContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GAS_OverlapModificationsConfig",
	Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::PropPointers),
	sizeof(FGAS_OverlapModificationsConfig),
	alignof(FGAS_OverlapModificationsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.InnerSingleton, Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig.InnerSingleton;
}
// End ScriptStruct FGAS_OverlapModificationsConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGAS_ComponentAmount_StaticEnum, TEXT("EGAS_ComponentAmount"), &Z_Registration_Info_UEnum_EGAS_ComponentAmount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1135137727U) },
		{ EGAS_ApplicationPolicy_StaticEnum, TEXT("EGAS_ApplicationPolicy"), &Z_Registration_Info_UEnum_EGAS_ApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2472791399U) },
		{ EGAS_RemovalPolicy_StaticEnum, TEXT("EGAS_RemovalPolicy"), &Z_Registration_Info_UEnum_EGAS_RemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 258078430U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGAS_PolicyConfig::StaticStruct, Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics::NewStructOps, TEXT("GAS_PolicyConfig"), &Z_Registration_Info_UScriptStruct_GAS_PolicyConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_PolicyConfig), 1454029934U) },
		{ FGAS_GameplayEffectConfig::StaticStruct, Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics::NewStructOps, TEXT("GAS_GameplayEffectConfig"), &Z_Registration_Info_UScriptStruct_GAS_GameplayEffectConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_GameplayEffectConfig), 360488966U) },
		{ FGAS_GameplayTagConfig::StaticStruct, Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics::NewStructOps, TEXT("GAS_GameplayTagConfig"), &Z_Registration_Info_UScriptStruct_GAS_GameplayTagConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_GameplayTagConfig), 4158695337U) },
		{ FGAS_StoredGameplayTagInfo::StaticStruct, Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics::NewStructOps, TEXT("GAS_StoredGameplayTagInfo"), &Z_Registration_Info_UScriptStruct_GAS_StoredGameplayTagInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_StoredGameplayTagInfo), 3660926018U) },
		{ FGAS_StoredActiveGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics::NewStructOps, TEXT("GAS_StoredActiveGameplayEffect"), &Z_Registration_Info_UScriptStruct_GAS_StoredActiveGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_StoredActiveGameplayEffect), 393801990U) },
		{ FGAS_OverlapModificationsConfig::StaticStruct, Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics::NewStructOps, TEXT("GAS_OverlapModificationsConfig"), &Z_Registration_Info_UScriptStruct_GAS_OverlapModificationsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGAS_OverlapModificationsConfig), 3846683847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_3710732179(TEXT("/Script/EannaGameplayAbilitySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
