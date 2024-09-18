// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/GAS_InterfaceCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_InterfaceCharacter_generated_h
#error "GAS_InterfaceCharacter.generated.h already included, missing '#pragma once' in GAS_InterfaceCharacter.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_InterfaceCharacter_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetCharacterLevel_Implementation() const { return 0; }; \
	DECLARE_FUNCTION(execGetCharacterLevel);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_CALLBACK_WRAPPERS
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EANNAGAMEPLAYABILITYSYSTEM_API UGAS_InterfaceCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_InterfaceCharacter(UGAS_InterfaceCharacter&&); \
	UGAS_InterfaceCharacter(const UGAS_InterfaceCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EANNAGAMEPLAYABILITYSYSTEM_API, UGAS_InterfaceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_InterfaceCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAS_InterfaceCharacter) \
	EANNAGAMEPLAYABILITYSYSTEM_API virtual ~UGAS_InterfaceCharacter();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGAS_InterfaceCharacter(); \
	friend struct Z_Construct_UClass_UGAS_InterfaceCharacter_Statics; \
public: \
	DECLARE_CLASS(UGAS_InterfaceCharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), EANNAGAMEPLAYABILITYSYSTEM_API) \
	DECLARE_SERIALIZER(UGAS_InterfaceCharacter)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGAS_InterfaceCharacter() {} \
public: \
	typedef UGAS_InterfaceCharacter UClassType; \
	typedef IGAS_InterfaceCharacter ThisClass; \
	static int32 Execute_GetCharacterLevel(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_10_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_InterfaceCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_Interfaces_GAS_InterfaceCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
