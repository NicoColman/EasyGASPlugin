// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h"
#include "GAS_OverlapModificationsConfig.generated.h"

/**
 * Enums and structs used by FGAS_OverlapModificationsConfig
 */

class UGameplayEffect;
/**
 *  Enum to determine the amount of the components that will be used in the configuration.
 */
UENUM(BlueprintType)
enum class EGAS_ComponentAmount : uint8
{
	None UMETA(DisplayName = "None"),
	Single UMETA(DisplayName = "Single"),
	Multiple UMETA(DisplayName = "Multiple"),
};

/**
 * When to apply the effect, ApplyOnCondition will only be applied if the condition is met,
 * the condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,
 * using priority to determine the order.
 */
UENUM(BlueprintType)
enum class EGAS_ApplicationPolicy : uint8
{
	ApplyOnBeginOverlap UMETA(DisplayName = "Apply On Begin Overlap"),
	ApplyOnEndOverlap UMETA(DisplayName = "Apply On End Overlap "),
	ApplyOnBeginCondition UMETA(DisplayName = "Apply On Begin Condition"),
	ApplyOnEndCondition UMETA(DisplayName = "Apply On End Condition"),
};

/**
 * When to remove the effect, RemoveOnCondition will only be applied if the condition is met,
 * the condition is a custom function that can be implemented in the blueprint or C++ as a extension of any EffectActor,
 * using priority to determine the order.
 */
UENUM(BlueprintType)
enum class EGAS_RemovalPolicy : uint8
{
	DoNotRemove UMETA(DisplayName = "Do Not Remove"),
	RemoveOnEndOverlap UMETA(DisplayName = "Remove On End Overlap "),
	RemoveOnBeginCondition UMETA(DisplayName = "Remove On Begin Condition"),
	RemoveOnEndCondition UMETA(DisplayName = "Remove On End Condition"),
};

USTRUCT(BlueprintType)
struct FGAS_PolicyConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config")
	EGAS_ApplicationPolicy ApplicationPolicy = EGAS_ApplicationPolicy::ApplyOnBeginOverlap;

	/**
	 *  Priority to determine the order of the effects, let's say we have 2 effects that should be applied on the
	 *  different condition. In the custom functionality we specify which Conditional by passing the Priority number.
	 */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config", meta = (EditCondition = "ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnBeginCondition || ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnEndCondition", EditConditionHides))
	int32 ConditionalPriority = 0;

	/**
	 * Whether to re-apply an Effect / Tag that was applied on BeginOverlap with Removal Policy RemoveOnBeginCondition
	 * and we would like to re-apply it on EndCondition.
	 * TODO: Possibly expand it so it reapplies on a specific condition.
	 */ 
	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config", meta = (EditCondition = "RemovalPolicy == EGAS_RemovalPolicy::RemoveOnBeginCondition", EditConditionHides))
	bool bReApplyOnEndCondition = false;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config", meta = (EditCondition = "ApplicationPolicy != EGAS_ApplicationPolicy::ApplyOnEndOverlap", EditConditionHides))
	EGAS_RemovalPolicy RemovalPolicy = EGAS_RemovalPolicy::RemoveOnEndOverlap;

	/** Whether to remove the effect even if the condition is not met and the Character leaves the Overlap. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config", meta = (EditCondition = "RemovalPolicy == EGAS_RemovalPolicy::RemoveOnEndCondition", EditConditionHides))
	bool bRemoveEvenIfConditionNotMet = true;

	/** Whether to apply the effect to the enemies. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|Policy Config")
	bool bApplyToEnemies = false;

	/**
	 *  Get the effective removal policy based on the application policy, in case we selected to apply on
	 *		OverlapBeing, then changed the Removal Policy and end up going back to OverlapEnd. We have to ensure that it's
	 *		always DoNotRemoveOnOverlapEnd.
	 */
	EGAS_RemovalPolicy GetEffective_RemovalPolicy() const
	{
		return (ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnEndOverlap) 
			? EGAS_RemovalPolicy::DoNotRemove 
			: RemovalPolicy;
	}

	bool CheckRemoveOnConditionNotMet() const
	{
		return bRemoveEvenIfConditionNotMet && RemovalPolicy == EGAS_RemovalPolicy::RemoveOnEndCondition;
	}

	bool ShouldReApplyOnEndCondition() const
	{
		return ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnBeginOverlap && bReApplyOnEndCondition;
	}

	bool CheckPriority(const int32 Priority) const
	{
		if (ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnBeginCondition || ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnEndCondition)
		{
			return Priority == ConditionalPriority;
		}
		return true;
	}
};

/**
 *  Configuration for the GameplayEffect, it allows to set the level of the effect and the PolicyConfig.
 */
USTRUCT(BlueprintType)
struct FGAS_GameplayEffectConfig
{
    GENERATED_BODY()
	
    UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects|Config")
    float EffectLevel = 1.f;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects|Config")
	FGAS_PolicyConfig PolicyConfig = FGAS_PolicyConfig();
};

/**
 *  Configuration for the GameplayTags, it allows to set the size of the tag and the PolicyConfig.
 */
USTRUCT()
struct FGAS_GameplayTagConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags|Config")
	int32 TagSize = 1;
	
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags|Config")
	FGAS_PolicyConfig PolicyConfig = FGAS_PolicyConfig();
};

/**
 * Struct to store the GameplayTag Config for later removal
 */
USTRUCT()
struct FGAS_StoredGameplayTagInfo
{
	GENERATED_BODY()

	FGameplayTag Tag = FGameplayTag::EmptyTag;

	int32 Size = 0;
	int32 ConditionalPriority = 0;

	bool operator==(const FGAS_StoredGameplayTagInfo& Other) const
	{
		return Tag == Other.Tag && Size == Other.Size;
	}
};

/**
 * Struct to store the ActiveGameplayEffect Config for later removal
 */
USTRUCT()
struct FGAS_StoredActiveGameplayEffect
{
	GENERATED_BODY()

	FActiveGameplayEffectHandle ActiveGameplayEffect = FActiveGameplayEffectHandle();

	int32 ConditionalPriority = 0;

	bool operator==(const FGAS_StoredActiveGameplayEffect& Other) const
	{
		return ActiveGameplayEffect == Other.ActiveGameplayEffect && ConditionalPriority == Other.ConditionalPriority;
	}
};

/**
 * Main struct that holds the GameplayEffects and GameplayTags configurations with the necessary functions to apply and remove them.
 */
USTRUCT(BlueprintType)
struct FGAS_OverlapModificationsConfig
{
	GENERATED_BODY()

public:
	FGAS_OverlapModificationsConfig() = default;

	/** Should be call when the Actor begins the overlaps to Apply the Effect/Tag */
	void OnBeginOverlap(AActor* TargetActor);
	/** Should be call when the Actor ends the overlaps to Apply/Remove the Effect/Tag */
	void OnEndOverlap(AActor* TargetActor);
	/**
	 * Should be call when the Actor begins the condition to Apply/Remove the Effect/Tag
	 *	@param Priority: The priority to determine which effect/tag to apply/remove.
	 */
	void OnBeginCondition(AActor* TargetActor, const int32 Priority = 0);
	/** Should be call when the Actor ends the condition to Apply/Remove the Effect/Tag
	 *  @param Priority: The priority to determine which effect/tag to apply/remove.
	 */
	void OnEndCondition(AActor* TargetActor, const int32 Priority = 0);
	/**
	 * Should be call first with the initial EffectActor Configurations.
	 * @param InObject: The object that will be used as a context for the GameplayEffects.
	 */
	void SetEffectContextObject(UObject* InObject) { EffectContextObject = InObject; }

protected:
	/*
	 * GameplayEffects
	 */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects")
	EGAS_ComponentAmount EffectsAmount = EGAS_ComponentAmount::None;

	/**
	 * Whether to use the same Effect Config for all the effects or use different ones.
	 * If set to true, it will use the EffectConfig for all the effects, otherwise it will use the MultipleEffectsConfig.
	 */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects", meta = (EditCondition = "EffectsAmount == EGAS_ComponentAmount::Multiple", EditConditionHides))
	bool bShouldUseSameEffectConfig = false;

	/** The Effect to apply, if the EffectsAmount is set to Single. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects", meta = (EditCondition = "EffectsAmount == EGAS_ComponentAmount::Single", EditConditionHides))
	TSubclassOf<UGameplayEffect> EffectToApply = nullptr;

	/** The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to true. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects", meta = (EditCondition = "(EffectsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameEffectConfig)", EditConditionHides))
	TArray<TSubclassOf<UGameplayEffect>> EffectsToApply = TArray<TSubclassOf<UGameplayEffect>>();

	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects", meta = (EditCondition = "EffectsAmount == EGAS_ComponentAmount::Single || (EffectsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameEffectConfig)", EditConditionHides))
	FGAS_GameplayEffectConfig EffectConfig = FGAS_GameplayEffectConfig();
	
	/** The Effects to apply, if the EffectsAmount is set to Multiple with bShouldUseSameEffectConfig set to false. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayEffects", meta = (EditCondition = "EffectsAmount == EGAS_ComponentAmount::Multiple && !bShouldUseSameEffectConfig", EditConditionHides))
	TMap<TSubclassOf<UGameplayEffect>, FGAS_GameplayEffectConfig> MultipleEffectsConfig = TMap<TSubclassOf<UGameplayEffect>, FGAS_GameplayEffectConfig>();
	
	/*
	 * GameplayTags
	 */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags")
	EGAS_ComponentAmount TagsAmount = EGAS_ComponentAmount::None;

	/**
	 * Whether to use the same Tag Config for all the tags or use different ones.
	 * If set to true, it will use the TagConfig for all the tags, otherwise it will use the MultipleTagsConfig.
	 */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags", meta = (EditCondition = "TagsAmount == EGAS_ComponentAmount::Multiple", EditConditionHides))
	bool bShouldUseSameTagConfig = false;

	/** The Tag to apply, if the TagsAmount is set to Single. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags", meta = (EditCondition = "TagsAmount == EGAS_ComponentAmount::Single", EditConditionHides))
	FGameplayTag TagToApply = FGameplayTag::EmptyTag;

	/** The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to true. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags", meta = (EditCondition = "TagsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameTagConfig", EditConditionHides))
	FGameplayTagContainer TagsToApply = FGameplayTagContainer();

	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags", meta = (EditCondition = "TagsAmount == EGAS_ComponentAmount::Single || (TagsAmount == EGAS_ComponentAmount::Multiple && bShouldUseSameTagConfig)", EditConditionHides))
	FGAS_GameplayTagConfig TagConfig = FGAS_GameplayTagConfig();

	/** The Tags to apply, if the TagsAmount is set to Multiple with bShouldUseSameTagConfig set to false. */
	UPROPERTY(EditAnywhere, Category = "Effect Base|GameplayTags", meta = (EditCondition = "TagsAmount == EGAS_ComponentAmount::Multiple && !bShouldUseSameTagConfig", EditConditionHides))
	TMap<FGameplayTag, FGAS_GameplayTagConfig> MultipleTagsConfig = TMap<FGameplayTag, FGAS_GameplayTagConfig>();

private:
	TMultiMap<UAbilitySystemComponent*, TPair<EGAS_RemovalPolicy, FGAS_StoredActiveGameplayEffect>> ActiveEffectsMap;
	TMultiMap<UAbilitySystemComponent*, TPair<EGAS_RemovalPolicy, FGAS_StoredGameplayTagInfo>> ActiveTagsMap;

	void ApplyOnBeginOverlap(AActor* TargetActor);
	void ApplyOnEndOverlap(AActor* TargetActor);
	void ApplyOnBeginCondition(AActor* TargetActor, const int32 Priority);
	void ApplyOnEndCondition(AActor* TargetActor, const int32 Priority);

	void RemoveOnEndOverlap(AActor* TargetActor);
	void RemoveOnBeginCondition(AActor* TargetActor, const int32 Priority);
	void RemoveOnEndCondition(AActor* TargetActor, const int32 Priority);
	
	void HandleApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority = 0.f);
	void HandleRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority = 0.f);
	
	void HandleGameplayEffectApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority = 0.f);
	void HandleSingleGameplayEffectApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy);
	void HandleMultipleGameplayEffectsApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority = 0.f);

	void HandleGameplayEffectRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority);

	void ApplyEffectToTarget(AActor* TargetActor, const TSubclassOf<UGameplayEffect>& GameplayEffectClass, const FGAS_GameplayEffectConfig& GameplayEffectConfig);
	void RemoveEffectFromTarget(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority = 0);

	void HandleTagApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority);
	void HandleSingleTagApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy);
	void HandleMultipleTagsApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority);

	void HandleTagRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority);

	void ApplyTagToTarget(AActor* TargetActor, const FGameplayTag& Tag, const FGAS_GameplayTagConfig& Config);
	void RemoveTagFromTarget(AActor* TargetActor, const EGAS_RemovalPolicy& ApplicationPolicy, const int32 Priority = 0);
	
	void ClearActiveMaps(AActor* TargetActor);
	static bool CanApply(const FGAS_PolicyConfig& PolicyConfig, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority = 0);

	UPROPERTY()
	TObjectPtr<UObject> EffectContextObject;

	/** Template function so we can easily remove any FGAS_StoredGameplayEffect/FGAS_StoredGameplayTagInfo */
	template<typename TValue, typename TMap>
	TArray<TValue> GetPairValueAndRemoveFromMap(UAbilitySystemComponent* AbilitySystemComponent, const EGAS_RemovalPolicy& RemovalPolicy, TMap& Map, const int32 Priority);
};

template <typename TValue, typename TMap>
TArray<TValue> FGAS_OverlapModificationsConfig::GetPairValueAndRemoveFromMap(UAbilitySystemComponent* AbilitySystemComponent,
	const EGAS_RemovalPolicy& RemovalPolicy, TMap& Map, const int32 Priority)
{
	TArray<TValue> RemovedValues;

	if (!AbilitySystemComponent)
	{
		return RemovedValues;
	}

	TArray<TPair<EGAS_RemovalPolicy, TValue>> EffectsToRemove;
	
	for (auto It = Map.CreateConstKeyIterator(AbilitySystemComponent); It; ++It)
	{
		if (It.Value().Key == RemovalPolicy && It.Value().Value.ConditionalPriority == Priority)
		{
			RemovedValues.Add(It.Value().Value);
			EffectsToRemove.Add(It.Value());
		}
	}
	
	for (const auto& Effect : EffectsToRemove)
	{
		Map.RemoveSingle(AbilitySystemComponent, Effect);
	}

	return RemovedValues;
}