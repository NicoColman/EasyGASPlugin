// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaDemo/Public/CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AbilitySprint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
EANNADEMO_API UClass* Z_Construct_UClass_UGAS_AbilitySprint();
EANNADEMO_API UClass* Z_Construct_UClass_UGAS_AbilitySprint_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilityInputBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
UPackage* Z_Construct_UPackage__Script_EannaDemo();
// End Cross Module References

// Begin Class UGAS_AbilitySprint Function WaitInputReleased
struct Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics
{
	struct GAS_AbilitySprint_eventWaitInputReleased_Parms
	{
		float TimeHeld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::NewProp_TimeHeld = { "TimeHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilitySprint_eventWaitInputReleased_Parms, TimeHeld), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::NewProp_TimeHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilitySprint, nullptr, "WaitInputReleased", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::GAS_AbilitySprint_eventWaitInputReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::GAS_AbilitySprint_eventWaitInputReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilitySprint::execWaitInputReleased)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeHeld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitInputReleased(Z_Param_TimeHeld);
	P_NATIVE_END;
}
// End Class UGAS_AbilitySprint Function WaitInputReleased

// Begin Class UGAS_AbilitySprint
void UGAS_AbilitySprint::StaticRegisterNativesUGAS_AbilitySprint()
{
	UClass* Class = UGAS_AbilitySprint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitInputReleased", &UGAS_AbilitySprint::execWaitInputReleased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AbilitySprint);
UClass* Z_Construct_UClass_UGAS_AbilitySprint_NoRegister()
{
	return UGAS_AbilitySprint::StaticClass();
}
struct Z_Construct_UClass_UGAS_AbilitySprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h" },
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBoostEffectClass_MetaData[] = {
		{ "Category", "Eanna|Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set GE in BP */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set GE in BP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilitySprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpeedBoostEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_AbilitySprint_WaitInputReleased, "WaitInputReleased" }, // 4207968363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AbilitySprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAS_AbilitySprint_Statics::NewProp_SpeedBoostEffectClass = { "SpeedBoostEffectClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AbilitySprint, SpeedBoostEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBoostEffectClass_MetaData), NewProp_SpeedBoostEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AbilitySprint_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_AbilitySprint, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEffectHandle_MetaData), NewProp_ActiveEffectHandle_MetaData) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_AbilitySprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AbilitySprint_Statics::NewProp_SpeedBoostEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AbilitySprint_Statics::NewProp_ActiveEffectHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_AbilitySprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGAS_AbilityInputBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AbilitySprint_Statics::ClassParams = {
	&UGAS_AbilitySprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGAS_AbilitySprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySprint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilitySprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AbilitySprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AbilitySprint()
{
	if (!Z_Registration_Info_UClass_UGAS_AbilitySprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AbilitySprint.OuterSingleton, Z_Construct_UClass_UGAS_AbilitySprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AbilitySprint.OuterSingleton;
}
template<> EANNADEMO_API UClass* StaticClass<UGAS_AbilitySprint>()
{
	return UGAS_AbilitySprint::StaticClass();
}
UGAS_AbilitySprint::UGAS_AbilitySprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AbilitySprint);
UGAS_AbilitySprint::~UGAS_AbilitySprint() {}
// End Class UGAS_AbilitySprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilitySprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AbilitySprint, UGAS_AbilitySprint::StaticClass, TEXT("UGAS_AbilitySprint"), &Z_Registration_Info_UClass_UGAS_AbilitySprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AbilitySprint), 1184361727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilitySprint_h_936698525(TEXT("/Script/EannaDemo"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilitySprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilitySprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
