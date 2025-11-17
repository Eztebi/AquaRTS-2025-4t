// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISelectionBuilding.h"
#include "Building.generated.h"

UCLASS(Abstract)
class AQUARTS_API ABuilding : public AActor, public IISelectionBuilding
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	Fstring name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	FString description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int mineral;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int food;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float constructionSpeed;
	// Sets default values for this actor's properties
	ABuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	UFUNCTION(BlueprintImplementableEvent, Category = "Building")
	void RecieveDamage_BP();

	UFUNCTION(BlueprintCallable, Category = "Building")
	void RecieveDamage();

	UFUNCTION(BlueprintImplementableEvent, Category = "Building")
	void BuildBuilding_BP();

	UFUNCTION(BlueprintCallable, Category = "Building")
	void BuildBuilding();

	UFUNCTION(BlueprintImplementableEvent, Category = "Building")
	void CreateTrops_BP();

	UFUNCTION(BlueprintCallable, Category = "Building")
	void CreateTrops();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
