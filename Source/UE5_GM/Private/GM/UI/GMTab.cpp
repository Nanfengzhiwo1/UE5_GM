// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/UI/GMTab.h"

void UGMTab::NativeConstruct()
{
	Super::NativeConstruct();
	GMTabButton->OnClicked.AddDynamic(this, &UGMTab::OnHandleClicked);
}

void UGMTab::SetupTab(const FString& TabID, const FName& TabName)
{
	
}

void UGMTab::OnHandleClicked()
{
	UE_LOG(LogTemp,Display,TEXT("============Button is Clicked============"));
}

