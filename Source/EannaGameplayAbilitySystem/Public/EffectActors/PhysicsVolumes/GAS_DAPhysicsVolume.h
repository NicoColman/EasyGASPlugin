// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EffectActors/GAS_OverlapModificationsConfig.h"
#include "Engine/DataAsset.h"
#include "GAS_DAPhysicsVolume.generated.h"

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_DAPhysicsVolume : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** Tag for identifying the effect actor */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Actor")
	FGameplayTag EffectActorTag = FGameplayTag::EmptyTag;

	/** Destroy the actor when an actor overlaps the volume */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Actor", meta = (EditCondition = "!bDestroyActorOnOverlapEnd", EditConditionHides))
	bool bDestroyActorOnOverlapBegin = false;

	/** Destroy the actor when an actor stops overlapping the volume */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Actor", meta = (EditCondition = "!bDestroyActorOnOverlapBegin", EditConditionHides))
	bool bDestroyActorOnOverlapEnd = false;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|Actor")
	float FluidFriction = 0.3f;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|Actor")
	bool bIsWaterVolume = false;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|OverlapModifications")
	FGAS_OverlapModificationsConfig OverlapModifications;
};
