// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GAS_BlueprintFunctionLibrary.generated.h"

class UGameplayEffect;
struct FGAS_DamageEffectParams;
struct FGameplayEffectContextHandle;

/**
 *	Struct for configuring a Dynamic GameplayEffect
 */
USTRUCT(BlueprintType)
struct FDynamicGEConfig
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	TObjectPtr<UAbilitySystemComponent> SourceASC;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	TObjectPtr<UObject> SourceObject;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	FGameplayTag EffectTag;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	EGameplayEffectDurationType DurationPolicy;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	float DurationMagnitude;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	float Period;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	TArray<FGameplayModifierInfo> ModifiersInfo;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	EGameplayEffectStackingType StackingType = EGameplayEffectStackingType::None;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	int32 StackLimitCount = 1;
	UPROPERTY(BlueprintReadWrite, Category = "FDynamicGEConfig")
	FGameplayTagContainer TagsToGrant;
};

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UGAS_BlueprintFunctionLibrary();

	/**
	 * Apply a damage effect to an actor using GE_Damage. GAS_ExecCaclDamage lets us apply a debuff, the debuff should
	 *	treat like small damage for a duration after applying the main Damage, i.e. if we apply fire damage, the
	 *	target would keep burning for a few seconds after the initial hit. The Duration Policy should be set to
	 *	only modify the main damage, not the debuff.
	 *
	 *	@param DamageEffectParams: Struct containing all the necessary parameters for the damage effect, if in
	 *		GameplayAbility use "MakeDamageEffectParamsFromClassDefaults" to easily create the struct.
	 *	@param GrantedTags: Tags to grant to the actor when applying the effect, only for DurationPolicy != Instant
	 */
	UFUNCTION(BlueprintCallable, Category = "GAS|DamageLibrary", meta = (AutoCreateRefTerm = "GrantedTags"))
	static FActiveGameplayEffectHandle ApplyDamageEffect(const FGAS_DamageEffectParams& DamageEffectParams, const FGameplayTagContainer& GrantedTags = FGameplayTagContainer());

	/** Creates a Dynamic GameplayEffectSpec, very useful for creating temporary effects */
	static FGameplayEffectSpec* CreateDynamicGameplayEffectSpec(const FDynamicGEConfig& Config);

	static TPair<AActor*, FActiveGameplayEffectHandle> ApplyEffectToActor(
		AActor* Actor, const TSubclassOf<UGameplayEffect>& Effect);
	static TPair<AActor*, FActiveGameplayEffectHandle> ApplyEffectToActorWithGrantedTags(
		AActor* Actor, const TSubclassOf<UGameplayEffect>& Effect, const FGameplayTagContainer& GrantedTags);
	
	static void RemoveEffectFromActor(AActor* Actor, const FActiveGameplayEffectHandle& EffectHandle);
	static TMap<AActor*, FActiveGameplayEffectHandle> ApplyEffectToActors(
		const TArray<AActor*>& Actors, const TSubclassOf<UGameplayEffect>& Effect);
	static void RemoveEffectFromActors(const TArray<AActor*>& Actors,
									   const TMap<AActor*, FActiveGameplayEffectHandle>& EffectHandles);

private:
	/** Create a GameplayEffectSpecHandle for GE_Damage */
	static FGameplayEffectSpecHandle CreateDamageSpecHandle(const FGAS_DamageEffectParams& DamageEffectParams, const FGameplayTagContainer& GrantedTags);
	
};


/**
 *	Blueprint Function Library for Setting and Getting Values from GAS_GameplayEffectContext
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_GEContextBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UGAS_GEContextBlueprintFunctionLibrary();

	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static bool IsBlockedHit(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static bool IsCriticalHit(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static bool IsSuccessfulDebuff(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static float GetDebuffDamage(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static float GetDebuffDuration(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static float GetDebuffFrequency(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static FGameplayTag GetDamageType(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static FVector GetDeathImpulse(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static FVector GetKnockbackForce(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static FName GetHitResultBoneName(const FGameplayEffectContextHandle& EffectContext);

	// If exposed to BP add "UPARAM(ref) FGameplayEffectContextHandle& EffectContext" instead of "FGameplayEffectContextHandle& EffectContext"
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetBlockedHit(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, bool bBlockedHit);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetCriticalHit(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, bool bCriticalHit);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetSuccessfulDebuff(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, bool bSuccessfulDebuff);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetDebuffDamage(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, float DebuffDamage);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetDebuffDuration(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, float DebuffDuration);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetDebuffFrequency(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, float DebuffFrequency);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetDamageType(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, const FGameplayTag& DamageType);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetDeathImpulse(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, const FVector& DeathImpulse);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetKnockbackForce(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, const FVector& KnockbackForce);
	UFUNCTION(BlueprintCallable, Category = "GAS|GameplayEffectContext")
	static void SetHitResultBoneName(UPARAM(ref) FGameplayEffectContextHandle& EffectContext, const FName& HitResultBoneName);
};

