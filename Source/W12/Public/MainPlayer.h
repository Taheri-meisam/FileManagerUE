// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HAL/FileManager.h"
#include "MainPlayer.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStuct{
	GENERATED_BODY()
	FString Xloc;
	FString Yloc;
	FString Zloc;
	FString XRot;
	FString YRot;
	FString ZRot;
	FString Speed;
	FString NewLine;
	TArray<FString> DataInArray;
	void SetDataInArray() {
		DataInArray.Add(Xloc);
		DataInArray.Add(Yloc);
		DataInArray.Add(Zloc);
		DataInArray.Add(XRot);
		DataInArray.Add(YRot);
		DataInArray.Add(ZRot);
		DataInArray.Add(Speed);
		DataInArray.Add(NewLine);
		//DataInArray.Add(Speed);

	}

};

UCLASS()
class W12_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	FPlayerStuct ActorData;

	UFUNCTION(BlueprintCallable, Category = "FileI/O")
	static bool SavingStringTextToFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverWriting);

};
