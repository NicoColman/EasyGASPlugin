// Eanna Entertainment


#include "CharacterDemo/Demo_PlayerState.h"

#include "GAS_AttributeSet.h"

ADemo_PlayerState::ADemo_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UGAS_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UGAS_AttributeSet>(TEXT("AttributeSet"));
}
