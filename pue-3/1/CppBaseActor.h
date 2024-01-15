// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CPPBASE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
	FString instance_name;

	UPROPERTY(EditAnywhere)
	int enemy_cnt;

	UPROPERTY(EditInstanceOnly)
	bool is_alive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void ShowActorInformation();
};
