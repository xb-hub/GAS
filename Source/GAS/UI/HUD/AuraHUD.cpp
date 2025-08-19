// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraHUD.h"

void AAuraHUD::InitOverlayWidget(APlayerController* PC, APlayerState* PS,
                                 UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(AuraUserWidgetClass, TEXT("AuraUser Widget Class not Init"));
	checkf(OverlayWidgetClass, TEXT("Overlay Widget Controller Class not Init"));

	AuraUserWidget = CreateWidget<UAuraUserWidget>(GetWorld(), AuraUserWidgetClass);
	
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(PC, PS, ASC, AS);
	AuraUserWidget->SetWidgetController(WidgetController);
	WidgetController->BroadCastInitialValues();
	
	AuraUserWidget->AddToViewport();
}

UOverlayWidgetController* AAuraHUD::GetOverlayWidgetController(APlayerController* PC, APlayerState* PS,
                                                               UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	if (!OverlayWidgetController)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetClass);
		OverlayWidgetController->InitWidgetController(PC, PS, ASC, AS);
	}
	return OverlayWidgetController;
}
