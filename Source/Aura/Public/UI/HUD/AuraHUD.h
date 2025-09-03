// Copyright Amber

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAuraUserWidget;
/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlapWidgetClass;
	
public:

	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlapWidget;

protected:

	virtual void BeginPlay() override;
	
};
