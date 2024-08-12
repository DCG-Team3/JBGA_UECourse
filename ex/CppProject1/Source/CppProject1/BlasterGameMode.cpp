// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameMode.h"
#include "EngineUtils.h"
#include "BlasterCharacter.h"
#include "BlasterAIController.h"

void ABlasterGameMode::PawnKilled(APawn *PawnKilled)
{
    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());

    if(PlayerController)
    {
        EndGame(false);
        return;
    }

    // TODO :
    // 1. AI 생성하기
    // 2. AI Controller 생성하기
    // 3. 월드 내 존재하는 AI Controller 검사하기   
    // 4. 모든 AI Controller가 Dead 상태면 EndGame(true) 호출하기
    for(ABlasterAIController* AIController : TActorRange<ABlasterAIController>(GetWorld()))
    {
        if(!AIController->IsDead())
        {
            return;
        }
    }

    EndGame(true);
}

void ABlasterGameMode::EndGame(bool IsPlayerWinnder)
{
    for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = Controller->IsPlayerController() == IsPlayerWinnder;
		
        if(!bIsWinner)
        {
            Controller->GetPawn()->DetachFromControllerPendingDestroy();
        }
		Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
	}
}
