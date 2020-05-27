// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FirstPeronShooterHUD.generated.h"

UCLASS()
class AFirstPeronShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirstPeronShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

