// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterDemo/Demo_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EANNADEMO_Demo_Character_generated_h
#error "Demo_Character.generated.h already included, missing '#pragma once' in Demo_Character.h"
#endif
#define EANNADEMO_Demo_Character_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeReplicatedAbilitySystem_Implementation(); \
	DECLARE_FUNCTION(execInitializeReplicatedAbilitySystem);


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_CALLBACK_WRAPPERS
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemo_Character(); \
	friend struct Z_Construct_UClass_ADemo_Character_Statics; \
public: \
	DECLARE_CLASS(ADemo_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EannaDemo"), NO_API) \
	DECLARE_SERIALIZER(ADemo_Character) \
	virtual UObject* _getUObject() const override { return const_cast<ADemo_Character*>(this); }


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemo_Character(ADemo_Character&&); \
	ADemo_Character(const ADemo_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemo_Character) \
	NO_API virtual ~ADemo_Character();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_13_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_CALLBACK_WRAPPERS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNADEMO_API UClass* StaticClass<class ADemo_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaDemo_Public_CharacterDemo_Demo_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
