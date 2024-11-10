#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InfluencePropagator.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UInfluencePropagator : public UActorComponent
{
	GENERATED_BODY()

public:
	UInfluencePropagator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0.0"))
	FVector2f CooldownRange = FVector2f(20, 40);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2f ForceRange = FVector2f(2, 5);

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	float GetCooldown() const;

	UFUNCTION(BlueprintCallable)
	float GetInfluenceForce() const;
};
