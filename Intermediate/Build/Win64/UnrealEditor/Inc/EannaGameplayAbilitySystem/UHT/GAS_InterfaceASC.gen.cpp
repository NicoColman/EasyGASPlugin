// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaGameplayAbilitySystem/Public/Interfaces/GAS_InterfaceASC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_InterfaceASC() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_InterfaceASC();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_InterfaceASC_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaGameplayAbilitySystem();
// End Cross Module References

// Begin Interface UGAS_InterfaceASC Function InitializeAbilitySystem
struct GAS_InterfaceASC_eventInitializeAbilitySystem_Parms
{
	AActor* InActor;
	AActor* InAvatar;
	TArray<TSubclassOf<UGameplayEffect> > InGameplayEffects;
	int32 InLevel;
	TArray<TSubclassOf<UGameplayAbility> > InAbilities;
	TArray<TSubclassOf<UGameplayAbility> > InPassiveAbilities;
	int32 InAbilitiesLevel;
};
void IGAS_InterfaceASC::InitializeAbilitySystem(AActor* InActor, AActor* InAvatar, TArray<TSubclassOf<UGameplayEffect> > const& InGameplayEffects, const int32 InLevel, TArray<TSubclassOf<UGameplayAbility> > const& InAbilities, TArray<TSubclassOf<UGameplayAbility> > const& InPassiveAbilities, const int32 InAbilitiesLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeAbilitySystem instead.");
}
static FName NAME_UGAS_InterfaceASC_InitializeAbilitySystem = FName(TEXT("InitializeAbilitySystem"));
void IGAS_InterfaceASC::Execute_InitializeAbilitySystem(UObject* O, AActor* InActor, AActor* InAvatar, TArray<TSubclassOf<UGameplayEffect> > const& InGameplayEffects, const int32 InLevel, TArray<TSubclassOf<UGameplayAbility> > const& InAbilities, TArray<TSubclassOf<UGameplayAbility> > const& InPassiveAbilities, const int32 InAbilitiesLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGAS_InterfaceASC::StaticClass()));
	GAS_InterfaceASC_eventInitializeAbilitySystem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGAS_InterfaceASC_InitializeAbilitySystem);
	if (Func)
	{
		Parms.InActor=InActor;
		Parms.InAvatar=InAvatar;
		Parms.InGameplayEffects=InGameplayEffects;
		Parms.InLevel=InLevel;
		Parms.InAbilities=InAbilities;
		Parms.InPassiveAbilities=InPassiveAbilities;
		Parms.InAbilitiesLevel=InAbilitiesLevel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGAS_InterfaceASC*)(O->GetNativeInterfaceAddress(UGAS_InterfaceASC::StaticClass())))
	{
		I->InitializeAbilitySystem_Implementation(InActor,InAvatar,InGameplayEffects,InLevel,InAbilities,InPassiveAbilities,InAbilitiesLevel);
	}
}
struct Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eanna|GAS|Init" },
		{ "ModuleRelativePath", "Public/Interfaces/GAS_InterfaceASC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the Ability System Component, Attributes, and Active/Passive Gameplay Abilities. @param InActor: The actor where we constructed the ASC, for a player this would be the APlayerState, for an AI this would be the ACharacter. @param InAvatar: The playable AActor, in case of the player this would be the ACharacter, in case of an AI this would be the ACharacter. @param InGameplayEffects: The array of GameplayEffects to apply to the ASC.\n@param InLevel: The level of the GameplayEffects.\n@param InAbilities: The array of active GameplayAbilities to give to the ASC.\n@param InPassiveAbilities: The array of passive GameplayAbilities to give to the ASC.\n@param InAbilitiesLevel: The level of the GameplayAbilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameplayEffects_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPassiveAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAbilitiesLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAvatar;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InGameplayEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPassiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPassiveAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InAbilitiesLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAvatar = { "InAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InGameplayEffects_Inner = { "InGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InGameplayEffects = { "InGameplayEffects", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameplayEffects_MetaData), NewProp_InGameplayEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLevel_MetaData), NewProp_InLevel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilities_Inner = { "InAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilities = { "InAbilities", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAbilities_MetaData), NewProp_InAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InPassiveAbilities_Inner = { "InPassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InPassiveAbilities = { "InPassiveAbilities", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InPassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPassiveAbilities_MetaData), NewProp_InPassiveAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilitiesLevel = { "InAbilitiesLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms, InAbilitiesLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAbilitiesLevel_MetaData), NewProp_InAbilitiesLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InPassiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InPassiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::NewProp_InAbilitiesLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_InterfaceASC, nullptr, "InitializeAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::PropPointers), sizeof(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(GAS_InterfaceASC_eventInitializeAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGAS_InterfaceASC::execInitializeAbilitySystem)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT(AActor,Z_Param_InAvatar);
	P_GET_TARRAY_REF(TSubclassOf<UGameplayEffect>,Z_Param_Out_InGameplayEffects);
	P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_InAbilities);
	P_GET_TARRAY_REF(TSubclassOf<UGameplayAbility>,Z_Param_Out_InPassiveAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_InAbilitiesLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbilitySystem_Implementation(Z_Param_InActor,Z_Param_InAvatar,Z_Param_Out_InGameplayEffects,Z_Param_InLevel,Z_Param_Out_InAbilities,Z_Param_Out_InPassiveAbilities,Z_Param_InAbilitiesLevel);
	P_NATIVE_END;
}
// End Interface UGAS_InterfaceASC Function InitializeAbilitySystem

// Begin Interface UGAS_InterfaceASC
void UGAS_InterfaceASC::StaticRegisterNativesUGAS_InterfaceASC()
{
	UClass* Class = UGAS_InterfaceASC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAbilitySystem", &IGAS_InterfaceASC::execInitializeAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_InterfaceASC);
UClass* Z_Construct_UClass_UGAS_InterfaceASC_NoRegister()
{
	return UGAS_InterfaceASC::StaticClass();
}
struct Z_Construct_UClass_UGAS_InterfaceASC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/GAS_InterfaceASC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_InterfaceASC_InitializeAbilitySystem, "InitializeAbilitySystem" }, // 3140747325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGAS_InterfaceASC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGAS_InterfaceASC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_InterfaceASC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_InterfaceASC_Statics::ClassParams = {
	&UGAS_InterfaceASC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_InterfaceASC_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_InterfaceASC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_InterfaceASC()
{
	if (!Z_Registration_Info_UClass_UGAS_InterfaceASC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_InterfaceASC.OuterSingleton, Z_Construct_UClass_UGAS_InterfaceASC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_InterfaceASC.OuterSingleton;
}
template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGAS_InterfaceASC>()
{
	return UGAS_InterfaceASC::StaticClass();
}
UGAS_InterfaceASC::UGAS_InterfaceASC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_InterfaceASC);
UGAS_InterfaceASC::~UGAS_InterfaceASC() {}
// End Interface UGAS_InterfaceASC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_InterfaceASC, UGAS_InterfaceASC::StaticClass, TEXT("UGAS_InterfaceASC"), &Z_Registration_Info_UClass_UGAS_InterfaceASC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_InterfaceASC), 3943906304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_2229060817(TEXT("/Script/EannaGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
