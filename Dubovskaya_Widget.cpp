// Fill out your copyright notice in the Description page of Project Settings.


#include "Dubovskaya_Widget.h"

#pragma region General Foo

void UDubovskaya_Widget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Dubovskaya, comm);
}

bool UDubovskaya_Widget::Initialize()
{
	Super::Initialize();

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UDubovskaya_Widget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_N);

	But_za_CH->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_CH);



	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UDubovskaya_Widget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UDubovskaya_Widget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::On_way_3);




	But_za_CH_1->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_CH3);

	But_za_N_1->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_N3);

	But_za_M_1->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UDubovskaya_Widget::Za_M4);


	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_4->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_4->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UDubovskaya_Widget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UDubovskaya_Widget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::CreateMenuTrainInfo_w3);

	Button_TrainInfo_tupic_M_3->OnClicked.AddDynamic(this, &UDubovskaya_Widget::CreateMenuTrainInfo_tupic_M3);
	Button_TrainInfo_tupic_M_4->OnClicked.AddDynamic(this, &UDubovskaya_Widget::CreateMenuTrainInfo_tupic_M4);

	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UDubovskaya_Widget::ExitMenuTrainInfo);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();
	But_Exit_Menu->OnClicked.AddDynamic(this, &UDubovskaya_Widget::ExitMenu);
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);


	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UDubovskaya_Widget::dbs_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->dbs_arrStr.size(); i++)
	{
		Disp->dbs_arrStr[i]->cur = ExCurator::Norm;
		Disp->dbs_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->dbs_arrStr[i]->oper = EOper::Norm;
		Disp->dbs_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->dbs_arrWay.size(); i++)
	{
		Disp->dbs_arrWay[i]->cur = ExCurator::Norm;
		Disp->dbs_arrWay[i]->dopn = 0;
		Disp->dbs_arrWay[i]->num = 0;
		Disp->dbs_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->dbs_arrWay[i]->oper = EOper::Norm;
		Disp->dbs_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->dbs_arrSvetofor.size(); i++)
	{
		Disp->dbs_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->dbs_arrSvetofor[i]->dopn = 0;
		Disp->dbs_arrSvetofor[i]->num = 0;
		Disp->dbs_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->dbs_arrSvetofor[i]->oper = EOper::Norm;
		Disp->dbs_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->dbs._N.stat = EAStat::Red;

	Disp->dbs._CH.stat = EAStat::Red;


	Disp->SendDataStationToAll(Station::Karaganda);
}

void UDubovskaya_Widget::PrintInfo(FElm* wayInfo,
	UHorizontalBox* HB_LocoEven_way, UTextBlock* TB_LocoEven_way,
	UButton* Button_TrainInfo_way, UTextBlock* TextButton_way,
	UHorizontalBox* HB_LocoOdd_way, UTextBlock* TB_LocoOdd_way)
{
	if (wayInfo != nullptr)
	{
		//гасим локомотивы
		HB_LocoOdd_way->SetVisibility(ESlateVisibility::Hidden);
		HB_LocoEven_way->SetVisibility(ESlateVisibility::Hidden);
		if (wayInfo->num != 0)
		{
			if (Disp->trainReestr.GetTrain(wayInfo->num) != nullptr)
			{
				TextButton_way->SetText(FText::FromString(FString::FromInt(abs(wayInfo->num))));
				Button_TrainInfo_way->SetVisibility(ESlateVisibility::Visible);


				if (Disp->trainReestr.GetTrain(wayInfo->num)->GetNumberLocoOdd() != 0)
				{
					TB_LocoOdd_way->SetText(FText::FromString(FString::FromInt(Disp->trainReestr.GetTrain(wayInfo->num)->GetNumberLocoOdd())));
					HB_LocoOdd_way->SetVisibility(ESlateVisibility::Visible);
				}
				else
				{
					HB_LocoOdd_way->SetVisibility(ESlateVisibility::Hidden);
				}
				if (Disp->trainReestr.GetTrain(wayInfo->num)->GetNumberLocoEven() != 0)
				{
					TB_LocoEven_way->SetText(FText::FromString(FString::FromInt(Disp->trainReestr.GetTrain(wayInfo->num)->GetNumberLocoEven())));
					HB_LocoEven_way->SetVisibility(ESlateVisibility::Visible);
				}
				else
				{
					HB_LocoEven_way->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		}
		else
		{
			Button_TrainInfo_way->SetVisibility(ESlateVisibility::Hidden);
			if (wayInfo->dopn != 0)
			{
				if (wayInfo->dopn % 2 != 0)
				{
					TB_LocoOdd_way->SetText(FText::FromString(FString::FromInt(wayInfo->dopn)));
					HB_LocoOdd_way->SetVisibility(ESlateVisibility::Visible);
				}
				else
				{
					TB_LocoEven_way->SetText(FText::FromString(FString::FromInt(wayInfo->dopn)));
					HB_LocoEven_way->SetVisibility(ESlateVisibility::Visible);
				}
			}
			else
			{
				HB_LocoOdd_way->SetVisibility(ESlateVisibility::Hidden);
				HB_LocoEven_way->SetVisibility(ESlateVisibility::Hidden);
			}
		}
	}
}

void UDubovskaya_Widget::dbs_UpdateInfoStationWay()
{
	PrintInfo(&Disp->dbs._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->dbs._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->dbs._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);

	PrintInfo(&Disp->dbs._M3_tupic, HB_LocoEven_tupic_M_3, TB_LocoEven_tupic_M_3, Button_TrainInfo_tupic_M_3, TextButton_tupic_M_3, HB_LocoOdd_tupic_M_3, TB_LocoOdd_tupic_M_3);
	PrintInfo(&Disp->dbs._M4_tupic, HB_LocoEven_tupic_M_4, TB_LocoEven_tupic_M_4, Button_TrainInfo_tupic_M_4, TextButton_tupic_M_4, HB_LocoOdd_tupic_M_4, TB_LocoOdd_tupic_M_4);

//#pragma region GREEN_KEYS
//
//#pragma region N
//
//	if (Disp->krz._1UPCH.stat == EAStat::Free
//		&& Disp->krz._2UPCH.stat == EAStat::Free
//		&& Disp->dbs._2NP.stat == EAStat::Free
//		&& Disp->dbs._1NP.stat == EAStat::Free)
//	{
//		Disp->dbs.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->dbs.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//
//#pragma region CH
//	if (Disp->dbs._1CHP.stat == EAStat::Free
//		&& Disp->dbs._2CHP.stat == EAStat::Free
//		&& Disp->mkd._2UPN.stat == EAStat::Free
//		&& Disp->mkd._1UPN.stat == EAStat::Free)
//	{
//		Disp->dbs.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->dbs.GreenKey_CH.stat = EAStat::Red;
//	}
//
//#pragma endregion
//
//
//
//#pragma endregion
}


FVector2D UDubovskaya_Widget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}

void UDubovskaya_Widget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = dbs_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (dbs_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (dbs_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (dbs_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;


		case EdopStat::CH:

			if (dbs_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (dbs_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (dbs_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;





#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (dbs_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (dbs_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (dbs_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (dbs_M1_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:



			if (dbs_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (dbs_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (dbs_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (dbs_M2_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:

			if (dbs_M3_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:


			if (dbs_M4_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);




			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;





#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (dbs_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (Disp->dbs_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (dbs_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (Disp->dbs_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (dbs_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (Disp->dbs_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;







		case EdopStat::N1:

			if (dbs_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);


			if (Disp->dbs_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (dbs_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);


			if (Disp->dbs_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (dbs_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);


			if (Disp->dbs_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;





#pragma endregion		
#pragma region Other
		case EdopStat::CH8:
			break;
		case EdopStat::CH9:
			break;
		case EdopStat::CH10:
			break;
		case EdopStat::M21:
			break;
		case EdopStat::M22:
			break;
		case EdopStat::M23:
			break;
		case EdopStat::M24:
			break;
		case EdopStat::M25:
			break;
		case EdopStat::M26:
			break;
		case EdopStat::M27:
			break;
		case EdopStat::M28:
			break;
		case EdopStat::M29:
			break;
		case EdopStat::M30:
			break;
		case EdopStat::M31:
			break;
		case EdopStat::N8:
			break;
		case EdopStat::N9:
			break;
		case EdopStat::N10:
			break;
		case EdopStat::N1A:
			break;
		case EdopStat::N2A:
			break;
		case EdopStat::N3A:
			break;
		case EdopStat::N4A:
			break;
		case EdopStat::N5A:
			break;
		case EdopStat::CHM1:
			break;
		case EdopStat::CHM2:
			break;
		case EdopStat::CHM3:
			break;
		case EdopStat::CHM4:
			break;
		case EdopStat::CHM5:
			break;
		case EdopStat::CHM6:
			break;
		case EdopStat::CHM7:
			break;
		case EdopStat::CHM8:
			break;
		case EdopStat::CHM9:
			break;
		case EdopStat::CHM10:
			break;
		case EdopStat::CHM1A:
			break;
		case EdopStat::CHM2A:
			break;
		case EdopStat::CHM3A:
			break;
		case EdopStat::CHM4A:
			break;
		case EdopStat::CHM5A:
			break;
		case EdopStat::NM1B:
			break;
		case EdopStat::NM2B:
			break;
		case EdopStat::NM3B:
			break;
		case EdopStat::NM4B:
			break;
		case EdopStat::NM1:
			break;
		case EdopStat::NM2:
			break;
		case EdopStat::NM3:
			break;
		case EdopStat::NM4:
			break;
		case EdopStat::NM5:
			break;
		case EdopStat::NM6:
			break;
		case EdopStat::NM7:
			break;
		case EdopStat::NM8:
			break;
		case EdopStat::NM9:
			break;
		case EdopStat::NM10:
			break;
		case EdopStat::NM11:
			break;
		case EdopStat::NM12:
			break;
		case EdopStat::NM13:
			break;
		case EdopStat::NM14:
			break;
		case EdopStat::NM15:
			break;
		case EdopStat::NM16:
			break;
		case EdopStat::NM17:
			break;
		case EdopStat::NM18:
			break;
		case EdopStat::NM19:
			break;
		case EdopStat::NM20:
			break;
		case EdopStat::NM21:
			break;
		case EdopStat::NM22:
			break;
		case EdopStat::NM23:
			break;
		case EdopStat::NM24:
			break;
		case EdopStat::NM25:
			break;
		case EdopStat::NM26:
			break;
		case EdopStat::NM27:
			break;
		case EdopStat::NM28:
			break;
		case EdopStat::NM29:
			break;
		case EdopStat::NM30:
			break;
		case EdopStat::NM31:
			break;
		case EdopStat::NM32:
			break;
		case EdopStat::NM33:
			break;
		case EdopStat::NM34:
			break;
		case EdopStat::PG1:
			break;
		case EdopStat::PG2:
			break;
		case EdopStat::Left:
			break;
		case EdopStat::Right:
			break;

		case EdopStat::MX4:
			break;
		default:
			break;
#pragma endregion
		}
	}
	else
	{
		if (Disp->dbs_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}

}


void UDubovskaya_Widget::CreateMenuInfo(int numTrain)
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
	menuPos = FVector2D(menuPos.X, menuPos.Y + delta);
	SizeBox_TrainInfo->SetRenderTranslation(menuPos);

#pragma endregion
}

void UDubovskaya_Widget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->dbs._w1.num);

}

void UDubovskaya_Widget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->dbs._w2.num);
}

void UDubovskaya_Widget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->dbs._w3.num);
}

void UDubovskaya_Widget::CreateMenuTrainInfo_tupic_M3()
{
	CreateMenuInfo(Disp->dbs._M3_tupic.num);
}

void UDubovskaya_Widget::CreateMenuTrainInfo_tupic_M4()
{
	CreateMenuInfo(Disp->dbs._M4_tupic.num);
}

void UDubovskaya_Widget::ExitMenuTrainInfo()
{
	//SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
}


void UDubovskaya_Widget::ExitMenu()
{
	dbs_Make_Strelka_UnRedact();
	dbs_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}


#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UDubovskaya_Widget::OtmenaOneRouter()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	if (com != Commd::NotDef) SendCommToServer(com);

	ExitMenu();
}

void UDubovskaya_Widget::Za_N()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Dubovskaya, Direction::EVEN)) return;


	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_N_Create);




	ExitMenu();
}

void UDubovskaya_Widget::Za_CH()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Dubovskaya, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CH_Create);




	ExitMenu();
}


void UDubovskaya_Widget::On_way_1()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_1P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_1P_Create);



	ExitMenu();
}
void UDubovskaya_Widget::On_way_2()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_2P_Create);



	ExitMenu();
}
void UDubovskaya_Widget::On_way_3()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_3P_Create);



	ExitMenu();
}


void UDubovskaya_Widget::Za_CH1()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH1_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH1_Create);

	ExitMenu();

}
void UDubovskaya_Widget::Za_CH2()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH2_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH2_Create);

	ExitMenu();
}
void UDubovskaya_Widget::Za_CH3()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH3_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH3_Create);

	ExitMenu();
}


void UDubovskaya_Widget::Za_N1()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1_Create);



	ExitMenu();
}
void UDubovskaya_Widget::Za_N2()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2_Create);



	ExitMenu();
}
void UDubovskaya_Widget::Za_N3()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3_Create);




	ExitMenu();
}


void UDubovskaya_Widget::Za_M1()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_M1_Create);



	ExitMenu();
}
void UDubovskaya_Widget::Za_M2()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_M2_Create);



	ExitMenu();
}
void UDubovskaya_Widget::Za_M3()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M3_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M3_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M3_Create);
	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M3_Create);



	ExitMenu();
}
void UDubovskaya_Widget::Za_M4()
{
	EdopStat dopstat = dbs_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_M4_Create);






	ExitMenu();
}


#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N
bool UDubovskaya_Widget::dbs_N_1P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N_1P.IsFree()) return  false;
	return true;
}
bool UDubovskaya_Widget::dbs_N_2P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N_2P.IsFree()) return  false;
	return true;
}
bool UDubovskaya_Widget::dbs_N_3P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N_3P.IsFree()) return  false;
	return true;
}




#pragma endregion

#pragma region from CH
bool UDubovskaya_Widget::dbs_CH_1P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH_1P.IsFree()) return  false;
	return true;
}
bool UDubovskaya_Widget::dbs_CH_2P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH_2P.IsFree()) return  false;
	return true;
}
bool UDubovskaya_Widget::dbs_CH_3P_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH_3P.IsFree()) return  false;
	return true;
}



#pragma endregion


#pragma region from M1
bool UDubovskaya_Widget::dbs_M1_CH1_CheckPossCreate()
{
	if (Disp->dbs._w1.stat == EAStat::Free)
	{
		if (Disp->dbs_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->dbs._w1.stat == EAStat::Busy)
	{
		if (Disp->dbs_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M1_CH2_CheckPossCreate()
{
	if (Disp->dbs._w2.stat == EAStat::Free)
	{
		if (Disp->dbs_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->dbs._w2.stat == EAStat::Busy)
	{
		if (Disp->dbs_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M1_CH3_CheckPossCreate()
{
	if (Disp->dbs._w3.stat == EAStat::Free)
	{
		if (Disp->dbs_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->dbs._w3.stat == EAStat::Busy)
	{
		if (Disp->dbs_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M1_M3_CheckPossCreate()
{
	if (Disp->dbs._M3_tupic.stat == EAStat::Free)
	{
		if (Disp->dbs_M1_M3.IsFree()) return  true;
	}
	else if (Disp->dbs._M3_tupic.stat == EAStat::Busy)
	{
		if (Disp->dbs_M1_M3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M2
bool UDubovskaya_Widget::dbs_M2_N1_CheckPossCreate()
{
	if (Disp->dbs._w1.stat == EAStat::Free)
	{
		if (Disp->dbs_M2_N1.IsFree()) return  true;
	}
	else if (Disp->dbs._w1.stat == EAStat::Busy)
	{
		if (Disp->dbs_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M2_N2_CheckPossCreate()
{
	if (Disp->dbs._w2.stat == EAStat::Free)
	{
		if (Disp->dbs_M2_N2.IsFree()) return  true;
	}
	else if (Disp->dbs._w2.stat == EAStat::Busy)
	{
		if (Disp->dbs_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M2_N3_CheckPossCreate()
{
	if (Disp->dbs._w3.stat == EAStat::Free)
	{
		if (Disp->dbs_M2_N3.IsFree()) return  true;
	}
	else if (Disp->dbs._w3.stat == EAStat::Busy)
	{
		if (Disp->dbs_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UDubovskaya_Widget::dbs_M2_M4_CheckPossCreate()
{
	if (Disp->dbs._M4_tupic.stat == EAStat::Free)
	{
		if (Disp->dbs_M2_M4.IsFree()) return  true;
	}
	else if (Disp->dbs._M4_tupic.stat == EAStat::Busy)
	{
		if (Disp->dbs_M2_M4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}



#pragma endregion
#pragma region from M3

bool UDubovskaya_Widget::dbs_M3_M1_CheckPossCreate()
{
	if (Disp->dbs._NP.stat == EAStat::Free)
	{
		if (Disp->dbs_M3_M1.IsFree()) return  true;
	}
	else if (Disp->dbs._NP.stat == EAStat::Busy)
	{
		if (Disp->dbs_M3_M1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M4
bool UDubovskaya_Widget::dbs_M4_M2_CheckPossCreate()
{
	if (Disp->dbs._CHP.stat == EAStat::Free)
	{
		if (Disp->dbs_M4_M2.IsFree()) return  true;
	}
	else if (Disp->dbs._CHP.stat == EAStat::Busy)
	{
		if (Disp->dbs_M4_M2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}





#pragma endregion



#pragma region from CH1
bool UDubovskaya_Widget::dbs_CH1_M1_CheckPossCreate()
{
	if (!Disp->dbs_CH1_M1.IsFree()) return  false;
	if (Disp->dbs._N1.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UDubovskaya_Widget::dbs_CH1_N_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH1_N.IsFree()) return  false;
	if (Disp->dbs._N1.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from CH2
bool UDubovskaya_Widget::dbs_CH2_M1_CheckPossCreate()
{
	if (!Disp->dbs_CH2_M1.IsFree()) return  false;
	if (Disp->dbs._N2.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UDubovskaya_Widget::dbs_CH2_N_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH2_N.IsFree()) return  false;
	if (Disp->dbs._N2.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from CH3
bool UDubovskaya_Widget::dbs_CH3_M1_CheckPossCreate()
{
	if (!Disp->dbs_CH3_M1.IsFree()) return  false;
	if (Disp->dbs._N3.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UDubovskaya_Widget::dbs_CH3_N_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->dbs_CH3_N.IsFree()) return  false;
	if (Disp->dbs._N3.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion



#pragma region from N1
bool UDubovskaya_Widget::dbs_N1_M2_CheckPossCreate()
{
	if (!Disp->dbs_N1_M2.IsFree()) return  false;
	if (Disp->dbs._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}


bool UDubovskaya_Widget::dbs_N1_CH_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N1_CH.IsFree()) return  false;
	if (Disp->dbs._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}


#pragma endregion
#pragma region from N2
bool UDubovskaya_Widget::dbs_N2_M2_CheckPossCreate()
{
	if (!Disp->dbs_N2_M2.IsFree()) return  false;
	if (Disp->dbs._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}


bool UDubovskaya_Widget::dbs_N2_CH_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N2_CH.IsFree()) return  false;
	if (Disp->dbs._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}


#pragma endregion
#pragma region from N3
bool UDubovskaya_Widget::dbs_N3_M2_CheckPossCreate()
{
	if (!Disp->dbs_N3_M2.IsFree()) return  false;
	if (Disp->dbs._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}


bool UDubovskaya_Widget::dbs_N3_CH_CheckPossCreate()
{
	if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->dbs_N3_CH.IsFree()) return  false;
	if (Disp->dbs._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}


#pragma endregion




#pragma endregion


FElm* UDubovskaya_Widget::dbs_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}



void UDubovskaya_Widget::dbs_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Dubovskaya);
}

#pragma endregion

#pragma region Strelki

int UDubovskaya_Widget::dbs_Make_Strelka_Redact(int number)
{
	if (number == 1) RedactStrelka = &Disp->dbs._str1;
	else if (number == 2) RedactStrelka = &Disp->dbs._str2;
	else if (number == 3) RedactStrelka = &Disp->dbs._str3;
	else if (number == 4) RedactStrelka = &Disp->dbs._str4;
	else if (number == 5) RedactStrelka = &Disp->dbs._str5;

	else if (number == 6) RedactStrelka = &Disp->dbs._str6;


	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->dbs_arrStr.size(); i++)
	{
		if (Disp->dbs_arrStr[i]->num == number) return number;
	}
	return 0;
}
void UDubovskaya_Widget::dbs_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;
}
void UDubovskaya_Widget::dbs_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->dbs._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->dbs._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->dbs._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->dbs._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->dbs._str5) SendCommToServer(Commd::s5_Minus);

	if (RedactStrelka == &Disp->dbs._str6) SendCommToServer(Commd::s6_Minus);


	dbs_Make_Strelka_UnRedact();
}
void UDubovskaya_Widget::dbs_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->dbs._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->dbs._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->dbs._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->dbs._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->dbs._str5) SendCommToServer(Commd::s5_Plus);

	if (RedactStrelka == &Disp->dbs._str6) SendCommToServer(Commd::s6_Plus);


	dbs_Make_Strelka_UnRedact();
}
void UDubovskaya_Widget::dbs_RedactStrelkaToBreak()
{

	RedactStrelka->cur = ExCurator::NotControl;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UDubovskaya_Widget::dbs_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UDubovskaya_Widget::dbs_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UDubovskaya_Widget::dbs_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->dbs_arrStr.size(); i++)
	{
		Disp->dbs_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karaganda);
}

#pragma endregion

#pragma region Svetofori

void UDubovskaya_Widget::dbs_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->dbs._N;

	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->dbs._CH;


	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->dbs._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->dbs._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->dbs._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->dbs._M4;





	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->dbs._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->dbs._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->dbs._CH3;




	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->dbs._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->dbs._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->dbs._N3;





}
EdopStat UDubovskaya_Widget::dbs_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->dbs._N) return EdopStat::N;

	else if (RedactSvetofor == &Disp->dbs._CH) return EdopStat::CH;



	else if (RedactSvetofor == &Disp->dbs._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->dbs._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->dbs._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->dbs._M4) return EdopStat::M4;





	else if (RedactSvetofor == &Disp->dbs._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->dbs._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->dbs._CH3) return EdopStat::CH3;





	else if (RedactSvetofor == &Disp->dbs._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->dbs._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->dbs._N3) return EdopStat::N3;



	else return EdopStat::Norm;

}
bool UDubovskaya_Widget::dbs_IsRedactSvetoforFree()
{
	if (RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;

	return false;
}

void UDubovskaya_Widget::dbs_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UDubovskaya_Widget::dbs_BrokenSvetoforMake(ExCurator cur)
{

	if (cur == ExCurator::BrokenRed)
	{
		RedactSvetofor->cur = ExCurator::BrokenRed;
	}
	if (cur == ExCurator::BrokenBlue)
	{
		RedactSvetofor->cur = ExCurator::BrokenBlue;
	}
	if (cur == ExCurator::BrokenGreen)
	{
		RedactSvetofor->cur = ExCurator::BrokenGreen;
	}
	if (cur == ExCurator::BrokenWhite)
	{
		RedactSvetofor->cur = ExCurator::BrokenWhite;
	}
	if (cur == ExCurator::BrokenYellow)
	{
		RedactSvetofor->cur = ExCurator::BrokenYellow;
	}
	dbs_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UDubovskaya_Widget::dbs_RedactSvetofor_Remont()
{
	RedactSvetofor->cur = ExCurator::Norm;
	dbs_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UDubovskaya_Widget::dbs_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->dbs_arrSvetofor.size(); i++)
	{
		Disp->dbs_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::Karaganda);
}


#pragma endregion

#pragma region Signals
//void UDubovskaya_Widget::dbs_RazvorotPeregona(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		if (Disp->dbs.GreenKey_N.stat == EAStat::Green)
//		{
//			if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Left)
//			{
//				Disp->dbs.GreenKey_N.dopstat = EdopStat::Right;
//				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->dbs.GreenKey_N.dopstat = EdopStat::Left;
//				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
//			}
//			Disp->SendDataStationToAll(Station::Karaganda);
//		}
//	}
//
//	if (dopstat == EdopStat::CH)
//	{
//		if (Disp->dbs.GreenKey_CH.stat == EAStat::Green)
//		{
//			if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Left)
//			{
//				Disp->dbs.GreenKey_CH.dopstat = EdopStat::Right;
//				Disp->dbs.GreenKey_ND.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->dbs.GreenKey_CH.dopstat = EdopStat::Left;
//				Disp->dbs.GreenKey_ND.dopstat = EdopStat::Left;
//			}
//			Disp->SendDataStationToAll(Station::Karaganda);
//		}
//	}
//
//
//}
//void UDubovskaya_Widget::dbs_VspomogatRazvorotPeregona(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//
//		if (Disp->dbs.GreenKey_N.dopstat == EdopStat::Left)
//		{
//			Disp->dbs.GreenKey_N.dopstat = EdopStat::Right;
//			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
//		}
//		else
//		{
//			Disp->dbs.GreenKey_N.dopstat = EdopStat::Left;
//			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
//		}
//		Disp->SendDataStationToAll(Station::Karaganda);
//
//	}
//
//	if (dopstat == EdopStat::CH)
//	{
//
//		if (Disp->dbs.GreenKey_CH.dopstat == EdopStat::Left)
//		{
//			Disp->dbs.GreenKey_CH.dopstat = EdopStat::Right;
//			Disp->dbs.GreenKey_ND.dopstat = EdopStat::Right;
//		}
//		else
//		{
//			Disp->dbs.GreenKey_CH.dopstat = EdopStat::Left;
//
//		}
//		Disp->SendDataStationToAll(Station::Karaganda);
//
//	}
//
//
//}

#pragma endregion