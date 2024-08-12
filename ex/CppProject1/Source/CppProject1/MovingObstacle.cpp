// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingObstacle.h"

// Sets default values
AMovingObstacle::AMovingObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingObstacle::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveObstacle(DeltaTime);
	RotateObstacle(DeltaTime);
}

void AMovingObstacle::MoveObstacle(float DeltaTime)
{
	if (ShouldObstacleGoBack())
	{
		FVector MoveDirection = ObstacleVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MaxDistance;
		SetActorLocation(StartLocation);
		ObstacleVelocity = -ObstacleVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (ObstacleVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}

}

bool AMovingObstacle::ShouldObstacleGoBack() const
{
    return FVector::Dist(StartLocation, GetActorLocation()) > MaxDistance;
}

void AMovingObstacle::RotateObstacle(float DeltaTime)
{

	// 2번 방법
	AddActorLocalRotation(AngularVelocity * DeltaTime);
}