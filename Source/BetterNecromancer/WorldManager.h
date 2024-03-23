// WorldManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCCharacter.h"
#include "WorldManager.generated.h"

UCLASS()
class BETTERNECROMANCER_API AWorldManager : public AActor
{
	GENERATED_BODY()

public:
	AWorldManager();

	// Method to spawn an NPC
	ANPCCharacter* SpawnNPC(FVector Location, FRotator Rotation);

	// Method to get all NPCs
	TArray<ANPCCharacter*> GetAllNPCs() const;

private:
	// Array to keep track of all NPCs
	TArray<ANPCCharacter*> NPCs;
};