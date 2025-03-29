// Fill out your copyright notice in the Description page of Project Settings.


#include "ImGuiActor.h"
#include <imgui.h>

AImGuiActor::AImGuiActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AImGuiActor::BeginPlay()
{
	Super::BeginPlay();

    InitialPosition = GetActorLocation();
    PositionX = InitialPosition.X;
    PositionY = InitialPosition.Y;
    PositionZ = InitialPosition.Z;
}

void AImGuiActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    const FString Label = GetActorLabel();
    ImGui::Begin(TCHAR_TO_ANSI(*Label), nullptr, ImGuiWindowFlags_AlwaysAutoResize);

    ImGui::SliderFloat("Scale", &Scale, 0.1f, 5.0f);

    ImGui::Checkbox("Enable Rotation", &bRotate);
    if (bRotate)
    {
        ImGui::SliderFloat("Rotation Speed", &RotationSpeed, 0.0f, 180.0f);
    }

    ImGui::SliderFloat("Position X", &PositionX, -1000.0f, 1000.0f);
    ImGui::SliderFloat("Position Y", &PositionY, -1000.0f, 1000.0f);
    ImGui::SliderFloat("Position Z", &PositionZ, -1000.0f, 1000.0f);

    FVector CurrentLocation = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();
    ImGui::Text("Actual Position: (%.1f, %.1f, %.1f)", CurrentLocation.X, CurrentLocation.Y, CurrentLocation.Z);
    ImGui::Text("Rotation: (%.1f, %.1f, %.1f)", CurrentRotation.Pitch, CurrentRotation.Yaw, CurrentRotation.Roll);

	if (ImGui::Button("Reset Parameters"))
	{
		Scale = 1.0f;
		bRotate = false;
		RotationSpeed = 45.0f;
		PositionX = InitialPosition.X;
		PositionY = InitialPosition.Y;
		PositionZ = InitialPosition.Z;
	}

	ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
	ImGui::End();

	if (Scale != OldScale)
	{
		OldScale = Scale;
		SetActorScale3D(FVector(Scale));
	}

	if (bRotate)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += RotationSpeed * DeltaTime;
		SetActorRotation(NewRotation);
	}

	SetActorLocation(FVector(PositionX, PositionY, PositionZ));
}

