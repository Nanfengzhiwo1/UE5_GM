// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "BaseExtension.generated.h"

/**
 * 
 */
UCLASS()
class UE5_GM_API UBaseExtension : public UCheatManagerExtension
{
	GENERATED_BODY()
private:
	UFUNCTION(Exec)
	void Hello();
};
