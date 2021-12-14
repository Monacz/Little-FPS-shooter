// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/BoxComponent.h"
#include "ActorToSpawn.h"
#include "ActorSpawner.h"

// Sets default values
AActorSpawner::AActorSpawner()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SpawnVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolume"));
	SpawnVolume->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void AActorSpawner::SpawnActor(FVector coords)
{
	FVector SpawnLocation = coords;
	FRotator SpawnRotation = GetActorRotation();

	GetWorld()->SpawnActor<AActorToSpawn>(SpawnLocation, SpawnRotation);
}

// Called when the game starts or when spawned
void AActorSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

