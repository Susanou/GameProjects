// Fill out your copyright notice in the Description page of Project Settings.


#include "Challenges/SGrenadeLauncher.h"
#include "Challenges/SProjectile.h"
#include "Kismet/GameplayStatics.h"


void ASGrenadeLauncher::Fire()
{
	// try and fire a projectile
	if (ProjectileClass)
	{

		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		AActor* MyOwner = GetOwner();

		FVector EyeLocation;
		FRotator EyeRotation;

		if (MyOwner) 
		{	
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		}
		else
		{
			 EyeRotation = MeshComp->GetSocketRotation("MuzzleSocket");
		}

		FVector MuzzleLocation = MeshComp->GetSocketLocation("MuzzleSocket");

		

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		//ActorSpawnParams.Instigator = this;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<ASProjectile>(ProjectileClass, MuzzleLocation, EyeRotation, ActorSpawnParams);
	}
}
