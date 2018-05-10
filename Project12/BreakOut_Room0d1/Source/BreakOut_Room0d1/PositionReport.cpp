// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "BreakOut_Room0d1.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// ...
	FString OwnName = GetOwner()->GetName();
	FString OwnerXPosition = FString::SanitizeFloat(GetOwner()->GetActorLocation().X);// "X=0; Y=0; Z=0";
	FString OwnerYPosition = FString::SanitizeFloat(GetOwner()->GetActorLocation().Y);// "X=0; Y=0; Z=0";
	FString OwnerZPosition = FString::SanitizeFloat(GetOwner()->GetActorLocation().Z);// "X=0; Y=0; Z=0";
	UE_LOG(LogTemp, Warning, TEXT("%s is at Postion X=%s; Y=%s; Z=%s!!\n"), *OwnName, *OwnerXPosition, *OwnerYPosition, *OwnerZPosition);//
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

