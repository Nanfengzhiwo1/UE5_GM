// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GMPanel.generated.h"

class UGMTab;
class UDataTable;
/**
 * 
 */
UCLASS()
class UE5_GM_API UGMPanel : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GMConfigData")
	UDataTable* GMConfigData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GMTabClass")
	TSubclassOf<UGMTab> GMTabClass;
	
	UPROPERTY()
	UGMTab* GMTab;

protected:
	virtual void NativeOnInitialized() override;

private:
	void CreateTabs(UDataTable* InGMConfigData);
	
	void CreateItems(UDataTable* InGMConfigData);
};
