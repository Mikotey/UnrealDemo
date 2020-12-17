// Copyright Epic Games, Inc. All Rights Reserved.

#include "SampleProjectGameMode.h"
#include "SampleProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASampleProjectGameMode::ASampleProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
