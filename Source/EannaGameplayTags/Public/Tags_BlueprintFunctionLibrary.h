// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Tags_BlueprintFunctionLibrary.generated.h"

class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class EANNAGAMEPLAYTAGS_API UTags_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UTags_BlueprintFunctionLibrary();

	/**
	 * This function should be called to initialize the native gameplay tags for the game.
	 *	 Its recommended to call this function in AssetManager->StartInitialLoading();
	 */
	static void InitializeNativeGameplayTags();
	
	/** Returns the first matching tag from the ASC with size, size search is done by ASCTagCount >= TagSize */
	UFUNCTION(BlueprintCallable, Category = "Eanna|GameplayTags")
	static FGameplayTag GetMatchTagFromASCWithSize(const UAbilitySystemComponent* ASC, const FName& RequestedTag, const int32 TagSize = 1, const bool bLogged = false);

	/** Returns a FGameplayTagContainer from the ASC with size, size search is done by ASCTagCount >= TagSize */
	UFUNCTION(BlueprintCallable, Category = "Eanna|GameplayTags")
	static FGameplayTagContainer GetMatchTagsFromASCWithSize(const UAbilitySystemComponent* ASC, const FName& RequestedTag, const int32 TagSize = 1);

	/** Switch between two tags with the same parent tag */
	UFUNCTION(BlueprintCallable, Category = "Eanna|GameplayTags")
	static void SwitchOwnedTags(UAbilitySystemComponent* ASC, const FGameplayTag& TagToSwitch, const int32 Depth = 1 /* Value between 1 and 2 */);

	/** Returns an UObject searched by the primary tag and bundle name using the AssetManager
	 *
	 * @param ObjectPrimaryTag This ObjectPrimaryTag is convert to an FName used for finding the PrimaryAssetId,
	 *	each PrimaryAsset is compound of BundleName(PrimaryAssetType) + PrimaryAssetName
	 * @param BundleName The BundleName of the PrimaryAsset or the PrimaryAssetType
	 */
	static UObject* GetPrimaryObjectFromTag(const FGameplayTag& ObjectPrimaryTag, const ANSICHAR* BundleName);

private:
	static FPrimaryAssetId GetPrimaryAssetIdFromTag(const FGameplayTag& ObjectPrimaryTag, const ANSICHAR* BundleName);
};

