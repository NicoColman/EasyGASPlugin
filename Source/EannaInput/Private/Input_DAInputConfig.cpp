// Eanna Entertainment


#include "Input_DAInputConfig.h"

#include "EannaInput/Input_LogChannels.h"

const UInputAction* UInput_DAInputConfig::GetInputAction(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FInput_ActionBase& InputAction : InputActions)
	{
		if (InputAction.InputTag.MatchesTag(InputTag))
		{
			return InputAction.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(EannaInput, Warning, TEXT("InputAction with tag %s not found in %s"), *InputTag.ToString(), *GetName());
	}
	return nullptr;
}
