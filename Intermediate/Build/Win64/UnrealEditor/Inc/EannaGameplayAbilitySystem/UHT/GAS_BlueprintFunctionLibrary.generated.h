// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS_BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActiveGameplayEffectHandle;
struct FGameplayEffectContextHandle;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGAS_DamageEffectParams;
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_BlueprintFunctionLibrary_generated_h
#error "GAS_BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GAS_BlueprintFunctionLibrary.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_BlueprintFunctionLibrary_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicGEConfig_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FDynamicGEConfig>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDamageEffect);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_BlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGAS_BlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGAS_BlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGAS_BlueprintFunctionLibrary)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_BlueprintFunctionLibrary(UGAS_BlueprintFunctionLibrary&&); \
	UGAS_BlueprintFunctionLibrary(const UGAS_BlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_BlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_BlueprintFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_BlueprintFunctionLibrary) \
	NO_API virtual ~UGAS_BlueprintFunctionLibrary();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_50_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_BlueprintFunctionLibrary>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHitResultBoneName); \
	DECLARE_FUNCTION(execSetKnockbackForce); \
	DECLARE_FUNCTION(execSetDeathImpulse); \
	DECLARE_FUNCTION(execSetDamageType); \
	DECLARE_FUNCTION(execSetDebuffFrequency); \
	DECLARE_FUNCTION(execSetDebuffDuration); \
	DECLARE_FUNCTION(execSetDebuffDamage); \
	DECLARE_FUNCTION(execSetSuccessfulDebuff); \
	DECLARE_FUNCTION(execSetCriticalHit); \
	DECLARE_FUNCTION(execSetBlockedHit); \
	DECLARE_FUNCTION(execGetHitResultBoneName); \
	DECLARE_FUNCTION(execGetKnockbackForce); \
	DECLARE_FUNCTION(execGetDeathImpulse); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetDebuffFrequency); \
	DECLARE_FUNCTION(execGetDebuffDuration); \
	DECLARE_FUNCTION(execGetDebuffDamage); \
	DECLARE_FUNCTION(execIsSuccessfulDebuff); \
	DECLARE_FUNCTION(execIsCriticalHit); \
	DECLARE_FUNCTION(execIsBlockedHit);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_GEContextBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGAS_GEContextBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGAS_GEContextBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGAS_GEContextBlueprintFunctionLibrary)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_GEContextBlueprintFunctionLibrary(UGAS_GEContextBlueprintFunctionLibrary&&); \
	UGAS_GEContextBlueprintFunctionLibrary(const UGAS_GEContextBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_GEContextBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_GEContextBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_GEContextBlueprintFunctionLibrary) \
	NO_API virtual ~UGAS_GEContextBlueprintFunctionLibrary();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_95_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_INCLASS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_GEContextBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_BlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
