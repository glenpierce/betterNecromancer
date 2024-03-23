#include "DrawingActor.h"

ADrawingActor::ADrawingActor() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ADrawingActor::BeginPlay() {
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
	drawPoint();
}

void ADrawingActor::drawPoint() {
	FVector PointLocation = FVector(900.f, 1110.f, 90.f); // The point is at (100, 100, 0) in world coordinates
	float PointSize = 10.f; 
	FColor PointColor = FColor::Red;
	float PointDuration = 5.f; // The point lasts for 5 seconds
	bool persist = true;

	DrawDebugPoint(GetWorld(), PointLocation, PointSize, PointColor, persist,PointDuration);
}

// Called every frame
void ADrawingActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}
