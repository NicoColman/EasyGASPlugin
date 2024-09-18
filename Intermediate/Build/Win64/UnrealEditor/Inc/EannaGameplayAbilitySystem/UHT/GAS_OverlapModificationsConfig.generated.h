// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EffectActors/GAS_OverlapModificationsConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_OverlapModificationsConfig_generated_h
#error "GAS_OverlapModificationsConfig.generated.h already included, missing '#pragma once' in GAS_OverlapModificationsConfig.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_OverlapModificationsConfig_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_PolicyConfig_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_PolicyConfig>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_GameplayEffectConfig_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_GameplayEffectConfig>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_GameplayTagConfig_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_GameplayTagConfig>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_StoredGameplayTagInfo_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_StoredGameplayTagInfo>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_StoredActiveGameplayEffect_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_StoredActiveGameplayEffect>();

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAS_OverlapModificationsConfig_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGAS_OverlapModificationsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_GAS_OverlapModificationsConfig_h


#define FOREACH_ENUM_EGAS_COMPONENTAMOUNT(op) \
	op(EGAS_ComponentAmount::None) \
	op(EGAS_ComponentAmount::Single) \
	op(EGAS_ComponentAmount::Multiple) 

enum class EGAS_ComponentAmount : uint8;
template<> struct TIsUEnumClass<EGAS_ComponentAmount> { enum { Value = true }; };
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ComponentAmount>();

#define FOREACH_ENUM_EGAS_APPLICATIONPOLICY(op) \
	op(EGAS_ApplicationPolicy::ApplyOnBeginOverlap) \
	op(EGAS_ApplicationPolicy::ApplyOnEndOverlap) \
	op(EGAS_ApplicationPolicy::ApplyOnBeginCondition) \
	op(EGAS_ApplicationPolicy::ApplyOnEndCondition) 

enum class EGAS_ApplicationPolicy : uint8;
template<> struct TIsUEnumClass<EGAS_ApplicationPolicy> { enum { Value = true }; };
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ApplicationPolicy>();

#define FOREACH_ENUM_EGAS_REMOVALPOLICY(op) \
	op(EGAS_RemovalPolicy::DoNotRemove) \
	op(EGAS_RemovalPolicy::RemoveOnEndOverlap) \
	op(EGAS_RemovalPolicy::RemoveOnBeginCondition) \
	op(EGAS_RemovalPolicy::RemoveOnEndCondition) 

enum class EGAS_RemovalPolicy : uint8;
template<> struct TIsUEnumClass<EGAS_RemovalPolicy> { enum { Value = true }; };
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_RemovalPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
