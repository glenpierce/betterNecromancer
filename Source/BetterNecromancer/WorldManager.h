#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCCharacter.h"
#include "WorldManager.generated.h"

UCLASS()
class BETTERNECROMANCER_API AWorldManager : public AActor {
	GENERATED_BODY()

public:
	AWorldManager();

	ANPCCharacter* SpawnNPC(FVector Location, FRotator Rotation);

	TArray<ANPCCharacter*> GetAllNPCs() const;

private:
	TArray<ANPCCharacter*> NPCs;
};