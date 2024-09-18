// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "Demo_AssetManager.generated.h"

/**
 * Asset Manager example, this should be replaced with your own Asset Manager class, remember to update the DefaultEngine.ini [AssetManager] section.
 * We use the Asset Manager to load the NativeGameplayTags and the AbilitySystemGlobals.
 *
 * Added in DefaultEngine.ini:
 *		[/Script/Engine.Engine]
 *		+ActiveGameNameRedirects=(OldGameName="TP_ThirdPersonBP",NewGameName="/Script/EannaMMAS")
 *		+ActiveGameNameRedirects=(OldGameName="/Script/TP_ThirdPersonBP",NewGameName="/Script/EannaMMAS")
 *		AssetManagerClassName=/Script/EannaDemo.Demo_AssetManager
 *
 * // Here we set the AssetManagerClassName to our custom AssetManager class: YourModuleName.YourAssetManagerClassName
 *
 *	For using our custom AbilitySystemGlobals class we need to add the following to the DefaultGame.ini:
 *		[/Script/GameplayAbilities.AbilitySystemGlobals]
 *		+AbilitySystemGlobalsClassName="/Script/EannaGameplayAbilitySystem.GAS_AbilitySystemGlobals"
 */
UCLASS()
class EANNADEMO_API UDemo_AssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	static UDemo_AssetManager& Get();

	virtual void StartInitialLoading() override;
};
