// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilities/GAS_AbilityInputBase.h"
#include "GAS_AbilityJump.generated.h"

/**
 * 
 */
UCLASS()
class EANNADEMO_API UGAS_AbilityJump : public UGAS_AbilityInputBase
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void CancelAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateCancelAbility) override;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;

	UFUNCTION()
	void WaitInputRelease(float TimeHeld);
};
