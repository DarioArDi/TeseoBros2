// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeseoBros2GameMode.h"
#include "TeseoBros2Character.h"
#include "UObject/ConstructorHelpers.h"

ATeseoBros2GameMode::ATeseoBros2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
