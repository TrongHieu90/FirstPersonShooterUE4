// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPeronShooterGameMode.h"
#include "FirstPeronShooterHUD.h"
#include "FirstPeronShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPeronShooterGameMode::AFirstPeronShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPeronShooterHUD::StaticClass();
}
