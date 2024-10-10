// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RobotCharacterBase.generated.h"

UCLASS()
class ROBOTGAME_API ARobotCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARobotCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
