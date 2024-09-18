// Eanna Entertainment


#include "Tags_BlueprintFunctionLibrary.h"

#include "EannaGameplayTags/Tags_LogChannels.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "AbilitySystemComponent.h"
#include "TagStructs/Tags_GAS.h"
#include "TagStructs/Tags_Input.h"

UTags_BlueprintFunctionLibrary::UTags_BlueprintFunctionLibrary()
{
}

void UTags_BlueprintFunctionLibrary::InitializeNativeGameplayTags()
{
	FTags_GAS::InitializeNativeGameplayTags();
	FTags_Input::InitializeNativeGameplayTags();
}

FGameplayTag UTags_BlueprintFunctionLibrary::GetMatchTagFromASCWithSize(const UAbilitySystemComponent* ASC,
                                                                        const FName& RequestedTag, const int32 TagSize, const bool bLogged)
{
	FGameplayTagContainer TagContainer;
	ASC->GetOwnedGameplayTags(TagContainer);

	for (const FGameplayTag& Tag : TagContainer)
	{
		if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(RequestedTag)))
		{
			if (TagSize > 1 && ASC->GetGameplayTagCount(Tag) == TagSize)
			{
				return Tag;
			}
			if (TagSize == 1 && ASC->GetGameplayTagCount(Tag) == 1)
			{
				return Tag;
			}
		}
	}
	if (bLogged)
	{
		UE_LOG(LogTags, Error, TEXT("GetMatchTagFromASC: No matching tag found for %s"), *RequestedTag.ToString());
	}
	return FGameplayTag();
}

FGameplayTagContainer UTags_BlueprintFunctionLibrary::GetMatchTagsFromASCWithSize(const UAbilitySystemComponent* ASC,
	const FName& RequestedTag, const int32 TagSize)
{
	FGameplayTagContainer TagContainer;
	ASC->GetOwnedGameplayTags(TagContainer);
	FGameplayTagContainer MatchingTags;
	for (const FGameplayTag& Tag : TagContainer)
	{
		if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(RequestedTag)))
		{
			if (TagSize > 1 && ASC->GetGameplayTagCount(Tag) >= TagSize)
			{
				MatchingTags.AddTag(Tag);
			}
			else
			{
				MatchingTags.AddTag(Tag);
			}
		}
	}
	if (MatchingTags.Num() > 0)
	{
		return MatchingTags;
	}
	UE_LOG(LogTags, Error, TEXT("GetMatchTagFromASC: No matching tag found for %s"), *RequestedTag.ToString());
	return FGameplayTagContainer();
}

void UTags_BlueprintFunctionLibrary::SwitchOwnedTags(UAbilitySystemComponent* ASC, const FGameplayTag& TagToSwitch,
	const int32 Depth)
{
	if (!IsValid(ASC)) return;

	FGameplayTagContainer OwnedTags;
	ASC->GetOwnedGameplayTags(OwnedTags);
	
	FGameplayTag ParentTag = TagToSwitch.RequestDirectParent();
	if (Depth == 2) ParentTag = ParentTag.RequestDirectParent();
	
	FGameplayTagContainer TagsToRemove;
	for (const FGameplayTag& Tag : OwnedTags)
	{
		if (!Tag.MatchesTag(ParentTag)) continue;
		TagsToRemove.AddTag(Tag);
	}
	
	ASC->RemoveLooseGameplayTags(TagsToRemove);
	ASC->AddLooseGameplayTag(TagToSwitch);
}

UObject* UTags_BlueprintFunctionLibrary::GetPrimaryObjectFromTag(const FGameplayTag& ObjectPrimaryTag,
	const ANSICHAR* BundleName)
{
	FPrimaryAssetId PrimaryAssetId = GetPrimaryAssetIdFromTag(ObjectPrimaryTag, BundleName);
	if (PrimaryAssetId.IsValid())
	{
		UAssetManager& AssetManager = UAssetManager::Get();
		UObject* LoadedAsset = AssetManager.GetPrimaryAssetObject(PrimaryAssetId);
		if (!LoadedAsset)
		{
			TSharedPtr<FStreamableHandle> Handle = AssetManager.LoadPrimaryAsset(PrimaryAssetId);
			if (Handle.IsValid() && Handle->HasLoadCompleted())
			{
				LoadedAsset = Handle->GetLoadedAsset();
			}
		}
		if (LoadedAsset)
		{
			return LoadedAsset;
		}
	}
	UE_LOG(LogTags, Error, TEXT("GetPrimaryObjectFromTag: No matching object found for %s"), *ObjectPrimaryTag.GetTagName().ToString());
	return nullptr;
}

FPrimaryAssetId UTags_BlueprintFunctionLibrary::GetPrimaryAssetIdFromTag(const FGameplayTag& ObjectPrimaryTag,
	const ANSICHAR* BundleName)
{
	const FString AssetName = ObjectPrimaryTag.GetTagName().ToString();
	return FPrimaryAssetId(FPrimaryAssetType(BundleName), FName(*AssetName));
}
