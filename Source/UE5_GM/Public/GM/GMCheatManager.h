// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GMCheatManager.generated.h"

class UGMPanel;
/**
 * 
 */
UCLASS()
class UE5_GM_API UGMCheatManager : public UCheatManager
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CheatManagerExtensionsClass")
	TSubclassOf<UCheatManagerExtension>  CheatManagerExtensionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GMPanelClass")
	TSubclassOf<UGMPanel> GMPanelClass;
	
	UPROPERTY()
	UGMPanel* GMPanel;
private:
	UFUNCTION(Exec)
	void OpenGMPanel();

	UFUNCTION(Exec)
	void CloseGMPanel();
	
	virtual void InitCheatManager() override;

	virtual void AddCheatManagerExtension(UCheatManagerExtension* CheatObject) override;

};
