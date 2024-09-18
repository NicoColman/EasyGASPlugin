// Eanna Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GAS_StrucsAndEnums.generated.h"


UENUM(BlueprintType)
enum class EGAS_OverlapComponentType : uint8
{
	BoxComponent UMETA(DisplayName = "BoxComponent"),
	SphereComponent UMETA(DisplayName = "SphereComponent"),
};