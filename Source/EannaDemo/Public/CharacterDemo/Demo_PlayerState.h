// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GAS_AbilitySystemComponent.h"
#include "Demo_PlayerState.generated.h"

class UGAS_AttributeSet;
/**
 * 
 */
UCLASS()
class EANNADEMO_API ADemo_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ADemo_PlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ASC")
	TObjectPtr<UGAS_AbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "AttributeSet")
	TObjectPtr<UGAS_AttributeSet> AttributeSet;
};
