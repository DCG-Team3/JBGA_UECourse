// Copyright Epic Games, Inc. All Rights Reserved.

#include "CppProject1GameMode.h"
#include "CppProject1Character.h"
#include "UObject/ConstructorHelpers.h"

ACppProject1GameMode::ACppProject1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
