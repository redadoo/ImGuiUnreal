// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImGuiActor.generated.h"

UCLASS()
class UNREALIMGGUI_API AImGuiActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImGuiActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Scale{ 1.0f };
	float OldScale{ 1.0f };
	bool bRotate{ false };
	float RotationSpeed{ 45.0f }; // degrees per second

	FVector InitialPosition;
	float PositionX;
	float PositionY;
	float PositionZ;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
