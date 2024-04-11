#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/Object.h"
#include "LoadNewLevel.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGPROJECT_API ULoadNewLevel : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULoadNewLevel();

	UFUNCTION(BlueprintCallable)
	void CreateNewLevel();
};
