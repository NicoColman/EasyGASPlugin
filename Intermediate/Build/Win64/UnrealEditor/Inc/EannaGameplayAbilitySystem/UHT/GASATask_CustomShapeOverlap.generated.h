// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GASATask_CustomShapeOverlap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class UGASATask_CustomShapeOverlap;
class UInterface;
class UPrimitiveComponent;
class USceneComponent;
struct FGameplayAbilityTargetDataHandle;
struct FHitResult;
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GASATask_CustomShapeOverlap_generated_h
#error "GASATask_CustomShapeOverlap.generated.h already included, missing '#pragma once' in GASATask_CustomShapeOverlap.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GASATask_CustomShapeOverlap_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_13_DELEGATE \
EANNAGAMEPLAYABILITYSYSTEM_API void FOnOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& OnOverlapSignature, FGameplayAbilityTargetDataHandle const& DataHandle);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execBP_DetectCustomSphereOverlap); \
	DECLARE_FUNCTION(execBP_DetectCustomBoxOverlap);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASATask_CustomShapeOverlap(); \
	friend struct Z_Construct_UClass_UGASATask_CustomShapeOverlap_Statics; \
public: \
	DECLARE_CLASS(UGASATask_CustomShapeOverlap, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGASATask_CustomShapeOverlap)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGASATask_CustomShapeOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGASATask_CustomShapeOverlap(UGASATask_CustomShapeOverlap&&); \
	UGASATask_CustomShapeOverlap(const UGASATask_CustomShapeOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASATask_CustomShapeOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASATask_CustomShapeOverlap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASATask_CustomShapeOverlap) \
	NO_API virtual ~UGASATask_CustomShapeOverlap();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_18_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGASATask_CustomShapeOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_AbilityTasks_GASATask_CustomShapeOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
