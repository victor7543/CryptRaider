// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mover.h"
#include "Components/BoxComponent.h"
#include "TriggerComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CRYPTRAIDER_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UTriggerComponent();
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
	UFUNCTION(BlueprintCallable)
		void SetMover(UMover* Mover);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere)
		FName AcceptableActorTag;
	UMover* Mover;
	AActor* GetAcceptableActor() const;
};
