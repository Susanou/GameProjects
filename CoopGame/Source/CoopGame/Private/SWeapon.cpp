// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "CoopGame/CoopGame.h"
#include "TimerManager.h"


static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVBARDebugWeaponDrawing(
	TEXT("Coop.DebugWeapons"), 
	DebugWeaponDrawing, 
	TEXT("Draw Debug Lines For Weapons"), 
		ECVF_Cheat
);

// Sets default values
ASWeapon::ASWeapon()
{

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	MuzzleSocketName = FName("MuzzleSocket");
	TracerTargetName = "Target";

	BaseDamage = 20.0f;
	HeadShotMultiplier = 4.0f;

	RateOfFire = 600; // in shots per minute

	NumberOfBullets = 50;

	ReloadTime = 5.0f;

	bChallengeOn = true;
}

void ASWeapon::BeginPlay()
{
	Super::BeginPlay();

	TimeBetweenShots = 60 / RateOfFire;
	CurrentBullets = NumberOfBullets;
}

void ASWeapon::Fire()
{

	if (bChallengeOn && CurrentBullets > 0)
	{
		CurrentBullets--;
		OnFire(CurrentBullets);

		//Ray tracing from eyes of pawn to crosshair location

		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			FVector EyeLocation;
			FRotator EyeRotation;
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			FVector ShotDirection = EyeRotation.Vector();

			FVector TraceEnd = EyeLocation + (ShotDirection * 10000);

			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(MyOwner);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;

			// Particle "target" endpoint
			FVector TraceEndPoint = TraceEnd;

			FHitResult Hit;
			if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				// Something got hit so need to damage

				AActor* HitActor = Hit.GetActor();

				EPhysicalSurface SurfaceType = SurfaceType_Default;
				SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

				float ActualDamage = BaseDamage;
				if (SurfaceType == SURFACE_FLESHVULNERABLE)
				{
					ActualDamage *= HeadShotMultiplier;
				}

				UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);

				UParticleSystem* SelectedImpactEffect = nullptr;

				switch (SurfaceType)
				{
				case SURFACE_FLESHDEFAULT:
					SelectedImpactEffect = FleshImpactEffect;
					break;
				case SURFACE_FLESHVULNERABLE:
					SelectedImpactEffect = FleshImpactEffect;
					break;
				default:
					SelectedImpactEffect = DefaultImpactEffect;
					break;
				}

				if (SelectedImpactEffect)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedImpactEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
				}

				TraceEndPoint = Hit.ImpactPoint;
			}

			if (DebugWeaponDrawing > 0)
			{
				DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);
			}

			PlayFireEffects(TraceEndPoint);

			LastFireTime = GetWorld()->TimeSeconds;
		}
	}
	else if (!bChallengeOn) {

		//Ray tracing from eyes of pawn to crosshair location

		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			FVector EyeLocation;
			FRotator EyeRotation;
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			FVector ShotDirection = EyeRotation.Vector();

			FVector TraceEnd = EyeLocation + (ShotDirection * 10000);

			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(MyOwner);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;

			// Particle "target" endpoint
			FVector TraceEndPoint = TraceEnd;

			FHitResult Hit;
			if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				// Something got hit so need to damage

				AActor* HitActor = Hit.GetActor();

				EPhysicalSurface SurfaceType = SurfaceType_Default;
				SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

				float ActualDamage = BaseDamage;
				if (SurfaceType == SURFACE_FLESHVULNERABLE)
				{
					ActualDamage *= HeadShotMultiplier;
				}

				UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);

				UParticleSystem* SelectedImpactEffect = nullptr;

				switch (SurfaceType)
				{
				case SURFACE_FLESHDEFAULT:
					SelectedImpactEffect = FleshImpactEffect;
					break;
				case SURFACE_FLESHVULNERABLE:
					SelectedImpactEffect = FleshImpactEffect;
					break;
				default:
					SelectedImpactEffect = DefaultImpactEffect;
					break;
				}

				if (SelectedImpactEffect)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedImpactEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
				}

				TraceEndPoint = Hit.ImpactPoint;
			}

			if (DebugWeaponDrawing > 0)
			{
				DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);
			}

			PlayFireEffects(TraceEndPoint);

			LastFireTime = GetWorld()->TimeSeconds;
		}
	}
	else
	{
		StopFire();
		GetWorldTimerManager().SetTimer(TimerHandle_ReloadTimer, this, &ASWeapon::Reload, ReloadTime, false, ReloadTime);
		//StartFire();
	}

}

void ASWeapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShots, this, &ASWeapon::Fire, TimeBetweenShots, true, FirstDelay);
	
}

void ASWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

void ASWeapon::Reload()
{
	CurrentBullets = NumberOfBullets;
	OnFire(CurrentBullets);
}

void ASWeapon::OnReload()
{
	StopFire();
	if (bChallengeOn)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_ReloadTimer, this, &ASWeapon::Reload, ReloadTime, false, ReloadTime);
	}

}

void ASWeapon::PlayFireEffects(FVector TraceEnd)
{
	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}

	if (TracerEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, MuzzleLocation);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEnd);
		}
	}

	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientStartCameraShake(FireCamShake);
		}
	}
}
