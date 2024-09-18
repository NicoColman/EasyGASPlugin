// Eanna Entertainment


#include "GameplayAbilities/GAS_AbilityDamageBase.h"

#include "AbilitySystemGlobals.h"

void UGAS_AbilityDamageBase::MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor)
{
	DamageValues.WorldContextObject = GetAvatarActorFromActorInfo();
	DamageValues.SourceAbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	DamageValues.TargetAbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetActor);
	DamageValues.AbilityLevel = GetAbilityLevel();
}
