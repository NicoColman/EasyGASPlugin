// Nico Colman


#include "GAS_BlueprintFunctionLibrary.h"

#include "UObject/NoExportTypes.h" // NOLINT
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffects/GAS_GameplayEffectContext.h"
#include "AbilitySystemComponent.h"
#include "GAS_AbilitySystemComponent.h"
#include "EannaGameplayAbilitySystem/GAS_LogChannel.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"
#include "TagStructs/Tags_GAS.h"

UGAS_BlueprintFunctionLibrary::UGAS_BlueprintFunctionLibrary()
{
}

FActiveGameplayEffectHandle UGAS_BlueprintFunctionLibrary::ApplyDamageEffect(
	const FGAS_DamageEffectParams& DamageEffectParams, const FGameplayTagContainer& GrantedTags)
{
	return DamageEffectParams.TargetAbilitySystemComponent->ApplyGameplayEffectSpecToSelf(
		*CreateDamageSpecHandle(DamageEffectParams, GrantedTags).Data);
}

FGameplayEffectSpecHandle UGAS_BlueprintFunctionLibrary::CreateDamageSpecHandle(
	const FGAS_DamageEffectParams& DamageEffectParams, const FGameplayTagContainer& GrantedTags)
{
	const FTags_GAS::FSetByCallerTags& SetByCallerTags = FTags_GAS::GetSetByCallerTags();
	const AActor* SourceActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();

	FGameplayEffectContextHandle EffectContext = DamageEffectParams.SourceAbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(SourceActor);

	if (DamageEffectParams.DurationPolicy != EGameplayEffectDurationType::Instant)
	{
		DamageEffectParams.DamageEffectClass.GetDefaultObject()->DurationPolicy = DamageEffectParams.DurationPolicy;
		DamageEffectParams.DamageEffectClass.GetDefaultObject()->DurationMagnitude = FScalableFloat(DamageEffectParams.DurationMagnitude);
		DamageEffectParams.DamageEffectClass.GetDefaultObject()->Period = DamageEffectParams.Period;
	}
	
	FGameplayEffectSpecHandle SpecHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeOutgoingSpec(
		DamageEffectParams.DamageEffectClass, DamageEffectParams.AbilityLevel, EffectContext);
	UGAS_GEContextBlueprintFunctionLibrary::SetDeathImpulse(EffectContext, DamageEffectParams.DeathImpulse);
	UGAS_GEContextBlueprintFunctionLibrary::SetKnockbackForce(EffectContext, DamageEffectParams.KnockbackForce);
	UGAS_GEContextBlueprintFunctionLibrary::SetHitResultBoneName(EffectContext, DamageEffectParams.HitResultBoneName);
	UGAS_GEContextBlueprintFunctionLibrary::SetCriticalHit(EffectContext, DamageEffectParams.bIsCriticalHit);

	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, DamageEffectParams.DamageType,
	                                                              DamageEffectParams.Damage.GetValueAtLevel(DamageEffectParams.AbilityLevel));
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, SetByCallerTags.SetByCaller_Probability,
	                                                              DamageEffectParams.DebuffChance);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, SetByCallerTags.SetByCaller_Duration,
	                                                              DamageEffectParams.DebuffDuration);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, SetByCallerTags.SetByCaller_Damage,
	                                                              DamageEffectParams.DebuffDamage);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, SetByCallerTags.SetByCaller_Frequency,
	                                                              DamageEffectParams.DebuffFrequency);

	if (GrantedTags.Num() > 0) SpecHandle.Data.Get()->DynamicGrantedTags = GrantedTags;
	
	return SpecHandle;
}

TPair<AActor*, FActiveGameplayEffectHandle> UGAS_BlueprintFunctionLibrary::ApplyEffectToActor(
	AActor* Actor, const TSubclassOf<UGameplayEffect>& Effect)
{
	if (!Actor)
		return TPair<AActor*, FActiveGameplayEffectHandle>(
			nullptr, FActiveGameplayEffectHandle());

	UGAS_AbilitySystemComponent* const TargetASC = Cast<UGAS_AbilitySystemComponent>(
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor));
	if (!TargetASC) return TPair<AActor*, FActiveGameplayEffectHandle>(nullptr, FActiveGameplayEffectHandle());

	const FGameplayEffectContextHandle EffectContext = TargetASC->MakeEffectContext();

	// TODO: Pass level as parameter
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(Effect, 1.f, EffectContext);
	const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(
		*EffectSpecHandle.Data.Get());
 
	return TPair<AActor*, FActiveGameplayEffectHandle>(Actor, ActiveEffectHandle);
}

TPair<AActor*, FActiveGameplayEffectHandle> UGAS_BlueprintFunctionLibrary::ApplyEffectToActorWithGrantedTags(
	AActor* Actor, const TSubclassOf<UGameplayEffect>& Effect, const FGameplayTagContainer& GrantedTags)
{
	if (!Actor)
		return TPair<AActor*, FActiveGameplayEffectHandle>(
			nullptr, FActiveGameplayEffectHandle());

	UGAS_AbilitySystemComponent* const TargetASC = Cast<UGAS_AbilitySystemComponent>(
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor));
	if (!TargetASC) return TPair<AActor*, FActiveGameplayEffectHandle>(nullptr, FActiveGameplayEffectHandle());

	const FGameplayEffectContextHandle EffectContext = TargetASC->MakeEffectContext();

	// TODO: Pass level as parameter
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(Effect, 1.f, EffectContext);
	EffectSpecHandle.Data.Get()->DynamicGrantedTags = GrantedTags;
	
	
	const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(
		*EffectSpecHandle.Data.Get());

	return TPair<AActor*, FActiveGameplayEffectHandle>(Actor, ActiveEffectHandle);
}

void UGAS_BlueprintFunctionLibrary::RemoveEffectFromActor(AActor* Actor,
                                                         const FActiveGameplayEffectHandle& EffectHandle)
{
	if (!Actor) return;

	UGAS_AbilitySystemComponent* const TargetASC = Cast<UGAS_AbilitySystemComponent>(
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor));
	if (!TargetASC) return;

	TargetASC->RemoveActiveGameplayEffect(EffectHandle);
}

TMap<AActor*, FActiveGameplayEffectHandle> UGAS_BlueprintFunctionLibrary::ApplyEffectToActors(
	const TArray<AActor*>& Actors, const TSubclassOf<UGameplayEffect>& Effect)
{
	TMap<AActor*, FActiveGameplayEffectHandle> MapActorEffectHandle;

	for (AActor* Actor : Actors)
	{
		TPair<AActor*, FActiveGameplayEffectHandle> PairActorEffect = ApplyEffectToActor(Actor, Effect);
		MapActorEffectHandle.Add(PairActorEffect.Key, PairActorEffect.Value);
	}

	return MapActorEffectHandle;
}

void UGAS_BlueprintFunctionLibrary::RemoveEffectFromActors(const TArray<AActor*>& Actors,
                                                          const TMap<AActor*, FActiveGameplayEffectHandle>&
                                                          EffectHandles)
{
	for (AActor* Actor : Actors)
	{
		if (const FActiveGameplayEffectHandle* const EffectHandle = EffectHandles.Find(Actor))
		{
			RemoveEffectFromActor(Actor, *EffectHandle);
		}
	}
}

FGameplayEffectSpec* UGAS_BlueprintFunctionLibrary::CreateDynamicGameplayEffectSpec(const FDynamicGEConfig& Config)
{
	if (!Config.EffectTag.IsValid())
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("Dynamic Effect Name is empty"));
		return nullptr;
	}
	const FString EffectName = FString::Printf(TEXT("DynamicDebuff_%s"), *Config.EffectTag.ToString());
	
	if (!Config.SourceASC)
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("Dynamic Source ASC is nullptr, %s"), *EffectName);
		return nullptr;
	}
	
	if (!Config.SourceObject)
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("Dynamic Source Object is nullptr, %s"), *EffectName);
		return nullptr;
	}

	if (Config.ModifiersInfo.Num() == 0)
	{
		UE_LOG(LogGAS_GameplayEffect, Error, TEXT("Dynamic ModifiersInfo is empty, %s"), *EffectName);
		return nullptr;
	}
	
	FGameplayEffectContextHandle EffectContext = Config.SourceASC->MakeEffectContext();
	EffectContext.AddSourceObject(Config.SourceObject);

	UGameplayEffect* Effect = NewObject<UGameplayEffect>(GetTransientPackage(), FName(EffectName));

	Effect->DurationPolicy = Config.DurationPolicy;
	Effect->DurationMagnitude = FScalableFloat(Config.DurationMagnitude);
	Effect->Period = Config.Period;

	for (const auto& Modifier : Config.ModifiersInfo)
	{
		const int32 Index = Effect->Modifiers.Num();
		Effect->Modifiers.Add(FGameplayModifierInfo());
		FGameplayModifierInfo& ModifierInfo = Effect->Modifiers[Index];
		ModifierInfo = Modifier;
	}

	Effect->StackingType = EGameplayEffectStackingType::AggregateBySource;
	Effect->StackLimitCount = 1;

	if (Config.TagsToGrant.Num() > 0)
	{
		FInheritedTagContainer InheritableTags;
		UTargetTagsGameplayEffectComponent& Component = Effect->FindOrAddComponent<UTargetTagsGameplayEffectComponent>();
		for (const FGameplayTag& Tag : Config.TagsToGrant)
		{
			InheritableTags.AddTag(Tag);
		}
		Component.SetAndApplyTargetTagChanges(InheritableTags);
	}

	return new FGameplayEffectSpec(Effect, EffectContext, 1.f);
}


/**
 * GE Context
 */

UGAS_GEContextBlueprintFunctionLibrary::UGAS_GEContextBlueprintFunctionLibrary()
{
}

bool UGAS_GEContextBlueprintFunctionLibrary::IsBlockedHit(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->IsBlockedHit();
	}
	return false;
}

bool UGAS_GEContextBlueprintFunctionLibrary::IsCriticalHit(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->IsCriticalHit();
	}
	return false;
}

bool UGAS_GEContextBlueprintFunctionLibrary::IsSuccessfulDebuff(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->IsSuccessfulDebuff();
	}
	return false;
}

float UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDamage(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetDebuffDamage();
	}
	return 0.f;
}

float UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDuration(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetDebuffDuration();
	}
	return 0.f;
}

float UGAS_GEContextBlueprintFunctionLibrary::GetDebuffFrequency(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetDebuffFrequency();
	}
	return 0.f;
}

FGameplayTag UGAS_GEContextBlueprintFunctionLibrary::GetDamageType(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		if (RougeEffectContext->GetDamageType().IsValid())
		{
			return *RougeEffectContext->GetDamageType();
		}
	}
	return FGameplayTag();
}

FVector UGAS_GEContextBlueprintFunctionLibrary::GetDeathImpulse(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetDeathImpulse();
	}
	return FVector::ZeroVector;
}

FVector UGAS_GEContextBlueprintFunctionLibrary::GetKnockbackForce(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetKnockbackForce();
	}
	return FVector::ZeroVector;
}

FName UGAS_GEContextBlueprintFunctionLibrary::GetHitResultBoneName(const FGameplayEffectContextHandle& EffectContext)
{
	if (const FGAS_GameplayEffectContext* RougeEffectContext = static_cast<const FGAS_GameplayEffectContext*>(
		EffectContext.Get()))
	{
		return RougeEffectContext->GetHitResultBoneName();
	}
	return NAME_None;
}

void UGAS_GEContextBlueprintFunctionLibrary::SetBlockedHit(FGameplayEffectContextHandle& EffectContext, bool bBlockedHit)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetIsBlockedHit(bBlockedHit);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetCriticalHit(FGameplayEffectContextHandle& EffectContext, bool bCriticalHit)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetIsCriticalHit(bCriticalHit);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetSuccessfulDebuff(FGameplayEffectContextHandle& EffectContext,
                                                       bool bSuccessfulDebuff)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetIsSuccessfulDebuff(bSuccessfulDebuff);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDamage(FGameplayEffectContextHandle& EffectContext, float DebuffDamage)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetDebuffDamage(DebuffDamage);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDuration(FGameplayEffectContextHandle& EffectContext, float DebuffDuration)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetDebuffDuration(DebuffDuration);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetDebuffFrequency(FGameplayEffectContextHandle& EffectContext,
                                                      float DebuffFrequency)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetDebuffFrequency(DebuffFrequency);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetDamageType(FGameplayEffectContextHandle& EffectContext,
                                                 const FGameplayTag& DamageType)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		const TSharedPtr<FGameplayTag> SharedDamageType = MakeShared<FGameplayTag>(DamageType);
		RougeEffectContext->SetDamageType(SharedDamageType);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetDeathImpulse(FGameplayEffectContextHandle& EffectContext, const FVector& DeathImpulse)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetDeathImpulse(DeathImpulse);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetKnockbackForce(FGameplayEffectContextHandle& EffectContext,
                                                     const FVector& KnockbackForce)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetKnockbackForce(KnockbackForce);
	}
}

void UGAS_GEContextBlueprintFunctionLibrary::SetHitResultBoneName(FGameplayEffectContextHandle& EffectContext,
                                                        const FName& HitResultBoneName)
{
	if (FGAS_GameplayEffectContext* RougeEffectContext = static_cast<FGAS_GameplayEffectContext*>(EffectContext.Get()))
	{
		RougeEffectContext->SetHitResultBoneName(HitResultBoneName);
	}
}
