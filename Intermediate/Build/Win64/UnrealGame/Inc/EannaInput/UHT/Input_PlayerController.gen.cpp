// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EannaInput/Public/Input_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput_PlayerController() {}

// Begin Cross Module References
EANNAINPUT_API UClass* Z_Construct_UClass_AInput_PlayerController();
EANNAINPUT_API UClass* Z_Construct_UClass_AInput_PlayerController_NoRegister();
EANNAINPUT_API UClass* Z_Construct_UClass_UInput_DAInputConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_EannaInput();
// End Cross Module References

// Begin Class AInput_PlayerController
void AInput_PlayerController::StaticRegisterNativesAInput_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInput_PlayerController);
UClass* Z_Construct_UClass_AInput_PlayerController_NoRegister()
{
	return AInput_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AInput_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Input_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBaseContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigDataAsset_MetaData[] = {
		{ "Category", "DataAsset" },
		{ "Comment", "/** Data Asset */" },
		{ "ModuleRelativePath", "Public/Input_PlayerController.h" },
		{ "ToolTip", "Data Asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBaseContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInput_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInput_PlayerController, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledPawn_MetaData), NewProp_ControlledPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_PlayerBaseContext = { "PlayerBaseContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInput_PlayerController, PlayerBaseContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBaseContext_MetaData), NewProp_PlayerBaseContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInput_PlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInput_PlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_InputConfigDataAsset = { "InputConfigDataAsset", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInput_PlayerController, InputConfigDataAsset), Z_Construct_UClass_UInput_DAInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigDataAsset_MetaData), NewProp_InputConfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInput_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_PlayerBaseContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInput_PlayerController_Statics::NewProp_InputConfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInput_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInput_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_EannaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInput_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInput_PlayerController_Statics::ClassParams = {
	&AInput_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInput_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInput_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInput_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AInput_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInput_PlayerController()
{
	if (!Z_Registration_Info_UClass_AInput_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInput_PlayerController.OuterSingleton, Z_Construct_UClass_AInput_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInput_PlayerController.OuterSingleton;
}
template<> EANNAINPUT_API UClass* StaticClass<AInput_PlayerController>()
{
	return AInput_PlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInput_PlayerController);
AInput_PlayerController::~AInput_PlayerController() {}
// End Class AInput_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInput_PlayerController, AInput_PlayerController::StaticClass, TEXT("AInput_PlayerController"), &Z_Registration_Info_UClass_AInput_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInput_PlayerController), 2318418892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_PlayerController_h_1784879643(TEXT("/Script/EannaInput"),
	Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaInput_Public_Input_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
