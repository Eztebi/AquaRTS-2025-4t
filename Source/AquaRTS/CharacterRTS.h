// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ISelectionTroop.h"
#include "CharacterRTS.generated.h"

UCLASS(Abstract)
class AQUARTS_API ACharacterRTS : public ACharacter, public IISelectionTroop
{
	GENERATED_BODY()

public:
	ACharacterRTS();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int mineral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int food;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float movementSpeed;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Estos deben coincidir con los nombres exactos de la interfaz Blueprint
	UFUNCTION(BlueprintNativeEvent, Category = "Troop")
	void ReceiveDamage(float Damage);
	virtual void ReceiveDamage_Implementation(float Damage);

	UFUNCTION(BlueprintNativeEvent, Category = "Troop")
	void Move();
	virtual void Move_Implementation();
};