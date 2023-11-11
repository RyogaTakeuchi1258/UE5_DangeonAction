// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_DangeonActionGameMode.h"
#include "UE5_DangeonActionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_DangeonActionGameMode::AUE5_DangeonActionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
