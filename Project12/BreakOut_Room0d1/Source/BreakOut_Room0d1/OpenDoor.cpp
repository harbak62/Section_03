// This stuff belongs to Andy 

#include "BreakOut_Room0d1.h"
#include "OpenDoor.h"


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

	FString OwnerName = GetOwner()->GetName();
	FString OwnerRotation = FString::SanitizeFloat(GetOwner()->GetTransform().GetRotation().GetAxisZ().Z);

	UE_LOG(LogTemp, Warning, TEXT("%s Rotation is %s!!\n"), *OwnerName, *OwnerRotation)

	FRotator OwnerRotate = GetOwner()->GetActorRotation();
	OwnerRotate.Yaw += 40;
	GetOwner()->SetActorRotation(OwnerRotate);

	OwnerRotation = GetOwner()->GetTransform().GetRotation().GetRotationAxis().UpVector.ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s Rotation is %s!!\n"), *OwnerName, *OwnerRotation)

}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

