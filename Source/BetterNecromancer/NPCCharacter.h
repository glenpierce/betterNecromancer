#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "NPCCharacter.generated.h"

UCLASS()
class BETTERNECROMANCER_API ANPCCharacter : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCharacter();

	// Static Mesh Component to give our NPC a visible form
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* NPCMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};