// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Input_DAInputConfig.generated.h"

class UInputAction;
struct FGameplayTag;

USTRUCT(BlueprintType)
struct FInput_ActionBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category="EannaInput|DataAsset")
	const UInputAction* InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly, Category="EannaInput|DataAsset")
	FGameplayTag InputTag = FGameplayTag();
	
};

/**
 * 
 */
UCLASS()
class EANNAINPUT_API UInput_DAInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	const UInputAction* GetInputAction(const FGameplayTag& InputTag, bool bLogNotFound = false) const;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="EannaInput|DataAsset")
	TArray<FInput_ActionBase> InputActions;
};
