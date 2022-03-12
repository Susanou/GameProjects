// Fill out your copyright notice in the Description page of Project Settings.


#include "Challenges/SProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
ASProjectile::ASProjectile()
{

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	//InitialLifeSpan = 1.0f;
}

// Called when the game starts or when spawned
void ASProjectile::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().ClearTimer(TimerHandle_Explosion);
	GetWorldTimerManager().SetTimer(TimerHandle_Explosion, this, &ASProjectile::Explosion, 1.0f, false);
	
}

// Called every frame
void ASProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASProjectile::Explosion() 
{
	TArray<AActor*> ignoredActors;

	float radius = 200.0f;
	float damage = 20.f;

	UGameplayStatics::ApplyRadialDamage(GetWorld(), damage, GetActorLocation(), radius, DamageType, ignoredActors, this, GetInstigatorController(), true, ECollisionChannel::ECC_Visibility);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	DrawDebugSphere(GetWorld(), GetActorLocation(), radius, 12, FColor::Yellow, false, 1.0f);

	Destroy();
}
