// Eanna Entertainment


#include "AbilityTasks/GASATask_CustomShapeOverlap.h"

#include "AbilitySystemComponent.h"
#include "GAS_StrucsAndEnums.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "TagStructs/Tags_GAS.h"


UGASATask_CustomShapeOverlap* UGASATask_CustomShapeOverlap::BP_DetectCustomBoxOverlap(UGameplayAbility* OwningAbility,
	const FVector& BoxExtent, const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel,
	const TArray<AActor*>& ActorsToIgnore, const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore, const bool bIgnoreSelf,
	const FVector& Offset, USceneComponent* SceneToAttach, const FName& SceneSocket, const bool bDebug)
{
	UGASATask_CustomShapeOverlap* MyTask = NewAbilityTask<UGASATask_CustomShapeOverlap>(OwningAbility);
	MyTask->ShapeExtent = BoxExtent;
	SetTaskParameters(MyTask, CollisionChannel, ActorsToIgnore, InterfacesToIgnore, bIgnoreSelf, Offset, SceneToAttach, SceneSocket, bDebug);
	MyTask->OverlapComponentType = EGAS_OverlapComponentType::BoxComponent;
	return MyTask;
}

UGASATask_CustomShapeOverlap* UGASATask_CustomShapeOverlap::BP_DetectCustomSphereOverlap(
	UGameplayAbility* OwningAbility, const float SphereRadius,
	const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel, const TArray<AActor*>& ActorsToIgnore,
	const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore, const bool bIgnoreSelf, const FVector& Offset,
	USceneComponent* SceneToAttach, const FName& SceneSocket, const bool bDebug)
{
	UGASATask_CustomShapeOverlap* MyTask = NewAbilityTask<UGASATask_CustomShapeOverlap>(OwningAbility);
	MyTask->SphereRadius = SphereRadius;
	SetTaskParameters(MyTask, CollisionChannel, ActorsToIgnore, InterfacesToIgnore, bIgnoreSelf, Offset, SceneToAttach, SceneSocket, bDebug);
	MyTask->OverlapComponentType = EGAS_OverlapComponentType::SphereComponent;
	return MyTask;
}

UGASATask_CustomShapeOverlap* UGASATask_CustomShapeOverlap::DetectCustomBoxOverlap(UGameplayAbility* OwningAbility,
	const FVector& BoxExtent, const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel, const bool bIgnoreSelf,
	const TArray<AActor*>& ActorToIgnore, const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore, const FVector& Offset,
	USceneComponent* SceneToAttach, const FName& SceneSocket, const bool bDebug)
{
	UGASATask_CustomShapeOverlap* MyTask = NewAbilityTask<UGASATask_CustomShapeOverlap>(OwningAbility);
	MyTask->ShapeExtent = BoxExtent;
	SetTaskParameters(MyTask, CollisionChannel, ActorToIgnore, InterfacesToIgnore, bIgnoreSelf, Offset, SceneToAttach, SceneSocket, bDebug);
	MyTask->OverlapComponentType = EGAS_OverlapComponentType::BoxComponent;
	return MyTask;
}

UGASATask_CustomShapeOverlap* UGASATask_CustomShapeOverlap::DetectCustomSphereOverlap(UGameplayAbility* OwningAbility,
	const float SphereRadius, const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel, const bool bIgnoreSelf,
	const TArray<AActor*>& ActorsToIgnore, const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore, const FVector& Offset,
	USceneComponent* SceneToAttach, const FName& SceneSocket, const bool bDebug)
{
	UGASATask_CustomShapeOverlap* MyTask = NewAbilityTask<UGASATask_CustomShapeOverlap>(OwningAbility);
	MyTask->SphereRadius = SphereRadius;
	SetTaskParameters(MyTask, CollisionChannel, ActorsToIgnore, InterfacesToIgnore, bIgnoreSelf, Offset, SceneToAttach, SceneSocket, bDebug);
	MyTask->OverlapComponentType = EGAS_OverlapComponentType::SphereComponent;
	return MyTask;
}

void UGASATask_CustomShapeOverlap::SetTaskParameters(UGASATask_CustomShapeOverlap* Task,
	const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel, const TArray<AActor*>& ActorsToIgnore,
	const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore, const bool bIgnoreSelf, const FVector& Offset,
	USceneComponent* SceneToAttach, const FName& SceneSocket, const bool bDebug)
{
	Task->SetCollisionChannels(CollisionChannel);
	Task->ActorsToIgnore = ActorsToIgnore;
	Task->InterfacesToIgnore = InterfacesToIgnore;
	Task->bIgnoreSelf = bIgnoreSelf;
	Task->Offset = Offset;
	Task->SceneToAttach = SceneToAttach;
	Task->SocketName = SceneSocket;
	Task->bDebugOptions = bDebug;
}


void UGASATask_CustomShapeOverlap::Activate()
{
	if (Ability->GetCurrentActorInfo()->IsNetAuthority())
	{
		CreateShapeComponent();
		SetupCollision();
		ShapeComponent->RegisterComponent();
		ShapeComponent->UpdateComponentToWorld();
		ConfigOverlap();
	}
}

void UGASATask_CustomShapeOverlap::CreateShapeComponent()
{
	AActor* AvatarActor = GetAvatarActor();
	if (!AvatarActor)
	{
		UE_LOG(LogGAS_AbilityTask, Error, TEXT("SetupCollision: Avatar actor is null"));
		return;
	}

	USkeletalMeshComponent* SkeletalMeshComponent = Ability->GetActorInfo().SkeletalMeshComponent.Get();
	if (!SkeletalMeshComponent)
	{
		UE_LOG(LogGAS_AbilityTask, Error, TEXT("SetupCollision: SkeletalMeshComponent not found on avatar actor"));
		return;
	}

	switch (OverlapComponentType)
	{
	case EGAS_OverlapComponentType::BoxComponent:
		ShapeComponent = CreateShapeComponent<UBoxComponent>(
			AvatarActor,
			SceneToAttach,
			SocketName,
			Offset,
			bDebugOptions
			);
		Cast<UBoxComponent>(ShapeComponent)->SetBoxExtent(ShapeExtent, true);
		break;

	case EGAS_OverlapComponentType::SphereComponent:
		ShapeComponent = CreateShapeComponent<USphereComponent>(
			AvatarActor,
			SceneToAttach,
			SocketName,
			Offset,
			bDebugOptions
			);
		Cast<USphereComponent>(ShapeComponent)->SetSphereRadius(SphereRadius, true);
		break;

	default:
		break;
	}
}

void UGASATask_CustomShapeOverlap::SetupCollision()
{
	ShapeComponent->SetCollisionProfileName("OverlapAll");
	ShapeComponent->SetGenerateOverlapEvents(true);
	ShapeComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ShapeComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	for (const ECollisionChannel& Channel : CollisionChannels)
	{
		ShapeComponent->SetCollisionResponseToChannel(Channel, ECR_Overlap);
	}
}

void UGASATask_CustomShapeOverlap::ConfigOverlap()
{
	for (AActor* Actor : ActorsToIgnore)
	{
		ShapeComponent->MoveIgnoreActors.Add(Actor);
	}
	if (bIgnoreSelf) ShapeComponent->MoveIgnoreActors.Add(GetAvatarActor());

	ShapeComponent->OnComponentBeginOverlap.AddDynamic(this, &UGASATask_CustomShapeOverlap::OnOverlapBegin);
	ShapeComponent->OnComponentEndOverlap.AddDynamic(this, &UGASATask_CustomShapeOverlap::OnOverlapEnd);\
	ShapeComponent->UpdateOverlaps();
}

void UGASATask_CustomShapeOverlap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!Ability->GetCurrentActorInfo()->IsNetAuthority()) return;

	for (const TScriptInterface<UInterface>& Interface : InterfacesToIgnore)
	{
		const UObject* InterfaceObject = Interface.GetObject();
		if (InterfaceObject && OtherActor->Implements<UInterface>()) return;
	}

	FGameplayAbilityTargetDataHandle TargetDataHandle;
	FGameplayAbilityTargetData_ActorArray* TargetData = new FGameplayAbilityTargetData_ActorArray();
	if (OtherActor)
	{
		TargetData->TargetActorArray.Add(OtherActor);
	}
	TargetDataHandle.Add(TargetData);
	
	AbilitySystemComponent->ServerSetReplicatedTargetData(
		GetAbilitySpecHandle(),
		GetActivationPredictionKey(),
		TargetDataHandle,
		FTags_GAS::GetTargetDataTags().TargetData_OverlapBegin,
		AbilitySystemComponent->ScopedPredictionKey
	);

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnBeginOverlap.Broadcast(TargetDataHandle);
	}
}

void UGASATask_CustomShapeOverlap::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!Ability->GetCurrentActorInfo()->IsNetAuthority()) return;

	for (const TScriptInterface<UInterface>& Interface : InterfacesToIgnore)
	{
		const UObject* InterfaceObject = Interface.GetObject();
		if (InterfaceObject && OtherActor->Implements<UInterface>()) return;
	}

	FGameplayAbilityTargetDataHandle TargetDataHandle;
	FGameplayAbilityTargetData_ActorArray* TargetData = new FGameplayAbilityTargetData_ActorArray();
	if (OtherActor)
	{
		TargetData->TargetActorArray.Add(OtherActor);
	}
	TargetDataHandle.Add(TargetData);

	AbilitySystemComponent->ServerSetReplicatedTargetData(
		GetAbilitySpecHandle(),
		GetActivationPredictionKey(),
		TargetDataHandle,
		FTags_GAS::GetTargetDataTags().TargetData_OverlapEnd,
		AbilitySystemComponent->ScopedPredictionKey
	);

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnEndOverlap.Broadcast(TargetDataHandle);
	}
}

void UGASATask_CustomShapeOverlap::SetCollisionChannels(
	const TArray<TEnumAsByte<ECollisionChannel>>& InCollisionChannels)
{
	CollisionChannels.Empty(InCollisionChannels.Num());
	for (const TEnumAsByte<ECollisionChannel>& Channel : InCollisionChannels)
	{
		CollisionChannels.Add(Channel.GetValue());
	}
}

void UGASATask_CustomShapeOverlap::OnDestroy(bool AbilityEnded)
{
	if (ShapeComponent)
	{
		ShapeComponent->DestroyComponent();
	}
	
	Super::OnDestroy(AbilityEnded);
}
