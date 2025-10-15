// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/GMCheatManager.h"

#include "GM/Extensions/BaseExtension.h"

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
