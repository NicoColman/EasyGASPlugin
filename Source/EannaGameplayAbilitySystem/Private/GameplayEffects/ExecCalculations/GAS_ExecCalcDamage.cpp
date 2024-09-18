// Eanna Entertainment


#include "GameplayEffects/ExecCalculations/GAS_ExecCalcDamage.h"

#include "GAS_AttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GAS_BlueprintFunctionLibrary.h"
#include "Interfaces/GAS_InterfaceCharacter.h"
#include "TagStructs/Tags_GAS.h"

struct FGAS_DamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(BlockChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(FireResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(LightningResistance);

	FGAS_DamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, BlockChance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, CriticalHitChance, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, CriticalHitResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, CriticalHitDamage, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, FireResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAS_AttributeSet, LightningResistance, Target, false);
	}
};

static const FGAS_DamageStatics& DamageStatics()
{
	static FGAS_DamageStatics DStatics;
	return DStatics;
}

UGAS_ExecCalcDamage::UGAS_ExecCalcDamage()
{
	RelevantAttributesToCapture.Add(DamageStatics().BlockChanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitChanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().CriticalHitDamageDef);
	RelevantAttributesToCapture.Add(DamageStatics().FireResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().LightningResistanceDef);
}

void UGAS_ExecCalcDamage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
		TMap<FGameplayTag, FGameplayEffectAttributeCaptureDefinition> TagsToCaptureDefs;
	const FTags_GAS::FAttributeTags& AttributeTags = FTags_GAS::GetAttributeTags();
	const FTags_GAS::FGameplayEffectTags& EffectTags = FTags_GAS::GetGameplayEffectTags();
	
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Secondary_BlockChance, DamageStatics().BlockChanceDef);
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Secondary_CriticalHitChance, DamageStatics().CriticalHitChanceDef);
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Secondary_CriticalHitResistance, DamageStatics().CriticalHitResistanceDef);
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Secondary_CriticalHitDamage, DamageStatics().CriticalHitDamageDef);
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Resistance_Fire, DamageStatics().FireResistanceDef);
	TagsToCaptureDefs.Add(AttributeTags.Attribute_Resistance_Lightning, DamageStatics().LightningResistanceDef);

	const UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
	const UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

	AActor* SourceActor = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
	AActor* TargetActor = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

	int32 SourceActorLevel = SourceActor->Implements<UGAS_InterfaceCharacter>() ? IGAS_InterfaceCharacter::Execute_GetCharacterLevel(SourceActor) : 1;
	int32 TargetActorLevel = TargetActor->Implements<UGAS_InterfaceCharacter>() ? IGAS_InterfaceCharacter::Execute_GetCharacterLevel(TargetActor) : 1;
	
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	// Debuffs
	DetermineDebuff(ExecutionParams, Spec, EvaluationParameters, TagsToCaptureDefs);

	
	// Get Damage Set by Caller Magnitude
	float Damage = 0.f;
	
	for (const auto& Pair : FTags_GAS::GetEffectStatusTags().DamageTypeToEffectStatus)
	{
		const FGameplayTag ResistanceType = Pair.Value;
		const FGameplayTag& DamageType = Pair.Key;
		const float TypeDamage = Spec.GetSetByCallerMagnitude(DamageType, false, -1.f);
		if (TypeDamage > 0.9)
		{
			checkf(TagsToCaptureDefs.Contains(ResistanceType), TEXT("ResistanceType not found in TagsToCaptureDefs"));
			const FGameplayEffectAttributeCaptureDefinition DamageCaptureDef = TagsToCaptureDefs[ResistanceType];

			float DamageTypeValue = Spec.GetSetByCallerMagnitude(Pair.Key);
			
			float ResistanceValue = 0.f;
			ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageCaptureDef, EvaluationParameters, ResistanceValue);
			ResistanceValue = FMath::Clamp(ResistanceValue, 0.f, 100.f);
			DamageTypeValue *= (100 - ResistanceValue) / 100.f;
			Damage += DamageTypeValue;
		}
	}
	
	// Capture BlockChance on Target, and check for successful Block
	float TargetBlockChance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().BlockChanceDef, EvaluationParameters, TargetBlockChance);
	TargetBlockChance = FMath::Max<float>(TargetBlockChance, 0.f);

	const bool bBlocked = FMath::RandRange(1, 100) <= TargetBlockChance;

	FGameplayEffectContextHandle EffectContext = Spec.GetContext();
	UGAS_GEContextBlueprintFunctionLibrary::SetBlockedHit(EffectContext, bBlocked);
	
	Damage = bBlocked ? 0.f : Damage;
	
	// Calculate Critical Hit Chance and Damage
	float SourceCriticalHitChance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitChanceDef, EvaluationParameters, SourceCriticalHitChance);
	SourceCriticalHitChance = FMath::Max<float>(SourceCriticalHitChance, 0.f);

	float SourceCriticalHitDamage = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitDamageDef, EvaluationParameters, SourceCriticalHitDamage);
	SourceCriticalHitDamage = FMath::Max<float>(SourceCriticalHitDamage, 0.f);

	// IsCriticalHit will be true in case we are calculating the critical hit chance beforehand, i.e. in AttackLight
	// where we calculate first, this way we always apply the critical hit damage
	if (UGAS_GEContextBlueprintFunctionLibrary::IsCriticalHit(EffectContext))
	{
		Damage = 2.5f * Damage + SourceCriticalHitDamage;
	}
	else
	{
		float TargetCriticalHitResistance = 0.f;
		ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().CriticalHitResistanceDef, EvaluationParameters, TargetCriticalHitResistance);
		TargetCriticalHitResistance = FMath::Max<float>(TargetCriticalHitResistance, 0.f);
	
		//const FRealCurve* CriticalHitResistanceCurve = SourceDataAsset->DamageCalculationsCoefficients->FindCurve(FName("CriticalHitResistance"), FString());
		//const float CriticalHitResistanceCoefficient =  CriticalHitResistanceCurve->Eval(TargetActorLevel);
	
		const float EffectiveCriticalHitChance = SourceCriticalHitChance - TargetCriticalHitResistance;
		const bool bCriticalHit = FMath::RandRange(1, 100) <= EffectiveCriticalHitChance;
		//if (bCriticalHit) UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(SourceActor, GameplayTags.Event_CriticalHit, FGameplayTagContainer(), 0);
		UGAS_GEContextBlueprintFunctionLibrary::SetCriticalHit(EffectContext, bCriticalHit);
	
		Damage = bCriticalHit ? 2.5f * Damage + SourceCriticalHitDamage : Damage;
	}
	const FGameplayModifierEvaluatedData EvaluatedData(UGAS_AttributeSet::GetIncomingDamageAttribute(), EGameplayModOp::Additive, Damage);
	OutExecutionOutput.AddOutputModifier(EvaluatedData);
}

void UGAS_ExecCalcDamage::DetermineDebuff(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                          const FGameplayEffectSpec& Spec, const FAggregatorEvaluateParameters& EvaluationParameters,
                                          const TMap<FGameplayTag, FGameplayEffectAttributeCaptureDefinition>& TagsToDefs)
{
	for (TTuple<FGameplayTag, FGameplayTag> Pair : FTags_GAS::GetEffectStatusTags().DamageTypeToEffectStatus)
	{
		const FGameplayTag& DamageType = Pair.Key;
		const float TypeDamage = Spec.GetSetByCallerMagnitude(DamageType, false, -1.f);
		if (TypeDamage > 0.9f)
		{
			const FTags_GAS::FSetByCallerTags& SetByCallerTags = FTags_GAS::GetSetByCallerTags();
			const float SourceDebuffChance = Spec.GetSetByCallerMagnitude(SetByCallerTags.SetByCaller_Probability, true, -1.f);
			FGameplayEffectContextHandle ContextHandle = Spec.GetContext();
			UGAS_GEContextBlueprintFunctionLibrary::SetDamageType(ContextHandle, DamageType);

			float TargetDebuffResistance = 0.f;
			const FGameplayTag& ResistanceTag = FTags_GAS::GetGameplayEffectTags().DamageTypesToResistances[DamageType];
			ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(TagsToDefs[ResistanceTag], EvaluationParameters, TargetDebuffResistance);
			TargetDebuffResistance = FMath::Max<float>(TargetDebuffResistance, 0.f);
			const float EffectiveDebuffChance = SourceDebuffChance * (100 - TargetDebuffResistance) / 100.f;
			const bool bDebuff = FMath::RandRange(1, 100) < EffectiveDebuffChance;
		
			if (!bDebuff) return;

			UGAS_GEContextBlueprintFunctionLibrary::SetSuccessfulDebuff(ContextHandle, true);

			const float DebuffDamage = Spec.GetSetByCallerMagnitude(SetByCallerTags.SetByCaller_Damage, false, -1.f);
			const float DebuffDuration = Spec.GetSetByCallerMagnitude(SetByCallerTags.SetByCaller_Duration, false, -1.f);
			const float DebuffFrequency = Spec.GetSetByCallerMagnitude(SetByCallerTags.SetByCaller_Frequency, false, -1.f);

			UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDamage(ContextHandle, DebuffDamage);
			UGAS_GEContextBlueprintFunctionLibrary::SetDebuffDuration(ContextHandle, DebuffDuration);
			UGAS_GEContextBlueprintFunctionLibrary::SetDebuffFrequency(ContextHandle, DebuffFrequency);
		}
	}
}
