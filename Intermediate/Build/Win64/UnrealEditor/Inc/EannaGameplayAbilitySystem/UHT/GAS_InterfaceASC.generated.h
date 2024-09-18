// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/GAS_InterfaceASC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class UGameplayEffect;
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_InterfaceASC_generated_h
#error "GAS_InterfaceASC.generated.h already included, missing '#pragma once' in GAS_InterfaceASC.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_InterfaceASC_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeAbilitySystem_Implementation(AActor* InActor, AActor* InAvatar, TArray<TSubclassOf<UGameplayEffect> > const& InGameplayEffects, const int32 InLevel, TArray<TSubclassOf<UGameplayAbility> > const& InAbilities, TArray<TSubclassOf<UGameplayAbility> > const& InPassiveAbilities, const int32 InAbilitiesLevel) {}; \
	DECLARE_FUNCTION(execInitializeAbilitySystem);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_CALLBACK_WRAPPERS
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EANNAGAMEPLAYABILITYSYSTEM_API UGAS_InterfaceASC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_InterfaceASC(UGAS_InterfaceASC&&); \
	UGAS_InterfaceASC(const UGAS_InterfaceASC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EANNAGAMEPLAYABILITYSYSTEM_API, UGAS_InterfaceASC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_InterfaceASC); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAS_InterfaceASC) \
	EANNAGAMEPLAYABILITYSYSTEM_API virtual ~UGAS_InterfaceASC();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGAS_InterfaceASC(); \
	friend struct Z_Construct_UClass_UGAS_InterfaceASC_Statics; \
public: \
	DECLARE_CLASS(UGAS_InterfaceASC, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), EANNAGAMEPLAYABILITYSYSTEM_API) \
	DECLARE_SERIALIZER(UGAS_InterfaceASC)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGAS_InterfaceASC() {} \
public: \
	typedef UGAS_InterfaceASC UClassType; \
	typedef IGAS_InterfaceASC ThisClass; \
	static void Execute_InitializeAbilitySystem(UObject* O, AActor* InActor, AActor* InAvatar, TArray<TSubclassOf<UGameplayEffect> > const& InGameplayEffects, const int32 InLevel, TArray<TSubclassOf<UGameplayAbility> > const& InAbilities, TArray<TSubclassOf<UGameplayAbility> > const& InPassiveAbilities, const int32 InAbilitiesLevel); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_18_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_CALLBACK_WRAPPERS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_InterfaceASC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceASC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
