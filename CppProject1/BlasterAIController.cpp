// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BlasterCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

void ABlasterAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior)
    {
        RunBehaviorTree(AIBehavior);

        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if(PlayerPawn)
        {
            GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
        }
    }
}

void ABlasterAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

bool ABlasterAIController::IsDead() const
{
    ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(GetPawn());
    if(!BlasterCharacter) return true;

    return BlasterCharacter->IsDead();

    return true;
}
