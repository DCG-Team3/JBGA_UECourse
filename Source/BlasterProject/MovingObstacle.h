// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingObstacle.generated.h"

UCLASS()
class BLASTERPROJECT_API AMovingObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingObstacle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Moving")
	FVector ObstacleVelocity = FVector(0,0,0);

	void MoveObstacle(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = "Moving")
	float MaxDistance = 300.f;

	FVector StartLocation = FVector();

	bool ShouldObstacleGoBack() const;

	UPROPERTY(EditAnywhere, Category = "Rotation")
	FRotator AngularVelocity = FRotator();

	void RotateObstacle(float DeltaTime);
};
