// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/UI/GMPanel.h"

#include "Engine/DataTable.h"
#include "GM/Config/GMConfigStructs.h"
#include "GM/UI/GMTab.h"

struct FGMConfigStructs;

void UGMPanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	CreateTabs(GMConfigData);
}

void UGMPanel::CreateTabs(UDataTable* InGMConfigData)
{
	if (!InGMConfigData)
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateTabs received null UDataTable"));
		return;
	}
	
	TArray<FName> RowNames = InGMConfigData->GetRowNames();

	for (const FName& RowName : RowNames)
	{

		FGMConfigStructs* Row = InGMConfigData->FindRow<FGMConfigStructs>(RowName, TEXT("CreateTabs"));

		if (Row)
		{
			UE_LOG(LogTemp, Error, TEXT("Row %s: "), *RowName.ToString());
		}
	}
}

void UGMPanel::CreateItems(UDataTable* InGMConfigData)
{
	
}
