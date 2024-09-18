// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EffectActors/GAS_OverlapModificationsConfig.h"
#include "Engine/DataAsset.h"
#include "GAS_StrucsAndEnums.h"
#include "GAS_DAOverlapActor.generated.h"

class USkeletalMesh;
class UStaticMeshComponent;
class USkeletalMeshComponent;

UENUM(BlueprintType)
enum class EGAS_ObjectType : uint8
{
	None UMETA(DisplayName = "None"),
	StaticMesh UMETA(DisplayName = "StaticMesh"),
	SkeletalMesh UMETA(DisplayName = "SkeletalMesh"),
};

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_DAOverlapActor : public UPrimaryDataAsset
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
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|Overlap")
	EGAS_OverlapComponentType OverlapComponentType = EGAS_OverlapComponentType::BoxComponent;
	
	// UPROPERTY(EditAnywhere, Category = "Effect Base|Overlap")
	// float OverlapRadius = 300.f;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|Overlap")
	bool bShowOverlapDebugOptions = false;

	/** Show the overlap component in the world */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Overlap", meta = (EditCondition = "bShowOverlapDebugOptions", EditConditionHides))
	bool bShowOverlapComponent = false;

	/**
	 *  Object Type
	 */
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|ObjectType")
	EGAS_ObjectType ObjectType = EGAS_ObjectType::None;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|ObjectType", meta = (EditCondition = "ObjectType == EGAS_ObjectType::StaticMesh", EditConditionHides))
	TObjectPtr<UStaticMesh> StaticMeshEffectActor;

	UPROPERTY(EditAnywhere, Category = "Effect Base|ObjectType", meta = (EditCondition = "ObjectType == EGAS_ObjectType::SkeletalMesh", EditConditionHides))
	TObjectPtr<USkeletalMesh> SkeletalMeshEffectActor;

	UPROPERTY(EditAnywhere, Category = "Effect Base|ObjectType", meta = (EditCondition = "ObjectType == EGAS_ObjectType::SkeletalMesh || ObjectType == EGAS_ObjectType::StaticMesh", EditConditionHides))
	float ActorScale = 1.f;

	UPROPERTY(EditAnywhere, Category = "Effect Base|OverlapModifications")
	FGAS_OverlapModificationsConfig OverlapModifications;
};
