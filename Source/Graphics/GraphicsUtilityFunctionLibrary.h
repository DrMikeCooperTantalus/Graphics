// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GraphicsUtilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS(meta = (ScriptName = "Graphics Util Library"))
class GRAPHICS_API UGraphicsUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	static float MoveTowards(float Current, float Target, float Delta);
};
