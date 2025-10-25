// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterRTS.generated.h"

UCLASS(Abstract)
class AQUARTS_API ACharacterRTS : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterRTS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//cost
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int mineral;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int food;

	//stats del character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float movementSpeed;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//recibir danio
	virtual void RecieveDamage(float damage);

	//mover
	virtual void Move();

};
