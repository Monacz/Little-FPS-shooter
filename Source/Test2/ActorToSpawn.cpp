// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "ActorToSpawn.h"

// Sets default values
AActorToSpawn::AActorToSpawn()
{
	++counter;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating our Default Components
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
	//SphereComp->OnComponentHit.AddDynamic(this, &AActorToSpawn::OnHit);

	//Attaching the Components and setting physics
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetSimulatePhysics(true);
	SphereComp->SetEnableGravity(false);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComp->AttachToComponent(SphereComp, FAttachmentTransformRules::KeepRelativeTransform);
	ParticleComp->AttachToComponent(StaticMeshComp, FAttachmentTransformRules::KeepRelativeTransform);

	//Setting the Sphere radius to be of a smaller size in line with the Static Mesh.
	SphereComp->SetSphereRadius(16.0f);

	//Setting the Static Mesh Scale and Location to fit the radius of the Sphere.
	StaticMeshComp->SetRelativeLocation(FVector(0.0, 0.0, -12.0f));
	StaticMeshComp->SetRelativeScale3D(FVector(0.25, 0.25, 0.25));

	//Using Constructor Helpers to set our Static Mesh Comp with a Sphere Shape.
	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	StaticMeshComp->SetStaticMesh(SphereMeshAsset.Object);

	////Using Constructor Helpers to set our Particle Comp with our Fire Particle Comp.
	//static ConstructorHelpers::FObjectFinder<UParticleSystem>ParticleCompAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Fire.P_Fire'"));
	//ParticleComp->SetTemplate(ParticleCompAsset.Object);
}

void AActorToSpawn::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		--counter;
	}
}

AActorToSpawn::~AActorToSpawn()
{
	--counter;
}

size_t AActorToSpawn::CheckCounter()
{
	return counter;
}
// Called when the game starts or when spawned
void AActorToSpawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorToSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

