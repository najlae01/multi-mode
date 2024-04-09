// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class COOPMULTIPLAYER_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		/**
		*	Function to host a game!
		*
		*	@Param		UserID			User that started the request
		*	@Param		SessionName		Name of the Session
		*	@Param		bIsLAN			Is this is LAN Game?
		*	@Param		bIsPresence		"Is the Session to create a presence Session"
		*	@Param		MaxNumPlayers	        Number of Maximum allowed players on this "Session" (Server)
		*/
	bool HostSession(UObject* UserId, FName SessionName, bool bIsLAN, bool bIsPresence, int32 MaxNumPlayers);

};
