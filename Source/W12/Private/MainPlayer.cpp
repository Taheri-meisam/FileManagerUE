// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	//FArchive* Ar = Myfile->CreateFileWriter(MyfileName, 0);

	//Myfile->CreateFileWriter(MyfileName, 0);	

}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FString DataToSave = FString::SanitizeFloat(GetActorLocation().X,2) +"\n";

	ActorData.Xloc = FString::SanitizeFloat(GetActorLocation().X, 2)+ ",";
	ActorData.Yloc = FString::SanitizeFloat(GetActorLocation().Y, 2) + ",";
	ActorData.Zloc = FString::SanitizeFloat(GetActorLocation().Z, 2) + ",";
	ActorData.XRot= FString::SanitizeFloat(GetActorRotation().Roll, 2) + ",";
	ActorData.YRot = FString::SanitizeFloat(GetActorRotation().Pitch, 2) + ",";
	ActorData.ZRot = FString::SanitizeFloat(GetActorRotation().Yaw, 2) + ",";
	ActorData.Speed = FString::SanitizeFloat(0.f, 2);
	ActorData.NewLine = "\n";
	ActorData.SetDataInArray();
	for (int i = 0; i < ActorData.DataInArray.Num();i++) {
		SavingStringTextToFile("", "MyTestFile.csv", ActorData.DataInArray[i], 1);
	}

	
}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AMainPlayer::SavingStringTextToFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverWriting)
{
	FString Path;
	Path = FPaths::GameSourceDir();
	Path += "/Files";

	if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Path))
	{
		FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*Path);
		if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Path))
		{
			return false;
		}
	}

	Path += "/";
	Path += FileName;

	if (!AllowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
		{
			return false;
		}
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Happend"));

	return FFileHelper::SaveStringToFile(SaveText, *Path,FFileHelper::EEncodingOptions::AutoDetect ,&IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
