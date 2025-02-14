// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BlasterAIController.generated.h"

/**
 * 
 */
UCLASS()
class CPPPROJECT1_API ABlasterAIController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaSeconds) override;
	bool IsDead() const;
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
};
