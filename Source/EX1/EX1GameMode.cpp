// Copyright Epic Games, Inc. All Rights Reserved.

#include "EX1GameMode.h"
#include "EX1HUD.h"
#include "EX1Character.h"
#include "UObject/ConstructorHelpers.h"

AEX1GameMode::AEX1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEX1HUD::StaticClass();
}
