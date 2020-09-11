// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/BoxComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Character.h"
#include "RCharacter.generated.h"

UCLASS()
class WALLRUN_API ARCharacter : public ACharacter
{
	GENERATED_BODY() 

public:
	// Sets default values for this character's properties
	ARCharacter();

	UPROPERTY(Category = AAA, VisibleAnywhere, BlueprintReadWrite)
	uint8 MyFancyInteger;

	UPROPERTY(Category = AAA, VisibleAnywhere, BlueprintReadWrite)
	float MyFancyFloat;

	UPROPERTY(Category = AAA, VisibleAnywhere, BlueprintReadWrite)
	float MyFancyFloat2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AAA)
	UStaticMesh* MyFancyStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AAA)
	UBoxComponent* MyFancyBoxComponent;

	UPROPERTY(Category = AAA, EditAnywhere, BlueprintReadWrite)
	FText MyFancyText;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
