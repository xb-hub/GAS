// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraWidgetController.h"

void UAuraWidgetController::InitWidgetController(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC,
	UAttributeSet* AS)
{
	PlayerController = PC;
	PlayerState = PS;
	AbilitySystemComponent = ASC;
	AttributeSet = AS;
}

void UAuraWidgetController::BroadCastInitialValues()
{
}

void UAuraWidgetController::BroadCastValueChange()
{
}
