// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS_AbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGameplayAbility;
class UGameplayEffect;
struct FAbilitySpecWrapper;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
struct FGameplayAttribute;
struct FGameplayEffectSpec;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_AbilitySystemComponent_generated_h
#error "GAS_AbilitySystemComponent.generated.h already included, missing '#pragma once' in GAS_AbilitySystemComponent.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_AbilitySystemComponent_generated_h

#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilitySpecWrapper_Statics; \
	EANNAGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EANNAGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FAbilitySpecWrapper>();

#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientEffectApplied_Implementation(UAbilitySystemComponent* ASC, FGameplayEffectSpec const& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); \
	DECLARE_FUNCTION(execClientEffectApplied); \
	DECLARE_FUNCTION(execSetAttributeValueFromTag); \
	DECLARE_FUNCTION(execGetAttributeFromTag); \
	DECLARE_FUNCTION(execGetSpecsFromAbilityTags); \
	DECLARE_FUNCTION(execGetSpecFromAbilityTag); \
	DECLARE_FUNCTION(execGiveAbilitiesWithInputTag); \
	DECLARE_FUNCTION(execGiveAbilityWithInput); \
	DECLARE_FUNCTION(execInitializePassiveGameplayAbilities); \
	DECLARE_FUNCTION(execInitializeGameplayAbilities); \
	DECLARE_FUNCTION(execInitializeAttributes); \
	DECLARE_FUNCTION(execAbilityActorInfoSet);


#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_CALLBACK_WRAPPERS
#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_AbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGAS_AbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGAS_AbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGAS_AbilitySystemComponent*>(this); }


#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_AbilitySystemComponent(UGAS_AbilitySystemComponent&&); \
	UGAS_AbilitySystemComponent(const UGAS_AbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_AbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_AbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_AbilitySystemComponent) \
	NO_API virtual ~UGAS_AbilitySystemComponent();


#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_47_PROLOG
#define FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_CALLBACK_WRAPPERS \
	FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_INCLASS_NO_PURE_DECLS \
	FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_AbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealPlugins_EannaGameplayAbilitySystem_HostProject_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_AbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
