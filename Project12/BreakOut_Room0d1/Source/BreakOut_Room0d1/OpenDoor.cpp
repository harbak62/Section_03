// This stuff belongs to Andy 
#pragma once


#include "BreakOut_Room0d1.h"
#include "OpenDoor.h"
#include "Engine.h"
#include "Engine/TriggerVolume.h"

void OpenDoor();

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...

	OpenDoor();

	

}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void OpenDoor()
{
	FString OwnerName = GetOwner()->GetName();
	FString OwnerRotation = FString::SanitizeFloat(GetOwner()->GetTransform().GetRotation().GetAxisZ().Z);

	UE_LOG(LogTemp, Warning, TEXT("%s Rotation is %s!!\n"), *OwnerName, *OwnerRotation)

		FRotator OwnerRotate = GetOwner()->GetActorRotation();
	if (OwnerName == "SM_Door_5")
	{
		OwnerRotate.Yaw += 40;
		GetOwner()->SetActorRotation(OwnerRotate);
	}

	OwnerRotation = GetOwner()->GetTransform().GetRotation().GetRotationAxis().UpVector.ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s Rotation is %s!!\n"), *OwnerName, *OwnerRotation)

}

