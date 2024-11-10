// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FRandomValuePicker final
{
public:
	static float GetRandomValueFromRange(const FVector2f& ValueRange)
	{
		return FMath::RandRange(FMath::Min(ValueRange.X, ValueRange.Y), FMath::Max(ValueRange.X, ValueRange.Y));
	}
};
