// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilities/GAS_AbilityInputBase.h"
#include "GAS_AbilitySprint.generated.h"

/**
 * 
 */
UCLASS()
class EANNADEMO_API UGAS_AbilitySprint : public UGAS_AbilityInputBase
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	UFUNCTION()
	void WaitInputReleased(float TimeHeld);

protected:
	/** Set GE in BP */
	UPROPERTY(EditAnywhere, Category = "Eanna|Effect")
	TSubclassOf<UGameplayEffect> SpeedBoostEffectClass;

private:
	UPROPERTY()
	FActiveGameplayEffectHandle ActiveEffectHandle;
};
