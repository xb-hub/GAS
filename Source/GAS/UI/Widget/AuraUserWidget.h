// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GAS/UI/WidgetController/AuraWidgetController.h"
#include "AuraUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API UAuraUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetWidgetController(UAuraWidgetController* WidgetController);

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TObjectPtr<UAuraWidgetController> AuraWidgetController;

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
};
