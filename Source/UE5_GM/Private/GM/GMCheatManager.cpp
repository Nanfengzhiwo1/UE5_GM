// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/GMCheatManager.h"

#include "Blueprint/UserWidget.h"
#include "GM/Extensions/BaseExtension.h"
#include "GM/UI/GMPanel.h"

void UGMCheatManager::OpenGMPanel()
{
	if (!GMPanelClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("GMPanelClass is null"));
		return;
	}

	if (!GMPanel)
	{
		GMPanel = CreateWidget<UGMPanel>(GetWorld(), GMPanelClass);
		if (GMPanel)
		{
			GMPanel->AddToViewport();
		}
	}
	else
	{
		GMPanel->SetVisibility(ESlateVisibility::Visible);
	}
	
}

void UGMCheatManager::CloseGMPanel()
{
	if (GMPanel)
	{
		GMPanel->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UGMCheatManager::InitCheatManager()
{
	Super::InitCheatManager();
	UBaseExtension* BaseExtension=NewObject<UBaseExtension>(this);
	AddCheatManagerExtension(BaseExtension);
}

void UGMCheatManager::AddCheatManagerExtension(UCheatManagerExtension* CheatObject)
{
	Super::AddCheatManagerExtension(CheatObject);
}
