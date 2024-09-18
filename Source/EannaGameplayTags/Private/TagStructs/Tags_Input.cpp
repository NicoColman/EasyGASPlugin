// Eanna Entertainment


#include "TagStructs/Tags_Input.h"

#include "GameplayTagsManager.h"

FTags_Input::FInputTags FTags_Input::InputTags;
FTags_Input::FInputBlockTags FTags_Input::InputBlockTags;

void FTags_Input::InitializeNativeGameplayTags()
{
	UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

	/**
	 * Input Tags
	 */
	InputTags.Input_LMB = TagsManager.AddNativeGameplayTag(
		FName("Input.LMB"),
		FString("Input Left Mouse Button")
		);
	InputTags.Input_RMB = TagsManager.AddNativeGameplayTag(
		FName("Input.RMB"),
		FString("Input Right Mouse Button")
		);
	InputTags.Input_MMB = TagsManager.AddNativeGameplayTag(
		FName("Input.MMB"),
		FString("Input Middle Mouse Button")
		);
	InputTags.Input_Sprint = TagsManager.AddNativeGameplayTag(
		FName("Input.Sprint"),
		FString("Input Sprint")
		);
	InputTags.Input_Jump = TagsManager.AddNativeGameplayTag(
		FName("Input.Jump"),
		FString("Input Jump")
		);
	

	/**
	 * Input Block Tags
	 */
	InputBlockTags.InputBlock_Pressed = TagsManager.AddNativeGameplayTag(
		FName("InputBlock.Pressed"),
		FString("Input Block Pressed")
		);
	InputBlockTags.InputBlock_Released = TagsManager.AddNativeGameplayTag(
		FName("InputBlock.Released"),
		FString("Input Block Released")
		);
	InputBlockTags.InputBlock_Held = TagsManager.AddNativeGameplayTag(
		FName("InputBlock.Held"),
		FString("Input Block Held")
		);
	
}
