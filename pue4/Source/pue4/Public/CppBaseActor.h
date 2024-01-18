// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class PUE4_API ACppBaseActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACppBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amplitude = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Frequency = 5;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	FVector InitialLocation;

private:
	UFUNCTION(BlueprintCallable)
	void SinMovement();
	UPROPERTY()
	UWorld* World;
};
