// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"


void ABlasterController::BeginPlay()
{
    Super::BeginPlay();

    UUserWidget* HUD = CreateWidget(this, HUDClass);
    if(HUD)
    {
        HUD->AddToViewport();
    }
}

void ABlasterController::GameHasEnded(AActor *EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);

    if(bIsWinner)
    {
	    UUserWidget* WinScreen = CreateWidget(this, WinScreenClass);
        if(WinScreen)
        {
            WinScreen->AddToViewport();
        }
    }
    else
    {
	    UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass);
        if(LoseScreen)
        {
            LoseScreen->AddToViewport();
        }
    }

	GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}
