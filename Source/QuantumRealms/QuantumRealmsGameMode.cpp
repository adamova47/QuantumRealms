// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuantumRealmsGameMode.h"
#include "QuantumRealmsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AQuantumRealmsGameMode::AQuantumRealmsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
