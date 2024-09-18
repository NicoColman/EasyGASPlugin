// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/Interfaces/GAS_InterfaceCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_InterfaceCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_InterfaceCharacter();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_InterfaceCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Interface UGAS_InterfaceCharacter Function GetCharacterLevel
struct GAS_InterfaceCharacter_eventGetCharacterLevel_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	GAS_InterfaceCharacter_eventGetCharacterLevel_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IGAS_InterfaceCharacter::GetCharacterLevel() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCharacterLevel instead.");
	GAS_InterfaceCharacter_eventGetCharacterLevel_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UGAS_InterfaceCharacter_GetCharacterLevel = FName(TEXT("GetCharacterLevel"));
int32 IGAS_InterfaceCharacter::Execute_GetCharacterLevel(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGAS_InterfaceCharacter::StaticClass()));
	GAS_InterfaceCharacter_eventGetCharacterLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGAS_InterfaceCharacter_GetCharacterLevel);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IGAS_InterfaceCharacter*)(O->GetNativeInterfaceAddress(UGAS_InterfaceCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->GetCharacterLevel_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Interface|Character" },
		{ "ModuleRelativePath", "Public/Interfaces/GAS_InterfaceCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_InterfaceCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(GAS_InterfaceCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(GAS_InterfaceCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGAS_InterfaceCharacter::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel_Implementation();
	P_NATIVE_END;
}
// End Interface UGAS_InterfaceCharacter Function GetCharacterLevel

// Begin Interface UGAS_InterfaceCharacter
void UGAS_InterfaceCharacter::StaticRegisterNativesUGAS_InterfaceCharacter()
{
	UClass* Class = UGAS_InterfaceCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterLevel", &IGAS_InterfaceCharacter::execGetCharacterLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_InterfaceCharacter);
UClass* Z_Construct_UClass_UGAS_InterfaceCharacter_NoRegister()
{
	return UGAS_InterfaceCharacter::StaticClass();
}
struct Z_Construct_UClass_UGAS_InterfaceCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/GAS_InterfaceCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_InterfaceCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 1654040548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGAS_InterfaceCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::ClassParams = {
	&UGAS_InterfaceCharacter::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_InterfaceCharacter()
{
	if (!Z_Registration_Info_UClass_UGAS_InterfaceCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_InterfaceCharacter.OuterSingleton, Z_Construct_UClass_UGAS_InterfaceCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_InterfaceCharacter.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_InterfaceCharacter>()
{
	return UGAS_InterfaceCharacter::StaticClass();
}
UGAS_InterfaceCharacter::UGAS_InterfaceCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_InterfaceCharacter);
UGAS_InterfaceCharacter::~UGAS_InterfaceCharacter() {}
// End Interface UGAS_InterfaceCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_InterfaceCharacter, UGAS_InterfaceCharacter::StaticClass, TEXT("UGAS_InterfaceCharacter"), &Z_Registration_Info_UClass_UGAS_InterfaceCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_InterfaceCharacter), 399646858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_3549618292(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
