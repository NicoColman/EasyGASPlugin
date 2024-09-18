// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GAS_DAOverlapActor.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GAS_OverlapActor.generated.h"


UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API AGAS_OverlapActor : public AActor
{
	GENERATED_BODY()

public:
	AGAS_OverlapActor();
	virtual void PostInitializeComponents() override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "GASOverlapActor")
	bool bDestroyOnOverlapBegin;
	UPROPERTY( BlueprintReadOnly, Category = "GASOverlapActor")
	bool bDestroyOnEffectOverlapEnd;
	
	UPROPERTY(VisibleAnywhere, Category = "GASOverlapActor")
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "GASOverlapActor")
	UBoxComponent* BoxComponent;

	UPROPERTY(BlueprintReadOnly, Category = "OvelapModificationsConfig")
	FGAS_OverlapModificationsConfig OverlapModificationsConfig;

	UPROPERTY(EditAnywhere, Category = "GASOverlapActor")
	TObjectPtr<UGAS_DAOverlapActor> OverlapActorDataAsset;

	UFUNCTION()
	void OnBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	);

private:
	UPROPERTY(VisibleAnywhere, Category = "GASOverlapActor")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "GASOverlapActor")
	USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "GASOverlapActor")
	TArray<AActor*> OverlappingActors;
	
	void SetMeshComponent();
	void SetOverlapComponent();


	/* Template function for creating the Overlap (Sphere/Box) component and setting the Overlap delegates. */
	template<typename T>
	void SetOverlapComponent(T*& Component);
	/* Template function for creating the Mesh (Static/Skeletal/...) component. */
	template<typename T>
	void SetMeshComponent(T*& Component);

public:
	UFUNCTION(BlueprintCallable, Category = "GASOverlapActor")
	FORCEINLINE UGAS_DAOverlapActor* GetEffectActorDataAsset() const { return OverlapActorDataAsset; }
};

template <typename T>
void AGAS_OverlapActor::SetOverlapComponent(T*& Component)
{
	Component = NewObject<T>(this);
	Component->RegisterComponent();
	Component->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	Component->SetCollisionProfileName(TEXT("OverlapAll"));
	Component->SetGenerateOverlapEvents(true);
	Component->OnComponentBeginOverlap.AddDynamic(this, &AGAS_OverlapActor::OnBeginOverlap);
	Component->OnComponentEndOverlap.AddDynamic(this, &AGAS_OverlapActor::OnEndOverlap);

	if (OverlapActorDataAsset->bShowOverlapDebugOptions)
	{
		Component->SetHiddenInGame(!OverlapActorDataAsset->bShowOverlapComponent);
	}
}

template <typename T>
void AGAS_OverlapActor::SetMeshComponent(T*& Component)
{
	Component = NewObject<T>(this);
	Component->RegisterComponent();
	Component->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	
	const FVector NewScale = FVector::OneVector * OverlapActorDataAsset->ActorScale;
	Component->SetRelativeScale3D(NewScale);
}
