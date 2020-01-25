// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterController.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"

void APlayerCharacterController::BeginPlay()
{
	Super::BeginPlay();

	PossesedCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if(PossesedCharacter){UE_LOG(LogTemp, Warning, TEXT("Found character"));}
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
		FVector Direction = PossesedCharacter->GetActorForwardVector();
		PossesedCharacter->AddMovementInput(Direction, Axis);
	}
}