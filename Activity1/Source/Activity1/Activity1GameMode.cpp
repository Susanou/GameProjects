// Copyright Epic Games, Inc. All Rights Reserved.

#include "Activity1GameMode.h"
#include "Activity1HUD.h"
#include "Activity1Character.h"
#include "UObject/ConstructorHelpers.h"

AActivity1GameMode::AActivity1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AActivity1HUD::StaticClass();
}
