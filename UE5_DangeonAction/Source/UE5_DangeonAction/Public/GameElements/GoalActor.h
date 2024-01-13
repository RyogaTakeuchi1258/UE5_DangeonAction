// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoalActor.generated.h"

class UStaticMeshCompornent;
class UBoxComponent;

UCLASS()
class UE5_DANGEONACTION_API AGoalActor : public AActor
{
	GENERATED_BODY()

private:
	/* GoalópÇÃStaticMesh : Goal */
	UPROPERTY(VisibleAnywhere, Category = Goal, meta = (AllowPrivateAccess = "ture"))TObjectPtr<UStaticMeshComponent> Goal;
	/** ê⁄êGîªíËópÇÃCollision : Box */
	UPROPERTY(VisibleAnywhere, Category = Goal, meta = (AllowPrivateAccess = "true"))TObjectPtr<UBoxComponent> Box;

public:	
	// Sets default values for this actor's properties
	AGoalActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
