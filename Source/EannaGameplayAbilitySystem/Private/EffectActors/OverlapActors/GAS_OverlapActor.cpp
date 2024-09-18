// Eanna Entertainment


#include "EffectActors/OverlapActors/GAS_OverlapActor.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EannaGameplayAbilitySystem/GAS_LogChannel.h"


AGAS_OverlapActor::AGAS_OverlapActor()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	bDestroyOnOverlapBegin = false;
	bDestroyOnEffectOverlapEnd = false;

#if WITH_EDITOR
	/** We only create this component in editor, so we can see the bounds of the actor */
	CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	// CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
#endif
}

void AGAS_OverlapActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	SetReplicateMovement(true);
}

void AGAS_OverlapActor::BeginPlay()
{
	Super::BeginPlay();

	if (!OverlapActorDataAsset)
	{
		UE_LOG(LogGAS, Error, TEXT("OverlapActorDataAsset is not set in %s"), *GetName());
		return;
	}
	
	bDestroyOnOverlapBegin = OverlapActorDataAsset->bDestroyActorOnOverlapBegin;
	bDestroyOnEffectOverlapEnd = OverlapActorDataAsset->bDestroyActorOnOverlapEnd;
	
	SetOverlapComponent();
	SetMeshComponent();

	OverlapModificationsConfig = OverlapActorDataAsset->OverlapModifications;
	OverlapModificationsConfig.SetEffectContextObject(this);
}

void AGAS_OverlapActor::SetOverlapComponent()
{
	switch (OverlapActorDataAsset->OverlapComponentType)
	{
	case EGAS_OverlapComponentType::BoxComponent:
		SetOverlapComponent<UBoxComponent>(BoxComponent);
		break;
	case EGAS_OverlapComponentType::SphereComponent:
		SetOverlapComponent<USphereComponent>(SphereComponent);
		break;
	default:
		break;
	}
}

void AGAS_OverlapActor::SetMeshComponent()
{
	switch (OverlapActorDataAsset->ObjectType)
	{
	case EGAS_ObjectType::None:
		break;
	case EGAS_ObjectType::StaticMesh:
		{
			SetMeshComponent<UStaticMeshComponent>(StaticMeshComponent);
			StaticMeshComponent->SetStaticMesh(OverlapActorDataAsset->StaticMeshEffectActor);
		}
		break;
	case EGAS_ObjectType::SkeletalMesh:
		{
			SetMeshComponent<USkeletalMeshComponent>(SkeletalMeshComponent);
			SkeletalMeshComponent->SetSkeletalMesh(OverlapActorDataAsset->SkeletalMeshEffectActor);
		}
		break;
	default:
		break;
	}
}

void AGAS_OverlapActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappingActors.Contains(OtherActor)) return;
	OverlappingActors.Add(OtherActor);
	
	OverlapModificationsConfig.OnBeginOverlap(OtherActor);
	
	if (bDestroyOnOverlapBegin) Destroy();
}

void AGAS_OverlapActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OverlapModificationsConfig.OnEndOverlap(OtherActor);
	
	OverlappingActors.Remove(OtherActor);
	
	if (bDestroyOnEffectOverlapEnd) Destroy();
}

