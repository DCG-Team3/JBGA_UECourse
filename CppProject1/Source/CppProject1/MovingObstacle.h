// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingObstacle.generated.h"

UCLASS()
class CPPPROJECT1_API AMovingObstacle : public AActor
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
	FVector ObstacleVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving")
	float MaxDistance = 100.f;

	UPROPERTY(EditAnywhere, Category = "Rotation")
	FRotator AngularVelocity = FRotator();

	FVector StartLocation = FVector();

	void MoveObstacle(float DeltaTime);

	void RotateObstacle(float DeltaTime);

	bool ShouldObstacleGoBack() const;
};
