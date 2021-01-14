// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "MainCharacter.generated.h"

UCLASS()
class SPRITOPDOWN_API AMainCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY()
	class UAttributeSetBase* Attributes;

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "C++")
	void OnExpChange();

	void SendExpChangeToPlayerCharacter();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem")
		UAbilitySystemComponent* AbilitySystemComp;
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem")
		//UAttributeSetBase* AttributeSetBaseComp;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

	virtual void InitializeAttributes();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Default")
	TSubclassOf<class UGameplayEffect> DefaultAttributeEffect;

	UFUNCTION(BlueprintCallable, Category = "AbilitySystem")
		void AquireAbility(TSubclassOf<UGameplayAbility> AbilityToAquire);

};
