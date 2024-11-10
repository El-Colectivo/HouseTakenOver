#include "House/InfluencePropagator.h"

#include "Utilities/RandomValuePicker.h"

UInfluencePropagator::UInfluencePropagator()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UInfluencePropagator::BeginPlay()
{
	Super::BeginPlay();
}

void UInfluencePropagator::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

float UInfluencePropagator::GetCooldown() const
{
	return FRandomValuePicker::GetRandomValueFromRange(CooldownRange);
}

float UInfluencePropagator::GetInfluenceForce() const
{
	return FRandomValuePicker::GetRandomValueFromRange(ForceRange);
}
