// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Test/ConnectionAPI/TestObjectConnectionAPIBase.h"
#include "TestGameInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API UTestGameInstanceBase : public UGameInstance
{
	GENERATED_BODY()
private:
	UTestGameInstanceBase();
private:
	virtual void Init() override;
	UFUNCTION()
	void OnHandleHttpResponse();

protected:
	UPROPERTY()
	UTestObjectConnectionAPIBase* TestObjectConnectionAPIBase;
	UFUNCTION()
	void OnHandleCheckAuthHttpResponse(int ResponseCode);
	UPROPERTY()
	FTimerHandle Timer;
	UFUNCTION()
	void CheckController();
	int Response;
};
