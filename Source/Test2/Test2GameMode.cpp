// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test2GameMode.h"
#include "Test2HUD.h"
#include "Test2Character.h"
#include "UObject/ConstructorHelpers.h"

ATest2GameMode::ATest2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest2HUD::StaticClass();
}
