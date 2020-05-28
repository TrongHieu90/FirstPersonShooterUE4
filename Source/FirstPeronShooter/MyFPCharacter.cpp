// Fill out your copyright notice in the Description page of Project Settings.
#include "MyFPCharacter.h"

// Sets default values
AMyFPCharacter::AMyFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyFPCharacter::HorizontalMove(float value)
{
}

void AMyFPCharacter::VerticleMove(float value)
{
}

void AMyFPCharacter::HorizontalTurn(float value)
{
}

void AMyFPCharacter::VerticleTurn(float value)
{
}

