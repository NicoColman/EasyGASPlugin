// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct EANNAGAMEPLAYTAGS_API FTags_Input
{
public:
	/** This function should be called to initialize the native gameplay tags for the game.
	 * Its recommended to call this function in AssetManager->StartInitialLoading(); */
	static void InitializeNativeGameplayTags();
	
	struct FInputTags
	{
		FGameplayTag Input_LMB;
		FGameplayTag Input_RMB;
		FGameplayTag Input_MMB;
		FGameplayTag Input_Sprint;
		FGameplayTag Input_Jump;
	};

	struct FInputBlockTags
	{
		FGameplayTag InputBlock_Pressed;
		FGameplayTag InputBlock_Released;
		FGameplayTag InputBlock_Held;
	};
		
		

private:
	static FInputTags InputTags;
	static FInputBlockTags InputBlockTags;

public:
	static const FInputTags& GetInputTags() { return InputTags; }
	static const FInputBlockTags& GetInputBlockTags() { return InputBlockTags; }
};

