// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS_StrucsAndEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EANNAGAMEPLAYABILITYSYSTEM_GAS_StrucsAndEnums_generated_h
#error "GAS_StrucsAndEnums.generated.h already included, missing '#pragma once' in GAS_StrucsAndEnums.h"
#endif
#define EANNAGAMEPLAYABILITYSYSTEM_GAS_StrucsAndEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nicol_OneDrive_Documentos_Unreal_Projects_EannaMMAS_Plugins_EannaGameplayAbilitySystem_Source_EannaGameplayAbilitySystem_Public_GAS_StrucsAndEnums_h


#define FOREACH_ENUM_EGAS_OVERLAPCOMPONENTTYPE(op) \
	op(EGAS_OverlapComponentType::BoxComponent) \
	op(EGAS_OverlapComponentType::SphereComponent) 

enum class EGAS_OverlapComponentType : uint8;
template<> struct TIsUEnumClass<EGAS_OverlapComponentType> { enum { Value = true }; };
template<> EANNAGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGAS_OverlapComponentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
