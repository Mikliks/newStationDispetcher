// Fill out your copyright notice in the Description page of Project Settings.


#include "GanaAul_Widget.h"

#pragma region General Foo

void UGanaAul_Widget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::GanaAul, comm);
}

bool UGanaAul_Widget::Initialize()
{
	Super::Initialize();

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UGanaAul_Widget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N);
	But_za_CH->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CHD);


	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UGanaAul_Widget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UGanaAul_Widget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UGanaAul_Widget::On_way_4);
	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::On_way_5);


	But_za_CH_1->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH3);
	But_za_CH_4->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH4);
	But_za_CH_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_CH5);


	But_za_N_1->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N3);
	But_za_N_4->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N4);
	But_za_N_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_N5);


	But_za_M_1->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UGanaAul_Widget::Za_M6);




	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_4->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_tupic_M_3->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_tupic_M3);
	Button_TrainInfo_tupic_M_5->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_tupic_M5);
	Button_TrainInfo_tupic_M_6->OnClicked.AddDynamic(this, &UGanaAul_Widget::CreateMenuTrainInfo_tupic_M6);


	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UGanaAul_Widget::ExitMenuTrainInfo);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();
	But_Exit_Menu->OnClicked.AddDynamic(this, &UGanaAul_Widget::ExitMenu);
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);


	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UGanaAul_Widget::gu_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->gu_arrStr.size(); i++)
	{
		Disp->gu_arrStr[i]->cur = ExCurator::Norm;
		Disp->gu_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->gu_arrStr[i]->oper = EOper::Norm;
		Disp->gu_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->gu_arrWay.size(); i++)
	{
		Disp->gu_arrWay[i]->cur = ExCurator::Norm;
		Disp->gu_arrWay[i]->dopn = 0;
		Disp->gu_arrWay[i]->num = 0;
		Disp->gu_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->gu_arrWay[i]->oper = EOper::Norm;
		Disp->gu_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->gu_arrSvetofor.size(); i++)
	{
		Disp->gu_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->gu_arrSvetofor[i]->dopn = 0;
		Disp->gu_arrSvetofor[i]->num = 0;
		Disp->gu_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->gu_arrSvetofor[i]->oper = EOper::Norm;
		Disp->gu_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->gu._N.stat = EAStat::Red;

	Disp->gu._CH.stat = EAStat::Red;
	Disp->gu._CHD.stat = EAStat::Red;


	Disp->SendDataStationToAll(Station::GanaAul);
}


void UGanaAul_Widget::PrintInfo(FElm* wayInfo,
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

void UGanaAul_Widget::gu_UpdateInfoStationWay()
{
	PrintInfo(&Disp->gu._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->gu._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->gu._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->gu._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->gu._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);

	PrintInfo(&Disp->gu._M3_tupic, HB_LocoEven_tupic_M_3, TB_LocoEven_tupic_M_3, Button_TrainInfo_tupic_M_3, TextButton_tupic_M_3, HB_LocoOdd_tupic_M_3, TB_LocoOdd_tupic_M_3);
	PrintInfo(&Disp->gu._M5_tupic, HB_LocoEven_tupic_M_5, TB_LocoEven_tupic_M_5, Button_TrainInfo_tupic_M_5, TextButton_tupic_M_5, HB_LocoOdd_tupic_M_5, TB_LocoOdd_tupic_M_5);
	PrintInfo(&Disp->gu._M6_tupic, HB_LocoEven_tupic_M_6, TB_LocoEven_tupic_M_6, Button_TrainInfo_tupic_M_6, TextButton_tupic_M_6, HB_LocoOdd_tupic_M_6, TB_LocoOdd_tupic_M_6);


//#pragma region GREEN_KEYS
//
//#pragma region N
//
//	if (Disp->gu._2NP.stat == EAStat::Free
//		&& Disp->gu._1NP.stat == EAStat::Free)
//	{
//		Disp->gu.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->gu.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region CH
//	if (Disp->gu._1CHP.stat == EAStat::Free
//		&& Disp->gu._2CHP.stat == EAStat::Free
//		&& Disp->krz._2UPN.stat == EAStat::Free
//		&& Disp->krz._1UPN.stat == EAStat::Free)
//	{
//		Disp->gu.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->gu.GreenKey_CH.stat = EAStat::Red;
//	}
//
//#pragma endregion
//#pragma region CHD
//	if (Disp->gu._1UPCH.stat == EAStat::Free
//		&& Disp->gu._2UPCH.stat == EAStat::Free
//		&& Disp->krz._2NP.stat == EAStat::Free
//		&& Disp->krz._1NP.stat == EAStat::Free)
//	{
//		Disp->gu.GreenKey_CHD.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->gu.GreenKey_CHD.stat = EAStat::Red;
//	}
//
//#pragma endregion
//
//#pragma endregion

}


FVector2D UGanaAul_Widget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}

void UGanaAul_Widget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = gu_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (gu_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (gu_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (gu_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (gu_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (gu_N_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::CH:

			if (gu_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (gu_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (gu_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (gu_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (gu_CH_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHD:

			if (gu_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (gu_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (gu_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (gu_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (gu_CHD_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (gu_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (gu_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (gu_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (gu_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (gu_M1_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (gu_M1_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:


			if (gu_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (gu_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (gu_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (gu_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (gu_M2_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:
			if (Disp->gu_M3_CH4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (Disp->gu_M3_CH5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:


			if (gu_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (gu_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (gu_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (gu_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (gu_M4_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M5:

			if (gu_M5_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M6:


			if (gu_M6_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (gu_M6_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (gu_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (Disp->gu_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (gu_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->gu_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (gu_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->gu_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH4:

			if (gu_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->gu_CH4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->gu_CH5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH5:

			if (gu_CH5_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->gu_CH5_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->gu_CH5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::N1:

			if (gu_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (gu_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->gu_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->gu_N1_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (Disp->gu_N1_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (gu_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (gu_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->gu_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->gu_N2_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (Disp->gu_N2_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (gu_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (gu_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->gu_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->gu_N3_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N4:

			if (gu_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (gu_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->gu_N4_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->gu_N4_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N5:

			if (gu_N5_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (gu_N5_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->gu_N5_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->gu_N5_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

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
		if (Disp->gu_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}

}

void UGanaAul_Widget::ExitMenu()
{
	gu_Make_Strelka_UnRedact();
	gu_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}


void UGanaAul_Widget::CreateMenuInfo(int numTrain, int delta_X, int delta_Y)
{
#pragma region Body

	FVector2D menuPos = FVector2D(300, 200);
	GetWorld()->GetGameViewport()->GetMousePosition(menuPos);
	menuPos = FVector2D(menuPos.X + 100+delta_X, menuPos.Y + 300+ delta_Y);
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
void UGanaAul_Widget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->gu._w1.num);

}
void UGanaAul_Widget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->gu._w2.num);
}
void UGanaAul_Widget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->gu._w3.num);
}
void UGanaAul_Widget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->gu._w4.num);
}
void UGanaAul_Widget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->gu._w5.num);
}
void UGanaAul_Widget::CreateMenuTrainInfo_tupic_M3()
{
	CreateMenuInfo(Disp->gu._M3_tupic.num,200);
}
void UGanaAul_Widget::CreateMenuTrainInfo_tupic_M5()
{
	CreateMenuInfo(Disp->gu._M5_tupic.num);
}
void UGanaAul_Widget::CreateMenuTrainInfo_tupic_M6()
{
	CreateMenuInfo(Disp->gu._M6_tupic.num);
}
void UGanaAul_Widget::ExitMenuTrainInfo()
{
	SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	VerticalBox_TrainInfo->ClearChildren();
}


void UGanaAul_Widget::gu_SostavOnWay(int index)
{
	if (index == 0) Disp->SostavOnWay(&Disp->gu._w1);
	if (index == 1) Disp->SostavOnWay(&Disp->gu._w2);
	if (index == 2) Disp->SostavOnWay(&Disp->gu._w3);
	if (index == 3) Disp->SostavOnWay(&Disp->gu._w4);
	if (index == 4) Disp->SostavOnWay(&Disp->gu._w5);

	gu_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_LocoOnWay(int index)
{
	if (index == 0) Disp->LocoOnWay(&Disp->gu._M3_tupic);
	if (index == 1) Disp->LocoOnWay(&Disp->gu._M5_tupic);
	if (index == 2) Disp->LocoOnWay(&Disp->gu._M6_tupic);

	gu_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_WayNumberChanger(int numberway)
{
	FElm* wayForChanger;
	if (numberway == 1) wayForChanger = &Disp->gu._w1;
	else if (numberway == 2) wayForChanger = &Disp->gu._w2;
	else if (numberway == 3) wayForChanger = &Disp->gu._w3;
	else if (numberway == 4) wayForChanger = &Disp->gu._w4;
	else if (numberway == 5) wayForChanger = &Disp->gu._w5;

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

	Disp->SendDataStationToAll(Station::GanaAul);

}



#pragma endregion

#pragma region Expert

#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UGanaAul_Widget::OtmenaOneRouter()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);

	if (com != Commd::NotDef)
	{
		SendCommToServer(com);
	}
	ExitMenu();
}

void UGanaAul_Widget::Za_N()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (!Disp->IsConturKeyReady(Station::GanaAul, Direction::EVEN)) return;


	
	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_N_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_N_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_N_Create);


	ExitMenu();
}

void UGanaAul_Widget::Za_CH()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (!Disp->IsConturKeyReady(Station::GanaAul, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CH_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CH_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CH_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_CHD()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::GanaAul, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CHD_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CHD_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CHD_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CHD_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CHD_Create);


	ExitMenu();
}


void UGanaAul_Widget::On_way_1()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_1P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_1P_Create);


	ExitMenu();
}
void UGanaAul_Widget::On_way_2()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_2P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_2P_Create);


	ExitMenu();
}
void UGanaAul_Widget::On_way_3()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_3P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_3P_Create);

	ExitMenu();
}
void UGanaAul_Widget::On_way_4()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_4P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_4P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_4P_Create);


	ExitMenu();
}
void UGanaAul_Widget::On_way_5()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_5P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_5P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_5P_Create);


	ExitMenu();
}


void UGanaAul_Widget::Za_CH1()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH1_Create);


	ExitMenu();

}
void UGanaAul_Widget::Za_CH2()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH2_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_CH3()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH3_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_CH4()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH4_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH4_Create);

	ExitMenu();
}
void UGanaAul_Widget::Za_CH5()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH5_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH5_Create);

	ExitMenu();
}


void UGanaAul_Widget::Za_N1()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N1_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N1_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_N2()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N2_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N2_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_N3()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N3_Create);



	ExitMenu();
}
void UGanaAul_Widget::Za_N4()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N4_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N4_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_N5()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N5_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N5_Create);


	ExitMenu();
}


void UGanaAul_Widget::Za_M1()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_M1_Create);
	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M1_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M1_Create);

	ExitMenu();
}
void UGanaAul_Widget::Za_M2()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M2_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M2_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_M3()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M3_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M3_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_M4()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M4_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M4_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M4_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M4_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M4_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_M5()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M5_Create);


	ExitMenu();
}
void UGanaAul_Widget::Za_M6()
{
	EdopStat dopstat = gu_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M6_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M6_Create);


	ExitMenu();
}


#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N

bool UGanaAul_Widget::gu_N_1P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N_1P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N_2P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N_2P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N_3P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N_3P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N_4P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N_4P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N_5P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH

bool UGanaAul_Widget::gu_CH_1P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH_1P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH_2P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH_2P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH_3P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH_3P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH_4P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH_4P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH_5P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CHD

bool UGanaAul_Widget::gu_CHD_1P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CHD_1P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CHD_2P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CHD_2P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CHD_3P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CHD_3P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CHD_4P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CHD_4P.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CHD_5P_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CHD_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M1

bool UGanaAul_Widget::gu_M1_CH1_CheckPossCreate()
{
	if (Disp->gu._w1.stat == EAStat::Free)
	{
		if (Disp->gu_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->gu._w1.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M1_CH2_CheckPossCreate()
{
	if (Disp->gu._w2.stat == EAStat::Free)
	{
		if (Disp->gu_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->gu._w2.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M1_CH3_CheckPossCreate()
{
	if (Disp->gu._w3.stat == EAStat::Free)
	{
		if (Disp->gu_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->gu._w3.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M1_CH4_CheckPossCreate()
{
	if (Disp->gu._w4.stat == EAStat::Free)
	{
		if (Disp->gu_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->gu._w4.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;;
}
bool UGanaAul_Widget::gu_M1_CH5_CheckPossCreate()
{
	if (Disp->gu._w5.stat == EAStat::Free)
	{
		if (Disp->gu_M1_CH5.IsFree()) return  true;
	}
	else if (Disp->gu._w5.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M1_M5_CheckPossCreate()
{
	if (Disp->gu._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->gu_M1_M5.IsFree()) return  true;
	}
	else if (Disp->gu._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->gu_M1_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M2

bool UGanaAul_Widget::gu_M2_N1_CheckPossCreate()
{
	if (Disp->gu._w1.stat == EAStat::Free)
	{
		if (Disp->gu_M2_N1.IsFree()) return  true;
	}
	else if (Disp->gu._w1.stat == EAStat::Busy)
	{
		if (Disp->gu_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M2_N2_CheckPossCreate()
{
	if (Disp->gu._w2.stat == EAStat::Free)
	{
		if (Disp->gu_M2_N2.IsFree()) return  true;
	}
	else if (Disp->gu._w2.stat == EAStat::Busy)
	{
		if (Disp->gu_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M2_N3_CheckPossCreate()
{
	if (Disp->gu._w3.stat == EAStat::Free)
	{
		if (Disp->gu_M2_N3.IsFree()) return  true;
	}
	else if (Disp->gu._w3.stat == EAStat::Busy)
	{
		if (Disp->gu_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M2_N4_CheckPossCreate()
{
	if (Disp->gu._w4.stat == EAStat::Free)
	{
		if (Disp->gu_M2_N4.IsFree()) return  true;
	}
	else if (Disp->gu._w4.stat == EAStat::Busy)
	{
		if (Disp->gu_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M2_N5_CheckPossCreate()
{
	if (Disp->gu._w5.stat == EAStat::Free)
	{
		if (Disp->gu_M2_N5.IsFree()) return  true;
	}
	else if (Disp->gu._w5.stat == EAStat::Busy)
	{
		if (Disp->gu_M2_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M3

bool UGanaAul_Widget::gu_M3_CH4_CheckPossCreate()
{
	if (Disp->gu._w4.stat == EAStat::Free)
	{
		if (Disp->gu_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->gu._w4.stat == EAStat::Busy)
	{
		if (Disp->gu_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M3_CH5_CheckPossCreate()
{
	if (Disp->gu._w5.stat == EAStat::Free)
	{
		if (Disp->gu_M3_CH5.IsFree()) return  true;
	}
	else if (Disp->gu._w5.stat == EAStat::Busy)
	{
		if (Disp->gu_M3_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M4

bool UGanaAul_Widget::gu_M4_N1_CheckPossCreate()
{
	if (Disp->gu._w1.stat == EAStat::Free)
	{
		if (Disp->gu_M4_N1.IsFree()) return  true;
	}
	else if (Disp->gu._w1.stat == EAStat::Busy)
	{
		if (Disp->gu_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M4_N2_CheckPossCreate()
{
	if (Disp->gu._w2.stat == EAStat::Free)
	{
		if (Disp->gu_M4_N2.IsFree()) return  true;
	}
	else if (Disp->gu._w2.stat == EAStat::Busy)
	{
		if (Disp->gu_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M4_N3_CheckPossCreate()
{
	if (Disp->gu._w3.stat == EAStat::Free)
	{
		if (Disp->gu_M4_N3.IsFree()) return  true;
	}
	else if (Disp->gu._w3.stat == EAStat::Busy)
	{
		if (Disp->gu_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M4_N4_CheckPossCreate()
{
	if (Disp->gu._w4.stat == EAStat::Free)
	{
		if (Disp->gu_M4_N4.IsFree()) return  true;
	}
	else if (Disp->gu._w4.stat == EAStat::Busy)
	{
		if (Disp->gu_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M4_N5_CheckPossCreate()
{
	if (Disp->gu._w5.stat == EAStat::Free)
	{
		if (Disp->gu_M4_N5.IsFree()) return  true;
	}
	else if (Disp->gu._w5.stat == EAStat::Busy)
	{
		if (Disp->gu_M4_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M5

bool UGanaAul_Widget::gu_M5_M1_CheckPossCreate()
{
	if (!Disp->gu_M5_M1.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M6

bool UGanaAul_Widget::gu_M6_N1_CheckPossCreate()
{
	if (Disp->gu._w1.stat == EAStat::Free)
	{
		if (Disp->gu_M6_N1.IsFree()) return  true;
	}
	else if (Disp->gu._w1.stat == EAStat::Busy)
	{
		if (Disp->gu_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UGanaAul_Widget::gu_M6_N2_CheckPossCreate()
{
	if (Disp->gu._w2.stat == EAStat::Free)
	{
		if (Disp->gu_M6_N2.IsFree()) return  true;
	}
	else if (Disp->gu._w2.stat == EAStat::Busy)
	{
		if (Disp->gu_M6_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from CH1

bool UGanaAul_Widget::gu_CH1_M1_CheckPossCreate()
{
	if (!Disp->gu_CH1_M1.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH1_N_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH1_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH2

bool UGanaAul_Widget::gu_CH2_M1_CheckPossCreate()
{
	if (!Disp->gu_CH2_M1.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH2_N_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH2_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH3

bool UGanaAul_Widget::gu_CH3_M1_CheckPossCreate()
{
	if (!Disp->gu_CH3_M1.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH3_N_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH3_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH4

bool UGanaAul_Widget::gu_CH4_M1_CheckPossCreate()
{
	if (!Disp->gu_CH4_M1.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH4_M3_CheckPossCreate()
{
	if (!Disp->gu_CH4_M3.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH4_N_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH4_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH5

bool UGanaAul_Widget::gu_CH5_M1_CheckPossCreate()
{
	if (!Disp->gu_CH5_M1.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH5_M3_CheckPossCreate()
{
	if (!Disp->gu_CH5_M3.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_CH5_N_CheckPossCreate()
{
	if (Disp->gu.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->gu_CH5_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N1

bool UGanaAul_Widget::gu_N1_M2_CheckPossCreate()
{
	if (!Disp->gu_N1_M2.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N1_M4_CheckPossCreate()
{
	if (!Disp->gu_N1_M4.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N1_M6_CheckPossCreate()
{
	if (!Disp->gu_N1_M6.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N1_CH_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N1_CH.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N1_CHD_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N1_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N2

bool UGanaAul_Widget::gu_N2_M2_CheckPossCreate()
{
	if (!Disp->gu_N2_M2.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N2_M4_CheckPossCreate()
{
	if (!Disp->gu_N2_M4.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N2_M6_CheckPossCreate()
{
	if (!Disp->gu_N2_M6.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N2_CH_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N2_CH.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N2_CHD_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N2_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N3

bool UGanaAul_Widget::gu_N3_M2_CheckPossCreate()
{
	if (!Disp->gu_N3_M2.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N3_M4_CheckPossCreate()
{
	if (!Disp->gu_N3_M4.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N3_CH_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N3_CH.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N3_CHD_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N3_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N4

bool UGanaAul_Widget::gu_N4_M2_CheckPossCreate()
{
	if (!Disp->gu_N4_M2.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N4_M4_CheckPossCreate()
{
	if (!Disp->gu_N4_M4.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N4_CH_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N4_CH.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N4_CHD_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N4_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N5

bool UGanaAul_Widget::gu_N5_M2_CheckPossCreate()
{
	if (!Disp->gu_N5_M2.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N5_M4_CheckPossCreate()
{
	if (!Disp->gu_N5_M4.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N5_CH_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N5_CH.IsFree()) return  false;
	return true;
}
bool UGanaAul_Widget::gu_N5_CHD_CheckPossCreate()
{
	if (Disp->gu.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->gu_N5_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region OUT_

//bool UGanaAul_Widget::gu_N_RASPORIADIT_CheckPossCreate()
//{
//	if (!Disp->gu_N_RASPORIADIT.IsFree()) return  false;
//	return true;
//}
//bool UGanaAul_Widget::gu_CH_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->gu_CH_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UGanaAul_Widget::gu_CHD_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->gu_CHD_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UGanaAul_Widget::gu_RASPORIADIT_N_CheckPossCreate()
//{
//	if (!Disp->gu_RASPORIADIT_N.IsFree()) return  false;
//	return true;
//}
//bool UGanaAul_Widget::gu_KARAGANOZEK_CH_CheckPossCreate()
//{
//	if (!Disp->gu_KARAGANOZEK_CH.IsFree()) return  false;
//	return true;
//}
//bool UGanaAul_Widget::gu_KARAGANOZEK_CHD_CheckPossCreate()
//{
//	if (!Disp->gu_KARAGANOZEK_CHD.IsFree()) return  false;
//	return true;
//}

#pragma endregion


#pragma endregion



FElm* UGanaAul_Widget::gu_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}



void UGanaAul_Widget::gu_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::GanaAul);
}


#pragma endregion

#pragma region Strelki



int UGanaAul_Widget::gu_Make_Strelka_Redact(int number)
{

	if (number == 1) RedactStrelka = &Disp->gu._str1;
	else if (number == 2) RedactStrelka = &Disp->gu._str2;
	else if (number == 3) RedactStrelka = &Disp->gu._str3;
	else if (number == 4) RedactStrelka = &Disp->gu._str4;
	else if (number == 5) RedactStrelka = &Disp->gu._str5;
	else if (number == 6) RedactStrelka = &Disp->gu._str6;
	else if (number == 7) RedactStrelka = &Disp->gu._str7;
	else if (number == 8) RedactStrelka = &Disp->gu._str8;
	else if (number == 9) RedactStrelka = &Disp->gu._str9;
	else if (number == 10) RedactStrelka = &Disp->gu._str10;
	else if (number == 11) RedactStrelka = &Disp->gu._str11;
	else if (number == 12) RedactStrelka = &Disp->gu._str12;
	else if (number == 14) RedactStrelka = &Disp->gu._str14;
	else if (number == 16) RedactStrelka = &Disp->gu._str16;
	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->gu_arrStr.size(); i++)
	{
		if (Disp->gu_arrStr[i]->num == number) return number;
	}
	return 0;
}
void UGanaAul_Widget::gu_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;

}

void UGanaAul_Widget::gu_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->gu._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->gu._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->gu._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->gu._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->gu._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->gu._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->gu._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->gu._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->gu._str9) SendCommToServer(Commd::s9_Minus);
	if (RedactStrelka == &Disp->gu._str10) SendCommToServer(Commd::s10_Minus);
	if (RedactStrelka == &Disp->gu._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->gu._str12) SendCommToServer(Commd::s12_Minus);
	if (RedactStrelka == &Disp->gu._str14) SendCommToServer(Commd::s14_Minus);
	if (RedactStrelka == &Disp->gu._str16) SendCommToServer(Commd::s16_Minus);


	gu_Make_Strelka_UnRedact();
}
void UGanaAul_Widget::gu_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->gu._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->gu._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->gu._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->gu._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->gu._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->gu._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->gu._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->gu._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->gu._str9) SendCommToServer(Commd::s9_Plus);
	if (RedactStrelka == &Disp->gu._str10) SendCommToServer(Commd::s10_Plus);
	if (RedactStrelka == &Disp->gu._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->gu._str12) SendCommToServer(Commd::s12_Plus);
	if (RedactStrelka == &Disp->gu._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->gu._str16) SendCommToServer(Commd::s16_Plus);

	gu_Make_Strelka_UnRedact();
}
void UGanaAul_Widget::gu_RedactStrelkaToBreak()
{
	RedactStrelka->cur = ExCurator::NotControl;
	gu_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	gu_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	gu_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->gu_arrStr.size(); i++)
	{
		Disp->gu_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::GanaAul);
}
#pragma endregion

#pragma region Svetofori

void UGanaAul_Widget::gu_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->gu._N;

	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->gu._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->gu._CHD;


	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->gu._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->gu._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->gu._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->gu._M4;
	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->gu._M5;
	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->gu._M6;



	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->gu._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->gu._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->gu._CH3;
	else if (dopstat == EdopStat::CH4) RedactSvetofor = &Disp->gu._CH4;
	else if (dopstat == EdopStat::CH5) RedactSvetofor = &Disp->gu._CH5;


	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->gu._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->gu._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->gu._N3;
	else if (dopstat == EdopStat::N4) RedactSvetofor = &Disp->gu._N4;
	else if (dopstat == EdopStat::N5) RedactSvetofor = &Disp->gu._N5;

	//gu_Pult_StartNabor();
}
EdopStat UGanaAul_Widget::gu_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->gu._N) return EdopStat::N;

	else if (RedactSvetofor == &Disp->gu._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->gu._CHD) return EdopStat::CHD;


	else if (RedactSvetofor == &Disp->gu._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->gu._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->gu._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->gu._M4) return EdopStat::M4;
	else if (RedactSvetofor == &Disp->gu._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->gu._M6) return EdopStat::M6;



	else if (RedactSvetofor == &Disp->gu._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->gu._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->gu._CH3) return EdopStat::CH3;
	else if (RedactSvetofor == &Disp->gu._CH4) return EdopStat::CH4;
	else if (RedactSvetofor == &Disp->gu._CH5) return EdopStat::CH5;



	else if (RedactSvetofor == &Disp->gu._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->gu._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->gu._N3) return EdopStat::N3;
	else if (RedactSvetofor == &Disp->gu._N4) return EdopStat::N4;
	else if (RedactSvetofor == &Disp->gu._N5) return EdopStat::N5;

	else return EdopStat::Norm;

}
bool UGanaAul_Widget::gu_IsRedactSvetoforFree()
{

	if (RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;

	return false;
}

void UGanaAul_Widget::gu_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UGanaAul_Widget::gu_BrokenSvetoforMake(ExCurator cur)
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
	gu_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_RedactSvetofor_Remont()
{

	RedactSvetofor->cur = ExCurator::Norm;
	gu_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::GanaAul);
}
void UGanaAul_Widget::gu_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->gu_arrSvetofor.size(); i++)
	{
		Disp->gu_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::GanaAul);
}

#pragma endregion 
