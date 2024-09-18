// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EffectActors/OverlapActors/GAS_DAOverlapActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_DAOverlapActor_generated_h
#error "GAS_DAOverlapActor.generated.h already included, missing '#pragma once' in GAS_DAOverlapActor.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_DAOverlapActor_generated_h

#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_DAOverlapActor(); \
	friend struct Z_Construct_UClass_UGAS_DAOverlapActor_Statics; \
public: \
	DECLARE_CLASS(UGAS_DAOverlapActor, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EannaGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGAS_DAOverlapActor)


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAS_DAOverlapActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_DAOverlapActor(UGAS_DAOverlapActor&&); \
	UGAS_DAOverlapActor(const UGAS_DAOverlapActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_DAOverlapActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_DAOverlapActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAS_DAOverlapActor) \
	NO_API virtual ~UGAS_DAOverlapActor();


#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_27_PROLOG
#define FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EANNAGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGAS_DAOverlapActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_EffectActors_OverlapActors_GAS_DAOverlapActor_h


#define FOREACH_ENUM_EGAS_OBJECTTYPE(op) \
	op(EGAS_ObjectType::None) \
	op(EGAS_ObjectType::StaticMesh) \
	op(EGAS_ObjectType::SkeletalMesh) 

enum class EGAS_ObjectType : uint8;
template<> struct TIsUEnumClass<EGAS_ObjectType> { enum { Value = true }; };
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_ObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
