// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HttpModule.h"
#include "TestObjectConnectionAPIBase.generated.h"

/**
 * 
 */
USTRUCT(Blueprintable)
struct FLoginInfo
{
	GENERATED_BODY()

	FString access_token;
	FString refresh_token;
	FString expired_at;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHandleLoginHttpResponse);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandleCheckAuthHttpResponse, int, ResponseCode);

UCLASS()
class TEST_API UTestObjectConnectionAPIBase : public UObject
{
	GENERATED_BODY()
private:
	UTestObjectConnectionAPIBase();
public:
	void SendLoginRequest();
	void OnLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void SendCheckAuthHttpRequest();
	void OnHandleCheckAuthHttpResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
private:
	UPROPERTY()
	FLoginInfo LoginInfo;
public:
	FOnHandleLoginHttpResponse OnHandleLoginHttpResponseDelegate;
	FOnHandleCheckAuthHttpResponse OnHandleCheckAuthHttpResponseDelegate;
};
