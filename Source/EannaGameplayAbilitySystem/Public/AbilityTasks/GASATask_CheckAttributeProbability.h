// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GASATask_CheckAttributeProbability.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckAttributeProbability, bool, bSuccess);

/**
 * Ability task for checking the probability of an attribute, very useful for custom Critical Hit, Dodge, logic.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGASATask_CheckAttributeProbability : public UAbilityTask
{
	GENERATED_BODY()

public:
	/** Instead of passing an attribute, we pass a tag to the attribute. Easier so need to call UAttributeSet on GA. */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"))
	static UGASATask_CheckAttributeProbability* CheckAttributeProbability(UGameplayAbility* OwningAbility, const FGameplayTag& AttributeTag);

	UPROPERTY(BlueprintAssignable)
	FCheckAttributeProbability OnProbabilityChecked;

private:
	virtual void Activate() override;

	FGameplayTag AttributeTag;

	void CalculateProbability() const;
	void OnProbabilityEventReplicated(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
};
