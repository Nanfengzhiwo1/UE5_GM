// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_GMGameMode.h"
#include "UE5_GMCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_GMGameMode::AUE5_GMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
