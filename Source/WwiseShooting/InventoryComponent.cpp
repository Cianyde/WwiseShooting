// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "TP_WeaponComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}

void UInventoryComponent::AddWeapon(UTP_WeaponComponent* weapon)
{
	if(inventoryIndex < 3)
	{
		weapons[inventoryIndex] = weapon;
		inventoryIndex++;
	}
}

bool UInventoryComponent::InventoryContainsWeapon(UTP_WeaponComponent* weapon)
{
	UTP_WeaponComponent* tempWeapon;
	for(int i = 0; i < inventorySize; i++)
	{
		if(weapons[i] == nullptr)
		{
			return false;
		}
		tempWeapon = weapons[i];
		return tempWeapon == weapon;
	}
	return false;
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

