// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEannaDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EannaDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EannaDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_EannaDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EannaDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB9CE1D05,
				0x115B599D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EannaDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EannaDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EannaDemo(Z_Construct_UPackage__Script_EannaDemo, TEXT("/Script/EannaDemo"), Z_Registration_Info_UPackage__Script_EannaDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB9CE1D05, 0x115B599D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
