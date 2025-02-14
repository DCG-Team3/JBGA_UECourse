// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Initial UMETA(DisplayName = "Initial State"),	// 초기 상태
	EWS_Equipped UMETA(DisplayName = "Equipped"),		// 장착 상태
	EWS_Dropped UMETA(DisplayName = "Dropped"),			// 무기 떨어진 상태

	EWS_MAX UMETA(DisplayName = "DefaultMax")			// Enum의 최대 값
};

UCLASS()
class CPPPROJECT1_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	void HandleVFX();

	UPROPERTY(EditAnywhere)
	float Damage = 10.f;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ShowPickupWidget(bool bShow);
	virtual void Fire();
private:
	// Weapon의 생김새
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	USkeletalMeshComponent* WeaponMesh;

	// Weapon과 상호작용 가능한 실제 범위
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	class USphereComponent* AreaSphere;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	EWeaponState WeaponState;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	class UWidgetComponent* PickupWidget;

public:
	FORCEINLINE void SetWeaponState(EWeaponState State) { WeaponState = State; }
};
