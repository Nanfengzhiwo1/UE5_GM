// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GMCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class UE5_GM_API UGMCheatManager : public UCheatManager
{
	GENERATED_BODY()
private:
	virtual void InitCheatManager() override;

	virtual void AddCheatManagerExtension(UCheatManagerExtension* CheatObject) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CheatManagerExtensions")
	TSubclassOf<UCheatManagerExtension>  CheatManagerExtensionClass;
};
