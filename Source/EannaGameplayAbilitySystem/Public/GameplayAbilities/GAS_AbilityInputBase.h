// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GAS_GameplayAbility.h"
#include "GAS_AbilityInputBase.generated.h"

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_AbilityInputBase : public UGAS_GameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Eanna|AbilityInput")
	FGameplayTag InputTag;
};
