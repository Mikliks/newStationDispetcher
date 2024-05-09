// Fill out your copyright notice in the Description page of Project Settings.
//commit
#pragma once
#include "DisPawn.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Dispetcher2Widget.generated.h"

/**
 * 
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UDispetcher2Widget : public UUserWidget
{
	GENERATED_BODY()

		//указатель для обращения к полям и методам главного класса - посредника 
	//	ADisPawn* Disp;
	//FElm* RedactSvetofor = nullptr;
	//FElm* RedactStrelka = nullptr;

	virtual bool Initialize();

		
		/*void StartCheckerGreenKey();

		UFUNCTION(BlueprintCallable)
		void CheckerGreenKeyInThread();*/
};
