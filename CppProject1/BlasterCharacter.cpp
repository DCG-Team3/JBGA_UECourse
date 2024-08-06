// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "CombatComponent.h"
#include "Weapon.h"
#include "BlasterGameMode.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABlasterCharacter::ABlasterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
}

// Called when the game starts or when spawned
void ABlasterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Health = MaxHealth;

	// PlayerController 가져오기
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if(PlayerController)
	{
		// Subsystem 가져오기
		UEnhancedInputLocalPlayerSubsystem* Subsystem = 
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

		if(Subsystem)
		{
			// Input Mapping Context 추가
			Subsystem->AddMappingContext(BlasterMappingContext, 0);
		}
	}

	if(CombatComponent && DefaultWeapon)
	{
		AWeapon* StartingWeapon = GetWorld()->SpawnActor<AWeapon>(DefaultWeapon);
		CombatComponent->EquipWeapon(StartingWeapon);
	}
}

void ABlasterCharacter::Move(const FInputActionValue& Value)
{
	if(!Controller) return; 

	const FVector2D MovementVector = Value.Get<FVector2D>();

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, MovementVector.Y);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, MovementVector.X);
}

void ABlasterCharacter::Look(const FInputActionValue &Value)
{
	const FVector2D LookAxisValue = Value.Get<FVector2D>();

	if(GetController())
	{
		AddControllerYawInput(LookAxisValue.X * RotationRate * GetWorld()->GetDeltaSeconds());
		AddControllerPitchInput(LookAxisValue.Y * RotationRate * GetWorld()->GetDeltaSeconds());
	}
}

void ABlasterCharacter::Jump(const FInputActionValue &Value)
{
	if(Controller)
	{
		Super::Jump();
	}
}

void ABlasterCharacter::Equip(const FInputActionValue &Value)
{
	if(CombatComponent)
	{
		CombatComponent->EquipWeapon(OverlappingWeapon);
	}
}

void ABlasterCharacter::Aim(const FInputActionValue &Value)
{
	if(!CombatComponent || !CombatComponent->EquippedWeapon) return;

	const bool IsAiming = Value.Get<bool>();

	// CombatComponent에 IsAiming값 전달하기
	CombatComponent->SetAiming(IsAiming);
}

void ABlasterCharacter::Fire(const FInputActionValue &Value)
{
	if(!CombatComponent || !CombatComponent->EquippedWeapon) return;

	CombatComponent->Fire();
}

bool ABlasterCharacter::IsWeaponEquipped()
{
    return CombatComponent && CombatComponent->EquippedWeapon;
}

bool ABlasterCharacter::IsAiming()
{
    return IsWeaponEquipped() && CombatComponent->bAiming; 
}

float ABlasterCharacter::TakeDamage(float DamageAmount, FDamageEvent const &DamageEvent, AController *EventInstigator, AActor *DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	DamageToApply = FMath::Min(Health, DamageToApply);
	Health -= DamageToApply;

	if(IsDead())
	{
		ABlasterGameMode* GameMode = GetWorld()->GetAuthGameMode<ABlasterGameMode>();
		if(GameMode)
		{
			GameMode->PawnKilled(this);
		}

		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    return DamageToApply;
}

bool ABlasterCharacter::IsDead() const
{
    return Health <= 0;
}

float ABlasterCharacter::GetHealthPercent() const
{
    return Health / MaxHealth;
}

void ABlasterCharacter::SetOverlappingWeapon(AWeapon *Weapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(false);
	}

	OverlappingWeapon = Weapon;

	if (OverlappingWeapon && IsLocallyControlled())
	{
		OverlappingWeapon->ShowPickupWidget(true);
	}
	
}

// Called every frame
void ABlasterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABlasterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	if(EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ThisClass::Jump);
		EnhancedInputComponent->BindAction(EquipAction, ETriggerEvent::Triggered, this, &ThisClass::Equip);
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Started, this, &ThisClass::Aim);
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Completed, this, &ThisClass::Aim);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &ThisClass::Fire);
	}
}

void ABlasterCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if(CombatComponent)
	{
		CombatComponent->BlasterCharacter = this;
	}
}
