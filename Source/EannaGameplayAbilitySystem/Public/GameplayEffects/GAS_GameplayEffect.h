// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GAS_GameplayEffect.generated.h"

/**
 * Custom GameplayEffect class for adding custom GameplayEffectComponents.
 */
UCLASS()
class EANNAGAMEPLAYABILITYSYSTEM_API UGAS_GameplayEffect : public UGameplayEffect
{
	GENERATED_BODY()

public:
	UGAS_GameplayEffect();

#if WITH_EDITOR
	virtual void PostCDOCompiled(const FPostCDOCompiledContext& Context) override;
#endif
	
protected:
	void ConvertAbilitiesWithInputTagToComponent();
};
