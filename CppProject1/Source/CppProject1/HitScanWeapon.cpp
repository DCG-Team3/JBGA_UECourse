// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"
#include "DrawDebugHelpers.h"
#include "Engine/DamageEvents.h"

void AHitScanWeapon::Fire()
{
    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if(!OwnerPawn) return;
    AController* OwnerController = OwnerPawn->GetController();
    if(!OwnerController) return;

    FVector Location;
    FRotator Rotation;
    OwnerController->GetPlayerViewPoint(Location, Rotation);

    FVector End = Location + Rotation.Vector() * MaxRange;

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.AddIgnoredActor(GetOwner());

    //////////////////////////////////////////////////////////////////////
    FHitResult Hit;
    bool bSuccess = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel11, Params);
    if(bSuccess)
    {
        FVector ShotDirection = -Rotation.Vector();
        AActor* HitActor = Hit.GetActor();

        if(HitActor)
        {
            FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
        }
    }

    HandleVFX();
}
