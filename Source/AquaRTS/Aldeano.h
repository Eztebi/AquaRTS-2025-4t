// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterRTS.h"
#include "Aldeano.generated.h"

UCLASS(public)
class AQUARTS_API AAldeano : public ACharacterRTS
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAldeano();
	UFUNCTION(BlueprintCallable, Category = "Aldeano")
	void HarvestFood();
	UFUNCTION(BlueprintCallable, Category = "Aldeano")
	void HarvestMinerals();
	UFUNCTION(BlueprintCallable, Category = "Aldeano")
	void ReturnHome();
	UFUNCTION(BlueprintCallable, Category = "Aldeano")
	void Die();


};
