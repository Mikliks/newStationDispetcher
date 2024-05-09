// Fill out your copyright notice in the Description page of Project Settings.


#include "Karaganda_1_Widget.h"
//#include "Components/Button.h"
//#include "Components/VerticalBox.h"
//#include "Components/SizeBox.h"
//#include "Components/TextBlock.h"
//#include "Components/Border.h"
//#include "Components/Image.h"
//#include "Kismet/GameplayStatics.h"
//#include "Widgets/Text/STextBlock.h"


#pragma region General Foo



bool UKaraganda_1_Widget::Initialize()
{
	Super::Initialize();

	SetCurrentWidget(Station::Karaganda_1);

	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_7->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_way_P1G1P->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_P1G2P->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_7->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_P1G1P->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_P1G2P->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_tupic_M_21->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_27->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_tupic_M_23->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_24->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_25->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_26->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_tupic_M_21->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_27->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_tupic_M_23->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_24->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_25->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_26->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_4->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_6->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_7->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_P1G1P->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_P1G2P->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_21->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_27->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_23->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_24->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_25->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_26->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_way_6->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w6);
	Button_TrainInfo_way_7->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_w7);

	Button_TrainInfo_way_P1G1P->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_P1G1P);
	Button_TrainInfo_way_P1G2P->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_P1G2P);

	Button_TrainInfo_way_BP_1->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_wb1);
	Button_TrainInfo_way_BP_2->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_wb2);
	Button_TrainInfo_way_BP_3->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_wb3);
	Button_TrainInfo_way_BP_4->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_wb4);

	Button_TrainInfo_tupic_M_21->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M21_tupic);
	Button_TrainInfo_tupic_M_27->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M27_tupic);

	Button_TrainInfo_tupic_M_23->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M23_tupic);
	Button_TrainInfo_tupic_M_24->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M24_tupic);
	Button_TrainInfo_tupic_M_25->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M25_tupic);
	Button_TrainInfo_tupic_M_26->OnClicked.AddDynamic(this, &UKaraganda_1_Widget::CreateMenuTrainInfo_M26_tupic);


	return true;
}

void UKaraganda_1_Widget::kg1_UpdateInfoStationWay()
{

	PrintInfo(&Disp->kg1._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->kg1._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->kg1._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->kg1._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->kg1._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);
	PrintInfo(&Disp->kg1._w6, HB_LocoEven_way_6, TB_LocoEven_way_6, Button_TrainInfo_way_6, TextButton_way_6, HB_LocoOdd_way_6, TB_LocoOdd_way_6);
	PrintInfo(&Disp->kg1._w7, HB_LocoEven_way_7, TB_LocoEven_way_7, Button_TrainInfo_way_7, TextButton_way_7, HB_LocoOdd_way_7, TB_LocoOdd_way_7);

	PrintInfo(&Disp->kg1._M21_tupic, HB_LocoEven_tupic_M_21, TB_LocoEven_tupic_M_21, Button_TrainInfo_tupic_M_21, TextButton_tupic_M_21, HB_LocoOdd_tupic_M_21, TB_LocoOdd_tupic_M_21);
	PrintInfo(&Disp->kg1._M27_tupic, HB_LocoEven_tupic_M_27, TB_LocoEven_tupic_M_27, Button_TrainInfo_tupic_M_27, TextButton_tupic_M_27, HB_LocoOdd_tupic_M_27, TB_LocoOdd_tupic_M_27);

	PrintInfo(&Disp->kg1._M23_tupic, HB_LocoEven_tupic_M_23, TB_LocoEven_tupic_M_23, Button_TrainInfo_tupic_M_23, TextButton_tupic_M_23, HB_LocoOdd_tupic_M_23, TB_LocoOdd_tupic_M_23);
	PrintInfo(&Disp->kg1._M24_tupic, HB_LocoEven_tupic_M_24, TB_LocoEven_tupic_M_24, Button_TrainInfo_tupic_M_24, TextButton_tupic_M_24, HB_LocoOdd_tupic_M_24, TB_LocoOdd_tupic_M_24);
	PrintInfo(&Disp->kg1._M25_tupic, HB_LocoEven_tupic_M_25, TB_LocoEven_tupic_M_25, Button_TrainInfo_tupic_M_25, TextButton_tupic_M_25, HB_LocoOdd_tupic_M_25, TB_LocoOdd_tupic_M_25);
	PrintInfo(&Disp->kg1._M26_tupic, HB_LocoEven_tupic_M_26, TB_LocoEven_tupic_M_26, Button_TrainInfo_tupic_M_26, TextButton_tupic_M_26, HB_LocoOdd_tupic_M_26, TB_LocoOdd_tupic_M_26);


	PrintInfo(&Disp->kg1._wb1, HB_LocoEven_way_BP_1, TB_LocoEven_way_BP_1, Button_TrainInfo_way_BP_1, TextButton_way_BP_1, HB_LocoOdd_way_BP_1, TB_LocoOdd_way_BP_1);
	PrintInfo(&Disp->kg1._wb2, HB_LocoEven_way_BP_2, TB_LocoEven_way_BP_2, Button_TrainInfo_way_BP_2, TextButton_way_BP_2, HB_LocoOdd_way_BP_2, TB_LocoOdd_way_BP_2);
	PrintInfo(&Disp->kg1._wb3, HB_LocoEven_way_BP_3, TB_LocoEven_way_BP_3, Button_TrainInfo_way_BP_3, TextButton_way_BP_3, HB_LocoOdd_way_BP_3, TB_LocoOdd_way_BP_3);
	PrintInfo(&Disp->kg1._wb4, HB_LocoEven_way_BP_4, TB_LocoEven_way_BP_4, Button_TrainInfo_way_BP_4, TextButton_way_BP_4, HB_LocoOdd_way_BP_4, TB_LocoOdd_way_BP_4);

	PrintInfo(&Disp->kg1._p1g1p, HB_LocoEven_way_P1G1P, TB_LocoEven_way_P1G1P, Button_TrainInfo_way_P1G1P, TextButton_way_P1G1P, HB_LocoOdd_way_P1G1P, TB_LocoOdd_way_P1G1P);
	PrintInfo(&Disp->kg1._p1g2p, HB_LocoEven_way_P1G2P, TB_LocoEven_way_P1G2P, Button_TrainInfo_way_P1G2P, TextButton_way_P1G2P, HB_LocoOdd_way_P1G2P, TB_LocoOdd_way_P1G2P);

//#pragma region GREEN_KEYS
//
//#pragma region N
//
//	if (Disp->gk._1UPCH.stat == EAStat::Free
//		&& Disp->gk._2UPCH.stat == EAStat::Free
//		&& Disp->kg1._2NP.stat == EAStat::Free
//		&& Disp->kg1._1NP.stat == EAStat::Free)
//	{
//		Disp->kg1.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->kg1.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region ND
//	if (Disp->gk._1CHP.stat == EAStat::Free
//		&& Disp->gk._2CHP.stat == EAStat::Free
//		&& Disp->kg1._2UPN.stat == EAStat::Free
//		&& Disp->kg1._1UPN.stat == EAStat::Free)
//	{
//		Disp->kg1.GreenKey_ND.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->kg1.GreenKey_ND.stat = EAStat::Red;
//	}
//#pragma endregion
//
//
//#pragma endregion

}

void UKaraganda_1_Widget::CreateMenuInfo(int numTrain, int delta_y, int delta_x)
{
#pragma region Body

	FVector2D menuPos = FVector2D(300, 200);
	GetWorld()->GetGameViewport()->GetMousePosition(menuPos);
	menuPos = FVector2D(menuPos.X + 100, menuPos.Y + 300);
	Train* train = Disp->trainReestr.GetTrain(numTrain);
	if (train == nullptr) return;
	int delta = -30;
	VerticalBox_TrainInfo->ClearChildren();
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Visible);

	VerticalBox_TrainInfo->AddChild(Border_OtcepHead);

	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(1)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_1);
		Text_NumberOtcep_1->SetText(FText::FromString(FString::FromInt(1)));
		Text_CountVagon_Otcep_1->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(1)))));
		Text_TypeVagon_Otcep_1->SetText(Disp->GetRus_VagonType(train, 1));
		Text_Station_Otcep_1->SetText(Disp->GetRus_StationTarget(train, 1));
		Text_Way_Otcep_1->SetText(Disp->GetRus_WayTarget(train, 1));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(2)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_2);
		Text_NumberOtcep_2->SetText(FText::FromString(FString::FromInt(2)));
		Text_CountVagon_Otcep_2->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(2)))));
		Text_TypeVagon_Otcep_2->SetText(Disp->GetRus_VagonType(train, 2));
		Text_Station_Otcep_2->SetText(Disp->GetRus_StationTarget(train, 2));
		Text_Way_Otcep_2->SetText(Disp->GetRus_WayTarget(train, 2));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(3)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_3);
		Text_NumberOtcep_3->SetText(FText::FromString(FString::FromInt(3)));
		Text_CountVagon_Otcep_3->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(3)))));
		Text_TypeVagon_Otcep_3->SetText(Disp->GetRus_VagonType(train, 3));
		Text_Station_Otcep_3->SetText(Disp->GetRus_StationTarget(train, 3));
		Text_Way_Otcep_3->SetText(Disp->GetRus_WayTarget(train, 3));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(4)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_4);
		Text_NumberOtcep_4->SetText(FText::FromString(FString::FromInt(4)));
		Text_CountVagon_Otcep_4->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(4)))));
		Text_TypeVagon_Otcep_4->SetText(Disp->GetRus_VagonType(train, 4));
		Text_Station_Otcep_4->SetText(Disp->GetRus_StationTarget(train, 4));
		Text_Way_Otcep_4->SetText(Disp->GetRus_WayTarget(train, 4));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(5)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_5);
		Text_NumberOtcep_5->SetText(FText::FromString(FString::FromInt(5)));
		Text_CountVagon_Otcep_5->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(5)))));
		Text_TypeVagon_Otcep_5->SetText(Disp->GetRus_VagonType(train, 5));
		Text_Station_Otcep_5->SetText(Disp->GetRus_StationTarget(train, 5));
		Text_Way_Otcep_5->SetText(Disp->GetRus_WayTarget(train, 5));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(6)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_6);
		Text_NumberOtcep_6->SetText(FText::FromString(FString::FromInt(6)));
		Text_CountVagon_Otcep_6->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(6)))));
		Text_TypeVagon_Otcep_6->SetText(Disp->GetRus_VagonType(train, 6));
		Text_Station_Otcep_6->SetText(Disp->GetRus_StationTarget(train, 6));
		Text_Way_Otcep_6->SetText(Disp->GetRus_WayTarget(train, 6));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(7)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_7);
		Text_NumberOtcep_7->SetText(FText::FromString(FString::FromInt(7)));
		Text_CountVagon_Otcep_7->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(7)))));
		Text_TypeVagon_Otcep_7->SetText(Disp->GetRus_VagonType(train, 7));
		Text_Station_Otcep_7->SetText(Disp->GetRus_StationTarget(train, 7));
		Text_Way_Otcep_7->SetText(Disp->GetRus_WayTarget(train, 7));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(8)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_8);
		Text_NumberOtcep_8->SetText(FText::FromString(FString::FromInt(8)));
		Text_CountVagon_Otcep_8->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(8)))));
		Text_TypeVagon_Otcep_8->SetText(Disp->GetRus_VagonType(train, 8));
		Text_Station_Otcep_8->SetText(Disp->GetRus_StationTarget(train, 8));
		Text_Way_Otcep_8->SetText(Disp->GetRus_WayTarget(train, 8));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(9)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_9);
		Text_NumberOtcep_9->SetText(FText::FromString(FString::FromInt(9)));
		Text_CountVagon_Otcep_9->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(9)))));
		Text_TypeVagon_Otcep_9->SetText(Disp->GetRus_VagonType(train, 9));
		Text_Station_Otcep_9->SetText(Disp->GetRus_StationTarget(train, 9));
		Text_Way_Otcep_9->SetText(Disp->GetRus_WayTarget(train, 9));
	}
	if (train->GetCountVagonInOtcep(train->GetNumberOtcepFromInt(10)) != 0)
	{
		VerticalBox_TrainInfo->AddChild(Border_Otcep_10);
		Text_NumberOtcep_10->SetText(FText::FromString(FString::FromInt(10)));
		Text_CountVagon_Otcep_10->SetText(FText::FromString(FString::FromInt(train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(10)))));
		Text_TypeVagon_Otcep_10->SetText(Disp->GetRus_VagonType(train, 10));
		Text_Station_Otcep_10->SetText(Disp->GetRus_StationTarget(train, 10));
		Text_Way_Otcep_10->SetText(Disp->GetRus_WayTarget(train, 10));
	}


	Text_CountVagon_OtcepItogo->SetText(FText::FromString(FString::FromInt(train->GetVagonsCount())));
	VerticalBox_TrainInfo->AddChild(Border_OtcepMenuEnd);
	menuPos = FVector2D(menuPos.X + delta_x, menuPos.Y + delta + delta_y);
	SizeBox_TrainInfo->SetRenderTranslation(menuPos);

#pragma endregion
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->kg1._w1.num);

}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->kg1._w2.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->kg1._w3.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->kg1._w4.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->kg1._w5.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w6()
{
	CreateMenuInfo(Disp->kg1._w6.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_w7()
{
	CreateMenuInfo(Disp->kg1._w7.num, 100);
}

void UKaraganda_1_Widget::CreateMenuTrainInfo_P1G1P()
{
	CreateMenuInfo(Disp->kg1._p1g1p.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_P1G2P()
{
	CreateMenuInfo(Disp->kg1._p1g2p.num);
}

void UKaraganda_1_Widget::CreateMenuTrainInfo_M21_tupic()
{
	CreateMenuInfo(Disp->kg1._M21_tupic.num,0,200);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_M27_tupic()
{
	CreateMenuInfo(Disp->kg1._M27_tupic.num,0, -100);
}

void UKaraganda_1_Widget::CreateMenuTrainInfo_M23_tupic()
{
	CreateMenuInfo(Disp->kg1._M23_tupic.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_M24_tupic()
{
	CreateMenuInfo(Disp->kg1._M24_tupic.num);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_M25_tupic()
{
	CreateMenuInfo(Disp->kg1._M25_tupic.num, 100);
}
void UKaraganda_1_Widget::CreateMenuTrainInfo_M26_tupic()
{
	CreateMenuInfo(Disp->kg1._M26_tupic.num,100,-100);
}

void UKaraganda_1_Widget::CreateMenuTrainInfo_wb1()
{
	CreateMenuInfo(Disp->kg1._wb1.num);

}
void UKaraganda_1_Widget::CreateMenuTrainInfo_wb2()
{
	CreateMenuInfo(Disp->kg1._wb2.num);

}
void UKaraganda_1_Widget::CreateMenuTrainInfo_wb3()
{
	CreateMenuInfo(Disp->kg1._wb3.num);

}
void UKaraganda_1_Widget::CreateMenuTrainInfo_wb4()
{
	CreateMenuInfo(Disp->kg1._wb4.num);

}


void UKaraganda_1_Widget::TestSostavBeforeSvetofor(EdopStat dopstat, int numberPoezd, int numberLoco)
{
	


if (numberPoezd == 0)
	{
		numberPoezd = rand() % 8997 + 1000;
		if (dopstat == EdopStat::N
			|| dopstat == EdopStat::ND
			|| dopstat == EdopStat::N1
			|| dopstat == EdopStat::N2
			|| dopstat == EdopStat::N3
			|| dopstat == EdopStat::N4
			|| dopstat == EdopStat::N5
			|| dopstat == EdopStat::N6
			|| dopstat == EdopStat::N7
			|| dopstat == EdopStat::MX4
			)
		{
			if (numberPoezd % 2 == 0)
			{
				numberPoezd--;
			}
		}
		else
		{
			if (numberPoezd % 2 != 0)
			{
				numberPoezd++;
			}
		}
	}
	if (numberLoco == 0)
	{
		numberLoco = rand() % 89 + 10;

	}


	if (dopstat == EdopStat::N)
	{
		if (Disp->kg1._1NP.stat == EAStat::Free)
		{
			Disp->kg1._1NP.stat = EAStat::Busy;
			Disp->kg1._1NP.num = numberPoezd;
			Disp->kg1._1NP.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._1NP.stat = EAStat::Free;
			Disp->kg1._1NP.num = 0;
			Disp->kg1._1NP.dopn = 0;
		}
	}
	if (dopstat == EdopStat::ND)
	{
		if (Disp->kg1._1UPN.stat == EAStat::Free)
		{
			Disp->kg1._1UPN.stat = EAStat::Busy;
			Disp->kg1._1UPN.num = numberPoezd;
			Disp->kg1._1UPN.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._1UPN.stat = EAStat::Free;
			Disp->kg1._1UPN.num = 0;
			Disp->kg1._1UPN.dopn = 0;
		}
	}

	if (dopstat == EdopStat::CHM1 )
	{
		if (Disp->kg1._w1.stat == EAStat::Free)
		{
			Disp->kg1._w1.stat = EAStat::Busy;
			Disp->kg1._w1.num = numberPoezd;
			Disp->kg1._w1.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w1.stat = EAStat::Free;
			Disp->kg1._w1.num = 0;
			Disp->kg1._w1.dopn = 0;
		}

	}
	if (dopstat == EdopStat::CHM2 )
	{
		if (Disp->kg1._w2.stat == EAStat::Free)
		{
			Disp->kg1._w2.stat = EAStat::Busy;
			Disp->kg1._w2.num = numberPoezd;
			Disp->kg1._w2.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w2.stat = EAStat::Free;
			Disp->kg1._w2.num = 0;
			Disp->kg1._w2.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM3 )
	{
		if (Disp->kg1._w3.stat == EAStat::Free)
		{
			Disp->kg1._w3.stat = EAStat::Busy;
			Disp->kg1._w3.num = numberPoezd;
			Disp->kg1._w3.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w3.stat = EAStat::Free;
			Disp->kg1._w3.num = 0;
			Disp->kg1._w3.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM4 )
	{
		if (Disp->kg1._w4.stat == EAStat::Free)
		{
			Disp->kg1._w4.stat = EAStat::Busy;
			Disp->kg1._w4.num = numberPoezd;
			Disp->kg1._w4.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w4.stat = EAStat::Free;
			Disp->kg1._w4.num = 0;
			Disp->kg1._w4.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM5 )
	{
		if (Disp->kg1._w5.stat == EAStat::Free)
		{
			Disp->kg1._w5.stat = EAStat::Busy;
			Disp->kg1._w5.num = numberPoezd;
			Disp->kg1._w5.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w5.stat = EAStat::Free;
			Disp->kg1._w5.num = 0;
			Disp->kg1._w5.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM6 )
	{
		if (Disp->kg1._w6.stat == EAStat::Free)
		{
			Disp->kg1._w6.stat = EAStat::Busy;
			Disp->kg1._w6.num = numberPoezd;
			Disp->kg1._w6.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w6.stat = EAStat::Free;
			Disp->kg1._w6.num = 0;
			Disp->kg1._w6.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM7 )
	{
		if (Disp->kg1._w7.stat == EAStat::Free)
		{
			Disp->kg1._w7.stat = EAStat::Busy;
			Disp->kg1._w7.num = numberPoezd;
			Disp->kg1._w7.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w7.stat = EAStat::Free;
			Disp->kg1._w7.num = 0;
			Disp->kg1._w7.dopn = 0;
		}
	}

	if ( dopstat == EdopStat::NM1)
	{
		if (Disp->kg1._w1.stat == EAStat::Free)
		{
			Disp->kg1._w1.stat = EAStat::Busy;
			Disp->kg1._w1.num = numberPoezd;
			Disp->kg1._w1.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w1.stat = EAStat::Free;
			Disp->kg1._w1.num = 0;
			Disp->kg1._w1.dopn = 0;
		}

	}
	if ( dopstat == EdopStat::NM2)
	{
		if (Disp->kg1._w2.stat == EAStat::Free)
		{
			Disp->kg1._w2.stat = EAStat::Busy;
			Disp->kg1._w2.num = numberPoezd;
			Disp->kg1._w2.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w2.stat = EAStat::Free;
			Disp->kg1._w2.num = 0;
			Disp->kg1._w2.dopn = 0;
		}
	}
	if ( dopstat == EdopStat::NM3)
	{
		if (Disp->kg1._w3.stat == EAStat::Free)
		{
			Disp->kg1._w3.stat = EAStat::Busy;
			Disp->kg1._w3.num = numberPoezd;
			Disp->kg1._w3.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w3.stat = EAStat::Free;
			Disp->kg1._w3.num = 0;
			Disp->kg1._w3.dopn = 0;
		}
	}
	if ( dopstat == EdopStat::NM4)
	{
		if (Disp->kg1._w4.stat == EAStat::Free)
		{
			Disp->kg1._w4.stat = EAStat::Busy;
			Disp->kg1._w4.num = numberPoezd;
			Disp->kg1._w4.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w4.stat = EAStat::Free;
			Disp->kg1._w4.num = 0;
			Disp->kg1._w4.dopn = 0;
		}
	}
	if ( dopstat == EdopStat::NM5)
	{
		if (Disp->kg1._w5.stat == EAStat::Free)
		{
			Disp->kg1._w5.stat = EAStat::Busy;
			Disp->kg1._w5.num = numberPoezd;
			Disp->kg1._w5.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w5.stat = EAStat::Free;
			Disp->kg1._w5.num = 0;
			Disp->kg1._w5.dopn = 0;
		}
	}
	if ( dopstat == EdopStat::NM6)
	{
		if (Disp->kg1._w6.stat == EAStat::Free)
		{
			Disp->kg1._w6.stat = EAStat::Busy;
			Disp->kg1._w6.num = numberPoezd;
			Disp->kg1._w6.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w6.stat = EAStat::Free;
			Disp->kg1._w6.num = 0;
			Disp->kg1._w6.dopn = 0;
		}
	}
	if ( dopstat == EdopStat::NM7)
	{
		if (Disp->kg1._w7.stat == EAStat::Free)
		{
			Disp->kg1._w7.stat = EAStat::Busy;
			Disp->kg1._w7.num = numberPoezd;
			Disp->kg1._w7.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._w7.stat = EAStat::Free;
			Disp->kg1._w7.num = 0;
			Disp->kg1._w7.dopn = 0;
		}
	}



	if (dopstat == EdopStat::M1)
	{
		if (Disp->kg1._NP.stat == EAStat::Free)
		{
			Disp->kg1._NP.stat = EAStat::Busy;
			Disp->kg1._NP.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._NP.stat = EAStat::Free;
			Disp->kg1._NP.dopn = 0;
		}

	}
	if (dopstat == EdopStat::M3)
	{
		if (Disp->kg1._NAP.stat == EAStat::Free)
		{
			Disp->kg1._NAP.stat = EAStat::Busy;
			Disp->kg1._NAP.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._NAP.stat = EAStat::Free;
			Disp->kg1._NAP.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M14)
	{
		if (Disp->kg1._wb1.stat == EAStat::Free)
		{
			Disp->kg1._wb1.stat = EAStat::Busy;
			Disp->kg1._wb1.dopn = numberLoco;
			Disp->kg1._wb1.num = numberPoezd;
		}
		else
		{
			Disp->kg1._wb1.stat = EAStat::Free;
			Disp->kg1._wb1.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M16)
	{
		if (Disp->kg1._wb2.stat == EAStat::Free)
		{
			Disp->kg1._wb2.stat = EAStat::Busy;
			Disp->kg1._wb2.dopn = numberLoco;
			Disp->kg1._wb2.num = numberPoezd;
		}
		else
		{
			Disp->kg1._wb2.stat = EAStat::Free;
			Disp->kg1._wb2.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M18)
	{
		if (Disp->kg1._wb3.stat == EAStat::Free)
		{
			Disp->kg1._wb3.stat = EAStat::Busy;
			Disp->kg1._wb3.dopn = numberLoco;
			Disp->kg1._wb3.num = numberPoezd;
		}
		else
		{
			Disp->kg1._wb3.stat = EAStat::Free;
			Disp->kg1._wb3.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M20)
	{
		if (Disp->kg1._wb4.stat == EAStat::Free)
		{
			Disp->kg1._wb4.stat = EAStat::Busy;
			Disp->kg1._wb4.dopn = numberLoco;
			Disp->kg1._wb4.num = numberPoezd;
		}
		else
		{
			Disp->kg1._wb4.stat = EAStat::Free;
			Disp->kg1._wb4.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M21)
	{
		if (Disp->kg1._M21_tupic.stat == EAStat::Free)
		{
			Disp->kg1._M21_tupic.stat = EAStat::Busy;
			Disp->kg1._M21_tupic.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._M21_tupic.stat = EAStat::Free;
			Disp->kg1._M21_tupic.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M27)
	{
		if (Disp->kg1._M27_tupic.stat == EAStat::Free)
		{
			Disp->kg1._M27_tupic.stat = EAStat::Busy;
			Disp->kg1._M27_tupic.dopn = numberLoco;
		}
		else
		{
			Disp->kg1._M27_tupic.stat = EAStat::Free;
			Disp->kg1._M27_tupic.dopn = 0;
		}
	}


	kg1_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganda_1);
}

void UKaraganda_1_Widget::kg1_WayNumberChanger(int numberway)
{
	FElm* wayForChanger;
	if (numberway == 1) wayForChanger = &Disp->kg1._w1;
	else if (numberway == 2) wayForChanger = &Disp->kg1._w2;
	else if (numberway == 3) wayForChanger = &Disp->kg1._w3;
	else if (numberway == 4) wayForChanger = &Disp->kg1._w4;
	else if (numberway == 5) wayForChanger = &Disp->kg1._w5;
	else if (numberway == 6) wayForChanger = &Disp->kg1._w6;
	else if (numberway == 7) wayForChanger = &Disp->kg1._w7;
	else wayForChanger = nullptr;

	if (wayForChanger->dopn == 0)
	{
		if (wayForChanger->num % 2 == 0)
		{
			wayForChanger->num++;
		}
		else
		{
			wayForChanger->num--;
		}
	}
	//если  был один "правильный" локомотив
	else if (wayForChanger->dopn > 0 && wayForChanger->dopn < 100)
	{
		//у четного поезда правильный локомотив был слева
		if (wayForChanger->num % 2 == 0)
		{
			wayForChanger->num++;

			//после смены четности он становиться конфликтным
			wayForChanger->dopn = -wayForChanger->dopn;

			// и маркер левого конфликта
			wayForChanger->num = -wayForChanger->num;
		}
		else
		{
			wayForChanger->num--;

			//после смены четности он становиться конфликтным
			wayForChanger->dopn = -wayForChanger->dopn;

		}
	}
	//если слева был один  "неправильный" локомотив
	else if (wayForChanger->num < 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 100)
	{
		//т.е. для нечетного поезда, который становится четным
		wayForChanger->num = abs(wayForChanger->num);
		wayForChanger->num--;
		wayForChanger->dopn = -wayForChanger->dopn;
	}
	//если справа был один  "неправильный" локомотив
	else if (wayForChanger->num > 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 100)
	{
		//т.е. для четного поезда, который становится нечетным
		wayForChanger->num++;
		wayForChanger->dopn = -wayForChanger->dopn;
	}
	//если слева был один  "неправильный" локомотив
	else if (wayForChanger->num < 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 10000)
	{
		//т.е. для нечетного поезда, который становится четным
		wayForChanger->num = abs(wayForChanger->num);
		wayForChanger->num--;

	}
	//если справа был один  "неправильный" локомотив
	else if (wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 10000)
	{
		//т.е. для четного поезда, который становится нечетным
		wayForChanger->num++;
		wayForChanger->num = -wayForChanger->num;
	}

	Disp->SendDataStationToAll(Station::Karaganda_1);

}

#pragma endregion

#pragma region Routers



void UKaraganda_1_Widget::kg1_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganda_1);
}

#pragma endregion

