// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpriTopDownGameMode.h"
#include "SpriTopDownPawn.h"

ASpriTopDownGameMode::ASpriTopDownGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASpriTopDownPawn::StaticClass();
}

