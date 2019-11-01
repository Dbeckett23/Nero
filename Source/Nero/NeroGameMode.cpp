// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NeroGameMode.h"
#include "NeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANeroGameMode::ANeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
