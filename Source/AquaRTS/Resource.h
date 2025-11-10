// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resource.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8
{
	Food UMETA(DisplayName = "Food"),
	Mineral UMETA(DisplayName = "Mineral")
};

UCLASS()
class AQUARTS_API AResource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResource();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceType")
	int resourceGiven;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceType")
	EResourceType typeResource;
	UFUNCTION(BlueprintImplementableEvent, Category = "Resource")
	void RightClicked();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
