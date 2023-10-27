// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameInstanceBase.h"

#include "TestPlayerControllerBase.h"


UTestGameInstanceBase::UTestGameInstanceBase()
{
	TestObjectConnectionAPIBase = CreateDefaultSubobject<UTestObjectConnectionAPIBase>(TEXT("Test Object Connection API Base"));
}

void UTestGameInstanceBase::Init()
{
	Super::Init();
	TestObjectConnectionAPIBase->OnHandleLoginHttpResponseDelegate.AddDynamic(this, &UTestGameInstanceBase::OnHandleHttpResponse);
	TestObjectConnectionAPIBase->SendLoginRequest();
}

void UTestGameInstanceBase::OnHandleHttpResponse()
{
	TestObjectConnectionAPIBase->OnHandleLoginHttpResponseDelegate.RemoveDynamic(this, &UTestGameInstanceBase::OnHandleHttpResponse);
	TestObjectConnectionAPIBase->OnHandleCheckAuthHttpResponseDelegate.AddDynamic(this, &UTestGameInstanceBase::OnHandleCheckAuthHttpResponse);
	TestObjectConnectionAPIBase->SendCheckAuthHttpRequest();
}

void UTestGameInstanceBase::OnHandleCheckAuthHttpResponse(int ResponseCode)
{
	TestObjectConnectionAPIBase->OnHandleLoginHttpResponseDelegate.RemoveDynamic(this, &UTestGameInstanceBase::OnHandleHttpResponse);
	Response = ResponseCode;
	GetTimerManager().SetTimer(Timer, this, &UTestGameInstanceBase::CheckController, 1, true, 0);
}

void UTestGameInstanceBase::CheckController()
{
	if (ATestPlayerControllerBase* PlayerController = Cast<ATestPlayerControllerBase>(GetWorld()->GetFirstPlayerController()))
	{
		GetTimerManager().ClearTimer(Timer);
		GetTimerManager().PauseTimer(Timer);
		PlayerController->CreateWidget(Response);
	}
}
