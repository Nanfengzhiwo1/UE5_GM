// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "GMTab.generated.h"

/**
 * 
 */
UCLASS()
class UE5_GM_API UGMTab : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(meta = (BindWidget))
	UButton* GMTabButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* GMTabName;

public:
	virtual void NativeConstruct() override;
	
	void SetupTab(const FString& TabID,const FName& TabName);

	UFUNCTION()
	void OnHandleClicked();
};
