// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GAS_GameplayAbility.generated.h"

/**
 * Custom GameplayAbility class that adds extra base functionality
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	virtual void PreActivate(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, FOnGameplayAbilityEnded::FDelegate* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	/* Tags that will be suspended when this ability is activated, and when this ability ends, the tags will be restored. */
	UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="OwnedTagsCategory"))
	FGameplayTagContainer SuspendOwnedTags;
	/* Parent tags that will be suspended together with child tags when this ability is activated, and when this ability ends, the tags will be restored. */
	UPROPERTY(EditDefaultsOnly, Category = Tags, meta=(Categories="OwnedTagsCategory"))
	FGameplayTagContainer SuspendOwnedParentTags;

private:
	FGameplayTagContainer SuspensionTagsToBeAdded;

	void HandlePreEventSuspensionTags(UAbilitySystemComponent* ASC);
};
