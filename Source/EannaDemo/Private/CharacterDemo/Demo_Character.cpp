// Eanna Entertainment


#include "CharacterDemo/Demo_Character.h"


ADemo_Character::ADemo_Character()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADemo_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADemo_Character::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	InitializeReplicatedAbilitySystem();
}

void ADemo_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADemo_Character::InitializeReplicatedAbilitySystem_Implementation()
{
}



