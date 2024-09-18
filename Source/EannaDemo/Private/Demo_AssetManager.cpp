// Eanna Entertainment


#include "Demo_AssetManager.h"

#include "AbilitySystemGlobals.h"
#include "Tags_BlueprintFunctionLibrary.h"
#include "Engine/AssetManager.h"
#include "UnrealEngine.h"

UDemo_AssetManager& UDemo_AssetManager::Get()
{
	UDemo_AssetManager* This = Cast<UDemo_AssetManager>(GEngine->AssetManager);
	return *This;
}

void UDemo_AssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	UTags_BlueprintFunctionLibrary::InitializeNativeGameplayTags();
	UAbilitySystemGlobals::Get().InitGlobalData();
}
