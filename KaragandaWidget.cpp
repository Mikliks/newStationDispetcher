
#include "KaragandaWidget.h"



#pragma region General Foo

void UKaragandaWidget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Karaganda, comm);
}

bool UKaragandaWidget::Initialize()
{
	Super::Initialize();

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UKaragandaWidget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_N);
	But_za_ND->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_ND);
	But_za_CH->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CHD);


	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UKaragandaWidget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UKaragandaWidget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UKaragandaWidget::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UKaragandaWidget::On_way_4);



	But_za_CH_1->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CH3);
	But_za_CH_4->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_CH4);



	But_za_N_1->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_N3);
	But_za_N_4->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_N4);



	But_za_M_1->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M6);
	But_za_M_7->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M7);
	But_za_M_8->OnClicked.AddDynamic(this, &UKaragandaWidget::Za_M8);

	But_Exit_Menu->OnClicked.AddDynamic(this, &UKaragandaWidget::ExitMenu);

	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoEven_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_4->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_w4);

	Button_TrainInfo_tupic_M_5->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_tupic_M5);
	Button_TrainInfo_tupic_M_6->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_tupic_M6);
	Button_TrainInfo_tupic_M_7->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_tupic_M7);
	Button_TrainInfo_tupic_M_8->OnClicked.AddDynamic(this, &UKaragandaWidget::CreateMenuTrainInfo_tupic_M8);


	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UKaragandaWidget::ExitMenuTrainInfo);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();



	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UKaragandaWidget::kg_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->kg_arrStr.size(); i++)
	{
		Disp->kg_arrStr[i]->cur = ExCurator::Norm;
		Disp->kg_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->kg_arrStr[i]->oper = EOper::Norm;
		Disp->kg_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->kg_arrWay.size(); i++)
	{
		Disp->kg_arrWay[i]->cur = ExCurator::Norm;
		Disp->kg_arrWay[i]->dopn = 0;
		Disp->kg_arrWay[i]->num = 0;
		Disp->kg_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->kg_arrWay[i]->oper = EOper::Norm;
		Disp->kg_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->kg_arrSvetofor.size(); i++)
	{
		Disp->kg_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->kg_arrSvetofor[i]->dopn = 0;
		Disp->kg_arrSvetofor[i]->num = 0;
		Disp->kg_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->kg_arrSvetofor[i]->oper = EOper::Norm;
		Disp->kg_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->kg._N.stat = EAStat::Red;
	Disp->kg._ND.stat = EAStat::Red;
	Disp->kg._CH.stat = EAStat::Red;
	Disp->kg._CHD.stat = EAStat::Red;


	Disp->SendDataStationToAll(Station::Karaganda);
}

void UKaragandaWidget::PrintInfo(FElm* wayInfo,
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

void UKaragandaWidget::kg_UpdateInfoStationWay()
{
	PrintInfo(&Disp->kg._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->kg._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->kg._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->kg._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);

	PrintInfo(&Disp->kg._M5_tupic, HB_LocoEven_tupic_M_5, TB_LocoEven_tupic_M_5, Button_TrainInfo_tupic_M_5, TextButton_tupic_M_5, HB_LocoOdd_tupic_M_5, TB_LocoOdd_tupic_M_5);
	PrintInfo(&Disp->kg._M6_tupic, HB_LocoEven_tupic_M_6, TB_LocoEven_tupic_M_6, Button_TrainInfo_tupic_M_6, TextButton_tupic_M_6, HB_LocoOdd_tupic_M_6, TB_LocoOdd_tupic_M_6);
	PrintInfo(&Disp->kg._M7_tupic, HB_LocoEven_tupic_M_7, TB_LocoEven_tupic_M_7, Button_TrainInfo_tupic_M_7, TextButton_tupic_M_7, HB_LocoOdd_tupic_M_7, TB_LocoOdd_tupic_M_7);
	PrintInfo(&Disp->kg._M8_tupic, HB_LocoEven_tupic_M_8, TB_LocoEven_tupic_M_8, Button_TrainInfo_tupic_M_8, TextButton_tupic_M_8, HB_LocoOdd_tupic_M_8, TB_LocoOdd_tupic_M_8);


	//#pragma region GREEN_KEYS
	//
	//#pragma region N
	//
	//	if (Disp->krz._1UPCH.stat == EAStat::Free
	//		&& Disp->krz._2UPCH.stat == EAStat::Free
	//		&& Disp->kg._2NP.stat == EAStat::Free
	//		&& Disp->kg._1NP.stat == EAStat::Free)
	//	{
	//		Disp->kg.GreenKey_N.stat = EAStat::Green;
	//	}
	//	else
	//	{
	//		Disp->kg.GreenKey_N.stat = EAStat::Red;
	//	}
	//#pragma endregion
	//#pragma region ND
	//	if (Disp->krz._1CHP.stat == EAStat::Free
	//		&& Disp->krz._2CHP.stat == EAStat::Free
	//		&& Disp->kg._2UPN.stat == EAStat::Free
	//		&& Disp->kg._1UPN.stat == EAStat::Free)
	//	{
	//		Disp->kg.GreenKey_ND.stat = EAStat::Green;
	//	}
	//	else
	//	{
	//		Disp->kg.GreenKey_ND.stat = EAStat::Red;
	//	}
	//#pragma endregion
	//#pragma region CH
	//	if (Disp->kg._1CHP.stat == EAStat::Free
	//		&& Disp->kg._2CHP.stat == EAStat::Free
	//		&& Disp->mkd._2UPN.stat == EAStat::Free
	//		&& Disp->mkd._1UPN.stat == EAStat::Free)
	//	{
	//		Disp->kg.GreenKey_CH.stat = EAStat::Green;
	//	}
	//	else
	//	{
	//		Disp->kg.GreenKey_CH.stat = EAStat::Red;
	//	}
	//
	//#pragma endregion
	//#pragma region CHD
	//	if (Disp->kg._1UPCH.stat == EAStat::Free
	//		&& Disp->kg._2UPCH.stat == EAStat::Free
	//		&& Disp->mkd._2NP.stat == EAStat::Free
	//		&& Disp->mkd._1NP.stat == EAStat::Free)
	//	{
	//		Disp->kg.GreenKey_CHD.stat = EAStat::Green;
	//	}
	//	else
	//	{
	//		Disp->kg.GreenKey_CHD.stat = EAStat::Red;
	//	}
	//
	//#pragma endregion
	//
	//
	//#pragma endregion

}


FVector2D UKaragandaWidget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}

void UKaragandaWidget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = kg_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (kg_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (kg_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (kg_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (kg_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::ND:

			if (kg_ND_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (kg_ND_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (kg_ND_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (kg_ND_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH:

			if (kg_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (kg_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (kg_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (kg_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHD:

			if (kg_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (kg_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (kg_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (kg_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (kg_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (kg_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (kg_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (kg_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:



			if (kg_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (kg_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (kg_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (kg_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:


			if (kg_M3_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (kg_M3_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (kg_M3_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (kg_M3_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:


			if (kg_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (kg_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (kg_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (kg_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::M6:

			if (Disp->kg_M6_N1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M7:

			if (Disp->kg_M7_CH1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M5:

			if (Disp->kg_M5_CH1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M8:

			if (Disp->kg_M8_N1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N_1);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;


#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (kg_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (kg_CH1_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->kg_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->kg_CH1_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			if (Disp->kg_CH1_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (Disp->kg_CH1_M7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_7);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (kg_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (kg_CH2_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->kg_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->kg_CH2_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (kg_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (kg_CH3_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->kg_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->kg_CH3_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH4:

			if (kg_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (kg_CH4_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->kg_CH4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->kg_CH4_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;





		case EdopStat::N1:

			if (kg_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (kg_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->kg_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->kg_N1_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (kg_N1_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->kg_N1_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (kg_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (kg_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->kg_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->kg_N2_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			//if (kg_N2_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (kg_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (kg_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->kg_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->kg_N3_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N4:

			if (kg_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (kg_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->kg_N4_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->kg_N4_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

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
		if (Disp->kg_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}

}


void UKaragandaWidget::CreateMenuInfo(int numTrain, int delta_X, int delta_Y)
{
#pragma region Body

	FVector2D menuPos = FVector2D(300, 200);
	GetWorld()->GetGameViewport()->GetMousePosition(menuPos);
	menuPos = FVector2D(menuPos.X + 100+delta_X, menuPos.Y + 300+delta_Y);
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

void UKaragandaWidget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->kg._w1.num);

}

void UKaragandaWidget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->kg._w2.num);
}

void UKaragandaWidget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->kg._w3.num);
}

void UKaragandaWidget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->kg._w4.num);
}

void UKaragandaWidget::CreateMenuTrainInfo_tupic_M5()
{
	CreateMenuInfo(Disp->kg._M5_tupic.num,200);
}
void UKaragandaWidget::CreateMenuTrainInfo_tupic_M6()
{
	CreateMenuInfo(Disp->kg._M6_tupic.num);
}
void UKaragandaWidget::CreateMenuTrainInfo_tupic_M7()
{
	CreateMenuInfo(Disp->kg._M7_tupic.num,200);
}
void UKaragandaWidget::CreateMenuTrainInfo_tupic_M8()
{
	CreateMenuInfo(Disp->kg._M8_tupic.num);
}

void UKaragandaWidget::ExitMenuTrainInfo()
{
	//SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
}


void UKaragandaWidget::ExitMenu()
{
	kg_Make_Strelka_UnRedact();
	kg_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}


#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UKaragandaWidget::OtmenaOneRouter()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	if (com != Commd::NotDef) SendCommToServer(com);

	ExitMenu();
}

void UKaragandaWidget::Za_N()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_N_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_N_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_ND()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganda, Direction::EVEN)) return;


	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_ND_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_ND_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_ND_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_ND_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_CH()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CH_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CH_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_CHD()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganda, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CHD_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CHD_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CHD_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CHD_Create);



	ExitMenu();
}

void UKaragandaWidget::On_way_1()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_1P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_1P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_1P_Create);


	ExitMenu();
}
void UKaragandaWidget::On_way_2()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_2P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_2P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_2P_Create);


	ExitMenu();
}
void UKaragandaWidget::On_way_3()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_3P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_3P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_3P_Create);


	ExitMenu();
}
void UKaragandaWidget::On_way_4()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_4P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_4P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_4P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_4P_Create);


	ExitMenu();
}

void UKaragandaWidget::Za_CH1()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH1_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH1_Create);
	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_CH1_Create);
	if (dopstat == EdopStat::M7)  SendCommToServer(Commd::M7_CH1_Create);

	ExitMenu();

}
void UKaragandaWidget::Za_CH2()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH2_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH2_Create);

	ExitMenu();
}
void UKaragandaWidget::Za_CH3()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH3_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH3_Create);

	ExitMenu();
}
void UKaragandaWidget::Za_CH4()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH4_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH4_Create);

	ExitMenu();
}

void UKaragandaWidget::Za_N1()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N1_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N1_Create);
	if (dopstat == EdopStat::M8)  SendCommToServer(Commd::M8_N1_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_N2()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N2_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N2_Create);


	ExitMenu();
}
void UKaragandaWidget::Za_N3()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N3_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_N4()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N4_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N4_Create);


	ExitMenu();
}

void UKaragandaWidget::Za_M1()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M1_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_M2()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M2_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_M3()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M3_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M3_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M3_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M3_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_M4()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M4_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M4_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M4_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M4_Create);



	ExitMenu();
}
void UKaragandaWidget::Za_M5()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();
	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M5_Create);

	ExitMenu();
}
void UKaragandaWidget::Za_M6()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M6_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M6_Create);

	ExitMenu();
}
void UKaragandaWidget::Za_M7()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M7_Create);

	ExitMenu();
}
void UKaragandaWidget::Za_M8()
{
	EdopStat dopstat = kg_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M8_Create);


	ExitMenu();
}
#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N
bool UKaragandaWidget::kg_N_1P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N_1P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_N_2P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N_2P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_N_3P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N_3P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_N_4P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N_4P.IsFree()) return  false;
	return true;
}



#pragma endregion
#pragma region from ND
bool UKaragandaWidget::kg_ND_1P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_ND_1P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_ND_2P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_ND_2P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_ND_3P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_ND_3P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_ND_4P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_ND_4P.IsFree()) return  false;
	return true;
}



#pragma endregion
#pragma region from CH
bool UKaragandaWidget::kg_CH_1P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH_1P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CH_2P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH_2P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CH_3P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH_3P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CH_4P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH_4P.IsFree()) return  false;
	return true;
}


#pragma endregion
#pragma region from CHD
bool UKaragandaWidget::kg_CHD_1P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CHD_1P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CHD_2P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CHD_2P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CHD_3P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CHD_3P.IsFree()) return  false;
	return true;
}
bool UKaragandaWidget::kg_CHD_4P_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CHD_4P.IsFree()) return  false;
	return true;
}


#pragma endregion

#pragma region from M1
bool UKaragandaWidget::kg_M1_CH1_CheckPossCreate()
{
	if (Disp->kg._w1.stat == EAStat::Free)
	{
		if (Disp->kg_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->kg._w1.stat == EAStat::Busy)
	{
		if (Disp->kg_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M1_CH2_CheckPossCreate()
{
	if (Disp->kg._w2.stat == EAStat::Free)
	{
		if (Disp->kg_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->kg._w2.stat == EAStat::Busy)
	{
		if (Disp->kg_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M1_CH3_CheckPossCreate()
{
	if (Disp->kg._w3.stat == EAStat::Free)
	{
		if (Disp->kg_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->kg._w3.stat == EAStat::Busy)
	{
		if (Disp->kg_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M1_CH4_CheckPossCreate()
{
	if (Disp->kg._w4.stat == EAStat::Free)
	{
		if (Disp->kg_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->kg._w4.stat == EAStat::Busy)
	{
		if (Disp->kg_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M2
bool UKaragandaWidget::kg_M2_N1_CheckPossCreate()
{
	if (Disp->kg._w1.stat == EAStat::Free)
	{
		if (Disp->kg_M2_N1.IsFree()) return  true;
	}
	else if (Disp->kg._w1.stat == EAStat::Busy)
	{
		if (Disp->kg_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M2_N2_CheckPossCreate()
{
	if (Disp->kg._w2.stat == EAStat::Free)
	{
		if (Disp->kg_M2_N2.IsFree()) return  true;
	}
	else if (Disp->kg._w2.stat == EAStat::Busy)
	{
		if (Disp->kg_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M2_N3_CheckPossCreate()
{
	if (Disp->kg._w3.stat == EAStat::Free)
	{
		if (Disp->kg_M2_N3.IsFree()) return  true;
	}
	else if (Disp->kg._w3.stat == EAStat::Busy)
	{
		if (Disp->kg_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M2_N4_CheckPossCreate()
{
	if (Disp->kg._w4.stat == EAStat::Free)
	{
		if (Disp->kg_M2_N4.IsFree()) return  true;
	}
	else if (Disp->kg._w4.stat == EAStat::Busy)
	{
		if (Disp->kg_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}



#pragma endregion
#pragma region from M3
bool UKaragandaWidget::kg_M3_CH1_CheckPossCreate()
{
	if (Disp->kg._w1.stat == EAStat::Free)
	{
		if (Disp->kg_M3_CH1.IsFree()) return  true;
	}
	else if (Disp->kg._w1.stat == EAStat::Busy)
	{
		if (Disp->kg_M3_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M3_CH2_CheckPossCreate()
{
	if (Disp->kg._w2.stat == EAStat::Free)
	{
		if (Disp->kg_M3_CH2.IsFree()) return  true;
	}
	else if (Disp->kg._w2.stat == EAStat::Busy)
	{
		if (Disp->kg_M3_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M3_CH3_CheckPossCreate()
{
	if (Disp->kg._w3.stat == EAStat::Free)
	{
		if (Disp->kg_M3_CH3.IsFree()) return  true;
	}
	else if (Disp->kg._w3.stat == EAStat::Busy)
	{
		if (Disp->kg_M3_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M3_CH4_CheckPossCreate()
{
	if (Disp->kg._w4.stat == EAStat::Free)
	{
		if (Disp->kg_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->kg._w4.stat == EAStat::Busy)
	{
		if (Disp->kg_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M4
bool UKaragandaWidget::kg_M4_N1_CheckPossCreate()
{
	if (Disp->kg._w1.stat == EAStat::Free)
	{
		if (Disp->kg_M4_N1.IsFree()) return  true;
	}
	else if (Disp->kg._w1.stat == EAStat::Busy)
	{
		if (Disp->kg_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M4_N2_CheckPossCreate()
{
	if (Disp->kg._w2.stat == EAStat::Free)
	{
		if (Disp->kg_M4_N2.IsFree()) return  true;
	}
	else if (Disp->kg._w2.stat == EAStat::Busy)
	{
		if (Disp->kg_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M4_N3_CheckPossCreate()
{
	if (Disp->kg._w3.stat == EAStat::Free)
	{
		if (Disp->kg_M4_N3.IsFree()) return  true;
	}
	else if (Disp->kg._w3.stat == EAStat::Busy)
	{
		if (Disp->kg_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaragandaWidget::kg_M4_N4_CheckPossCreate()
{
	if (Disp->kg._w4.stat == EAStat::Free)
	{
		if (Disp->kg_M4_N4.IsFree()) return  true;
	}
	else if (Disp->kg._w4.stat == EAStat::Busy)
	{
		if (Disp->kg_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion

#pragma region from M6
bool UKaragandaWidget::kg_M6_N1_CheckPossCreate()
{
	if (Disp->kg._w1.stat == EAStat::Free)
	{
		if (Disp->kg_M6_N1.IsFree()) return  true;
	}
	else if (Disp->kg._w1.stat == EAStat::Busy)
	{
		if (Disp->kg_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion

#pragma region from CH1
bool UKaragandaWidget::kg_CH1_M1_CheckPossCreate()
{
	if (!Disp->kg_CH1_M1.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH1_M3_CheckPossCreate()
{
	if (!Disp->kg_CH1_M3.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH1_N_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH1_N.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH1_ND_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH1_ND.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH2
bool UKaragandaWidget::kg_CH2_M1_CheckPossCreate()
{
	if (!Disp->kg_CH2_M1.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH2_M3_CheckPossCreate()
{
	if (!Disp->kg_CH2_M3.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH2_N_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH2_N.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH2_ND_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH2_ND.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH3
bool UKaragandaWidget::kg_CH3_M1_CheckPossCreate()
{
	if (!Disp->kg_CH3_M1.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH3_M3_CheckPossCreate()
{
	if (!Disp->kg_CH3_M3.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH3_N_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH3_N.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH3_ND_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH3_ND.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH4
bool UKaragandaWidget::kg_CH4_M1_CheckPossCreate()
{
	if (!Disp->kg_CH4_M1.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH4_M3_CheckPossCreate()
{
	if (!Disp->kg_CH4_M3.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH4_N_CheckPossCreate()
{
	if (Disp->kg.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH4_N.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_CH4_ND_CheckPossCreate()
{
	if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->kg_CH4_ND.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion


#pragma region from N1
bool UKaragandaWidget::kg_N1_M2_CheckPossCreate()
{
	if (!Disp->kg_N1_M2.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N1_M4_CheckPossCreate()
{
	if (!Disp->kg_N1_M4.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N1_M6_CheckPossCreate()
{
	if (!Disp->kg_N1_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UKaragandaWidget::kg_N1_CH_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N1_CH.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N1_CHD_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N1_CHD.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N2
bool UKaragandaWidget::kg_N2_M2_CheckPossCreate()
{
	if (!Disp->kg_N2_M2.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N2_M4_CheckPossCreate()
{
	if (!Disp->kg_N2_M4.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N2_M6_CheckPossCreate()
{
	if (!Disp->kg_N2_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UKaragandaWidget::kg_N2_CH_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N2_CH.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N2_CHD_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N2_CHD.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N3
bool UKaragandaWidget::kg_N3_M2_CheckPossCreate()
{
	if (!Disp->kg_N3_M2.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N3_M4_CheckPossCreate()
{
	if (!Disp->kg_N3_M4.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UKaragandaWidget::kg_N3_CH_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N3_CH.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N3_CHD_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N3_CHD.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N4
bool UKaragandaWidget::kg_N4_M2_CheckPossCreate()
{
	if (!Disp->kg_N4_M2.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N4_M4_CheckPossCreate()
{
	if (!Disp->kg_N4_M4.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UKaragandaWidget::kg_N4_CH_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N4_CH.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaragandaWidget::kg_N4_CHD_CheckPossCreate()
{
	if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->kg_N4_CHD.IsManevrFreeToBusyWay()) return  false;
	if (Disp->kg._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion



#pragma endregion


FElm* UKaragandaWidget::kg_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}

//Router* UKaragandaWidget::kg_GetReadyRouter(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		if (Disp->kg._N.stat == EAStat::Green)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::N) return &Disp->kg_N_1P;
//			if (Disp->kg._w2.dopstat == EdopStat::N) return &Disp->kg_N_2P;
//			if (Disp->kg._w3.dopstat == EdopStat::N) return &Disp->kg_N_3P;
//			if (Disp->kg._w4.dopstat == EdopStat::N) return &Disp->kg_N_4P;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::ND)
//	{
//		if (Disp->kg._ND.stat == EAStat::Green)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::ND) return &Disp->kg_ND_1P;
//			if (Disp->kg._w2.dopstat == EdopStat::ND) return &Disp->kg_ND_2P;
//			if (Disp->kg._w3.dopstat == EdopStat::ND) return &Disp->kg_ND_3P;
//			if (Disp->kg._w4.dopstat == EdopStat::ND) return &Disp->kg_ND_4P;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::CH)
//	{
//		if (Disp->kg._CH.stat == EAStat::Green)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::CH) return &Disp->kg_CH_1P;
//			if (Disp->kg._w2.dopstat == EdopStat::CH) return &Disp->kg_CH_2P;
//			if (Disp->kg._w3.dopstat == EdopStat::CH) return &Disp->kg_CH_3P;
//			if (Disp->kg._w4.dopstat == EdopStat::CH) return &Disp->kg_CH_4P;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::CHD)
//	{
//		if (Disp->kg._CHD.stat == EAStat::Green)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::CHD) return &Disp->kg_CHD_1P;
//			if (Disp->kg._w2.dopstat == EdopStat::CHD) return &Disp->kg_CHD_2P;
//			if (Disp->kg._w3.dopstat == EdopStat::CHD) return &Disp->kg_CHD_3P;
//			if (Disp->kg._w4.dopstat == EdopStat::CHD) return &Disp->kg_CHD_4P;
//
//
//		}
//
//	}
//
//
//	else if (dopstat == EdopStat::M1)
//	{
//		if (Disp->kg._M1.stat == EAStat::White)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::M1) return &Disp->kg_M1_CH1;
//			if (Disp->kg._w2.dopstat == EdopStat::M1) return &Disp->kg_M1_CH2;
//			if (Disp->kg._w3.dopstat == EdopStat::M1) return &Disp->kg_M1_CH3;
//			if (Disp->kg._w4.dopstat == EdopStat::M1) return &Disp->kg_M1_CH4;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M2)
//	{
//		if (Disp->kg._M2.stat == EAStat::White)
//		{
//
//
//
//			if (Disp->kg._w1.dopstat == EdopStat::M2) return &Disp->kg_M2_N1;
//			if (Disp->kg._w2.dopstat == EdopStat::M2) return &Disp->kg_M2_N2;
//			if (Disp->kg._w3.dopstat == EdopStat::M2) return &Disp->kg_M2_N3;
//			if (Disp->kg._w4.dopstat == EdopStat::M2) return &Disp->kg_M2_N4;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M3)
//	{
//		if (Disp->kg._M3.stat == EAStat::White)
//		{
//			if (Disp->kg._w1.dopstat == EdopStat::M3) return &Disp->kg_M3_CH1;
//			if (Disp->kg._w2.dopstat == EdopStat::M3) return &Disp->kg_M3_CH2;
//			if (Disp->kg._w3.dopstat == EdopStat::M3) return &Disp->kg_M3_CH3;
//			if (Disp->kg._w4.dopstat == EdopStat::M3) return &Disp->kg_M3_CH4;
//
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M4)
//	{
//		if (Disp->kg._M4.stat == EAStat::White)
//		{
//
//
//
//			if (Disp->kg._w1.dopstat == EdopStat::M4) return &Disp->kg_M4_N1;
//			if (Disp->kg._w2.dopstat == EdopStat::M4) return &Disp->kg_M4_N2;
//			if (Disp->kg._w3.dopstat == EdopStat::M4) return &Disp->kg_M4_N3;
//			if (Disp->kg._w4.dopstat == EdopStat::M4) return &Disp->kg_M4_N4;
//
//
//		}
//
//	}
//
//	else if (dopstat == EdopStat::M6)
//	{
//		if (Disp->kg._M6.stat == EAStat::White)
//		{
//
//			if (Disp->kg._w1.dopstat == EdopStat::M6) return &Disp->kg_M6_N1;
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M8)
//	{
//		if (Disp->kg._M8.stat == EAStat::White)
//		{
//
//			if (Disp->kg._w1.dopstat == EdopStat::M8) return &Disp->kg_M8_N1;
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M5)
//	{
//		if (Disp->kg._M5.stat == EAStat::White)
//		{
//
//			if (Disp->kg._w1.dopstat == EdopStat::M5) return &Disp->kg_M5_CH1;
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M7)
//	{
//		if (Disp->kg._M7.stat == EAStat::White)
//		{
//
//			if (Disp->kg._w1.dopstat == EdopStat::M7) return &Disp->kg_M7_CH1;
//
//		}
//
//	}
//
//	else if (dopstat == EdopStat::CH1)
//	{
//		if (Disp->kg._CH1.stat == EAStat::White)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH1) return &Disp->kg_CH1_M1;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH1) return &Disp->kg_CH1_M3;
//			if (Disp->kg._M5_tupic.dopstat == EdopStat::CH1) return &Disp->kg_CH1_M5;
//			if (Disp->kg._M7_tupic.dopstat == EdopStat::CH1) return &Disp->kg_CH1_M7;
//
//		}
//		if (Disp->kg._CH1.stat == EAStat::Green)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH1) return &Disp->kg_CH1_N;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH1) return &Disp->kg_CH1_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH2)
//	{
//		if (Disp->kg._CH2.stat == EAStat::White)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH2) return &Disp->kg_CH2_M1;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH2) return &Disp->kg_CH2_M3;
//		}
//		if (Disp->kg._CH2.stat == EAStat::Green)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH2) return &Disp->kg_CH2_N;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH2) return &Disp->kg_CH2_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH3)
//	{
//		if (Disp->kg._CH3.stat == EAStat::White)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH3) return &Disp->kg_CH3_M1;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH3) return &Disp->kg_CH3_M3;
//		}
//		if (Disp->kg._CH3.stat == EAStat::Green)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH3) return &Disp->kg_CH3_N;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH3) return &Disp->kg_CH3_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH4)
//	{
//		if (Disp->kg._CH4.stat == EAStat::White)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH4) return &Disp->kg_CH4_M1;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH4) return &Disp->kg_CH4_M3;
//		}
//		if (Disp->kg._CH4.stat == EAStat::Green)
//		{
//			if (Disp->kg._NP.dopstat == EdopStat::CH4) return &Disp->kg_CH4_N;
//			if (Disp->kg._NAP.dopstat == EdopStat::CH4) return &Disp->kg_CH4_ND;
//		}
//	}
//
//
//
//	else if (dopstat == EdopStat::N1)
//	{
//		if (Disp->kg._N1.stat == EAStat::White)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N1) return &Disp->kg_N1_M2;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N1) return &Disp->kg_N1_M4;
//			if (Disp->kg._M6_tupic.dopstat == EdopStat::N1) return &Disp->kg_N1_M6;
//			if (Disp->kg._M8_tupic.dopstat == EdopStat::N1) return &Disp->kg_N1_M8;
//		}
//		if (Disp->kg._N1.stat == EAStat::Green)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N1) return &Disp->kg_N1_CH;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N1) return &Disp->kg_N1_CHD;
//
//		}
//	}
//	else if (dopstat == EdopStat::N2)
//	{
//		if (Disp->kg._N2.stat == EAStat::White)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N2) return &Disp->kg_N2_M2;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N2) return &Disp->kg_N2_M4;
//			if (Disp->kg._M6_tupic.dopstat == EdopStat::N2) return &Disp->kg_N2_M6;
//
//		}
//		if (Disp->kg._N2.stat == EAStat::Green)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N2) return &Disp->kg_N2_CH;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N2) return &Disp->kg_N2_CHD;
//
//		}
//	}
//	else if (dopstat == EdopStat::N3)
//	{
//		if (Disp->kg._N3.stat == EAStat::White)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N3) return &Disp->kg_N3_M2;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N3) return &Disp->kg_N3_M4;
//
//
//		}
//		if (Disp->kg._N3.stat == EAStat::Green)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N3) return &Disp->kg_N3_CH;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N3) return &Disp->kg_N3_CHD;
//
//		}
//	}
//	else if (dopstat == EdopStat::N4)
//	{
//		if (Disp->kg._N4.stat == EAStat::White)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N4) return &Disp->kg_N4_M2;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N4) return &Disp->kg_N4_M4;
//
//
//		}
//		if (Disp->kg._N4.stat == EAStat::Green)
//		{
//			if (Disp->kg._CHP.dopstat == EdopStat::N4) return &Disp->kg_N4_CH;
//			if (Disp->kg._CHAP.dopstat == EdopStat::N4) return &Disp->kg_N4_CHD;
//
//		}
//	}
//
//
//
//
//	return nullptr;
//}

void UKaragandaWidget::kg_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganda);
}

#pragma endregion

#pragma region Strelki

int UKaragandaWidget::kg_Make_Strelka_Redact(int number)
{
	if (number == 1) RedactStrelka = &Disp->kg._str1;
	else if (number == 2) RedactStrelka = &Disp->kg._str2;
	else if (number == 3) RedactStrelka = &Disp->kg._str3;
	else if (number == 4) RedactStrelka = &Disp->kg._str4;
	else if (number == 5) RedactStrelka = &Disp->kg._str5;
	else if (number == 6) RedactStrelka = &Disp->kg._str6;
	else if (number == 7) RedactStrelka = &Disp->kg._str7;
	else if (number == 8) RedactStrelka = &Disp->kg._str8;

	else if (number == 11) RedactStrelka = &Disp->kg._str11;

	else if (number == 13) RedactStrelka = &Disp->kg._str13;
	else if (number == 14) RedactStrelka = &Disp->kg._str14;

	else if (number == 16) RedactStrelka = &Disp->kg._str16;

	else if (number == 18) RedactStrelka = &Disp->kg._str18;

	else if (number == 15) RedactStrelka = &Disp->kg._str15;
	else if (number == 17) RedactStrelka = &Disp->kg._str17;
	else if (number == 20) RedactStrelka = &Disp->kg._str20;

	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->kg_arrStr.size(); i++)
	{
		if (Disp->kg_arrStr[i]->num == number) return number;
	}
	return 0;
}
void UKaragandaWidget::kg_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;
}
void UKaragandaWidget::kg_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->kg._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->kg._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->kg._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->kg._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->kg._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->kg._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->kg._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->kg._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->kg._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->kg._str13) SendCommToServer(Commd::s13_Minus);
	if (RedactStrelka == &Disp->kg._str14) SendCommToServer(Commd::s14_Minus);
	if (RedactStrelka == &Disp->kg._str16) SendCommToServer(Commd::s16_Minus);
	if (RedactStrelka == &Disp->kg._str18) SendCommToServer(Commd::s18_Minus);

	if (RedactStrelka == &Disp->kg._str15) SendCommToServer(Commd::s15_Minus);
	if (RedactStrelka == &Disp->kg._str17) SendCommToServer(Commd::s17_Minus);
	if (RedactStrelka == &Disp->kg._str20) SendCommToServer(Commd::s20_Minus);

	kg_Make_Strelka_UnRedact();
}
void UKaragandaWidget::kg_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->kg._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->kg._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->kg._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->kg._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->kg._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->kg._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->kg._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->kg._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->kg._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->kg._str13) SendCommToServer(Commd::s13_Plus);
	if (RedactStrelka == &Disp->kg._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->kg._str16) SendCommToServer(Commd::s16_Plus);
	if (RedactStrelka == &Disp->kg._str18) SendCommToServer(Commd::s18_Plus);

	if (RedactStrelka == &Disp->kg._str15) SendCommToServer(Commd::s15_Plus);
	if (RedactStrelka == &Disp->kg._str17) SendCommToServer(Commd::s17_Plus);
	if (RedactStrelka == &Disp->kg._str20) SendCommToServer(Commd::s20_Plus);

	kg_Make_Strelka_UnRedact();
}
void UKaragandaWidget::kg_RedactStrelkaToBreak()
{

	RedactStrelka->cur = ExCurator::NotControl;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UKaragandaWidget::kg_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UKaragandaWidget::kg_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UKaragandaWidget::kg_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->kg_arrStr.size(); i++)
	{
		Disp->kg_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karaganda);
}

#pragma endregion

#pragma region Svetofori

void UKaragandaWidget::kg_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->kg._N;
	else if (dopstat == EdopStat::ND) RedactSvetofor = &Disp->kg._ND;
	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->kg._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->kg._CHD;

	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->kg._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->kg._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->kg._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->kg._M4;

	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->kg._M6;

	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->kg._M5;
	else if (dopstat == EdopStat::M7) RedactSvetofor = &Disp->kg._M7;
	else if (dopstat == EdopStat::M8) RedactSvetofor = &Disp->kg._M8;


	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->kg._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->kg._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->kg._CH3;
	else if (dopstat == EdopStat::CH4) RedactSvetofor = &Disp->kg._CH4;



	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->kg._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->kg._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->kg._N3;
	else if (dopstat == EdopStat::N4) RedactSvetofor = &Disp->kg._N4;




}
EdopStat UKaragandaWidget::kg_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->kg._N) return EdopStat::N;
	else if (RedactSvetofor == &Disp->kg._ND) return EdopStat::ND;
	else if (RedactSvetofor == &Disp->kg._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->kg._CHD) return EdopStat::CHD;


	else if (RedactSvetofor == &Disp->kg._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->kg._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->kg._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->kg._M4) return EdopStat::M4;

	else if (RedactSvetofor == &Disp->kg._M6) return EdopStat::M6;

	else if (RedactSvetofor == &Disp->kg._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->kg._M7) return EdopStat::M7;
	else if (RedactSvetofor == &Disp->kg._M8) return EdopStat::M8;



	else if (RedactSvetofor == &Disp->kg._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->kg._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->kg._CH3) return EdopStat::CH3;
	else if (RedactSvetofor == &Disp->kg._CH4) return EdopStat::CH4;




	else if (RedactSvetofor == &Disp->kg._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->kg._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->kg._N3) return EdopStat::N3;
	else if (RedactSvetofor == &Disp->kg._N4) return EdopStat::N4;


	else return EdopStat::Norm;

}
bool UKaragandaWidget::kg_IsRedactSvetoforFree()
{
	if (RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;

	return false;
}

void UKaragandaWidget::kg_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UKaragandaWidget::kg_BrokenSvetoforMake(ExCurator cur)
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
	kg_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UKaragandaWidget::kg_RedactSvetofor_Remont()
{
	RedactSvetofor->cur = ExCurator::Norm;
	kg_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda);
}
void UKaragandaWidget::kg_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->kg_arrSvetofor.size(); i++)
	{
		Disp->kg_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::Karaganda);
}


#pragma endregion

#pragma region Signals
void UKaragandaWidget::kg_RazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		if (Disp->kg.GreenKey_N.stat == EAStat::Green)
		{
			if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left)
			{
				Disp->kg.GreenKey_N.dopstat = EdopStat::Right;
				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->kg.GreenKey_N.dopstat = EdopStat::Left;
				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Karaganda);
		}
	}
	if (dopstat == EdopStat::ND)
	{
		if (Disp->kg.GreenKey_ND.stat == EAStat::Green)
		{
			if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left)
			{
				Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
				Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
				Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Karaganda);
		}
	}
	if (dopstat == EdopStat::CH)
	{
		if (Disp->kg.GreenKey_CH.stat == EAStat::Green)
		{
			if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left)
			{
				Disp->kg.GreenKey_CH.dopstat = EdopStat::Right;
				Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->kg.GreenKey_CH.dopstat = EdopStat::Left;
				Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Karaganda);
		}
	}
	if (dopstat == EdopStat::CHD)
	{
		if (Disp->kg.GreenKey_CHD.stat == EAStat::Green)
		{
			if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left)
			{
				Disp->kg.GreenKey_CHD.dopstat = EdopStat::Right;
				Disp->kg.GreenKey_N.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->kg.GreenKey_CHD.dopstat = EdopStat::Left;
				Disp->kg.GreenKey_N.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Karaganda);
		}
	}

}
void UKaragandaWidget::kg_VspomogatRazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{

		if (Disp->kg.GreenKey_N.dopstat == EdopStat::Left)
		{
			Disp->kg.GreenKey_N.dopstat = EdopStat::Right;
			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->kg.GreenKey_N.dopstat = EdopStat::Left;
			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Karaganda);

	}
	if (dopstat == EdopStat::ND)
	{

		if (Disp->kg.GreenKey_ND.dopstat == EdopStat::Left)
		{
			Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
			Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
			Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Karaganda);

	}
	if (dopstat == EdopStat::CH)
	{

		if (Disp->kg.GreenKey_CH.dopstat == EdopStat::Left)
		{
			Disp->kg.GreenKey_CH.dopstat = EdopStat::Right;
			Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->kg.GreenKey_CH.dopstat = EdopStat::Left;
			Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Karaganda);

	}
	if (dopstat == EdopStat::CHD)
	{

		if (Disp->kg.GreenKey_CHD.dopstat == EdopStat::Left)
		{
			Disp->kg.GreenKey_CHD.dopstat = EdopStat::Right;
			Disp->kg.GreenKey_N.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->kg.GreenKey_CHD.dopstat = EdopStat::Left;
			Disp->kg.GreenKey_N.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Karaganda);

	}

}

#pragma endregion