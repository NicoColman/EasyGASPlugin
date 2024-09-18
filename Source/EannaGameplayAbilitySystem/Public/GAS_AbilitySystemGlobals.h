// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "GAS_AbilitySystemGlobals.generated.h"

/**
 * IMPORTANT: Initialize the AbilitySystemGlobals, recommended to do it in AssetManager->StartInitialLoading():
 *		UAbilitySystemGlobals::Get().InitGlobalData();
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_AbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_BODY()

	/** Now every time we want to create a new GameplayEffectContext we will use our custom class */
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
};
