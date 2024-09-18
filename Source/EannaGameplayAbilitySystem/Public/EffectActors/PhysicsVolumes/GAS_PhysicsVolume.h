// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "EffectActors/GAS_OverlapModificationsConfig.h"
#include "GameFramework/PhysicsVolume.h"
#include "GAS_PhysicsVolume.generated.h"

class UGAS_DAPhysicsVolume;
class UGameplayEffect;

/**
 *  Highly configurable Physics Volume that can apply Gameplay Effects and Gameplay Tags to actors that overlap with it.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API AGAS_PhysicsVolume : public APhysicsVolume
{
	GENERATED_BODY()

public:
	AGAS_PhysicsVolume();
	virtual void ActorEnteredVolume(AActor* Other) override;
	virtual void ActorLeavingVolume(AActor* Other) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "GASPhysicsVolumeBase")
	TObjectPtr<UGAS_DAPhysicsVolume> PhysicsVolumeDataAsset;

	UPROPERTY(EditAnywhere, Category = "GASPhysicsVolumeBase")
	TSubclassOf<UGameplayEffect> Effect;

	bool bDestroyActorOnOverlapBegin;
	bool bDestroyActorOnOverlapEnd ;
	
	FGAS_OverlapModificationsConfig OverlapModifications;

private:
	UPROPERTY()
	TArray<AActor*> OverlappingActors;
	
};
