// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacterRTS.generated.h"

UCLASS()
class AQUARTS_API AEnemyCharacterRTS : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacterRTS();

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	FString description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	FString actionDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int mineral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int food;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	bool isSafe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	AActor* target;

public:
	virtual void Tick(float DeltaTime) override;

	// Estos deben coincidir con los nombres exactos de la interfaz Blueprint
	UFUNCTION(BlueprintImplementableEvent, Category = "Troop")
	void ReceiveDamage_BP(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Troop")
	void ReceiveDamage(float Damage);

	UFUNCTION(BlueprintImplementableEvent, Category = "Troop")
	void Move_BP(FVector location);

	UFUNCTION(BlueprintCallable, Category = "Troop")
	void Move(FVector location);

	UFUNCTION(BlueprintImplementableEvent, Category = "Troop")
	void Action_BP(AActor* tempTarget);

	UFUNCTION(BlueprintCallable, Category = "Troop")
	void Action(AActor* tempTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "Troop")
	void Capture_BP(AActor* resource);

	UFUNCTION(BlueprintCallable, Category = "Troop")
	void Capture(AActor* resource);
};
