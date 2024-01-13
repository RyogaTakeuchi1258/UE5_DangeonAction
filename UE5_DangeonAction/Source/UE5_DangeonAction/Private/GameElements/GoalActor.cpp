// Fill out your copyright notice in the Description page of Project Settings.


#include "GameElements/GoalActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h" 

// Sets default values
AGoalActor::AGoalActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Goal = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = Box;


	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/RollingBall/Enviroment/Meshes/S_Goal"));

	Goal->SetStaticMesh(Mesh);

	// BoxCollisionÇí«â¡Ç∑ÇÈ
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	Box->SetupAttachment(RootComponent);

	Box->OnComponentBeginOverlap.AddDynamic(this, &AGoalActor::OnBoxBeginOverlap);
}

// Called when the game starts or when spawned
void AGoalActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGoalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGoalActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// ê⁄êGÇµÇΩActorÇ™BallPlayerÇ©îªíËÇ∑ÇÈ
	//if (const BP_ThirdPersonCharacter* Player = Cast<>(OtherActor))
	//{
	//	// ëJà⁄Ç∑ÇÈLevelÇLoadÇ∑ÇÈ
	//	UGameplayStatics::OpenLevelBySoftObjectPtr(this, LoadLevel);
	//}
}

