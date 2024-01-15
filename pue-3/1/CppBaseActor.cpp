// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	instance_name = GetActorNameOrLabel();
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	ShowActorInformation();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::ShowActorInformation()
{
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *instance_name);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), enemy_cnt);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), is_alive);
}
