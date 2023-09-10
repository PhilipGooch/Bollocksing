// Copyright Epic Games, Inc. All Rights Reserved.

#include "BollocksingGameMode.h"
#include "BollocksingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABollocksingGameMode::ABollocksingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
