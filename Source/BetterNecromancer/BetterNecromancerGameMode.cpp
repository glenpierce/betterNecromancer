// Copyright Epic Games, Inc. All Rights Reserved.

#include "BetterNecromancerGameMode.h"
#include "BetterNecromancerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABetterNecromancerGameMode::ABetterNecromancerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
