// Copyright Epic Games, Inc. All Rights Reserved.

#include "NonSenseGameMode.h"
#include "NonSenseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANonSenseGameMode::ANonSenseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
