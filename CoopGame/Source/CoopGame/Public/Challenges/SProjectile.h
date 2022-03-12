// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystem;

UCLASS()
class COOPGAME_API ASProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
		USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovement;

	UFUNCTION()
		void Explosion();

	FTimerHandle TimerHandle_Explosion;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* ExplosionEffect;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};
