// Fill out your copyright notice in the Description page of Project Settings.
//commit

#include "Dispetcher2Widget.h"
//#include "Kismet/GameplayStatics.h"

bool UDispetcher2Widget::Initialize()
{
	Super::Initialize();

	//AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	//Disp = Cast<ADisPawn>(FoundDisFawn);

	//StartCheckerGreenKey();


	return true;
}
//
//void UDispetcher2Widget::StartCheckerGreenKey()
//{
//	std::thread t(&UDispetcher2Widget::CheckerGreenKeyInThread, this);
//	t.detach();
//
//}
//
//void UDispetcher2Widget::CheckerGreenKeyInThread()
//{
//	
//}
