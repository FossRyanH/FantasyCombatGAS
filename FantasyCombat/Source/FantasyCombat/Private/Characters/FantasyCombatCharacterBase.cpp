


#include "Characters/FantasyCombatCharacterBase.h"

// Sets default values
AFantasyCombatCharacterBase::AFantasyCombatCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFantasyCombatCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFantasyCombatCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFantasyCombatCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

