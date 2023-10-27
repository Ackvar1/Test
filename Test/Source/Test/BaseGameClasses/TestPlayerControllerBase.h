// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TestPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ATestPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

	ATestPlayerControllerBase();
public:
	UFUNCTION(BlueprintImplementableEvent)
	void CreateWidget(const int& ResponseCode);
};
