// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <stdlib.h>
#include "CoreMinimal.h"
#include "MyBlueprintFunctionLibrary.h"
#include "ShouldJump.generated.h"


/**
 * 
 */
UCLASS()
class BB_API UShouldJump : public UMyBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable)
	static bool shouldJump();
};
