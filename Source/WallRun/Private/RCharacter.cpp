// Fill out your copyright notice in the Description page of Project Settings.


#include "RCharacter.h"

// Sets default values
ARCharacter::ARCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MyFancyStaticMesh = CreateDefaultSubobject<UStaticMesh>(TEXT("Fancy Static Mesh")); 
	MyFancyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Fancy Box Component")); 
}

// Called when the game starts or when spawned
void ARCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ARCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

