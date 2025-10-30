// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class AQUARTS_API AGameManager : public AGameModeBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "RTS")
    TArray<AActor*> SelectedUnits;

    UPROPERTY(BlueprintReadWrite, Category = "RTS")
    int32 PlayerResources = 0;

    UPROPERTY(BlueprintReadWrite, Category = "RTS")
    FString Objective;

    void AddUnit(AActor* Unit);
    void RemoveUnit(AActor* Unit);
};
