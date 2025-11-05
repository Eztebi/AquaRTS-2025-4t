// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterRTS.h"

// Sets default values
ACharacterRTS::ACharacterRTS()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACharacterRTS::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACharacterRTS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharacterRTS::ReceiveDamage(float Damage)
{
	ReceiveDamage_BP(Damage);
}

void ACharacterRTS::Action(AActor* tempTarget)
{
	Action_BP(tempTarget);
}

void ACharacterRTS::Move(FVector location)
{
	Move_BP(location);
}




