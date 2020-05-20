// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Math/Vector.h"
#include "Components/InputComponent.h"
#include "Engine/Engine.h"
#include <Engine/World.h>

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("SetCube", IE_Pressed, this, &AMyPawn::SetCube);

}

void AMyPawn::SetCube()
{
	if (CubeSpawn)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FVector NewLocation = GetActorLocation();
			NewLocation.X += 200.0f;
			const FVector location = NewLocation;
			const FRotator rotation;

			FActorSpawnParameters spawnparam;
			spawnparam.Owner = this;

			world->SpawnActor<AMyCube>(CubeSpawn, location, rotation, spawnparam);
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Cube here!"));
}

