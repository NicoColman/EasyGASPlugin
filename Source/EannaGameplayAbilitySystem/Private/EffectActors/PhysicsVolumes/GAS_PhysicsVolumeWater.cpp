// Eanna Entertainment


#include "EffectActors/PhysicsVolumes/GAS_PhysicsVolumeWater.h"

#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"


AGAS_PhysicsVolumeWater::AGAS_PhysicsVolumeWater()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AGAS_PhysicsVolumeWater::ActorEnteredVolume(AActor* Other)
{
	Super::ActorEnteredVolume(Other);

	const ACharacter* Character = Cast<ACharacter>(Other);
	// if (!Character || !Other->Implements<UIntCharPlayerBase>()) return;
    
	const FBox VolumeBounds = GetComponentsBoundingBox(true);
    
	auto& ConditionalStruct = ConditionalMap.Add(Other, FGAS_WaterVolumeConditional());
    
	ConditionalStruct.TimerHandle = FTimerHandle();
	GetWorld()->GetTimerManager().SetTimer(ConditionalStruct.TimerHandle, 
		FTimerDelegate::CreateUObject(this, &AGAS_PhysicsVolumeWater::CheckHeadOverlap, Other, Character, VolumeBounds),
		0.1f, true);
}

void AGAS_PhysicsVolumeWater::CheckHeadOverlap(AActor* Other, const ACharacter* Character, const FBox VolumeBounds)
{
	if (!ConditionalMap.Contains(Other)) return;

	auto& [bIsHeadUnderOverlap, bIsSpineUnderOverlap, TimerHandle] = ConditionalMap[Other];
	const bool bHeadUnderOverlap = VolumeBounds.IsInside(Character->GetMesh()->GetSocketLocation("head"));
	const bool bSpineUnderOverlap = VolumeBounds.IsInside(Character->GetMesh()->GetSocketLocation("spine_03"));
    
	if (bHeadUnderOverlap != bIsHeadUnderOverlap)
	{
		bIsHeadUnderOverlap = bHeadUnderOverlap;
		ShouldApplyOrRemoveHeadUnderWaterConditionalEffects(Other, bIsHeadUnderOverlap);
	}
	if (bSpineUnderOverlap != bIsSpineUnderOverlap)
	{
		bIsSpineUnderOverlap = bSpineUnderOverlap;
		ShouldApplyOrRemoveSpineUnderWaterConditionalEffects(Other, bIsSpineUnderOverlap);
	}
}

void AGAS_PhysicsVolumeWater::ActorLeavingVolume(AActor* Other)
{
	Super::ActorLeavingVolume(Other);

	FTimerHandle TimerHandle = ConditionalMap.FindRef(Other).TimerHandle;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	ConditionalMap.Remove(Other);
}

void AGAS_PhysicsVolumeWater::ShouldApplyOrRemoveHeadUnderWaterConditionalEffects(AActor* TargetActor,
	const bool bHeadUnderOverlap)
{
	bHeadUnderOverlap ?
		OverlapModifications.OnBeginCondition(TargetActor, 1) : OverlapModifications.OnEndCondition(TargetActor, 1);
}

void AGAS_PhysicsVolumeWater::ShouldApplyOrRemoveSpineUnderWaterConditionalEffects(AActor* TargetActor,
	const bool bSpineUnderOverlap)
{
	bSpineUnderOverlap ?
		OverlapModifications.OnBeginCondition(TargetActor, 0) : OverlapModifications.OnEndCondition(TargetActor, 0);
}
