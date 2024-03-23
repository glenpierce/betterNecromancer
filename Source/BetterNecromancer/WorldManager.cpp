#include "WorldManager.h"
#include "UObject/ConstructorHelpers.h"

AWorldManager::AWorldManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

ANPCCharacter* AWorldManager::SpawnNPC(FVector Location, FRotator Rotation)
{
	UWorld* World = GetWorld();
	if(World)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		ANPCCharacter* SpawnedNPC = World->SpawnActor<ANPCCharacter>(ANPCCharacter::StaticClass(), Location, Rotation, SpawnParams);

		// Add the spawned NPC to the array
		NPCs.Add(SpawnedNPC);

		return SpawnedNPC;
	}

	return nullptr;
}

TArray<ANPCCharacter*> AWorldManager::GetAllNPCs() const
{
	return NPCs;
}