// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.generated.h"

UCLASS(Abstract)
class AQUARTS_API ABuilding : public AActor
{
	GENERATED_BODY()
	
public:	
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
	UFUNCTION(BlueprintNativeEvent, Category = "Building")
	void BuildBuilding();
	virtual void BuildBuilding_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Building")
	void CreateTrops();
	virtual void CreateTrops_Implementation();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
