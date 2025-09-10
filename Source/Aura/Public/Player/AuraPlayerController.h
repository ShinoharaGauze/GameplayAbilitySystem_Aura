// Copyright Amber

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


class UInputAction;
class UInputMappingContext;
class IEnemyInterface;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "AAACustom|Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category = "AAACustom|Input")
	TObjectPtr<UInputAction> MoveAction;

	IEnemyInterface* LastActor;
	IEnemyInterface* ThisActor;
	
public:
	
	AAuraPlayerController();

private:

	void Move(const struct FInputActionValue& InputActionValue);

	void CursorTrace();

protected:
	
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

public:

	virtual void PlayerTick(float DeltaTime) override;
	
};
