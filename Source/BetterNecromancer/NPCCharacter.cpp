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

	// TODO: Add Tick logic here
}