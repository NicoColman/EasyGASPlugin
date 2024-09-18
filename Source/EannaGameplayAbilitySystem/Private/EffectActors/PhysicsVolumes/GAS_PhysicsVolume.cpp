// Eanna Entertainment


#include "EffectActors/PhysicsVolumes/GAS_PhysicsVolume.h"

#include "EffectActors/PhysicsVolumes/GAS_DAPhysicsVolume.h"


AGAS_PhysicsVolume::AGAS_PhysicsVolume()
{
	PrimaryActorTick.bCanEverTick = false;
	
	bDestroyActorOnOverlapBegin = false;
	bDestroyActorOnOverlapEnd = false;
}

void AGAS_PhysicsVolume::BeginPlay()
{
	Super::BeginPlay();

	if (!PhysicsVolumeDataAsset) return;
	
	bDestroyActorOnOverlapBegin = PhysicsVolumeDataAsset->bDestroyActorOnOverlapBegin;
	bDestroyActorOnOverlapEnd = PhysicsVolumeDataAsset->bDestroyActorOnOverlapEnd;
	
	OverlapModifications = PhysicsVolumeDataAsset->OverlapModifications;
	OverlapModifications.SetEffectContextObject(this);

	FluidFriction = PhysicsVolumeDataAsset->FluidFriction;
	bWaterVolume = PhysicsVolumeDataAsset->bIsWaterVolume;
}

void AGAS_PhysicsVolume::ActorEnteredVolume(AActor* Other)
{
	// No need to call Super::ActorEnteredVolume(Other) because it's empty

	if (OverlappingActors.Contains(Other)) return;
	OverlappingActors.Add(Other);

	OverlapModifications.OnBeginOverlap(Other);
	
	if (bDestroyActorOnOverlapBegin) Destroy();
}

void AGAS_PhysicsVolume::ActorLeavingVolume(AActor* Other)
{
	// No need to call Super::ActorLeavingVolume(Other) because it's empty

	OverlappingActors.Remove(Other);
	OverlapModifications.OnEndOverlap(Other);

	if (bDestroyActorOnOverlapEnd) Destroy();
}



