// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GMConfigStructs.generated.h"

USTRUCT(BlueprintType)
struct FGMItemStructs 
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMItem")
	FString GMItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMItem")
	FName GMItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMItem")
	FString GMItemType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMItem")
	uint8 GMItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMItem")
	FString GMItemDescription;
};



USTRUCT(BlueprintType)
struct FGMTabStructs : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMTab")
	FString GMTabID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMTab")
	FName GMTabName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMTab")
	uint8 GMTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GMTab")
	TArray<FGMItemStructs> GMTabTabs;
};
