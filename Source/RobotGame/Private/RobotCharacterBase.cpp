// Fill out your copyright notice in the Description page of Project Settings.


#include "RobotCharacterBase.h"

// Sets default values
ARobotCharacterBase::ARobotCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ARobotCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


