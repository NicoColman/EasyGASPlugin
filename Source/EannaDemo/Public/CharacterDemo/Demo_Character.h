// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "EannaGameplayAbilitySystem/Public/GAS_AbilitySystemComponent.h"
#include "Demo_Character.generated.h"

class UGAS_AbilitySystemComponent;

UCLASS()
class EANNADEMO_API ADemo_Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ADemo_Character();
	virtual void Tick(float DeltaTime) override;
	virtual void OnRep_PlayerState() override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent;}

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Eanna|Demo")
	TObjectPtr<UGAS_AbilitySystemComponent> AbilitySystemComponent;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent , Category = "Eanna|Demo")
	void InitializeReplicatedAbilitySystem();
};
