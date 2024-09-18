// Eanna Entertainment


#include "Input_PlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Pawn.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "GAS_AbilitySystemComponent.h"
#include "Input_EnhancedInputComponent.h"
#include "TagStructs/Tags_Input.h"

AInput_PlayerController::AInput_PlayerController()
{
}

void AInput_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!ensure(PlayerBaseContext))
	{
		UE_LOG(LogTemp, Error, TEXT(" PlayerBaseContext is null."));
		return;
	}
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (!Subsystem)
	{
		return;
	}
	Subsystem->AddMappingContext(PlayerBaseContext, 0);
	FInputModeGameAndUI InputModeData;

	ControlledPawn = GetPawn<APawn>();
}

void AInput_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UInput_EnhancedInputComponent* EnhancedInputComponentBase = CastChecked<UInput_EnhancedInputComponent>(InputComponent);

	// Basic Movement
	EnhancedInputComponentBase->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AInput_PlayerController::Move);
	EnhancedInputComponentBase->BindAction(LookAction, ETriggerEvent::Triggered, this, &AInput_PlayerController::Look);

	// Custom Logic from EnhancedInputComponent for binding ability actions with a DataAsset
	EnhancedInputComponentBase->BindAbilityActions(
		InputConfigDataAsset,
		this,
		&AInput_PlayerController::AbilityInputTagPressed,
		&AInput_PlayerController::AbilityInputTagReleased,
		&AInput_PlayerController::AbilityInputTagHeld
		);
}

void AInput_PlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	
	if (!ControlledPawn) return;

	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
	ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
}

void AInput_PlayerController::Look(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	
	GetPawn()->AddControllerYawInput(InputAxisVector.X);
	GetPawn()->AddControllerPitchInput(InputAxisVector.Y);
}

// We check if the ASC has a block tag that matches the input block tag before calling the ability input functions
void AInput_PlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (!GetGASASC() ||  GASASC->HasMatchingGameplayTag(FTags_Input::GetInputBlockTags().InputBlock_Pressed)) return;
	
	GASASC->AbilityInputTagPressed(InputTag);
}

void AInput_PlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (!GetGASASC() || GASASC->HasMatchingGameplayTag(FTags_Input::GetInputBlockTags().InputBlock_Released)) return;
	
	GASASC->AbilityInputTagReleased(InputTag);
}

void AInput_PlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (!GetGASASC() || GASASC->HasMatchingGameplayTag(FTags_Input::GetInputBlockTags().InputBlock_Held)) return;

	GASASC->AbilityInputTagHeld(InputTag);
}

UGAS_AbilitySystemComponent* AInput_PlayerController::GetGASASC()
{
	if (GASASC) return GASASC;
	if (!ControlledPawn) return nullptr;
	return GASASC = Cast<UGAS_AbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(ControlledPawn));
}