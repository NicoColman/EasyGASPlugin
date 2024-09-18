// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "UObject/Interface.h"
#include "GAS_InterfaceASC.generated.h"

class UGameplayEffect;
struct FGameplayAbilitySpecHandle;
struct FGameplayTagContainer;
struct FGameplayAbilitySpec;
struct FGameplayTag;
struct FAbilitySpecWrapper;
class UGameplayAbility;
// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UGAS_InterfaceASC : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EANNAGAMEPLAYABILITYSYSTEM_API IGAS_InterfaceASC
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Eanna|GAS|Init", meta = (ToolTip = "Initialize the Ability System Component, Attributes, and Active/Passive Gameplay Abilities. @param InActor: The actor where we constructed the ASC, for a player this would be the APlayerState, for an AI this would be the ACharacter. @param InAvatar: The playable AActor, in case of the player this would be the ACharacter, in case of an AI this would be the ACharacter. @param InGameplayEffects: The array of GameplayEffects to apply to the ASC.\n@param InLevel: The level of the GameplayEffects.\n@param InAbilities: The array of active GameplayAbilities to give to the ASC.\n@param InPassiveAbilities: The array of passive GameplayAbilities to give to the ASC.\n@param InAbilitiesLevel: The level of the GameplayAbilities."))
	void InitializeAbilitySystem(AActor* InActor, AActor* InAvatar, const TArray<TSubclassOf<UGameplayEffect>>& InGameplayEffects, const int32 InLevel, const TArray<TSubclassOf<UGameplayAbility>>& InAbilities, const TArray<TSubclassOf<UGameplayAbility>>& InPassiveAbilities, const int32 InAbilitiesLevel);
	virtual void AbilityActorInfoSet() = 0;
	virtual void InitializeAttributes(const TArray<TSubclassOf<UGameplayEffect>>& GameplayEffects, const int32 Level) = 0;
	virtual void InitializeGameplayAbilities(const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level) = 0;
	virtual void InitializePassiveGameplayAbilities(const TArray<TSubclassOf<UGameplayAbility>>& PassiveAbilities, const int32 Level) = 0;

	virtual FGameplayAbilitySpecHandle GiveAbilityWithInputTag(const TSubclassOf<UGameplayAbility>& Ability, const int32 Level = 0) = 0;
	virtual TArray<FGameplayAbilitySpecHandle> GiveAbilitiesWithInputTag(const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level ,const bool bGiveIfNotInputAbility = false) = 0;
	
	
	virtual void AbilityInputTagHeld(const FGameplayTag InputTag) = 0;
	virtual void AbilityInputTagPressed(const FGameplayTag InputTag) = 0;
	virtual void AbilityInputTagReleased(const FGameplayTag InputTag) = 0;
	
	virtual FAbilitySpecWrapper GetSpecFromAbilityTag(const FGameplayTag& AbilityTag) = 0;
	virtual TArray<FAbilitySpecWrapper> GetSpecsFromAbilityTags(const FGameplayTagContainer& TagContainer) = 0;
	virtual FGameplayAttribute GetAttributeFromTag(const FGameplayTag& AttributeTag) const = 0;
	virtual void SetAttributeValueFromTag(const FGameplayTag& AttributeTag, const float NewValue) = 0;
};
