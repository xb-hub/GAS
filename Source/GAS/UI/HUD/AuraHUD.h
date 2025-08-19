// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GAS/UI/Widget/AuraUserWidget.h"
#include "GAS/UI/WidgetController/OverlayWidgetController.h"
#include "AuraHUD.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

public:
	void InitOverlayWidget(APlayerController* PC, APlayerState* PS,
	                       UAbilitySystemComponent* ASC, UAttributeSet* AS);

	UOverlayWidgetController* GetOverlayWidgetController(APlayerController* PC, APlayerState* PS,
	                                                     UAbilitySystemComponent* ASC, UAttributeSet* AS);

protected:
	UPROPERTY()
	TObjectPtr<UAuraUserWidget> AuraUserWidget;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

private:
	UPROPERTY(EditAnywhere, Category = "AuraUI")
	TSubclassOf<UAuraUserWidget> AuraUserWidgetClass;

	UPROPERTY(EditAnywhere, Category = "AuraUI")
	TSubclassOf<UOverlayWidgetController> OverlayWidgetClass;
};
