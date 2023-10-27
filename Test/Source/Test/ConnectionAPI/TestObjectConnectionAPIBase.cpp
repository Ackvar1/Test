// Fill out your copyright notice in the Description page of Project Settings.


#include "TestObjectConnectionAPIBase.h"
#include "Interfaces/IHttpRequest.h"

#include "Interfaces/IHttpResponse.h"

UTestObjectConnectionAPIBase::UTestObjectConnectionAPIBase()
{
}

void UTestObjectConnectionAPIBase::SendLoginRequest()
{
	FString ApiUrl = TEXT("https://stanzza-api.aicrobotics.ru/api/auth/login");
	FString Username = TEXT("candidate@asdfizac.org");
	FString Password = TEXT("asdfizac_tpsxP3f5*s");
	FString Fingerprint = TEXT("Отпечаток браузера");
	TSharedPtr<FJsonObject> JsonRequestData = MakeShareable(new FJsonObject);
	JsonRequestData->SetStringField(TEXT("login"), Username);
	JsonRequestData->SetStringField(TEXT("password"), Password);
	JsonRequestData->SetStringField(TEXT("fingerprint"), Fingerprint);
	FString JsonString;
	TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonRequestData.ToSharedRef(), JsonWriter);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetVerb("POST");  
	Request->SetURL(ApiUrl);
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetContentAsString(JsonString);
	Request->OnProcessRequestComplete().BindUObject(this, &UTestObjectConnectionAPIBase::OnLoginRequestComplete);
	Request->ProcessRequest();
}

void UTestObjectConnectionAPIBase::OnLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	int ResponseCode = Response->GetResponseCode();

	if (bWasSuccessful && Response.IsValid())
	{
		FString ResponseData = Response->GetContentAsString();
		UE_LOG(LogTemp, Warning, TEXT("API Login Response: %s"), *ResponseData);
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ResponseData);
		if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
		{
			if (JsonObject->TryGetStringField("access_token", LoginInfo.access_token) &&
				JsonObject->TryGetStringField("refresh_token", LoginInfo.refresh_token) &&
				JsonObject->TryGetStringField("expired_at", LoginInfo.expired_at))
			{
				UE_LOG(LogTemp, Warning, TEXT("Access Token: %s"), *LoginInfo.access_token);
				UE_LOG(LogTemp, Warning, TEXT("Refresh Token: %s"), *LoginInfo.refresh_token);
				UE_LOG(LogTemp, Warning, TEXT("Expired At: %s"), *LoginInfo.expired_at);
				OnHandleLoginHttpResponseDelegate.Broadcast();
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("HTTP Login Request failed. Response Code: %d"), ResponseCode);
	}
}

void UTestObjectConnectionAPIBase::SendCheckAuthHttpRequest()
{
	FString Url = TEXT("https://stanzza-api.aicrobotics.ru/api/v1/catalog/tree");

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetVerb(TEXT("GET"));
	Request->SetURL(Url);
	FString AuthHeader = FString::Printf(TEXT("Basic %s"), *FString(FString("Bearer " + LoginInfo.access_token)));
	Request->SetHeader(TEXT("Authorization"), AuthHeader);
	Request->OnProcessRequestComplete().BindUObject(this, &UTestObjectConnectionAPIBase::OnHandleCheckAuthHttpResponse);
	Request->ProcessRequest();
	
}


void UTestObjectConnectionAPIBase::OnHandleCheckAuthHttpResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful && Response.IsValid())
	{
		int ResponseCode = Response->GetResponseCode();
		OnHandleCheckAuthHttpResponseDelegate.Broadcast(ResponseCode);
		FString ResponseData = Response->GetContentAsString();
        UE_LOG(LogTemp, Warning, TEXT("API Response: %d"), ResponseCode);	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("HTTP Request failed."));
	}
}