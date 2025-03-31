// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;

	// For interfaces, the best way to achieve fuctionality that is implementable in blueprint and also be callable from blueprint is to use BlueprintNative event
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	void SetCombatTarget(AActor* IncombatTarget);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
	AActor* GetCombatTarget() const;
};
