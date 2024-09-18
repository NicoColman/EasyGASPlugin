// Eanna Entertainment


#include "EffectActors/GAS_OverlapModificationsConfig.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"

void FGAS_OverlapModificationsConfig::OnBeginOverlap(AActor* TargetActor)
{
	ApplyOnBeginOverlap(TargetActor);
}

void FGAS_OverlapModificationsConfig::OnEndOverlap(AActor* TargetActor)
{
	ApplyOnEndOverlap(TargetActor);
	RemoveOnEndOverlap(TargetActor);
}

void FGAS_OverlapModificationsConfig::OnBeginCondition(AActor* TargetActor, const int32 Priority)
{
	ApplyOnBeginCondition(TargetActor, Priority);
	RemoveOnBeginCondition(TargetActor, Priority);
}

void FGAS_OverlapModificationsConfig::OnEndCondition(AActor* TargetActor, const int32 Priority)
{
	ApplyOnEndCondition(TargetActor, Priority);
	RemoveOnEndCondition(TargetActor, Priority);
}

void FGAS_OverlapModificationsConfig::ApplyOnBeginOverlap(AActor* TargetActor)
{
	HandleApplication(TargetActor, EGAS_ApplicationPolicy::ApplyOnBeginOverlap);
}

void FGAS_OverlapModificationsConfig::ApplyOnEndOverlap(AActor* TargetActor)
{
	HandleApplication(TargetActor, EGAS_ApplicationPolicy::ApplyOnEndOverlap);
}

void FGAS_OverlapModificationsConfig::ApplyOnBeginCondition(AActor* TargetActor, const int32 Priority)
{
	HandleApplication(TargetActor, EGAS_ApplicationPolicy::ApplyOnBeginCondition, Priority);
}

void FGAS_OverlapModificationsConfig::ApplyOnEndCondition(AActor* TargetActor, const int32 Priority)
{
	HandleApplication(TargetActor, EGAS_ApplicationPolicy::ApplyOnEndCondition, Priority);
}

void FGAS_OverlapModificationsConfig::RemoveOnEndOverlap(AActor* TargetActor)
{
	HandleRemoval(TargetActor, EGAS_RemovalPolicy::RemoveOnEndOverlap);
	ClearActiveMaps(TargetActor);
}

void FGAS_OverlapModificationsConfig::RemoveOnBeginCondition(AActor* TargetActor, const int32 Priority)
{
	HandleRemoval(TargetActor, EGAS_RemovalPolicy::RemoveOnBeginCondition, Priority);
}

void FGAS_OverlapModificationsConfig::RemoveOnEndCondition(AActor* TargetActor, const int32 Priority)
{
	HandleRemoval(TargetActor, EGAS_RemovalPolicy::RemoveOnEndCondition, Priority);
}

void FGAS_OverlapModificationsConfig::HandleApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	if (EffectsAmount != EGAS_ComponentAmount::None) HandleGameplayEffectApplication(TargetActor, ApplicationPolicy, Priority);
	if (TagsAmount != EGAS_ComponentAmount::None) HandleTagApplication(TargetActor, ApplicationPolicy, Priority);
}

void FGAS_OverlapModificationsConfig::HandleRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority)
{
	if (EffectsAmount != EGAS_ComponentAmount::None) HandleGameplayEffectRemoval(TargetActor, RemovalPolicy, Priority);
	if (TagsAmount != EGAS_ComponentAmount::None) HandleTagRemoval(TargetActor, RemovalPolicy, Priority);
}

void FGAS_OverlapModificationsConfig::HandleGameplayEffectApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	switch (EffectsAmount)
	{
	case EGAS_ComponentAmount::Single:
		HandleSingleGameplayEffectApplication(TargetActor, ApplicationPolicy);
		break;
	case EGAS_ComponentAmount::Multiple:
		HandleMultipleGameplayEffectsApplication(TargetActor, ApplicationPolicy, Priority);
		break;
	default:
		break;
	}
}

void FGAS_OverlapModificationsConfig::HandleSingleGameplayEffectApplication(AActor* TargetActor,
	const EGAS_ApplicationPolicy& ApplicationPolicy)
{
	const FGAS_GameplayEffectConfig& Config = EffectConfig;
	if (CanApply(Config.PolicyConfig, ApplicationPolicy))
	{
		ApplyEffectToTarget(TargetActor, EffectToApply, Config);
	}
}

void FGAS_OverlapModificationsConfig::HandleMultipleGameplayEffectsApplication(AActor* TargetActor,
	const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	if (bShouldUseSameEffectConfig)
	{
		const FGAS_GameplayEffectConfig& Config = EffectConfig;
		if (!CanApply(Config.PolicyConfig, ApplicationPolicy)) return;
		
		for (const auto& Effect : EffectsToApply)
		{
			ApplyEffectToTarget(TargetActor, Effect, Config);
		}
	}
	else
	{
		for (const auto& [Effect, Config] : MultipleEffectsConfig)
		{
			if (!CanApply(Config.PolicyConfig, ApplicationPolicy, Priority)) continue;
			
			ApplyEffectToTarget(TargetActor, Effect, Config);
		}
	}
}

void FGAS_OverlapModificationsConfig::HandleGameplayEffectRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority)
{
	RemoveEffectFromTarget(TargetActor, RemovalPolicy, Priority);
}

void FGAS_OverlapModificationsConfig::ApplyEffectToTarget(AActor* TargetActor, const TSubclassOf<UGameplayEffect>& GameplayEffectClass,
	const FGAS_GameplayEffectConfig& GameplayEffectConfig)
{
	// if (TargetActor->Implements<UIntCharEnemyBase>() && !GameplayEffectConfig.PolicyConfig.bApplyToEnemies)  return;
	if (!TargetActor->HasAuthority()) return;
	UAbilitySystemComponent* TargetASC = Cast<UAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor));
	if (!TargetASC) return;
	check(GameplayEffectClass);
	
	FGameplayEffectContextHandle EffectContext = TargetASC->MakeEffectContext();
	checkf(EffectContext.IsValid(), TEXT("EffectContext is not valid, please remeber to set the ContextObject"));
	EffectContext.AddSourceObject(EffectContextObject);
	
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectClass, GameplayEffectConfig.EffectLevel, EffectContext);
	const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());

	const bool bIsNotInstant = EffectSpecHandle.Data.Get()->Def.Get()->DurationPolicy != EGameplayEffectDurationType::Instant;
	if (!bIsNotInstant) return;

	const TPair<EGAS_RemovalPolicy, FGAS_StoredActiveGameplayEffect> EffectPair = TPair<EGAS_RemovalPolicy, FGAS_StoredActiveGameplayEffect>(GameplayEffectConfig.PolicyConfig.GetEffective_RemovalPolicy(), FGAS_StoredActiveGameplayEffect(ActiveEffectHandle, GameplayEffectConfig.PolicyConfig.ConditionalPriority));
	ActiveEffectsMap.Add(TargetASC, EffectPair);

	if (GameplayEffectConfig.PolicyConfig.CheckRemoveOnConditionNotMet())
	{
		const TPair<EGAS_RemovalPolicy, FGAS_StoredActiveGameplayEffect> EndOverlapEffectPair = TPair<EGAS_RemovalPolicy, FGAS_StoredActiveGameplayEffect>(EGAS_RemovalPolicy::RemoveOnEndOverlap, FGAS_StoredActiveGameplayEffect(ActiveEffectHandle, 0));
		ActiveEffectsMap.Add(TargetASC, EndOverlapEffectPair);
	}
}

void FGAS_OverlapModificationsConfig::RemoveEffectFromTarget(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	const TArray<FGAS_StoredActiveGameplayEffect>& EffectsToRemove = GetPairValueAndRemoveFromMap<FGAS_StoredActiveGameplayEffect>(TargetASC, RemovalPolicy, ActiveEffectsMap, Priority);
	
	for (const FGAS_StoredActiveGameplayEffect& EffectHandle : EffectsToRemove)
	{
		if (!EffectHandle.ActiveGameplayEffect.IsValid()) continue;
		TargetASC->RemoveActiveGameplayEffect(EffectHandle.ActiveGameplayEffect);
	}
}

void FGAS_OverlapModificationsConfig::HandleTagApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	switch (TagsAmount)
	{
	case EGAS_ComponentAmount::Single:
		HandleSingleTagApplication(TargetActor, ApplicationPolicy);
		break;
	case EGAS_ComponentAmount::Multiple:
		HandleMultipleTagsApplication(TargetActor, ApplicationPolicy, Priority);
		break;
	default:
		break;
	}
}

void FGAS_OverlapModificationsConfig::HandleSingleTagApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy)
{
	const FGAS_GameplayTagConfig& Config = TagConfig;
	if (CanApply(Config.PolicyConfig, ApplicationPolicy))
	{
		ApplyTagToTarget(TargetActor, TagToApply, Config);
	}
}

void FGAS_OverlapModificationsConfig::HandleMultipleTagsApplication(AActor* TargetActor, const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	if (bShouldUseSameTagConfig)
	{
		const FGAS_GameplayTagConfig& Config = TagConfig;
		if (!CanApply(Config.PolicyConfig, ApplicationPolicy)) return;
		
		for (const auto& Tag : TagsToApply)
		{
			ApplyTagToTarget(TargetActor, Tag, Config);
		}
	}
	else
	{
		for (const auto& [Tag, Config] : MultipleTagsConfig)
		{
			if (!CanApply(Config.PolicyConfig, ApplicationPolicy, Priority)) continue;
			ApplyTagToTarget(TargetActor, Tag, Config);
		}
	}
}

void FGAS_OverlapModificationsConfig::HandleTagRemoval(AActor* TargetActor, const EGAS_RemovalPolicy& RemovalPolicy, const int32 Priority)
{
	RemoveTagFromTarget(TargetActor, RemovalPolicy, Priority);
}

void FGAS_OverlapModificationsConfig::ApplyTagToTarget(AActor* TargetActor, const FGameplayTag& Tag, const FGAS_GameplayTagConfig& Config)
{
	// if (TargetActor->Implements<UIntCharEnemyBase>() && !Config.PolicyConfig.bApplyToEnemies)  return;

	UAbilitySystemComponent* TargetASC = Cast<UAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor));
	if (!TargetASC) return;

	TargetASC->AddLooseGameplayTag(Tag, Config.TagSize);

	if (Config.PolicyConfig.GetEffective_RemovalPolicy() == EGAS_RemovalPolicy::DoNotRemove) return;
	const TPair<EGAS_RemovalPolicy, FGAS_StoredGameplayTagInfo> TagPair = TPair<EGAS_RemovalPolicy, FGAS_StoredGameplayTagInfo>(Config.PolicyConfig.GetEffective_RemovalPolicy(), FGAS_StoredGameplayTagInfo(Tag, Config.TagSize, Config.PolicyConfig.ConditionalPriority));
	ActiveTagsMap.Add(TargetASC, TagPair);

	if (Config.PolicyConfig.CheckRemoveOnConditionNotMet())
	{
		const TPair<EGAS_RemovalPolicy, FGAS_StoredGameplayTagInfo> EndOverlapTagPair = TPair<EGAS_RemovalPolicy, FGAS_StoredGameplayTagInfo>(EGAS_RemovalPolicy::RemoveOnEndOverlap, FGAS_StoredGameplayTagInfo(Tag, Config.TagSize, 0));
		ActiveTagsMap.Add(TargetASC, EndOverlapTagPair);
	}
}

void FGAS_OverlapModificationsConfig::RemoveTagFromTarget(AActor* TargetActor, const EGAS_RemovalPolicy& ApplicationPolicy, const int32 Priority)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	const TArray<FGAS_StoredGameplayTagInfo>& TagsToRemove = GetPairValueAndRemoveFromMap<FGAS_StoredGameplayTagInfo>(TargetASC, ApplicationPolicy, ActiveTagsMap, Priority);

	for (const auto& [Tag, Size, TagPriority] : TagsToRemove)
	{
		if (!Tag.IsValid()) continue;
		TargetASC->RemoveLooseGameplayTag(Tag, Size);
	}
}

void FGAS_OverlapModificationsConfig::ClearActiveMaps(AActor* TargetActor)
{
	const UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if (!TargetASC) return;

	ActiveEffectsMap.Remove(TargetASC);
	ActiveTagsMap.Remove(TargetASC);
}

bool FGAS_OverlapModificationsConfig::CanApply(const FGAS_PolicyConfig& PolicyConfig,
                              const EGAS_ApplicationPolicy& ApplicationPolicy, const int32 Priority)
{
	const bool bCheckSamePolicy = PolicyConfig.ApplicationPolicy == ApplicationPolicy;
	const bool bCheckShouldReApply = PolicyConfig.ShouldReApplyOnEndCondition() && ApplicationPolicy == EGAS_ApplicationPolicy::ApplyOnEndCondition;
	const bool bCheckPriority = PolicyConfig.CheckPriority(Priority);
	return (bCheckSamePolicy && bCheckPriority) || bCheckShouldReApply;
}
