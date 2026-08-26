// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABBaseCharacter.h"
#include "ABNonPlayerCharactor.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEGAS_API AABNonPlayerCharacter : public AABBaseCharacter
{
	GENERATED_BODY()
	
public:
	AABNonPlayerCharacter();

	
	/** 
	 * Called when this Pawn is possessed. Only called on the server (or in standalone).
	 * @param NewController The controller possessing this pawn
	 */
	virtual void PossessedBy(AController* NewController) override;
};
