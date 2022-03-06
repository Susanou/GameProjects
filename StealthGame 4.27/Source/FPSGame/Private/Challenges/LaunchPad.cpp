// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "FPSCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComp->SetBoxExtent(FVector(75, 75, 50));
	RootComponent = OverlapComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);

	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &ALaunchPad::LaunchActor);

	LaunchStrength = 1500;
	LaunchPitch = 35.0f;

}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALaunchPad::LaunchActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Launching initinated"));

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PickupFX, GetActorLocation());
	AFPSCharacter* PC = Cast<AFPSCharacter>(OtherActor);

	// Use Normalized vectors then multiply to required norm
	FRotator Direction = GetActorRotation();
	Direction.Pitch = LaunchPitch;
	FVector LaunchVelocity = Direction.Vector() * LaunchStrength;

	if (PC)
	{
		UE_LOG(LogTemp, Log, TEXT("Trying to launch character"));
		PC->LaunchCharacter(LaunchVelocity, true, true);
	}
	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		UE_LOG(LogTemp, Log, TEXT("Trying to launch box"));
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);
	}
	else {
		return;
	}
}

// Called every frame
void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

