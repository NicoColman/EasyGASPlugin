// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Input_PlayerController.generated.h"

struct FGameplayTag;
class APawn;
class UInput_DAInputConfig;
class UInputAction;
class UInputMappingContext;
class UGAS_AbilitySystemComponent;
struct FInputActionValue;
/**
 * 
 */
UCLASS()
class EANNAINPUT_API AInput_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AInput_PlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY()
	TObjectPtr<APawn> ControlledPawn;
	
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> PlayerBaseContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MoveAction;
	
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> LookAction;
	
	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);

	/** Data Asset */
	UPROPERTY(EditDefaultsOnly, Category="DataAsset")
	TObjectPtr<UInput_DAInputConfig> InputConfigDataAsset;

	TObjectPtr<UGAS_AbilitySystemComponent> GASASC;
	UGAS_AbilitySystemComponent* GetGASASC();

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);
};
