// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "EannaGameplayAbilitySystem/GAS_LogChannel.h"
#include "GASATask_CustomShapeOverlap.generated.h"

enum class EGAS_OverlapComponentType : uint8;
class UShapeComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapSignature, const FGameplayAbilityTargetDataHandle&, DataHandle);

/**
 * AbilityTask for creating and detecting overlaps with custom shape components attached to an AActor.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGASATask_CustomShapeOverlap : public UAbilityTask
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnOverlapSignature OnBeginOverlap;

	UPROPERTY(BlueprintAssignable)
	FOnOverlapSignature OnEndOverlap;

	UFUNCTION(BlueprintCallable, Category="Eanna|Ability|Tasks",
		meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE", AutoCreateRefTerm = "Offset, SceneSocket, ActorsToIgnore, InterfacesToIgnore"))
	static UGASATask_CustomShapeOverlap* BP_DetectCustomBoxOverlap(
		UGameplayAbility* OwningAbility,
		const FVector& BoxExtent,
		const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel,
		const TArray<AActor*>& ActorsToIgnore,
		const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore,
		const bool bIgnoreSelf = true,
		const FVector& Offset = FVector::ZeroVector,
		USceneComponent* SceneToAttach = nullptr,
		const FName& SceneSocket = NAME_None,
		const bool bDebug = false
		);

	UFUNCTION(BlueprintCallable, Category="Eanna|Ability|Tasks",
	meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE", AutoCreateRefTerm = "Offset, SceneSocket, ActorsToIgnore, InterfacesToIgnore"))
	static UGASATask_CustomShapeOverlap* BP_DetectCustomSphereOverlap(
		UGameplayAbility* OwningAbility,
		const float SphereRadius,
		const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel,
		const TArray<AActor*>& ActorsToIgnore,
		const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore,
		const bool bIgnoreSelf = true,
		const FVector& Offset = FVector::ZeroVector,
		USceneComponent* SceneToAttach = nullptr,
		const FName& SceneSocket = NAME_None,
		const bool bDebug = false
		);

	// C++ Functions with default values.
	
	static UGASATask_CustomShapeOverlap* DetectCustomBoxOverlap(
		UGameplayAbility* OwningAbility,
		const FVector& BoxExtent,
		const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel = {ECollisionChannel::ECC_Pawn},
		const bool bIgnoreSelf = true,
		const TArray<AActor*>& ActorsToIgnore = TArray<AActor*>(),
		const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore = TArray<TScriptInterface<UInterface>>(),
		const FVector& Offset = FVector::ZeroVector,
		USceneComponent* SceneToAttach = nullptr,
		const FName& SceneSocket = NAME_None,
		const bool bDebug = false
	);
	
	static UGASATask_CustomShapeOverlap* DetectCustomSphereOverlap(
		UGameplayAbility* OwningAbility,
		const float SphereRadius,
		const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel = {ECollisionChannel::ECC_Pawn},
		const bool bIgnoreSelf = true,
		const TArray<AActor*>& ActorsToIgnore = TArray<AActor*>(),
		const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore = TArray<TScriptInterface<UInterface>>(),
		const FVector& Offset = FVector::ZeroVector,
		USceneComponent* SceneToAttach = nullptr,
		const FName& SceneSocket = NAME_None,
		const bool bDebug = false
		);
	

private:
	virtual void Activate() override;
	virtual void OnDestroy(bool AbilityEnded) override;

	EGAS_OverlapComponentType OverlapComponentType;

	FVector ShapeExtent;
	float SphereRadius;
	
	bool bIgnoreSelf;
	bool bDebugOptions;
	
	FVector Offset;
	FName SocketName;
	
	TArray<ECollisionChannel> CollisionChannels;
	UPROPERTY()
	TArray<AActor*> ActorsToIgnore;
	TArray<TScriptInterface<UInterface>> InterfacesToIgnore;
	UPROPERTY()
	TObjectPtr<USceneComponent> SceneToAttach;
	
	UPROPERTY()
	UShapeComponent* ShapeComponent;

	static void SetTaskParameters( UGASATask_CustomShapeOverlap* Task,
		const TArray<TEnumAsByte<ECollisionChannel>>& CollisionChannel,
		const TArray<AActor*>& ActorsToIgnore,
		const TArray<TScriptInterface<UInterface>>& InterfacesToIgnore,
		const bool bIgnoreSelf,
		const FVector& Offset,
		USceneComponent* SceneToAttach,
		const FName& SceneSocket,
		const bool bDebug);

	void CreateShapeComponent();
	void SetupCollision();
	void ConfigOverlap();

	void SetCollisionChannels(const TArray<TEnumAsByte<ECollisionChannel>>& InCollisionChannels);
	
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                  int32 OtherBodyIndex);

	
	template<typename T>
	T* CreateShapeComponent(AActor* AvatarActor,
		USceneComponent* SceneToAttach,
		const FName& SocketName,
		const FVector& Offset,
		const bool bDebug = false);
};

template <typename T>
T* UGASATask_CustomShapeOverlap::CreateShapeComponent(AActor* AvatarActor, USceneComponent* SceneToAttach, const FName& SocketName,
	const FVector& Offset, const bool bDebug)
{
	T* Shape = NewObject<T>(AvatarActor);
	if (!Shape)
	{
		UE_LOG(LogGAS_AbilityTask, Error, TEXT("CreateShapeComponent: Failed to create ShapeComponent"));
		return nullptr;
	}
	
	USceneComponent* ParentComponent = SceneToAttach ? SceneToAttach : AvatarActor->GetRootComponent();

	Shape->SetupAttachment(ParentComponent, SocketName);
	Shape->SetRelativeLocation(Offset);
	
	Shape->SetHiddenInGame(!bDebug);
	Shape->SetVisibility(bDebug);

	return Shape;
}

