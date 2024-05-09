

#include "KarabasWidget.h"

DEFINE_LOG_CATEGORY(qwon);
DEFINE_LOG_CATEGORY(qwoff);


#pragma region General Foo

void UKarabasWidget::MyBeepDef(int freq, int leng)
{
	std::thread t(&UKarabasWidget::MyBeepInThread, this, freq, leng, 1, 0);
	t.detach();
}
void UKarabasWidget::MyBeep(int freq, int leng, int count, int pause)
{
	std::thread t(&UKarabasWidget::MyBeepInThread, this, freq, leng, count, pause);
	t.detach();
}
void UKarabasWidget::MyBeepInThread(int freq, int leng, int count, int pause)
{
	for (size_t i = 0; i < count; i++)
	{
		Beep(freq, leng);
		Sleep(pause);
	}
}

void UKarabasWidget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Karabas, comm);
}

bool UKarabasWidget::Initialize()
{
	Super::Initialize();

	

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UKarabasWidget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N);
	But_za_CH->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CHD);


	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UKarabasWidget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UKarabasWidget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UKarabasWidget::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UKarabasWidget::On_way_4);
	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UKarabasWidget::On_way_5);


	But_za_CH_1->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH3);
	But_za_CH_4->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH4);
	But_za_CH_5->OnClicked.AddDynamic(this, &UKarabasWidget::Za_CH5);


	But_za_N_1->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N3);
	But_za_N_4->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N4);
	But_za_N_5->OnClicked.AddDynamic(this, &UKarabasWidget::Za_N5);


	But_za_M_1->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UKarabasWidget::Za_M6);
	

	But_Exit_Menu->OnClicked.AddDynamic(this, &UKarabasWidget::ExitMenu);
	
	//SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
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

	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_tupic_M_3->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_tupic_M3);
	Button_TrainInfo_tupic_M_5->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_tupic_M5);
	Button_TrainInfo_tupic_M_6->OnClicked.AddDynamic(this, &UKarabasWidget::CreateMenuTrainInfo_tupic_M6);

	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UKarabasWidget::ExitMenuTrainInfo);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();



	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UKarabasWidget::krb_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->krb_arrStr.size(); i++)
	{
		Disp->krb_arrStr[i]->cur = ExCurator::Norm;
		Disp->krb_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->krb_arrStr[i]->oper = EOper::Norm;
		Disp->krb_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->krb_arrWay.size(); i++)
	{
		Disp->krb_arrWay[i]->cur = ExCurator::Norm;
		Disp->krb_arrWay[i]->dopn = 0;
		Disp->krb_arrWay[i]->num = 0;
		Disp->krb_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->krb_arrWay[i]->oper = EOper::Norm;
		Disp->krb_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->krb_arrSvetofor.size(); i++)
	{
		Disp->krb_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->krb_arrSvetofor[i]->dopn = 0;
		Disp->krb_arrSvetofor[i]->num = 0;
		Disp->krb_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->krb_arrSvetofor[i]->oper = EOper::Norm;
		Disp->krb_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->krb._N.stat = EAStat::Red;

	Disp->krb._CH.stat = EAStat::Red;
	Disp->krb._CHD.stat = EAStat::Red;


	Disp->SendDataStationToAll(Station::Karabas);
}


void UKarabasWidget::PrintInfo(FElm* wayInfo,
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
					HB_LocoEven_way->SetVisibility(ESlateVisibility::Hidden);
				}
				else
				{
					TB_LocoEven_way->SetText(FText::FromString(FString::FromInt(wayInfo->dopn)));
					HB_LocoEven_way->SetVisibility(ESlateVisibility::Visible);
					HB_LocoOdd_way->SetVisibility(ESlateVisibility::Hidden);
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

void UKarabasWidget::krb_UpdateInfoStationWay()
{
	PrintInfo(&Disp->krb._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->krb._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->krb._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->krb._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->krb._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);

	PrintInfo(&Disp->krb._M3_tupic, HB_LocoEven_tupic_M_3, TB_LocoEven_tupic_M_3, Button_TrainInfo_tupic_M_3, TextButton_tupic_M_3, HB_LocoOdd_tupic_M_3, TB_LocoOdd_tupic_M_3);
	PrintInfo(&Disp->krb._M5_tupic, HB_LocoEven_tupic_M_5, TB_LocoEven_tupic_M_5, Button_TrainInfo_tupic_M_5, TextButton_tupic_M_5, HB_LocoOdd_tupic_M_5, TB_LocoOdd_tupic_M_5);
	PrintInfo(&Disp->krb._M6_tupic, HB_LocoEven_tupic_M_6, TB_LocoEven_tupic_M_6, Button_TrainInfo_tupic_M_6, TextButton_tupic_M_6, HB_LocoOdd_tupic_M_6, TB_LocoOdd_tupic_M_6);


//#pragma region GREEN_KEYS
//
//#pragma region N
//	
//	if (Disp->krb._2NP.stat == EAStat::Free
//		&& Disp->krb._1NP.stat == EAStat::Free)
//	{
//		Disp->krb.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krb.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region CH
//	if (Disp->krb._1CHP.stat == EAStat::Free
//		&& Disp->krb._2CHP.stat == EAStat::Free
//		&& Disp->krz._2UPN.stat == EAStat::Free
//		&& Disp->krz._1UPN.stat == EAStat::Free)
//	{
//		Disp->krb.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krb.GreenKey_CH.stat = EAStat::Red;
//	}
//
//#pragma endregion
//#pragma region CHD
//	if (Disp->krb._1UPCH.stat == EAStat::Free
//		&& Disp->krb._2UPCH.stat == EAStat::Free
//		&& Disp->krz._2NP.stat == EAStat::Free
//		&& Disp->krz._1NP.stat == EAStat::Free)
//	{
//		Disp->krb.GreenKey_CHD.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krb.GreenKey_CHD.stat = EAStat::Red;
//	}
//
//#pragma endregion
//
//#pragma endregion

}


FVector2D UKarabasWidget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}

void UKarabasWidget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = krb_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (krb_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krb_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krb_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krb_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krb_N_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::CH:

			if (krb_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krb_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krb_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krb_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krb_CH_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHD:

			if (krb_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krb_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krb_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krb_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krb_CHD_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (krb_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (krb_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (krb_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (krb_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (krb_M1_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (krb_M1_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:


			if (krb_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krb_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krb_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krb_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krb_M2_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:
			if (krb_M3_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (krb_M3_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:


			if (krb_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krb_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krb_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krb_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krb_M4_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M5:

			if (krb_M5_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M6:


			if (krb_M6_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krb_M6_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (krb_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (Disp->krb_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (krb_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->krb_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (krb_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->krb_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH4:

			if (krb_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->krb_CH4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krb_CH4_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH5:

			if (krb_CH5_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);

			if (Disp->krb_CH5_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krb_CH5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::N1:

			if (krb_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krb_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->krb_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krb_N1_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (Disp->krb_N1_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (krb_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krb_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->krb_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krb_N2_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (Disp->krb_N2_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (krb_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krb_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->krb_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krb_N3_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N4:

			if (krb_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krb_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->krb_N4_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krb_N4_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N5:

			if (krb_N5_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krb_N5_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->krb_N5_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krb_N5_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

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
		/*if (Disp->GetCommFromDopStat(dopstat) != Commd::NotDef)*/
		if (Disp->krb_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}

}

void UKarabasWidget::ExitMenu()
{
	krb_Make_Strelka_UnRedact();
	krb_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}


void UKarabasWidget::CreateMenuInfo(int numTrain, int delta_X, int delta_Y)
{
#pragma region Body

	FVector2D menuPos = FVector2D(300, 200);
	GetWorld()->GetGameViewport()->GetMousePosition(menuPos);
	menuPos = FVector2D(menuPos.X + 100 +delta_X, menuPos.Y + 300 + delta_Y);
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
		Text_TypeVagon_Otcep_1->SetText(Disp->GetRus_VagonType(train,1));
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
void UKarabasWidget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->krb._w1.num);

}
void UKarabasWidget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->krb._w2.num);
}
void UKarabasWidget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->krb._w3.num);
}
void UKarabasWidget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->krb._w4.num);
}
void UKarabasWidget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->krb._w5.num);
}
void UKarabasWidget::CreateMenuTrainInfo_tupic_M3()
{
	CreateMenuInfo(Disp->krb._M3_tupic.num, 200);
}
void UKarabasWidget::CreateMenuTrainInfo_tupic_M5()
{
	CreateMenuInfo(Disp->krb._M5_tupic.num);
}
void UKarabasWidget::CreateMenuTrainInfo_tupic_M6()
{
	CreateMenuInfo(Disp->krb._M6_tupic.num,-200);
}
void UKarabasWidget::ExitMenuTrainInfo()
{
	SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	VerticalBox_TrainInfo->ClearChildren();
}


void UKarabasWidget::krb_SostavOnWay( int index)
{			
	if (index == 0) Disp->SostavOnWay(&Disp->krb._w1);
	if (index == 1) Disp->SostavOnWay(&Disp->krb._w2);
	if (index == 2) Disp->SostavOnWay(&Disp->krb._w3);
	if (index == 3) Disp->SostavOnWay(&Disp->krb._w4);
	if (index == 4) Disp->SostavOnWay(&Disp->krb._w5);
	
	krb_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_LocoOnWay(int index)
{
	if (index == 0) Disp->LocoOnWay(&Disp->krb._M3_tupic);
	if (index == 1) Disp->LocoOnWay(&Disp->krb._M5_tupic);
	if (index == 2) Disp->LocoOnWay(&Disp->krb._M6_tupic);

	krb_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_WayNumberChanger(int numberway)
{
	FElm* wayForChanger;
	if (numberway == 1) wayForChanger = &Disp->krb._w1;
	else if (numberway == 2) wayForChanger = &Disp->krb._w2;
	else if (numberway == 3) wayForChanger = &Disp->krb._w3;
	else if (numberway == 4) wayForChanger = &Disp->krb._w4;
	else if (numberway == 5) wayForChanger = &Disp->krb._w5;

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

	Disp->SendDataStationToAll(Station::Karabas);

}



#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UKarabasWidget::OtmenaOneRouter()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	
	if (com != Commd::NotDef)
	{
		SendCommToServer(com);
	}	
	ExitMenu();
}

void UKarabasWidget::Za_N()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if(!Disp->IsConturKeyReady(Station::Karabas, Direction::EVEN)) return;

	
	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_N_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_N_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_N_Create);


	ExitMenu();
}

void UKarabasWidget::Za_CH()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CH_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CH_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CH_Create);


	ExitMenu();
}
void UKarabasWidget::Za_CHD()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karabas, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CHD_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CHD_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CHD_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CHD_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CHD_Create);


	ExitMenu();
}


void UKarabasWidget::On_way_1()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_1P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_1P_Create);


	ExitMenu();
}
void UKarabasWidget::On_way_2()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_2P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_2P_Create);


	ExitMenu();
}
void UKarabasWidget::On_way_3()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_3P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_3P_Create);

	ExitMenu();
}
void UKarabasWidget::On_way_4()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_4P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_4P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_4P_Create);


	ExitMenu();
}
void UKarabasWidget::On_way_5()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_5P_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_5P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_5P_Create);


	ExitMenu();
}


void UKarabasWidget::Za_CH1()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH1_Create);


	ExitMenu();

}
void UKarabasWidget::Za_CH2()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH2_Create);


	ExitMenu();
}
void UKarabasWidget::Za_CH3()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH3_Create);


	ExitMenu();
}
void UKarabasWidget::Za_CH4()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH4_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH4_Create);

	ExitMenu();
}
void UKarabasWidget::Za_CH5()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH5_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH5_Create);

	ExitMenu();
}


void UKarabasWidget::Za_N1()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N1_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N1_Create);


	ExitMenu();
}
void UKarabasWidget::Za_N2()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N2_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N2_Create);


	ExitMenu();
}
void UKarabasWidget::Za_N3()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N3_Create);



	ExitMenu();
}
void UKarabasWidget::Za_N4()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N4_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N4_Create);


	ExitMenu();
}
void UKarabasWidget::Za_N5()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N5_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N5_Create);


	ExitMenu();
}


void UKarabasWidget::Za_M1()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_M1_Create);
	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M1_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M1_Create);

	ExitMenu();
}
void UKarabasWidget::Za_M2()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M2_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M2_Create);


	ExitMenu();
}
void UKarabasWidget::Za_M3()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M3_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M3_Create);


	ExitMenu();
}
void UKarabasWidget::Za_M4()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M4_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M4_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M4_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M4_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M4_Create);


	ExitMenu();
}
void UKarabasWidget::Za_M5()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M5_Create);


	ExitMenu();
}
void UKarabasWidget::Za_M6()
{
	EdopStat dopstat = krb_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M6_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M6_Create);


	ExitMenu();
}


#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N

bool UKarabasWidget::krb_N_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_1P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_2P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_3P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_4P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH

bool UKarabasWidget::krb_CH_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_1P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_2P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_3P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_4P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CHD

bool UKarabasWidget::krb_CHD_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_1P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CHD_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_2P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CHD_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_3P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CHD_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_4P.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CHD_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M1

bool UKarabasWidget::krb_M1_CH1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M1_CH2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M1_CH3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M1_CH4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;;
}
bool UKarabasWidget::krb_M1_CH5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M1_M5_CheckPossCreate()
{
	if (Disp->krb._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krb_M1_M5.IsFree()) return  true;
	}
	else if (Disp->krb._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M2

bool UKarabasWidget::krb_M2_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M2_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M2_N3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M2_N4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M2_N5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M3

bool UKarabasWidget::krb_M3_CH4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M3_CH5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M3_CH5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M3_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M4

bool UKarabasWidget::krb_M4_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M4_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M4_N3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M4_N4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M4_N5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M5

bool UKarabasWidget::krb_M5_M1_CheckPossCreate()
{
	if (!Disp->krb_M5_M1.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M6

bool UKarabasWidget::krb_M6_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M6_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasWidget::krb_M6_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M6_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M6_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from CH1

bool UKarabasWidget::krb_CH1_M1_CheckPossCreate()
{
	if (!Disp->krb_CH1_M1.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH1_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH1_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH2

bool UKarabasWidget::krb_CH2_M1_CheckPossCreate()
{
	if (!Disp->krb_CH2_M1.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH2_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH2_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH3

bool UKarabasWidget::krb_CH3_M1_CheckPossCreate()
{
	if (!Disp->krb_CH3_M1.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH3_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH3_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH4

bool UKarabasWidget::krb_CH4_M1_CheckPossCreate()
{
	if (!Disp->krb_CH4_M1.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH4_M3_CheckPossCreate()
{
	if (!Disp->krb_CH4_M3.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH4_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH4_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH5

bool UKarabasWidget::krb_CH5_M1_CheckPossCreate()
{
	if (!Disp->krb_CH5_M1.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH5_M3_CheckPossCreate()
{
	if (!Disp->krb_CH5_M3.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_CH5_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH5_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N1

bool UKarabasWidget::krb_N1_M2_CheckPossCreate()
{
	if (!Disp->krb_N1_M2.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N1_M4_CheckPossCreate()
{
	if (!Disp->krb_N1_M4.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N1_M6_CheckPossCreate()
{
	if (!Disp->krb_N1_M6.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N1_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N1_CH.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N1_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N1_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N2

bool UKarabasWidget::krb_N2_M2_CheckPossCreate()
{
	if (!Disp->krb_N2_M2.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N2_M4_CheckPossCreate()
{
	if (!Disp->krb_N2_M4.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N2_M6_CheckPossCreate()
{
	if (!Disp->krb_N2_M6.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N2_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N2_CH.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N2_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N2_CH.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N3

bool UKarabasWidget::krb_N3_M2_CheckPossCreate()
{
	if (!Disp->krb_N3_M2.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N3_M4_CheckPossCreate()
{
	if (!Disp->krb_N3_M4.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N3_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N3_CH.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N3_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N3_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N4

bool UKarabasWidget::krb_N4_M2_CheckPossCreate()
{
	if (!Disp->krb_N4_M2.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N4_M4_CheckPossCreate()
{
	if (!Disp->krb_N4_M4.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N4_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N4_CH.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N4_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N4_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N5

bool UKarabasWidget::krb_N5_M2_CheckPossCreate()
{
	if (!Disp->krb_N5_M2.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N5_M4_CheckPossCreate()
{
	if (!Disp->krb_N5_M4.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N5_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N5_CH.IsFree()) return  false;
	return true;
}
bool UKarabasWidget::krb_N5_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N5_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region OUT_

//bool UKarabasWidget::krb_N_RASPORIADIT_CheckPossCreate()
//{
//	if (!Disp->krb_N_RASPORIADIT.IsFree()) return  false;
//	return true;
//}
//bool UKarabasWidget::krb_CH_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->krb_CH_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UKarabasWidget::krb_CHD_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->krb_CHD_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UKarabasWidget::krb_RASPORIADIT_N_CheckPossCreate()
//{
//	if (!Disp->krb_RASPORIADIT_N.IsFree()) return  false;
//	return true;
//}
//bool UKarabasWidget::krb_KARAGANOZEK_CH_CheckPossCreate()
//{
//	if (!Disp->krb_KARAGANOZEK_CH.IsFree()) return  false;
//	return true;
//}
//bool UKarabasWidget::krb_KARAGANOZEK_CHD_CheckPossCreate()
//{
//	if (!Disp->krb_KARAGANOZEK_CHD.IsFree()) return  false;
//	return true;
//}

#pragma endregion


#pragma endregion



FElm* UKarabasWidget::krb_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}



void UKarabasWidget::krb_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karabas);
}

bool UKarabasWidget::krb_pult_SetStartOtmenaOneRouter()
{
	if (krb_pult_IsOtmenaRouterSet == false)
	{
		krb_pult_IsOtmenaRouterSet = true;
		return true;
	}
	krb_pult_IsOtmenaRouterSet = false;
	return false;
}

void UKarabasWidget::krb_pult_CheckerSetterDirectRouter()
{
	if (Disp->krb._1NP.dopstat == EdopStat::CH1
		|| Disp->krb._1NP.dopstat == EdopStat::CH2
		|| Disp->krb._1NP.dopstat == EdopStat::CH3
		|| Disp->krb._1NP.dopstat == EdopStat::CH4
		|| Disp->krb._1NP.dopstat == EdopStat::CH5

		|| Disp->krb._w1.dopstat == EdopStat::CH
		|| Disp->krb._w2.dopstat == EdopStat::CH
		|| Disp->krb._w3.dopstat == EdopStat::CH
		|| Disp->krb._w4.dopstat == EdopStat::CH
		|| Disp->krb._w5.dopstat == EdopStat::CH

		|| Disp->krb._w1.dopstat == EdopStat::CHD
		|| Disp->krb._w2.dopstat == EdopStat::CHD
		|| Disp->krb._w3.dopstat == EdopStat::CHD
		|| Disp->krb._w4.dopstat == EdopStat::CHD
		|| Disp->krb._w5.dopstat == EdopStat::CHD
		) 
		krb_pult_IsChetTrainRouterSet = true;

	else krb_pult_IsChetTrainRouterSet = false;

	if (Disp->krb._1CHP.dopstat == EdopStat::N1
		|| Disp->krb._1CHP.dopstat == EdopStat::N2
		|| Disp->krb._1CHP.dopstat == EdopStat::N3
		|| Disp->krb._1CHP.dopstat == EdopStat::N4
		|| Disp->krb._1CHP.dopstat == EdopStat::N5

		|| Disp->krb._1UPCH.dopstat == EdopStat::N1
		|| Disp->krb._1UPCH.dopstat == EdopStat::N2
		|| Disp->krb._1UPCH.dopstat == EdopStat::N3
		|| Disp->krb._1UPCH.dopstat == EdopStat::N4
		|| Disp->krb._1UPCH.dopstat == EdopStat::N5

		|| Disp->krb._w1.dopstat == EdopStat::N
		|| Disp->krb._w2.dopstat == EdopStat::N
		|| Disp->krb._w3.dopstat == EdopStat::N
		|| Disp->krb._w4.dopstat == EdopStat::N
		|| Disp->krb._w5.dopstat == EdopStat::N
		)
		krb_pult_IsNeChetTrainRouterSet = true;

	else krb_pult_IsNeChetTrainRouterSet = false;

	if (Disp->krb._NP.dopstat == EdopStat::CH1 && Disp->krb._1NP.dopstat != EdopStat::CH1
		|| Disp->krb._NP.dopstat == EdopStat::CH2 && Disp->krb._1NP.dopstat != EdopStat::CH2
		|| Disp->krb._NP.dopstat == EdopStat::CH3 && Disp->krb._1NP.dopstat != EdopStat::CH3
		|| Disp->krb._NP.dopstat == EdopStat::CH4 && Disp->krb._1NP.dopstat != EdopStat::CH4
		|| Disp->krb._NP.dopstat == EdopStat::CH5 && Disp->krb._1NP.dopstat != EdopStat::CH5

		|| Disp->krb._NP.dopstat == EdopStat::M5
	

		|| Disp->krb._M3.dopstat == EdopStat::CH4 
		|| Disp->krb._M3.dopstat == EdopStat::CH5

		|| Disp->krb._w1.dopstat == EdopStat::M2
		|| Disp->krb._w2.dopstat == EdopStat::M2
		|| Disp->krb._w3.dopstat == EdopStat::M2
		|| Disp->krb._w4.dopstat == EdopStat::M2
		|| Disp->krb._w5.dopstat == EdopStat::M2

		|| Disp->krb._w1.dopstat == EdopStat::M4
		|| Disp->krb._w2.dopstat == EdopStat::M4
		|| Disp->krb._w3.dopstat == EdopStat::M4
		|| Disp->krb._w4.dopstat == EdopStat::M4
		|| Disp->krb._w5.dopstat == EdopStat::M4

		|| Disp->krb._w1.dopstat == EdopStat::M6
		|| Disp->krb._w2.dopstat == EdopStat::M6
		)
		krb_pult_IsChetManRouterSet = true;

	else krb_pult_IsChetManRouterSet = false;

	if (Disp->krb._CHP.dopstat == EdopStat::N1 && Disp->krb._1CHP.dopstat != EdopStat::N1
		|| Disp->krb._CHP.dopstat == EdopStat::N2 && Disp->krb._1CHP.dopstat != EdopStat::N2
		|| Disp->krb._CHP.dopstat == EdopStat::N3 && Disp->krb._1CHP.dopstat != EdopStat::N3
		|| Disp->krb._CHP.dopstat == EdopStat::N4 && Disp->krb._1CHP.dopstat != EdopStat::N4
		|| Disp->krb._CHP.dopstat == EdopStat::N5 && Disp->krb._1CHP.dopstat != EdopStat::N5

		|| Disp->krb._CHAP.dopstat == EdopStat::N1 && Disp->krb._1UPCH.dopstat != EdopStat::N1
		|| Disp->krb._CHAP.dopstat == EdopStat::N2 && Disp->krb._1UPCH.dopstat != EdopStat::N2
		|| Disp->krb._CHAP.dopstat == EdopStat::N3 && Disp->krb._1UPCH.dopstat != EdopStat::N3
		|| Disp->krb._CHAP.dopstat == EdopStat::N4 && Disp->krb._1UPCH.dopstat != EdopStat::N4
		|| Disp->krb._CHAP.dopstat == EdopStat::N5 && Disp->krb._1UPCH.dopstat != EdopStat::N5


		|| Disp->krb._w1.dopstat == EdopStat::M1
		|| Disp->krb._w2.dopstat == EdopStat::M1
		|| Disp->krb._w3.dopstat == EdopStat::M1
		|| Disp->krb._w4.dopstat == EdopStat::M1
		|| Disp->krb._w5.dopstat == EdopStat::M1

		|| Disp->krb._w4.dopstat == EdopStat::M3
		|| Disp->krb._w5.dopstat == EdopStat::M3
		)
		krb_pult_IsNeChetManRouterSet = true;

	else krb_pult_IsNeChetManRouterSet = false;
}

void UKarabasWidget::DopCheckerForPult()
{
	if (krb_pult_IsChetManRouterSet != krb_pult_IsChetManRouterSetDop)
	{
		if (krb_pult_IsChetManRouterSet) Disp->krb_pult_arrComm.push_back("b25on");
		else Disp->krb_pult_arrComm.push_back("b25off");
		krb_pult_IsChetManRouterSetDop = krb_pult_IsChetManRouterSet;
	}
	if (krb_pult_IsNeChetManRouterSet != krb_pult_IsNeChetManRouterSetDop)
	{
		if (krb_pult_IsNeChetManRouterSet) Disp->krb_pult_arrComm.push_back("a47on");
		else Disp->krb_pult_arrComm.push_back("a47off");
		krb_pult_IsNeChetManRouterSetDop = krb_pult_IsNeChetManRouterSet;
	}
	if (krb_pult_IsChetTrainRouterSet != krb_pult_IsChetTrainRouterSetDop)
	{
		if (krb_pult_IsChetTrainRouterSet) Disp->krb_pult_arrComm.push_back("b24on");
		else Disp->krb_pult_arrComm.push_back("b24off");
		krb_pult_IsChetTrainRouterSetDop = krb_pult_IsChetTrainRouterSet;
	}
	if (krb_pult_IsNeChetTrainRouterSet != krb_pult_IsNeChetTrainRouterSetDop)
	{
		if (krb_pult_IsNeChetTrainRouterSet) Disp->krb_pult_arrComm.push_back("a44on");
		else Disp->krb_pult_arrComm.push_back("a44off");
		krb_pult_IsNeChetTrainRouterSetDop = krb_pult_IsNeChetTrainRouterSet;
	}
}

bool UKarabasWidget::krb_pult_ManevrRouterSet()
{
	if (krb_pult_IsManevrRouterSet == false)
	{
		krb_pult_IsManevrRouterSet = true;
		krb_pult_IsTrainRouterSet = false;
		return true;
	}
	krb_pult_IsManevrRouterSet = false;
	return false;
}

bool UKarabasWidget::krb_pult_TrainRouterSet()
{
	if (krb_pult_IsTrainRouterSet == false)
	{
		krb_pult_IsTrainRouterSet = true;
		krb_pult_IsManevrRouterSet = false;
		return true;
	}
	krb_pult_IsTrainRouterSet = false;
	return false;
}


#pragma endregion

#pragma region Strelki



int UKarabasWidget::krb_Make_Strelka_Redact(int number)
{
	
	if (number == 1) RedactStrelka = &Disp->krb._str1;
	else if (number == 2) RedactStrelka = &Disp->krb._str2;
	else if (number == 3) RedactStrelka = &Disp->krb._str3;
	else if (number == 4) RedactStrelka = &Disp->krb._str4;
	else if (number == 5) RedactStrelka = &Disp->krb._str5;
	else if (number == 6) RedactStrelka = &Disp->krb._str6;
	else if (number == 7) RedactStrelka = &Disp->krb._str7;
	else if (number == 8) RedactStrelka = &Disp->krb._str8;
	else if (number == 9) RedactStrelka = &Disp->krb._str9;
	else if (number == 10) RedactStrelka = &Disp->krb._str10;
	else if (number == 11) RedactStrelka = &Disp->krb._str11;
	else if (number == 12) RedactStrelka = &Disp->krb._str12;
	else if (number == 14) RedactStrelka = &Disp->krb._str14;
	else if (number == 16) RedactStrelka = &Disp->krb._str16;
	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->krb_arrStr.size(); i++)
	{
		if (Disp->krb_arrStr[i]->num == number) return number;
	}
	return 0;
}
void UKarabasWidget::krb_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;
	
}

void UKarabasWidget::krb_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->krb._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->krb._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->krb._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->krb._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->krb._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->krb._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->krb._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->krb._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->krb._str9) SendCommToServer(Commd::s9_Minus);
	if (RedactStrelka == &Disp->krb._str10) SendCommToServer(Commd::s10_Minus);
	if (RedactStrelka == &Disp->krb._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->krb._str12) SendCommToServer(Commd::s12_Minus);
	if (RedactStrelka == &Disp->krb._str14) SendCommToServer(Commd::s14_Minus);	
	if (RedactStrelka == &Disp->krb._str16) SendCommToServer(Commd::s16_Minus);


	krb_Make_Strelka_UnRedact();
}
void UKarabasWidget::krb_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->krb._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->krb._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->krb._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->krb._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->krb._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->krb._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->krb._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->krb._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->krb._str9) SendCommToServer(Commd::s9_Plus);
	if (RedactStrelka == &Disp->krb._str10) SendCommToServer(Commd::s10_Plus);
	if (RedactStrelka == &Disp->krb._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->krb._str12) SendCommToServer(Commd::s12_Plus);
	if (RedactStrelka == &Disp->krb._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->krb._str16) SendCommToServer(Commd::s16_Plus);

	krb_Make_Strelka_UnRedact();
}
void UKarabasWidget::krb_RedactStrelkaToBreak()
{
	RedactStrelka->cur = ExCurator::NotControl;
	krb_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	krb_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	krb_Make_Strelka_UnRedact();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->krb_arrStr.size(); i++)
	{
		Disp->krb_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karabas);
}
#pragma endregion

#pragma region Svetofori

void UKarabasWidget::krb_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->krb._N;
	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->krb._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->krb._CHD;

	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->krb._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->krb._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->krb._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->krb._M4;
	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->krb._M5;
	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->krb._M6;

	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->krb._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->krb._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->krb._CH3;
	else if (dopstat == EdopStat::CH4) RedactSvetofor = &Disp->krb._CH4;
	else if (dopstat == EdopStat::CH5) RedactSvetofor = &Disp->krb._CH5;


	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->krb._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->krb._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->krb._N3;
	else if (dopstat == EdopStat::N4) RedactSvetofor = &Disp->krb._N4;
	else if (dopstat == EdopStat::N5) RedactSvetofor = &Disp->krb._N5;

	//krb_Pult_StartNabor();
}
EdopStat UKarabasWidget::krb_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->krb._N) return EdopStat::N;

	else if (RedactSvetofor == &Disp->krb._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->krb._CHD) return EdopStat::CHD;


	else if (RedactSvetofor == &Disp->krb._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->krb._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->krb._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->krb._M4) return EdopStat::M4;
	else if (RedactSvetofor == &Disp->krb._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->krb._M6) return EdopStat::M6;



	else if (RedactSvetofor == &Disp->krb._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->krb._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->krb._CH3) return EdopStat::CH3;
	else if (RedactSvetofor == &Disp->krb._CH4) return EdopStat::CH4;
	else if (RedactSvetofor == &Disp->krb._CH5) return EdopStat::CH5;



	else if (RedactSvetofor == &Disp->krb._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->krb._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->krb._N3) return EdopStat::N3;
	else if (RedactSvetofor == &Disp->krb._N4) return EdopStat::N4;
	else if (RedactSvetofor == &Disp->krb._N5) return EdopStat::N5;

	else return EdopStat::Norm;

}
bool UKarabasWidget::krb_IsRedactSvetoforFree()
{
	
		if ( RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;
	
	return false;
}

void UKarabasWidget::krb_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UKarabasWidget::krb_BrokenSvetoforMake(ExCurator cur)
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
	krb_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_RedactSvetofor_Remont()
{

	RedactSvetofor->cur = ExCurator::Norm;
	krb_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karabas);
}
void UKarabasWidget::krb_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->krb_arrSvetofor.size(); i++)
	{
		Disp->krb_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::Karabas);
}

#pragma endregion 

#pragma region Pult

void UKarabasWidget::krb_Pult_RazvorotPeregona_N()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::N);
}
void UKarabasWidget::krb_Pult_RazvorotPeregona_CH()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::CH);
}
void UKarabasWidget::krb_Pult_VspomogatRazvorotPeregona_N()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::N);
}
void UKarabasWidget::krb_Pult_VspomogatRazvorotPeregona_CH()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::CH);
}
void UKarabasWidget::krb_Pult_VspomogatRazvorotPeregona_CHD()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::CHD);
}
void UKarabasWidget::krb_Pult_RazvorotPeregona_CHD()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::CHD);
}

bool UKarabasWidget::krb_Pult_Make_Svetofor_Redact(EdopStat dopstat)
{
	//если начальный светофор  выбран , то отменяем выбор при совпадении допстат
	if (RedactSvetoforStart == dopstat)
	{
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);

		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);


		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);


		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);


		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);
		return false;
	}
	//если при невыбранном светофоре ожидается статус отмены, то запускаем отмену маршрута
	else if (krb_pult_IsOtmenaRouterSet == true)
	{
		Commd com = Disp->GetCommFromDopStat(dopstat);

		if (com != Commd::NotDef)
		{
			SendCommToServer(com);
		}
		krb_pult_IsOtmenaRouterSet = false;
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		return true;
	}
	//если не выбран ни старт ни финиш - выбираем светофор старт
	else if (RedactSvetoforStart == EdopStat::Norm && RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforStart = dopstat;
		if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);
	
		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);
	

		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);
	

		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);


		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);


	
		return true;
	}
	//если не выбран только финиш то - создаем маршрут
	else if (RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforEnd = dopstat;



		if (krb_pult_IsManevrRouterSet)
		{
			krb_Pult_ManevroviyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		}
		else if (krb_pult_IsTrainRouterSet)
		{
			krb_Pult_PoezdnoyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		}
		krb_pult_IsManevrRouterSet = false;
		krb_pult_IsTrainRouterSet = false;
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		return true;
	}


	return false;
}

void UKarabasWidget::krb_Pult_Make_All_Svetofor_UnRedact()
{
	RedactSvetoforStart = EdopStat::Norm;
	RedactSvetoforEnd = EdopStat::Norm;
}

bool UKarabasWidget::krb_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		if (Disp->krb._N.stat != EAStat::White)
		{
			SendCommToServer(Commd::N_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._N.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::N_ToGreen);
				return false;
			}
			else
			{
				SendCommToServer(Commd::N_ToRed);
				return false;
			}
		}
	}
	if (dopstat == EdopStat::CH)
	{
		if (Disp->krb._CH.stat != EAStat::White)
		{
			SendCommToServer(Commd::CH_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._CH.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::CH_ToGreen2);
				return false;
			}
			else
			{
				SendCommToServer(Commd::CH_ToRed);
				return false;
			}
		}
	}
	if (dopstat == EdopStat::CHD)
	{
		if (Disp->krb._CHD.stat != EAStat::White)
		{
			SendCommToServer(Commd::CHD_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._CHD.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::CHD_ToGreen);
				return false;
			}
			else
			{
				SendCommToServer(Commd::CHD_ToRed);
				return false;
			}
		}
	}

	return false;
}
void UKarabasWidget::krb_Pult_OtmenaAllRouters()
{
	Commd com = Commd::NotDef;
	for (size_t i = 0; i < Disp->krb_arrSvetofor.size(); i++)
	{
		if (Disp->krb_arrSvetofor[i]->stat == EAStat::Green || Disp->krb_arrSvetofor[i]->stat == EAStat::White)
		{
			com = Disp->GetCommFromDopStat(Disp->krb_arrSvetofor[i]->dopstat);
			if (com != Commd::NotDef)
			{
				SendCommToServer(com);
			}
			Sleep(10);
		}
	}
	 
}
void UKarabasWidget::krb_Pult_ManevroviyRouterCreate(EdopStat Rstart, EdopStat Rend)
{
	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
	{
		if (Rstart == EdopStat::M1)
		{

			if (Rend == EdopStat::CH1)
			{
				if (krb_M1_CH1_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH1_Create);
				}
			}

			if (Rend == EdopStat::CH2)
			{
				if (krb_M1_CH2_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH2_Create);
				}
			}

			if (Rend == EdopStat::CH3)
			{
				if (krb_M1_CH3_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH3_Create);
				}
			}

			if (Rend == EdopStat::CH4)
			{
				if (krb_M1_CH4_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH4_Create);
				}
			}

			if (Rend == EdopStat::CH5)
			{
				if (krb_M1_CH5_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH5_Create);
				}
			}

			if (Rend == EdopStat::M5)
			{
				if (krb_M1_M5_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_M5_Create);
				}
			}

		}
		if (Rstart == EdopStat::M2)
		{

			if (Rend == EdopStat::N1)
			{
				if (krb_M2_N1_CheckPossCreate())  SendCommToServer(Commd::M2_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M2_N2_CheckPossCreate())  SendCommToServer(Commd::M2_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krb_M2_N3_CheckPossCreate())  SendCommToServer(Commd::M2_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krb_M2_N4_CheckPossCreate())  SendCommToServer(Commd::M2_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krb_M2_N5_CheckPossCreate())  SendCommToServer(Commd::M2_N5_Create);
			}

		}
		if (Rstart == EdopStat::M3)
		{
		

			if (Rend == EdopStat::CH4)
			{
				if (krb_M3_CH4_CheckPossCreate())  SendCommToServer(Commd::M3_CH4_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krb_M3_CH5_CheckPossCreate())  SendCommToServer(Commd::M3_CH5_Create);
			}


		}
		if (Rstart == EdopStat::M4)
		{
			if (Rend == EdopStat::N1)
			{
				if (krb_M4_N1_CheckPossCreate())  SendCommToServer(Commd::M4_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M4_N2_CheckPossCreate())  SendCommToServer(Commd::M4_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krb_M4_N3_CheckPossCreate())  SendCommToServer(Commd::M4_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krb_M4_N4_CheckPossCreate())  SendCommToServer(Commd::M4_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krb_M4_N5_CheckPossCreate())  SendCommToServer(Commd::M4_N5_Create);
			}



		}
		if (Rstart == EdopStat::M5)
		{
			if (Rend == EdopStat::M1)
			{
				if (krb_M5_M1_CheckPossCreate())  SendCommToServer(Commd::M5_M1_Create);
			}
		
		}
		if (Rstart == EdopStat::M6)
		{
			if (Rend == EdopStat::N1)
			{
				if (krb_M6_N1_CheckPossCreate())  SendCommToServer(Commd::M6_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M6_N2_CheckPossCreate())  SendCommToServer(Commd::M6_N2_Create);
			}

	
		}

		if (Rend == EdopStat::M1)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krb_CH1_M1_CheckPossCreate())  SendCommToServer(Commd::CH1_M1_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krb_CH2_M1_CheckPossCreate())  SendCommToServer(Commd::CH2_M1_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krb_CH3_M1_CheckPossCreate())  SendCommToServer(Commd::CH3_M1_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krb_CH4_M1_CheckPossCreate())  SendCommToServer(Commd::CH4_M1_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krb_CH5_M1_CheckPossCreate())  SendCommToServer(Commd::CH5_M1_Create);
			}

		}
		if (Rend == EdopStat::M2)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M2_CheckPossCreate())  SendCommToServer(Commd::N1_M2_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M2_CheckPossCreate())  SendCommToServer(Commd::N2_M2_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krb_N3_M2_CheckPossCreate())  SendCommToServer(Commd::N3_M2_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krb_N4_M2_CheckPossCreate())  SendCommToServer(Commd::N4_M2_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krb_N5_M2_CheckPossCreate())  SendCommToServer(Commd::N5_M2_Create);
			}

		}
		if (Rend == EdopStat::M3)
		{

			if (Rstart == EdopStat::CH4)
			{
				if (krb_CH4_M3_CheckPossCreate())  SendCommToServer(Commd::CH4_M3_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krb_CH5_M3_CheckPossCreate())  SendCommToServer(Commd::CH5_M3_Create);
			}


		}
		if (Rend == EdopStat::M4)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M4_CheckPossCreate())  SendCommToServer(Commd::N1_M4_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M4_CheckPossCreate())  SendCommToServer(Commd::N2_M4_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krb_N3_M4_CheckPossCreate())  SendCommToServer(Commd::N3_M4_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krb_N4_M4_CheckPossCreate())  SendCommToServer(Commd::N4_M4_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krb_N5_M4_CheckPossCreate())  SendCommToServer(Commd::N5_M4_Create);
			}


		}
		if (Rend == EdopStat::M6)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M6_CheckPossCreate())  SendCommToServer(Commd::N1_M6_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M6_CheckPossCreate())  SendCommToServer(Commd::N2_M6_Create);
			}


		}

	}
}
void UKarabasWidget::krb_Pult_PoezdnoyRouterCreate(EdopStat Rstart, EdopStat Rend)
{

	if (Rstart == EdopStat::N)
	{

		if (Rend == EdopStat::CH1)
		{
			if (krb_N_1P_CheckPossCreate()) SendCommToServer(Commd::N_1P_Create);
		}

		if (Rend == EdopStat::CH2)
		{
			if (krb_N_2P_CheckPossCreate()) SendCommToServer(Commd::N_2P_Create);
		}

		if (Rend == EdopStat::CH3)
		{
			if (krb_N_3P_CheckPossCreate()) SendCommToServer(Commd::N_3P_Create);
		}

		if (Rend == EdopStat::CH4)
		{
			if (krb_N_4P_CheckPossCreate()) SendCommToServer(Commd::N_4P_Create);
		}

		if (Rend == EdopStat::CH5)
		{
			if (krb_N_5P_CheckPossCreate()) SendCommToServer(Commd::N_5P_Create);
		}


	}
	if (Rstart == EdopStat::CH)
	{

		if (Rend == EdopStat::N1)
		{
			if (krb_CH_1P_CheckPossCreate()) SendCommToServer(Commd::CH_1P_Create);
		}

		if (Rend == EdopStat::N2)
		{
			if (krb_CH_2P_CheckPossCreate()) SendCommToServer(Commd::CH_2P_Create);
		}

		if (Rend == EdopStat::N3)
		{
			if (krb_CH_3P_CheckPossCreate()) SendCommToServer(Commd::CH_3P_Create);
		}

		if (Rend == EdopStat::N4)
		{
			if (krb_CH_4P_CheckPossCreate()) SendCommToServer(Commd::CH_4P_Create);
		}

		if (Rend == EdopStat::N5)
		{
			if (krb_CH_5P_CheckPossCreate()) SendCommToServer(Commd::CH_5P_Create);
		}


	}
	if (Rstart == EdopStat::CHD)
	{

		if (Rend == EdopStat::N1)
		{
			if (krb_CHD_1P_CheckPossCreate()) SendCommToServer(Commd::CHD_1P_Create);
		}

		if (Rend == EdopStat::N2)
		{
			if (krb_CHD_2P_CheckPossCreate()) SendCommToServer(Commd::CHD_2P_Create);
		}

		if (Rend == EdopStat::N3)
		{
			if (krb_CHD_3P_CheckPossCreate()) SendCommToServer(Commd::CHD_3P_Create);
		}

		if (Rend == EdopStat::N4)
		{
			if (krb_CHD_4P_CheckPossCreate()) SendCommToServer(Commd::CHD_4P_Create);
		}

		if (Rend == EdopStat::N5)
		{
			if (krb_CHD_5P_CheckPossCreate()) SendCommToServer(Commd::CHD_5P_Create);
		}

	}

	if (Rend == EdopStat::N)
	{
		if (Rstart == EdopStat::CH1)
		{
			if (krb_CH1_N_CheckPossCreate()) SendCommToServer(Commd::CH1_N_Create);
		}
		if (Rstart == EdopStat::CH2)
		{
			if (krb_CH2_N_CheckPossCreate()) SendCommToServer(Commd::CH2_N_Create);
		}
		if (Rstart == EdopStat::CH3)
		{
			if (krb_CH3_N_CheckPossCreate()) SendCommToServer(Commd::CH3_N_Create);
		}
		if (Rstart == EdopStat::CH4)
		{
			if (krb_CH4_N_CheckPossCreate()) SendCommToServer(Commd::CH4_N_Create);
		}
		if (Rstart == EdopStat::CH5)
		{
			if (krb_CH5_N_CheckPossCreate()) SendCommToServer(Commd::CH5_N_Create);
		}

	}
	if (Rend == EdopStat::CH)
	{
		if (Rstart == EdopStat::N1)
		{
			if (krb_N1_CH_CheckPossCreate()) SendCommToServer(Commd::N1_CH_Create);
		}
		if (Rstart == EdopStat::N2)
		{
			if (krb_N2_CH_CheckPossCreate()) SendCommToServer(Commd::N2_CH_Create);
		}
		if (Rstart == EdopStat::N3)
		{
			if (krb_N3_CH_CheckPossCreate()) SendCommToServer(Commd::N3_CH_Create);
		}
		if (Rstart == EdopStat::N4)
		{
			if (krb_N4_CH_CheckPossCreate()) SendCommToServer(Commd::N4_CH_Create);
		}
		if (Rstart == EdopStat::N5)
		{
			if (krb_N5_CH_CheckPossCreate()) SendCommToServer(Commd::N5_CH_Create);
		}

	}
	if (Rend == EdopStat::CHD)
	{
		if (Rstart == EdopStat::N1)
		{
			if (krb_N1_CHD_CheckPossCreate()) SendCommToServer(Commd::N1_CHD_Create);
		}
		if (Rstart == EdopStat::N2)
		{
			if (krb_N2_CHD_CheckPossCreate()) SendCommToServer(Commd::N2_CHD_Create);
		}
		if (Rstart == EdopStat::N3)
		{
			if (krb_N3_CHD_CheckPossCreate()) SendCommToServer(Commd::N3_CHD_Create);
		}
		if (Rstart == EdopStat::N4)
		{
			if (krb_N4_CHD_CheckPossCreate()) SendCommToServer(Commd::N4_CHD_Create);
		}
		if (Rstart == EdopStat::N5)
		{
			if (krb_N5_CHD_CheckPossCreate()) SendCommToServer(Commd::N5_CHD_Create);
		}

	}
		
}
void UKarabasWidget::krb_Pult_OtmenaNabora()
{
	krb_Pult_Make_All_Svetofor_UnRedact();
}
void UKarabasWidget::krb_Pult_Iskusstvennaya_razdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karabas);
}



void UKarabasWidget::krb_Pult_Reload()
{
	std::thread t1(&UKarabasWidget::krb_Pult_Reload_InThread, this);
	t1.detach();
}
void UKarabasWidget::krb_Pult_Reload_InThread()
{
	Disp->krb_Pult_FirstInitArrPelm();
}
void UKarabasWidget::krb_Pult_Off()
{
	std::thread t1(&UKarabasWidget::krb_Pult_Off_InThread, this);
	t1.detach();
}
void UKarabasWidget::krb_Pult_Off_InThread()
{
	
	Disp->krb_pult_arrComm.clear();

	Disp->krb_pult_arrComm.push_back("a53off\n");
	Disp->krb_pult_arrComm.push_back("a52off\n");
	Disp->krb_pult_arrComm.push_back("a51off\n");
	Disp->krb_pult_arrComm.push_back("a50off\n");
	Disp->krb_pult_arrComm.push_back("a49off\n");
	Disp->krb_pult_arrComm.push_back("a48off\n");
	Disp->krb_pult_arrComm.push_back("a47off\n");
	Disp->krb_pult_arrComm.push_back("a46off\n");
	Disp->krb_pult_arrComm.push_back("a45off\n");
	Disp->krb_pult_arrComm.push_back("a44off\n");
	Disp->krb_pult_arrComm.push_back("a43off\n");
	Disp->krb_pult_arrComm.push_back("a42off\n");
	Disp->krb_pult_arrComm.push_back("a41off\n");
	Disp->krb_pult_arrComm.push_back("a40off\n");
	Disp->krb_pult_arrComm.push_back("a39off\n");
	Disp->krb_pult_arrComm.push_back("a38off\n");
	Disp->krb_pult_arrComm.push_back("a37off\n");
	Disp->krb_pult_arrComm.push_back("a36off\n");
	Disp->krb_pult_arrComm.push_back("a35off\n");
	Disp->krb_pult_arrComm.push_back("a34off\n");
	Disp->krb_pult_arrComm.push_back("a33off\n");
	Disp->krb_pult_arrComm.push_back("a32off\n");
	Disp->krb_pult_arrComm.push_back("a31off\n");
	Disp->krb_pult_arrComm.push_back("a30off\n");
	Disp->krb_pult_arrComm.push_back("a29off\n");
	Disp->krb_pult_arrComm.push_back("a28off\n");
	Disp->krb_pult_arrComm.push_back("a27off\n");
	Disp->krb_pult_arrComm.push_back("a26off\n");
	Disp->krb_pult_arrComm.push_back("a25off\n");
	Disp->krb_pult_arrComm.push_back("a24off\n");
	Disp->krb_pult_arrComm.push_back("a23off\n");
	Disp->krb_pult_arrComm.push_back("a22off\n");
	Disp->krb_pult_arrComm.push_back("a13off\n");
	Disp->krb_pult_arrComm.push_back("a12off\n");
	Disp->krb_pult_arrComm.push_back("a11off\n");
	Disp->krb_pult_arrComm.push_back("a10off\n");
	Disp->krb_pult_arrComm.push_back("a9off\n");
	Disp->krb_pult_arrComm.push_back("a8off\n");
	Disp->krb_pult_arrComm.push_back("a7off\n");
	Disp->krb_pult_arrComm.push_back("a6off\n");
	Disp->krb_pult_arrComm.push_back("a5off\n");
	Disp->krb_pult_arrComm.push_back("a4off\n");
	Disp->krb_pult_arrComm.push_back("a3off\n");
	Disp->krb_pult_arrComm.push_back("a2off\n");
	Disp->krb_pult_arrComm.push_back("an0off\n");
	Disp->krb_pult_arrComm.push_back("an1off\n");
	Disp->krb_pult_arrComm.push_back("an2off\n");
	Disp->krb_pult_arrComm.push_back("an3off\n");
	Disp->krb_pult_arrComm.push_back("an4off\n");
	Disp->krb_pult_arrComm.push_back("an5off\n");
	Disp->krb_pult_arrComm.push_back("an6off\n");
	Disp->krb_pult_arrComm.push_back("an7off\n");
	Disp->krb_pult_arrComm.push_back("an8off\n");
	Disp->krb_pult_arrComm.push_back("an9off\n");
	Disp->krb_pult_arrComm.push_back("an10off\n");
	Disp->krb_pult_arrComm.push_back("an11off\n");
	Disp->krb_pult_arrComm.push_back("an12off\n");
	Disp->krb_pult_arrComm.push_back("an13off\n");
	Disp->krb_pult_arrComm.push_back("an14off\n");
	Disp->krb_pult_arrComm.push_back("an15off\n");

	Disp->krb_pult_arrComm.push_back("b53off\n");
	Disp->krb_pult_arrComm.push_back("b52off\n");
	Disp->krb_pult_arrComm.push_back("b51off\n");
	Disp->krb_pult_arrComm.push_back("b50off\n");
	Disp->krb_pult_arrComm.push_back("b49off\n");
	Disp->krb_pult_arrComm.push_back("b48off\n");
	Disp->krb_pult_arrComm.push_back("b47off\n");
	Disp->krb_pult_arrComm.push_back("b46off\n");
	Disp->krb_pult_arrComm.push_back("b45off\n");
	Disp->krb_pult_arrComm.push_back("b44off\n");
	Disp->krb_pult_arrComm.push_back("b43off\n");
	Disp->krb_pult_arrComm.push_back("b42off\n");
	Disp->krb_pult_arrComm.push_back("b41off\n");
	Disp->krb_pult_arrComm.push_back("b40off\n");
	Disp->krb_pult_arrComm.push_back("b39off\n");
	Disp->krb_pult_arrComm.push_back("b38off\n");
	Disp->krb_pult_arrComm.push_back("b37off\n");
	Disp->krb_pult_arrComm.push_back("b36off\n");
	Disp->krb_pult_arrComm.push_back("b35off\n");
	Disp->krb_pult_arrComm.push_back("b34off\n");
	Disp->krb_pult_arrComm.push_back("b33off\n");
	Disp->krb_pult_arrComm.push_back("b32off\n");
	Disp->krb_pult_arrComm.push_back("b31off\n");
	Disp->krb_pult_arrComm.push_back("b30off\n");
	Disp->krb_pult_arrComm.push_back("b29off\n");
	Disp->krb_pult_arrComm.push_back("b28off\n");
	Disp->krb_pult_arrComm.push_back("b27off\n");
	Disp->krb_pult_arrComm.push_back("b26off\n");
	Disp->krb_pult_arrComm.push_back("b25off\n");
	Disp->krb_pult_arrComm.push_back("b24off\n");
	Disp->krb_pult_arrComm.push_back("b23off\n");
	Disp->krb_pult_arrComm.push_back("b22off\n");
	Disp->krb_pult_arrComm.push_back("b13off\n");
	Disp->krb_pult_arrComm.push_back("b12off\n");
	Disp->krb_pult_arrComm.push_back("b11off\n");
	Disp->krb_pult_arrComm.push_back("b10off\n");
	Disp->krb_pult_arrComm.push_back("b9off\n");
	Disp->krb_pult_arrComm.push_back("b8off\n");
	Disp->krb_pult_arrComm.push_back("b7off\n");
	Disp->krb_pult_arrComm.push_back("b6off\n");
	Disp->krb_pult_arrComm.push_back("b5off\n");
	Disp->krb_pult_arrComm.push_back("b4off\n");
	Disp->krb_pult_arrComm.push_back("b3off\n");
	Disp->krb_pult_arrComm.push_back("b2off\n");
	Disp->krb_pult_arrComm.push_back("bn0off\n");
	Disp->krb_pult_arrComm.push_back("bn1off\n");
	Disp->krb_pult_arrComm.push_back("bn2off\n");
	Disp->krb_pult_arrComm.push_back("bn3off\n");
	Disp->krb_pult_arrComm.push_back("bn4off\n");
	Disp->krb_pult_arrComm.push_back("bn5off\n");
	Disp->krb_pult_arrComm.push_back("bn6off\n");
	Disp->krb_pult_arrComm.push_back("bn7off\n");
	Disp->krb_pult_arrComm.push_back("bn8off\n");
	Disp->krb_pult_arrComm.push_back("bn9off\n");
	Disp->krb_pult_arrComm.push_back("bn10off\n");
	Disp->krb_pult_arrComm.push_back("bn11off\n");
	Disp->krb_pult_arrComm.push_back("bn12off\n");
	Disp->krb_pult_arrComm.push_back("bn13off\n");
	Disp->krb_pult_arrComm.push_back("bn14off\n");
	Disp->krb_pult_arrComm.push_back("bn15off\n");

}

//void UKarabasWidget::krb_Pult_CheckerChanger()
//{
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmStr.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmStr[i].elm->stat != Disp->krb_pult_arrStrDub[i].stat || Disp->krb_pult_arrPelmStr[i].elm->oper != Disp->krb_pult_arrStrDub[i].oper)
//		{
//			Disp->krb_pult_arrStrDub[i].stat = Disp->krb_pult_arrPelmStr[i].elm->stat;
//			Disp->krb_pult_arrStrDub[i].oper = Disp->krb_pult_arrPelmStr[i].elm->oper;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmStr[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmSvetofor.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmSvetofor[i].elm->stat != Disp->krb_pult_arrSvetoforDub[i].stat || Disp->krb_pult_arrPelmSvetofor[i].elm->oper != Disp->krb_pult_arrSvetoforDub[i].oper)
//		{
//			Disp->krb_pult_arrSvetoforDub[i].stat = Disp->krb_pult_arrPelmSvetofor[i].elm->stat;
//			Disp->krb_pult_arrSvetoforDub[i].oper = Disp->krb_pult_arrPelmSvetofor[i].elm->oper;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmSvetofor[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmWay.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmWay[i].elm->stat != Disp->krb_pult_arrWayDub[i].stat)
//		{
//			Disp->krb_pult_arrWayDub[i].stat = Disp->krb_pult_arrPelmWay[i].elm->stat;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmWay[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmSignals.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmSignals[i].elm->stat != Disp->krb_pult_arrEFlmSignalsDub[i].stat
//			|| Disp->krb_pult_arrPelmSignals[i].elm->dopstat != Disp->krb_pult_arrEFlmSignalsDub[i].dopstat
//			|| Disp->krb_pult_arrPelmSignals[i].elm->oper != Disp->krb_pult_arrEFlmSignalsDub[i].oper
//			|| Disp->krb_pult_arrPelmSignals[i].elm->cur != Disp->krb_pult_arrEFlmSignalsDub[i].cur)
//		{
//			Disp->krb_pult_arrEFlmSignalsDub[i].stat = Disp->krb_pult_arrPelmSignals[i].elm->stat;
//			Disp->krb_pult_arrEFlmSignalsDub[i].dopstat = Disp->krb_pult_arrPelmSignals[i].elm->dopstat;
//			Disp->krb_pult_arrEFlmSignalsDub[i].oper = Disp->krb_pult_arrPelmSignals[i].elm->oper;
//			Disp->krb_pult_arrEFlmSignalsDub[i].cur = Disp->krb_pult_arrPelmSignals[i].elm->cur;
//
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmSignals[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrBoolSignals.size(); i++)
//	{
//		if (*(Disp->krb_pult_arrBoolSignals[i].boo) != Disp->krb_pult_arrBoolSignalsDub[i])
//		{
//			Disp->krb_pult_arrBoolSignalsDub[i] = *(Disp->krb_pult_arrBoolSignals[i].boo);
//
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrBoolSignals[i]);
//		}
//	}
//
//}
//FString UKarabasWidget::krb_Pult_LoaderTo()
//{
//	krb_pult_CheckerSetterDirectRouter();
//	DopCheckerForPult();
//	krb_Pult_CheckerChanger();
//	FString str = "";
//	if (Disp->krb_pult_arrComm.size() != 0)
//	{
//		iRet = WriteFile(hSerial, Disp->krb_pult_arrComm[0].c_str(), Disp->krb_pult_arrComm[0].size(), &dwBytesWritten, NULL);
//		str = Disp->krb_pult_arrComm[0].c_str();
//
//		//Beep(800, 20);
//		Disp->krb_pult_arrComm.erase(Disp->krb_pult_arrComm.begin());
//	}
//	if (!str.IsEmpty())
//	{
//		if (true/*str[str.Len() - 2] != 'f'*/)
//		{
//			UE_LOG(qwon, Display, TEXT("           %s"), *str);
//			/*std::thread t(&UKarabasWidget::MyBeepDef, this, 880, 50);
//			t.detach();*/
//			return str;
//		}
//		UE_LOG(qwoff, Display, TEXT("              %s"), *str);
//	}
//
//	return L"";
//}
//void UKarabasWidget::krb_Pult_FirstInitArrPelm()
//{
//	//"портим" дуб. массивы для сравнения,чтобы CheckerChanger сгенерировал актуальные команды для загрузки пульта
//
//	for (size_t i = 0; i < Disp->krb_pult_arrStrDub.size(); i++)
//	{
//		Disp->krb_pult_arrStrDub[i].stat = EAStat::Grey;
//		Disp->krb_pult_arrStrDub[i].oper = EOper::ToRouted;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrSvetoforDub.size(); i++)
//	{
//		Disp->krb_pult_arrSvetoforDub[i].stat = EAStat::Free;
//		Disp->krb_pult_arrSvetoforDub[i].oper = EOper::Busy;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrWayDub.size(); i++)
//	{
//		Disp->krb_pult_arrWayDub[i].stat = EAStat::Grey;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrEFlmSignalsDub.size(); i++)
//	{
//		Disp->krb_pult_arrEFlmSignalsDub[i].stat = EAStat::Grey;
//		Disp->krb_pult_arrEFlmSignalsDub[i].dopstat = EdopStat::Norm;
//		Disp->krb_pult_arrEFlmSignalsDub[i].oper = EOper::Routed;
//		Disp->krb_pult_arrEFlmSignalsDub[i].cur = ExCurator::ToDefault;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrBoolSignalsDub.size(); i++)
//	{
//		Disp->krb_pult_arrBoolSignalsDub[i] = !Disp->krb_pult_arrBoolSignals[i].boo;
//	}
//}
//void UKarabasWidget::krb_Pult_SenderTo_LoaderTo(Pelm elm)
//{
//#pragma region Strelki
//
//	if (!strcmp(elm.name.c_str(), "str1"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an4on\n");
//			Disp->krb_pult_arrComm.push_back("an5off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an5on\n");
//			Disp->krb_pult_arrComm.push_back("an4off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an5off\n");
//			Disp->krb_pult_arrComm.push_back("an4off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str2"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str4.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25on\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str4.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41on\n");	
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str3"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an2on\n");
//			Disp->krb_pult_arrComm.push_back("an3off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an3on\n");
//			Disp->krb_pult_arrComm.push_back("an2off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an3off\n");
//			Disp->krb_pult_arrComm.push_back("an2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str4"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str2.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25on\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str2.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str5"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an0on\n");
//			Disp->krb_pult_arrComm.push_back("an1off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an1on\n");
//			Disp->krb_pult_arrComm.push_back("an0off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("an1off\n");
//			Disp->krb_pult_arrComm.push_back("an0off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str6"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a24on\n");
//			Disp->krb_pult_arrComm.push_back("a38off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a38on\n");
//			Disp->krb_pult_arrComm.push_back("a24off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a38off\n");
//			Disp->krb_pult_arrComm.push_back("a24off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str7"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a3on\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a2on\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str8"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str10.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a23on\n");
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str10.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a39on\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str9"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a5on\n");
//			Disp->krb_pult_arrComm.push_back("a4off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a4on\n");
//			Disp->krb_pult_arrComm.push_back("a5off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a4off\n");
//			Disp->krb_pult_arrComm.push_back("a5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str10"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str8.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a23on\n");
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str8.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a39on\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str11"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a7on\n");
//			Disp->krb_pult_arrComm.push_back("a6off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a6on\n");
//			Disp->krb_pult_arrComm.push_back("a7off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a6off\n");
//			Disp->krb_pult_arrComm.push_back("a7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str12"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b52on\n");
//			Disp->krb_pult_arrComm.push_back("a36off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a36on\n");
//			Disp->krb_pult_arrComm.push_back("b52off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a36off\n");
//			Disp->krb_pult_arrComm.push_back("b52off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str14"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b53on\n");
//			Disp->krb_pult_arrComm.push_back("a35off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a35on\n");
//			Disp->krb_pult_arrComm.push_back("b53off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a35off\n");
//			Disp->krb_pult_arrComm.push_back("b53off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str16"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b49on\n");
//			Disp->krb_pult_arrComm.push_back("a37off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a37on\n");
//			Disp->krb_pult_arrComm.push_back("b49off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a37off\n");
//			Disp->krb_pult_arrComm.push_back("b49off\n");
//		}
//	}
//
//
//
//#pragma endregion
//#pragma region Svetofors
//
//	if (!strcmp(elm.name.c_str(), "N"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b9on\n");
//			Disp->krb_pult_arrComm.push_back("b8off\n");
//			Disp->krb_pult_arrComm.push_back("b10off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b8on\n");
//			Disp->krb_pult_arrComm.push_back("b9off\n");
//			Disp->krb_pult_arrComm.push_back("b10off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b10on\n");
//			Disp->krb_pult_arrComm.push_back("b8off\n");
//			Disp->krb_pult_arrComm.push_back("b9off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "CH"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("a29on\n");
//			Disp->krb_pult_arrComm.push_back("a27off\n");
//			Disp->krb_pult_arrComm.push_back("a26off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a26on\n");
//			Disp->krb_pult_arrComm.push_back("a27off\n");
//			Disp->krb_pult_arrComm.push_back("a29off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a27on\n");
//			Disp->krb_pult_arrComm.push_back("a26off\n");
//			Disp->krb_pult_arrComm.push_back("a29off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CHD"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("a34on\n");
//			Disp->krb_pult_arrComm.push_back("a32off\n");
//			Disp->krb_pult_arrComm.push_back("a30off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a32on\n");
//			Disp->krb_pult_arrComm.push_back("a34off\n");
//			Disp->krb_pult_arrComm.push_back("a30off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a30on\n");
//			Disp->krb_pult_arrComm.push_back("a32off\n");
//			Disp->krb_pult_arrComm.push_back("a34off\n");
//		}
//	}
//
//
//	if (!strcmp(elm.name.c_str(), "CH1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an10off\n");
//			Disp->krb_pult_arrComm.push_back("an11off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an11on\n");
//			Disp->krb_pult_arrComm.push_back("an10off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an10on\n");
//			Disp->krb_pult_arrComm.push_back("an11off\n");
//		}
//	
//	}
//	if (!strcmp(elm.name.c_str(), "CH2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an8off\n");
//			Disp->krb_pult_arrComm.push_back("an9off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an8on\n");
//			Disp->krb_pult_arrComm.push_back("an9off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an9on\n");
//			Disp->krb_pult_arrComm.push_back("an8off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an13off\n");
//			Disp->krb_pult_arrComm.push_back("an12off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an13on\n");
//			Disp->krb_pult_arrComm.push_back("an12off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an12on\n");
//			Disp->krb_pult_arrComm.push_back("an13off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a8off\n");
//			Disp->krb_pult_arrComm.push_back("a9off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a9on\n");
//			Disp->krb_pult_arrComm.push_back("a8off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a8on\n");
//			Disp->krb_pult_arrComm.push_back("a9off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a53off\n");
//			Disp->krb_pult_arrComm.push_back("a52off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a53on\n");
//			Disp->krb_pult_arrComm.push_back("a52off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a53off\n");
//			Disp->krb_pult_arrComm.push_back("a52on\n");
//		}
//
//	}
//
//	if (!strcmp(elm.name.c_str(), "N1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b36off\n");
//			Disp->krb_pult_arrComm.push_back("b34off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b36on\n");
//			Disp->krb_pult_arrComm.push_back("b34off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b34on\n");
//			Disp->krb_pult_arrComm.push_back("b36off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b37off\n");
//			Disp->krb_pult_arrComm.push_back("b38off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b37on\n");
//			Disp->krb_pult_arrComm.push_back("b38off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b38on\n");
//			Disp->krb_pult_arrComm.push_back("b37off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b43off\n");
//			Disp->krb_pult_arrComm.push_back("b40off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b40on\n");
//			Disp->krb_pult_arrComm.push_back("b43off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b43on\n");
//			Disp->krb_pult_arrComm.push_back("b40off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b35off\n");
//			Disp->krb_pult_arrComm.push_back("b29off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b29on\n");
//			Disp->krb_pult_arrComm.push_back("b35off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b35on\n");
//			Disp->krb_pult_arrComm.push_back("b29off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b33off\n");
//			Disp->krb_pult_arrComm.push_back("b30off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b33on\n");
//			Disp->krb_pult_arrComm.push_back("b30off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b30on\n");
//			Disp->krb_pult_arrComm.push_back("b33off\n");
//		}
//
//	}
//
//	//
//	if (!strcmp(elm.name.c_str(), "M1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a13off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a13on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a43off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a43on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an15off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an15on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a40off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a40on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a10off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a10on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a48off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a48on\n");
//		}
//
//	}
//
//
//
//#pragma endregion
//#pragma region Ways
//	if (!strcmp(elm.name.c_str(), "_1NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b2on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b3on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b3off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b11on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b11off\n");
//		}
//	}
//
//
//	if (!strcmp(elm.name.c_str(), "_CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b46on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b45on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b45off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "_CHAP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a33on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a33off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b48on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b48off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b47on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b47off\n");
//		}
//	}
//
//	//
//	if (!strcmp(elm.name.c_str(), "_s12_s14"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a49on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a49off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s10_s16"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a46on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2_s10"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a45on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a45off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s4_s6"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a42on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a42off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s9"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a11on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s1_s3"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a12on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a12off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s5_s7"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("an14on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an14off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "_w1"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b31on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b31off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w2"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b32on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b32off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w3"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b26on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b26off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w4"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b28on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b28off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w5"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b22on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b22off\n");
//		}
//	}
//
//	//if (!strcmp(elm.name.c_str(), "_M3_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	//if (!strcmp(elm.name.c_str(), "_M5_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	//if (!strcmp(elm.name.c_str(), "_M6_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	
//	
//
//#pragma endregion
//#pragma region Signals
//	if (!strcmp(elm.name.c_str(), "Fider1"))
//	{
//		if (elm.elm->cur == ExCurator::Norm)
//		{
//			Disp->krb_pult_arrComm.push_back("a50off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a50on\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "Fider2"))
//	{
//		if (elm.elm->cur == ExCurator::Norm)
//		{
//			Disp->krb_pult_arrComm.push_back("a51off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a51on\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_CHD"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b50on\n");
//			//Disp->krb_pult_arrComm.push_back("off\n");
//		}
//		if(elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b50off\n");
//			//Disp->krb_pult_arrComm.push_back("b50off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("a33on\n");
//			Disp->krb_pult_arrComm.push_back("b51off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("b51on\n");
//			Disp->krb_pult_arrComm.push_back("a33off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_CH"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b44on\n");
//			//Disp->krb_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			//Disp->krb_pult_arrComm.push_back("on\n");
//			Disp->krb_pult_arrComm.push_back("b44off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("a22on\n");
//			Disp->krb_pult_arrComm.push_back("b42off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("b42on\n");
//			Disp->krb_pult_arrComm.push_back("a22off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_N"))
//	{
//		if (elm.elm->stat == EAStat::Red )
//		{
//			Disp->krb_pult_arrComm.push_back("an6on\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green )
//		{
//		
//			Disp->krb_pult_arrComm.push_back("an6off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("b4on\n");
//			Disp->krb_pult_arrComm.push_back("an7off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("an7on\n");
//			Disp->krb_pult_arrComm.push_back("b4off\n");
//		}
//	}
//	
//#pragma endregion
//
//}
//void UKarabasWidget::krb_Pult_SenderTo_LoaderTo(Pbool boo)
//{
//	if (!strcmp(boo.name.c_str(), "IR"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b41on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b41off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "Vzrez"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b39on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b39off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "RouterOtmena"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b27on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b27off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "DGA"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b23on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b23off\n");
//		}
//	}
//}

void UKarabasWidget::krb_Pult_AvariynoeOtkritiePereezda()
{
	Disp->krb_pult_arrComm.push_back("b7on\n");
	Disp->krb_pult_arrComm.push_back("b5off\n");
}
void UKarabasWidget::krb_Pult_ZakritiePereezda()
{
	Disp->krb_pult_arrComm.push_back("b7off\n");
	Disp->krb_pult_arrComm.push_back("b5on\n");
}
void UKarabasWidget::krb_Pult_DGA()
{
	if (Disp->krb.DGA == false)
	{
		SendCommToServer(Commd::DGA_true);
	}
	else
	{
		SendCommToServer(Commd::DGA_false);
	}
}

#pragma endregion