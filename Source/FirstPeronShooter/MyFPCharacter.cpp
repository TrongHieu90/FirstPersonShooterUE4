// Fill out your copyright notice in the Description page of Project Settings.
#include "MyFPCharacter.h"

// Sets default values
AMyFPCharacter::AMyFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	bUseControllerRotationYaw = false;
	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cam->AttachTo(RootComponent);
	cam->SetRelativeLocation(FVector(0, 0, 40));
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

	InputComponent->BindAxis("Horizontal", this, &AMyFPCharacter::HorizontalMove);
	InputComponent->BindAxis("Verticle", this, &AMyFPCharacter::VerticalMove);
	InputComponent->BindAxis("HorizontalTurn", this, &AMyFPCharacter::HorizontalTurn);
	InputComponent->BindAxis("VerticleTurn", this, &AMyFPCharacter::VerticalTurn);
}

void AMyFPCharacter::HorizontalMove(float value)
{
	if(value)
	{
		AddMovementInput(GetActorRightVector(), value);
	}
}

void AMyFPCharacter::VerticalMove(float value)
{
	if(value)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void AMyFPCharacter::HorizontalTurn(float value)
{
	if(value)
	{
		AddActorLocalRotation(FRotator(0, value, 0));
	}
}

void AMyFPCharacter::VerticalTurn(float value)
{
	if(value)
	{
		float temp = cam->GetRelativeRotation().Pitch + value;
		if(temp <65 && temp > -65)
		{
			cam->AddLocalRotation(FRotator(value, 0, 0));
		}
	}
}

