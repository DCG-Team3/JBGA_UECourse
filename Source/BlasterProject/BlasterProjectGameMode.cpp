// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlasterProjectGameMode.h"
#include "BlasterProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlasterProjectGameMode::ABlasterProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
