// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GAS_ExecCalcDamage.generated.h"

/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_ExecCalcDamage : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UGAS_ExecCalcDamage();

	static void DetermineDebuff(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
					 const FGameplayEffectSpec& Spec,
					 const FAggregatorEvaluateParameters& EvaluationParameters,
					 const 	TMap<FGameplayTag, FGameplayEffectAttributeCaptureDefinition>& TagsToDefs);

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
