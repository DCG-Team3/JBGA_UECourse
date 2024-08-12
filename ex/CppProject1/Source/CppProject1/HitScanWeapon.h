// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "HitScanWeapon.generated.h"

/**
 * 
 */
UCLASS()
class CPPPROJECT1_API AHitScanWeapon : public AWeapon
{
	GENERATED_BODY()
	

public:
	virtual void Fire() override;

private:
	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.f;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactEffect;
};
