// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaDemo/Public/CharacterDemo/Demo_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo_Character() {}

// Begin Cross Module References
EANNADEMO_API UClass* Z_Construct_UClass_ADemo_Character();
EANNADEMO_API UClass* Z_Construct_UClass_ADemo_Character_NoRegister();
EANNAGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaDemo();
// End Cross Module References

// Begin Class ADemo_Character Function InitializeReplicatedAbilitySystem
static FName NAME_ADemo_Character_InitializeReplicatedAbilitySystem = FName(TEXT("InitializeReplicatedAbilitySystem"));
void ADemo_Character::InitializeReplicatedAbilitySystem()
{
	ProcessEvent(FindFunctionChecked(NAME_ADemo_Character_InitializeReplicatedAbilitySystem),NULL);
}
struct Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eanna|Demo" },
		{ "ModuleRelativePath", "Public/CharacterDemo/Demo_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemo_Character, nullptr, "InitializeReplicatedAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADemo_Character::execInitializeReplicatedAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeReplicatedAbilitySystem_Implementation();
	P_NATIVE_END;
}
// End Class ADemo_Character Function InitializeReplicatedAbilitySystem

// Begin Class ADemo_Character
void ADemo_Character::StaticRegisterNativesADemo_Character()
{
	UClass* Class = ADemo_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeReplicatedAbilitySystem", &ADemo_Character::execInitializeReplicatedAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemo_Character);
UClass* Z_Construct_UClass_ADemo_Character_NoRegister()
{
	return ADemo_Character::StaticClass();
}
struct Z_Construct_UClass_ADemo_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterDemo/Demo_Character.h" },
		{ "ModuleRelativePath", "Public/CharacterDemo/Demo_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Eanna|Demo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterDemo/Demo_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemo_Character_InitializeReplicatedAbilitySystem, "InitializeReplicatedAbilitySystem" }, // 3297794423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemo_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemo_Character_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemo_Character, AbilitySystemComponent), Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemo_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemo_Character_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemo_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemo_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemo_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADemo_Character_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ADemo_Character, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemo_Character_Statics::ClassParams = {
	&ADemo_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADemo_Character_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemo_Character_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemo_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemo_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemo_Character()
{
	if (!Z_Registration_Info_UClass_ADemo_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemo_Character.OuterSingleton, Z_Construct_UClass_ADemo_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemo_Character.OuterSingleton;
}
template<> EANNADEMO_API UClass* StaticClass<ADemo_Character>()
{
	return ADemo_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemo_Character);
ADemo_Character::~ADemo_Character() {}
// End Class ADemo_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemo_Character, ADemo_Character::StaticClass, TEXT("ADemo_Character"), &Z_Registration_Info_UClass_ADemo_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemo_Character), 4087214375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_4274505849(TEXT("/Script/EannaDemo"),
	Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
