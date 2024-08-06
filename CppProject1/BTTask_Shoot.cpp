// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "AIController.h"
#include "BlasterCharacter.h"
#include "CombatComponent.h"

UBTTask_Shoot::UBTTask_Shoot()
{
    NodeName = "Shoot";
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if(!OwnerComp.GetAIOwner())
    {
        return EBTNodeResult::Failed;
    }

    ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(OwnerComp.GetAIOwner()->GetPawn());

    if(!BlasterCharacter)
    {
        return EBTNodeResult::Failed;
    }

    if(!BlasterCharacter->CombatComponent || !BlasterCharacter->IsWeaponEquipped())
    {
        return EBTNodeResult::Failed;
    }

    BlasterCharacter->CombatComponent->Fire();

    return EBTNodeResult::Succeeded;
}
