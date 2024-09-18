// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaDemo/Public/CharacterDemo/GameplayAbilities/GAS_AbilityJump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AbilityJump() {}

// Begin Cross Module References
EANNADEMO_API UClass* Z_Construct_UClass_UGAS_AbilityJump();
EANNADEMO_API UClass* Z_Construct_UClass_UGAS_AbilityJump_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilityInputBase();
UPackage* Z_Construct_UPackage__Script_EannaDemo();
// End Cross Module References

// Begin Class UGAS_AbilityJump Function WaitInputRelease
struct Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics
{
	struct GAS_AbilityJump_eventWaitInputRelease_Parms
	{
		float TimeHeld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilityJump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::NewProp_TimeHeld = { "TimeHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AbilityJump_eventWaitInputRelease_Parms, TimeHeld), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::NewProp_TimeHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_AbilityJump, nullptr, "WaitInputRelease", nullptr, nullptr, Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::GAS_AbilityJump_eventWaitInputRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::GAS_AbilityJump_eventWaitInputRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_AbilityJump::execWaitInputRelease)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeHeld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitInputRelease(Z_Param_TimeHeld);
	P_NATIVE_END;
}
// End Class UGAS_AbilityJump Function WaitInputRelease

// Begin Class UGAS_AbilityJump
void UGAS_AbilityJump::StaticRegisterNativesUGAS_AbilityJump()
{
	UClass* Class = UGAS_AbilityJump::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitInputRelease", &UGAS_AbilityJump::execWaitInputRelease },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_AbilityJump);
UClass* Z_Construct_UClass_UGAS_AbilityJump_NoRegister()
{
	return UGAS_AbilityJump::StaticClass();
}
struct Z_Construct_UClass_UGAS_AbilityJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CharacterDemo/GameplayAbilities/GAS_AbilityJump.h" },
		{ "ModuleRelativePath", "Public/CharacterDemo/GameplayAbilities/GAS_AbilityJump.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_AbilityJump_WaitInputRelease, "WaitInputRelease" }, // 2032807683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AbilityJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_AbilityJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGAS_AbilityInputBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AbilityJump_Statics::ClassParams = {
	&UGAS_AbilityJump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AbilityJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_AbilityJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_AbilityJump()
{
	if (!Z_Registration_Info_UClass_UGAS_AbilityJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_AbilityJump.OuterSingleton, Z_Construct_UClass_UGAS_AbilityJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_AbilityJump.OuterSingleton;
}
template<> EANNADEMO_API UClass* StaticClass<UGAS_AbilityJump>()
{
	return UGAS_AbilityJump::StaticClass();
}
UGAS_AbilityJump::UGAS_AbilityJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AbilityJump);
UGAS_AbilityJump::~UGAS_AbilityJump() {}
// End Class UGAS_AbilityJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilityJump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_AbilityJump, UGAS_AbilityJump::StaticClass, TEXT("UGAS_AbilityJump"), &Z_Registration_Info_UClass_UGAS_AbilityJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_AbilityJump), 2891885498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilityJump_h_4103753058(TEXT("/Script/EannaDemo"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilityJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_GameplayAbilities_GAS_AbilityJump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
