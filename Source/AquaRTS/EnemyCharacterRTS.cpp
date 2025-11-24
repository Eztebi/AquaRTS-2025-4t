// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterRTS.h"

// Sets default values
AEnemyCharacterRTS::AEnemyCharacterRTS()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyCharacterRTS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCharacterRTS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyCharacterRTS::Die()
{
	Die_BP();
}

void AEnemyCharacterRTS::Action(AActor* tempTarget)
{
	Action_BP(tempTarget);
}

void AEnemyCharacterRTS::Capture(AActor* resource)
{
	Capture_BP(resource);
}

void AEnemyCharacterRTS::Move(FVector location)
{
	Move_BP(location);
}



