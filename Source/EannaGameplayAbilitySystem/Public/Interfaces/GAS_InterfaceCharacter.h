// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GAS_InterfaceCharacter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UGAS_InterfaceCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EANNAGAMEPLAYABILITYSYSTEM_API IGAS_InterfaceCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GAS|Interface|Character")
	int32 GetCharacterLevel() const;
};
