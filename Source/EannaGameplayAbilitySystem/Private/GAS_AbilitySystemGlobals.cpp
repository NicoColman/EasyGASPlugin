// Eanna Entertainment


#include "GAS_AbilitySystemGlobals.h"

#include "GameplayEffects/GAS_GameplayEffectContext.h"

FGameplayEffectContext* UGAS_AbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FGAS_GameplayEffectContext();
}
