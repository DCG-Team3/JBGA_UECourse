// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "Weapon.h"
#include "BlasterCharacter.h"
#include "Engine/SkeletalMeshSocket.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UCombatComponent::EquipWeapon(AWeapon *WeaponToEquip)
{
	if(BlasterCharacter == nullptr || WeaponToEquip == nullptr) return;

	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

	// 생성한 소켓을 이름을 통해 가져오기
	const USkeletalMeshSocket* HandSocket = BlasterCharacter->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if(HandSocket)
	{
		HandSocket->AttachActor(EquippedWeapon, BlasterCharacter->GetMesh());
	}
	EquippedWeapon->SetOwner(BlasterCharacter);
	EquippedWeapon->ShowPickupWidget(false);
	EquippedWeapon->SetActorEnableCollision(ECollisionEnabled::NoCollision);

	BlasterCharacter->bUseControllerRotationYaw = true;
	BlasterCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
}

void UCombatComponent::SetAiming(bool bIsAiming)
{
	bAiming = bIsAiming;
}

// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatComponent::Fire()
{
	if(!EquippedWeapon) return;

	EquippedWeapon->Fire();
}
