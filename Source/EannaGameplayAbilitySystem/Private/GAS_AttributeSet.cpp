// Eanna Entertainment


#include "GAS_AttributeSet.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectExtension.h"
#include "GAS_BlueprintFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Net/UnrealNetwork.h"
#include "TagStructs/Tags_GAS.h"

UGAS_AttributeSet::UGAS_AttributeSet()
{
	const FTags_GAS::FAttributeTags& AttributeTags = FTags_GAS::GetAttributeTags();

	TagsToAttributes.Add(AttributeTags.Attribute_Primary_MaxHealth, GetMaxHealthAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Primary_Health, GetHealthAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Primary_HealthRegeneration, GetHealthRegenerationAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Primary_Speed, GetSpeedAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Primary_JumpHeight, GetJumpHeightAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Secondary_BlockChance, GetBlockChanceAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Secondary_CriticalHitChance, GetCriticalHitChanceAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Secondary_CriticalHitDamage, GetCriticalHitDamageAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Secondary_CriticalHitResistance, GetCriticalHitResistanceAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Resistance_Fire, GetFireResistanceAttribute);
	TagsToAttributes.Add(AttributeTags.Attribute_Resistance_Lightning, GetLightningResistanceAttribute);
}

void UGAS_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, HealthRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, Speed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, JumpHeight, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, BlockChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, CriticalHitChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, CriticalHitDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, CriticalHitResistance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, FireResistance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGAS_AttributeSet, LightningResistance, COND_None, REPNOTIFY_Always);
}

void UGAS_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
}

void UGAS_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	// Source = cause of the effect, Target = target of the effect (owner of this ASC)
	
	FGAS_EffectProperties Props;
	SetEffectProperties(Data, Props);
	
	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		HandleIncomingDamage(Props);
	}
}

void UGAS_AttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FGAS_EffectProperties& Props) const
{
	Props.EffectContextHandle = Data.EffectSpec.GetContext();
	Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();
		if (!Props.SourceController && Props.SourceAvatarActor)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}
		if (Props.SourceController)
		{
			Props.SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
		}
	}

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);
		Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetCharacter);
	}
	if (Data.EvaluatedData.Attribute == GetSpeedAttribute())
	{
		Props.TargetCharacter->GetCharacterMovement()->MaxWalkSpeed = GetSpeed();
	}
}

void UGAS_AttributeSet::HandleIncomingDamage(const FGAS_EffectProperties& Props)
{
	const float LocalIncomingDamage = GetIncomingDamage();
	SetIncomingDamage(0.f);
	if (LocalIncomingDamage < 0.f) return;
	const float NewHealth = GetHealth() - LocalIncomingDamage;
	SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));

	if (const bool bSuccessfulDebuff = UGAS_GEContextBlueprintFunctionLibrary::IsSuccessfulDebuff(Props.EffectContextHandle))
	{
		Debuff(Props);
	}

	const bool bFatal = NewHealth <= 0.f;
	
	const bool bBlock = UGAS_GEContextBlueprintFunctionLibrary::IsBlockedHit(Props.EffectContextHandle);
	const bool bCritical = UGAS_GEContextBlueprintFunctionLibrary::IsCriticalHit(Props.EffectContextHandle);

	FVector KnockbackForce = UGAS_GEContextBlueprintFunctionLibrary::GetKnockbackForce(Props.EffectContextHandle);
	KnockbackForce = bCritical ? KnockbackForce * 100.f : KnockbackForce;
	if (!KnockbackForce.IsNearlyZero(1.f))
	{
		Props.TargetCharacter->LaunchCharacter(KnockbackForce, true, true);
	}
}

void UGAS_AttributeSet::Debuff(const FGAS_EffectProperties& Props)
{
	const FGameplayTag DamageType = UGAS_GEContextBlueprintFunctionLibrary::GetDamageType(Props.EffectContextHandle);
	const float DebuffDamage = UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDamage(Props.EffectContextHandle);
	const float DebuffDuration = UGAS_GEContextBlueprintFunctionLibrary::GetDebuffDuration(Props.EffectContextHandle);
	const float DebuffFrequency = UGAS_GEContextBlueprintFunctionLibrary::GetDebuffFrequency(Props.EffectContextHandle);

	const FGameplayTag EffectTag = FTags_GAS::GetEffectStatusTags().DamageTypeToEffectStatus[DamageType];
	FDynamicGEConfig EffectConfig;
	EffectConfig.SourceASC = Props.SourceASC;
	EffectConfig.SourceObject = Props.SourceAvatarActor;
	EffectConfig.EffectTag = EffectTag;
	EffectConfig.DurationPolicy = EGameplayEffectDurationType::HasDuration;
	EffectConfig.DurationMagnitude = DebuffDuration;
	EffectConfig.Period = DebuffFrequency;
	EffectConfig.ModifiersInfo = {{ GetIncomingDamageAttribute(), EGameplayModOp::Additive, FScalableFloat(DebuffDamage)}};
	EffectConfig.TagsToGrant = FGameplayTagContainer(EffectTag);

	const FGameplayEffectSpec* Spec = UGAS_BlueprintFunctionLibrary::CreateDynamicGameplayEffectSpec(EffectConfig);
	if (!Spec) return;

	FGAS_GameplayEffectContext* GASEffectContext = static_cast<FGAS_GameplayEffectContext*>(Spec->GetContext().Get());
	const TSharedPtr<FGameplayTag> DebuffDamageType = MakeShareable(new FGameplayTag(DamageType));

	// We need to set the damage type to the context to be able to correctly calcualte the damage.
	GASEffectContext->SetDamageType(DebuffDamageType);
	Props.TargetASC->ApplyGameplayEffectSpecToSelf(*Spec);
}

void UGAS_AttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetSpeedAttribute())
	{
		AActor* Actor = GetOwningAbilitySystemComponent()->AbilityActorInfo->AvatarActor.Get();
		if (const ACharacter* Character = Cast<ACharacter>(Actor))
		{
			Character->GetCharacterMovement()->MaxWalkSpeed = NewValue;
		}
	}
	if (Attribute == GetJumpHeightAttribute())
	{
		AActor* Actor = GetOwningAbilitySystemComponent()->AbilityActorInfo->AvatarActor.Get();
		if (const ACharacter* Character = Cast<ACharacter>(Actor))
		{
			Character->GetCharacterMovement()->JumpZVelocity = NewValue;
		}
	}
}

void UGAS_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, MaxHealth, OldMaxHealth);
}

void UGAS_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, Health, OldHealth);
}

void UGAS_AttributeSet::OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, HealthRegeneration, OldHealthRegeneration);
}

void UGAS_AttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, Speed, OldSpeed);
}

void UGAS_AttributeSet::OnRep_JumpHeight(const FGameplayAttributeData& OldJumpHeight) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, JumpHeight, OldJumpHeight);
}

void UGAS_AttributeSet::OnRep_BlockChance(const FGameplayAttributeData& OldBlockChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, BlockChance, OldBlockChance);
}

void UGAS_AttributeSet::OnRep_CriticalHitChance(const FGameplayAttributeData& OldCriticalHitChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, CriticalHitChance, OldCriticalHitChance);
}

void UGAS_AttributeSet::OnRep_CriticalHitDamage(const FGameplayAttributeData& OldCriticalHitDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, CriticalHitDamage, OldCriticalHitDamage);
}

void UGAS_AttributeSet::OnRep_CriticalHitResistance(const FGameplayAttributeData& OldCriticalHitResistance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, CriticalHitResistance, OldCriticalHitResistance);
}

void UGAS_AttributeSet::OnRep_FireResistance(const FGameplayAttributeData& OldFireResistance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, FireResistance, OldFireResistance);
}

void UGAS_AttributeSet::OnRep_LightningResistance(const FGameplayAttributeData& OldLightningResistance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, LightningResistance, OldLightningResistance);
}
