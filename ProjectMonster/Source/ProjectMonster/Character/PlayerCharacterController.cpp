// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterController.h"

void APlayerCharacterController::BeginPlay()
{
	Super::BeginPlay();


}

void APlayerCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &APlayerCharacterController::MoveForward);
}

void APlayerCharacterController::MoveForward(float Axis)
{
	if (Axis != 0.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Moving?"));
	}
}