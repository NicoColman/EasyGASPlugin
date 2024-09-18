// Eanna Entertainment


#include "GameplayEffects/GAS_GameplayEffect.h"

#include "GameplayEffects/Components/GAS_GECAbilitiesWithInputTag.h"

UGAS_GameplayEffect::UGAS_GameplayEffect()
{
}

#if WITH_EDITOR
void UGAS_GameplayEffect::PostCDOCompiled(const FPostCDOCompiledContext& Context)
{
	Super::PostCDOCompiled(Context);

	ConvertAbilitiesWithInputTagToComponent();
}
#endif

/** We add the component to the effect */
void UGAS_GameplayEffect::ConvertAbilitiesWithInputTagToComponent()
{
	FindOrAddComponent<UGAS_GECAbilitiesWithInputTag>();
}
