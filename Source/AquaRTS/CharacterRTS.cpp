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

// Called to bind functionality to input
void ACharacterRTS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACharacterRTS::ReceiveDamage_Implementation(float Damage)
{
}

void ACharacterRTS::Move_Implementation()
{
}



