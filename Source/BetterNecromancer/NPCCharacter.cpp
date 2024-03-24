#include "NPCCharacter.h"

ANPCCharacter::ANPCCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Static Mesh Component and attach it to the root component
	NPCMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NPCMesh"));
	RootComponent = NPCMesh;

	// TODO: Add initialization code here
}

void ANPCCharacter::BeginPlay() {
	Super::BeginPlay();
	
	// TODO: Add Begin Play logic here
}

void ANPCCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	// FVector CurrentLocation = GetActorLocation();
	// UE_LOG(LogTemp, Warning, TEXT("NPC position: %s"), *CurrentLocation.ToString());

	CurrentCircleAngle += CircleSpeed * DeltaTime;

	FVector NewLocation = GetActorLocation();
	NewLocation.X += CircleRadius * FMath::Cos(CurrentCircleAngle);
	NewLocation.Y += CircleRadius * FMath::Sin(CurrentCircleAngle);

	SetActorLocation(NewLocation);

	// Rotate the character to face the direction of movement
	FRotator NewRotation = FRotator(0, CurrentCircleAngle * 180.0f / PI, 0);
	SetActorRotation(NewRotation);
}