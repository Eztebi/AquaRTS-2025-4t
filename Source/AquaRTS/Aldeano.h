// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterRTS.h"
#include "Aldeano.generated.h"

UCLASS()
class AQUARTS_API AAldeano : public ACharacterRTS
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAldeano();

	void HarvestFood();
	void HarvestMinerals();
	void ReturnHome();
	void Die();


};
