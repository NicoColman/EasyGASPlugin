// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GAS_PhysicsVolume.h"
#include "UObject/Class.h"
#include "Containers/Map.h"
#include "GameFramework/Actor.h"
#include "GAS_PhysicsVolumeWater.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct EANNAGAMEPLAYABILITYSYSTEM_API FGAS_WaterVolumeConditional
{
	GENERATED_BODY()

	FGAS_WaterVolumeConditional() : bIsHeadUnderOverlap(false), bIsSpineUnderOverlap(false) {}

	bool bIsHeadUnderOverlap;
	bool bIsSpineUnderOverlap;
	FTimerHandle TimerHandle;
};

/**
 * Example class for water physics volume using OnConditional Policies. This class checks if the player's head or spine
 *	is under the water volume so we can apply or remove conditional.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API AGAS_PhysicsVolumeWater : public AGAS_PhysicsVolume
{
	GENERATED_BODY()

public:
	AGAS_PhysicsVolumeWater();
	virtual void ActorEnteredVolume(AActor* Other) override;
	virtual void ActorLeavingVolume(AActor* Other) override;

	UPROPERTY(BlueprintReadOnly, Category = "GAS|WaterVolume")
	TMap<AActor*, FGAS_WaterVolumeConditional> ConditionalMap;

private:
	void CheckHeadOverlap(AActor* Other, const ACharacter* Character, const FBox VolumeBounds);
	void ShouldApplyOrRemoveHeadUnderWaterConditionalEffects(AActor* TargetActor, const bool bHeadUnderOverlap);
	void ShouldApplyOrRemoveSpineUnderWaterConditionalEffects(AActor* TargetActor, const bool bSpineUnderOverlap);
};
