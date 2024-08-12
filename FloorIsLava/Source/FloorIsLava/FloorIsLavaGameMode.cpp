// Copyright Epic Games, Inc. All Rights Reserved.

#include "FloorIsLavaGameMode.h"
#include "FloorIsLavaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFloorIsLavaGameMode::AFloorIsLavaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
