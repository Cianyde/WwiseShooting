// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_WeaponComponent.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UTP_WeaponComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WWISESHOOTING_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();
	UFUNCTION(BlueprintCallable)
	void AddWeapon(UTP_WeaponComponent* weapon);
	bool InventoryContainsWeapon(UTP_WeaponComponent* weapon);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UINT32 inventoryIndex = 0;
	inline static constexpr UINT32 inventorySize = 3;
	UTP_WeaponComponent** weapons = new UTP_WeaponComponent*[inventorySize];

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		
};
