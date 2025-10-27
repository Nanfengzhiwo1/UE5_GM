// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GMConfigStructs.generated.h"

UENUM(BlueprintType)
enum class EGMTabType : uint8
{
	Character UMETA(DisplayName="Character"),
	Camera UMETA(DisplayName="Camera"),
	Debug UMETA(DisplayName="Debug"),
	UserInterface UMETA(DisplayName="UserInterface"),
};

UENUM(BlueprintType)
enum class EGMItemType : uint8
{
	Default UMETA(DisplayName="Default"),
};

USTRUCT(BlueprintType )
struct FGMItemStructs 
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category="GMItem")
	FString GMItemID;

	UPROPERTY(EditAnywhere, Category="GMItem")
	FName GMItemName;

	UPROPERTY(EditAnywhere, Category="GMItem")
	EGMItemType GMItemType;
	
	UPROPERTY(EditAnywhere, Category="GMItem")
	int32 GMItemIndex;

	UPROPERTY(EditAnywhere, Category="GMItem")
	FString GMItemDescription;

	FGMItemStructs()
	: GMItemID("")
	, GMItemName(NAME_None)
	, GMItemType(EGMItemType::Default)
	, GMItemIndex(0)
	, GMItemDescription("")
	{}
};



USTRUCT(BlueprintType )
struct FGMConfigStructs : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category="GMTab")
	EGMTabType GMTabType;

	UPROPERTY(EditAnywhere, Category="GMTab")
	int32 GMTabIndex;

	UPROPERTY(EditAnywhere, Category="GMTab")
	TArray<FGMItemStructs> GMItems;

	FGMConfigStructs()
	: GMTabType(EGMTabType::Character)
	, GMTabIndex(0)
	, GMItems()
	{}
};
