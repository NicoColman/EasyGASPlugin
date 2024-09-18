// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "Interfaces/GAS_InterfaceASC.h"

#include "GAS_AbilitySystemComponent.generated.h"

class UGAS_GameplayEffect;
class UGASGameplayEffect;

/** Wrapper for FGameplayAbilitySpec to allow for Blueprint exposure */
USTRUCT(BlueprintType)
struct FAbilitySpecWrapper
{
	GENERATED_BODY()
	
	FAbilitySpecWrapper() : Spec(FGameplayAbilitySpec()) {}

	UPROPERTY(BlueprintReadOnly, Category = "GAS|FAbilitySpecWrapper")
	FGameplayAbilitySpec Spec = FGameplayAbilitySpec();
	
	explicit FAbilitySpecWrapper(const FGameplayAbilitySpec& InSpec) : Spec(InSpec) {}
	
	bool operator==(const FAbilitySpecWrapper& Other) const
	{
		return Spec.Handle == Other.Spec.Handle;
	}

	bool IsEmpty() const
	{
		return Spec.Ability == nullptr;
	}
};

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_AbilitySystemComponent : public UAbilitySystemComponent, public IGAS_InterfaceASC
{
	GENERATED_BODY()

public:
	UGAS_AbilitySystemComponent();

	/** Begin IGAS_ASCInterface */
	/**
	 * Initialize the Ability System Component, Attributes, and Active/Passive Gameplay Abilities.
	 *	It's a BlueprintNativeEvent so you can override it in your own class and implement extra or own logic there.
	 *	
	 *	@param InActor: The actor where we constructed the ASC, for a player this would be the APlayerState, for an AI this would be the ACharacter.
	 *	@param InAvatar: The playable AActor, in case of the player this would be the ACharacter, in case of an AI this would be the ACharacter.
	 *	@param InGameplayEffects: The array of GameplayEffects to apply to the ASC.
	 *	@param InLevel: The level of the GameplayEffects.
	 *	@param InAbilities: The array of active GameplayAbilities to give to the ASC.
	 *	@param InPassiveAbilities: The array of passive GameplayAbilities to give to the ASC.
	 *	@param InAbilitiesLevel: The level of the GameplayAbilities.
	 */
	virtual void InitializeAbilitySystem_Implementation(AActor* InActor, AActor* InAvatar, const TArray<TSubclassOf<UGameplayEffect>>& InGameplayEffects, const int32 InLevel, const TArray<TSubclassOf<UGameplayAbility>>& InAbilities, const TArray<TSubclassOf<UGameplayAbility>>& InPassiveAbilities, const int32 InAbilitiesLevel) override;

	/** Should be called after the Ability System Component has been initialized */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC|Init")
	virtual void AbilityActorInfoSet() override;
	/** Initialize the attributes of the Ability System Component */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC|Init")
	virtual void InitializeAttributes(const TArray<TSubclassOf<UGameplayEffect>>& GameplayEffects, const int32 Level) override;
	/** Initialize the Gameplay Abilities of the Ability System Component */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC|Init")
	virtual void InitializeGameplayAbilities(const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level) override;
	/** Initialize the Passive Gameplay Abilities of the Ability System Component */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC|Init")
	virtual void InitializePassiveGameplayAbilities(const TArray<TSubclassOf<UGameplayAbility>>& PassiveAbilities, const int32 Level) override;

	/** Grant a Gameplay Ability to the Ability System Component that can be activated by our input logic */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual FGameplayAbilitySpecHandle GiveAbilityWithInputTag(const TSubclassOf<UGameplayAbility>& Ability, const int32 Level) override;

	/**
	 * Grant a Gameplay Ability to the Ability System Component that can be activated by our input logic
	 *	@param Abilities: TArray of Gameplay Ability to give to the ASC.
	 *	@param Level: The level of the Gameplay Abilities.
	 *	@param bGiveIfNotInputAbility: If true, the ability will be given even if it's not an input ability,
	 *		useful for an Array of abilities with a mix.
	 */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual TArray<FGameplayAbilitySpecHandle> GiveAbilitiesWithInputTag(const TArray<TSubclassOf<UGameplayAbility>>& Abilities, const int32 Level ,const bool bGiveIfNotInputAbility = false) override;

	/**
	 * This function should be called in APlayerController, so we can activate the abilities when we held the input
	 *	Also we trigger the AbilityTask_WaitInputPressed
	 */
	virtual void AbilityInputTagHeld(const FGameplayTag InputTag) override;
	/**
	 * This function should be called in APlayerController, so we can activate the abilities when we press the input
	 *	Also we trigger the AbilityTask_WaitInputPressed
	 */
	virtual void AbilityInputTagPressed(const FGameplayTag InputTag) override;
	/**
	 * This function should be called in APlayerController, so we can deactivate the abilities when we release the input
	 *	Also we trigger the AbilityTask_WaitInputRelease
	 */
	virtual void AbilityInputTagReleased(const FGameplayTag InputTag) override;

	/** Gets an Ability Spec from an Gameplay Tag, the Ability should have an Ability Tag */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual FAbilitySpecWrapper GetSpecFromAbilityTag(const FGameplayTag& AbilityTag) override;
	/** Gets an array of Ability Specs from a Gameplay Tag Container, the Ability should have an Ability Tag */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual TArray<FAbilitySpecWrapper> GetSpecsFromAbilityTags(const FGameplayTagContainer& TagContainer) override;
	/** Gets an FGameplayAttribute from an Gameplay Tag, the Attribute should be mapped with a Gameplay Tag */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual FGameplayAttribute GetAttributeFromTag(const FGameplayTag& AttributeTag) const override;
	/** Sets a value to an attribute from an Gameplay Tag, the Attribute should be mapped with a Gameplay Tag */
	UFUNCTION(BlueprintCallable, Category = "GAS|ASC" )
	virtual void SetAttributeValueFromTag(const FGameplayTag& AttributeTag, const float NewValue) override;
	/** End IGAS_ASCInterface */


	/** Create an EffectContext from the GASGameplayEffect for the owner of this AbilitySystemComponent */
	FGameplayEffectSpecHandle GASMakeOutGoingSpec(const TSubclassOf<UGAS_GameplayEffect>& GameplayEffectClass, const float Level, FGameplayEffectContextHandle Context);
private:
	void ApplyEffectToSelf(const TSubclassOf<UGameplayEffect>& Effect, const int32 Level);
	UFUNCTION(Client, Reliable)
	void ClientEffectApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
};
