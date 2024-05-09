// Fill out your copyright notice in the Description page of Project Settings.


#include "MaykudukWidget.h"
//#include "Components/Button.h"
//#include "Components/VerticalBox.h"
//#include "Components/SizeBox.h"
//#include "Components/TextBlock.h"
//#include "Components/Border.h"
//#include "Components/Image.h"
//#include "Kismet/GameplayStatics.h"
//#include "Widgets/Text/STextBlock.h"


#pragma region General Foo

void UMaykudukWidget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Maykuduk, comm);
}

bool UMaykudukWidget::Initialize()
{
	Super::Initialize();

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UMaykudukWidget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N);
	But_za_ND->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_ND);
	But_za_CH->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CHD);


	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_4);
	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_5);
	But_poezd_on_way_6->OnClicked.AddDynamic(this, &UMaykudukWidget::On_way_6);


	But_za_CH_1->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH3);
	But_za_CH_4->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH4);
	But_za_CH_5->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH5);
	But_za_CH_6->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_CH6);


	But_za_N_1->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N3);
	But_za_N_4->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N4);
	But_za_N_5->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N5);
	But_za_N_6->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_N6);


	But_za_M_1->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M6);
	But_za_M_7->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M7);
	But_za_M_8->OnClicked.AddDynamic(this, &UMaykudukWidget::Za_M8);



	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_6->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_6->SetVisibility(ESlateVisibility::Hidden);



	HB_LocoOdd_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoEven_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_4->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_6->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_8->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_7->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_way_6->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_w6);


	Button_TrainInfo_tupic_M_5->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_tupic_M5);
	Button_TrainInfo_tupic_M_6->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_tupic_M6);
	Button_TrainInfo_tupic_M_7->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_tupic_M7);
	Button_TrainInfo_tupic_M_8->OnClicked.AddDynamic(this, &UMaykudukWidget::CreateMenuTrainInfo_tupic_M8);

	
	But_Exit_Menu->OnClicked.AddDynamic(this, &UMaykudukWidget::ExitMenu);
	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UMaykudukWidget::ExitMenuTrainInfo);
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();


	

	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UMaykudukWidget::mkd_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->mkd_arrStr.size(); i++)
	{
		Disp->mkd_arrStr[i]->cur = ExCurator::Norm;
		Disp->mkd_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->mkd_arrStr[i]->oper = EOper::Norm;
		Disp->mkd_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->mkd_arrWay.size(); i++)
	{
		Disp->mkd_arrWay[i]->cur = ExCurator::Norm;
		Disp->mkd_arrWay[i]->dopn = 0;
		Disp->mkd_arrWay[i]->num = 0;
		Disp->mkd_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->mkd_arrWay[i]->oper = EOper::Norm;
		Disp->mkd_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->mkd_arrSvetofor.size(); i++)
	{
		Disp->mkd_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->mkd_arrSvetofor[i]->dopn = 0;
		Disp->mkd_arrSvetofor[i]->num = 0;
		Disp->mkd_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->mkd_arrSvetofor[i]->oper = EOper::Norm;
		Disp->mkd_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->mkd._N.stat = EAStat::Red;
	Disp->mkd._ND.stat = EAStat::Red;
	Disp->mkd._CH.stat = EAStat::Red;
	Disp->mkd._CHD.stat = EAStat::Red;


	Disp->SendDataStationToAll(Station::Maykuduk);
}

void UMaykudukWidget::PrintInfo(FElm* wayInfo,
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


void UMaykudukWidget::mkd_UpdateInfoStationWay()
{
	PrintInfo(&Disp->mkd._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->mkd._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->mkd._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->mkd._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->mkd._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);
	PrintInfo(&Disp->mkd._w6, HB_LocoEven_way_6, TB_LocoEven_way_6, Button_TrainInfo_way_6, TextButton_way_6, HB_LocoOdd_way_6, TB_LocoOdd_way_6);

	PrintInfo(&Disp->mkd._M5_tupic, HB_LocoEven_tupic_M_5, TB_LocoEven_tupic_M_5, Button_TrainInfo_tupic_M_5, TextButton_tupic_M_5, HB_LocoOdd_tupic_M_5, TB_LocoOdd_tupic_M_5);
	PrintInfo(&Disp->mkd._M6_tupic, HB_LocoEven_tupic_M_6, TB_LocoEven_tupic_M_6, Button_TrainInfo_tupic_M_6, TextButton_tupic_M_6, HB_LocoOdd_tupic_M_6, TB_LocoOdd_tupic_M_6);
	PrintInfo(&Disp->mkd._M7_tupic, HB_LocoEven_tupic_M_7, TB_LocoEven_tupic_M_7, Button_TrainInfo_tupic_M_7, TextButton_tupic_M_7, HB_LocoOdd_tupic_M_7, TB_LocoOdd_tupic_M_7);
	PrintInfo(&Disp->mkd._M8_tupic, HB_LocoEven_tupic_M_8, TB_LocoEven_tupic_M_8, Button_TrainInfo_tupic_M_8, TextButton_tupic_M_8, HB_LocoOdd_tupic_M_8, TB_LocoOdd_tupic_M_8);
	
//#pragma region GREEN_KEYS
//
//#pragma region N
//
//	if (Disp->kg._1UPCH.stat == EAStat::Free
//		&& Disp->kg._2UPCH.stat == EAStat::Free
//		&& Disp->mkd._2NP.stat == EAStat::Free
//		&& Disp->mkd._1NP.stat == EAStat::Free)
//	{
//		Disp->mkd.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->mkd.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region ND
//	if (Disp->kg._1CHP.stat == EAStat::Free
//		&& Disp->kg._2CHP.stat == EAStat::Free
//		&& Disp->mkd._2UPN.stat == EAStat::Free
//		&& Disp->mkd._1UPN.stat == EAStat::Free)
//	{
//		Disp->mkd.GreenKey_ND.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->mkd.GreenKey_ND.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region CH
//	if (Disp->mkd._1CHP.stat == EAStat::Free
//		&& Disp->mkd._2CHP.stat == EAStat::Free
//		&& Disp->gk._2UPN.stat == EAStat::Free
//		&& Disp->gk._1UPN.stat == EAStat::Free)
//	{
//		Disp->mkd.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->mkd.GreenKey_CH.stat = EAStat::Red;
//	}
//
//#pragma endregion
//#pragma region CHD
//	if (Disp->mkd._1UPCH.stat == EAStat::Free
//		&& Disp->mkd._2UPCH.stat == EAStat::Free
//		&& Disp->gk._2NP.stat == EAStat::Free
//		&& Disp->gk._1NP.stat == EAStat::Free)
//	{
//		Disp->mkd.GreenKey_CHD.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->mkd.GreenKey_CHD.stat = EAStat::Red;
//	}
//
//#pragma endregion
//
//
//#pragma endregion

}



FVector2D UMaykudukWidget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}
void UMaykudukWidget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = mkd_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (mkd_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (mkd_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (mkd_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (mkd_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (mkd_N_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (mkd_N_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::ND:

			if (mkd_ND_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (mkd_ND_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (mkd_ND_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (mkd_ND_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (mkd_ND_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (mkd_ND_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH:

			if (mkd_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (mkd_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (mkd_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (mkd_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (mkd_CH_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (mkd_CH_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHD:

			if (mkd_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (mkd_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (mkd_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (mkd_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (mkd_CHD_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (mkd_CHD_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (mkd_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (mkd_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (mkd_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (mkd_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (mkd_M1_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (mkd_M1_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:



			if (mkd_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (mkd_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (mkd_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (mkd_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (mkd_M2_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (mkd_M2_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:


			if (mkd_M3_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (mkd_M3_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (mkd_M3_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (mkd_M3_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (mkd_M3_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (mkd_M3_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:

		
			if (mkd_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (mkd_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (mkd_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (mkd_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (mkd_M4_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (mkd_M4_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M5:

			if (Disp->mkd_M5_CH5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (Disp->mkd_M5_CH6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M6:

			if (mkd_M6_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (mkd_M6_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M7:

			if (Disp->mkd_M7_CH1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CH_1);
			

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M8:

			if (Disp->mkd_M8_N6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N_6);


			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (Disp->mkd_CH1_M7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_7);
			if (mkd_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH1_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH1_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (mkd_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH2_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH2_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (mkd_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH3_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH3_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH4:

			if (mkd_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH4_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH4_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH5:

			if (mkd_CH5_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH5_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH5_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			if (mkd_CH5_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH6:

			if (mkd_CH6_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (mkd_CH6_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->mkd_CH6_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->mkd_CH6_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			if (mkd_CH6_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;



		case EdopStat::N1:

			if (mkd_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N1_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (mkd_N1_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (mkd_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N2_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (mkd_N2_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (mkd_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N3_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N4:

			if (mkd_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N4_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N4_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N5:

			if (mkd_N5_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N5_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N5_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N5_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N6:

			if (Disp->mkd_N6_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (mkd_N6_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (mkd_N6_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);

			if (Disp->mkd_N6_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->mkd_N6_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);

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
		if (Disp->mkd_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}
	
}
void UMaykudukWidget::ExitMenu()
{
	mkd_Make_Strelka_UnRedact();
	mkd_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}

void UMaykudukWidget::CreateMenuInfo(int numTrain, int delta_X, int delta_Y)
{
#pragma region Body

	FVector2D menuPos = FVector2D(300, 200);
	GetWorld()->GetGameViewport()->GetMousePosition(menuPos);
	menuPos = FVector2D(menuPos.X + 100+ delta_X, menuPos.Y + 300+delta_Y);
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
void UMaykudukWidget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->mkd._w1.num);

}
void UMaykudukWidget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->mkd._w2.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->mkd._w3.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->mkd._w4.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->mkd._w5.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_w6()
{
	CreateMenuInfo(Disp->mkd._w6.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_tupic_M5()
{
	CreateMenuInfo(Disp->mkd._M5_tupic.num,200);
}
void UMaykudukWidget::CreateMenuTrainInfo_tupic_M6()
{
	CreateMenuInfo(Disp->mkd._M6_tupic.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_tupic_M7()
{
	CreateMenuInfo(Disp->mkd._M7_tupic.num);
}
void UMaykudukWidget::CreateMenuTrainInfo_tupic_M8()
{
	CreateMenuInfo(Disp->mkd._M8_tupic.num);
}

void UMaykudukWidget::ExitMenuTrainInfo()
{
	//SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
}

void UMaykudukWidget::mkd_SostavOnWay(int index)
{
	if (index == 0) Disp->SostavOnWay(&Disp->mkd._w1);
	if (index == 1) Disp->SostavOnWay(&Disp->mkd._w2);
	if (index == 2) Disp->SostavOnWay(&Disp->mkd._w3);
	if (index == 3) Disp->SostavOnWay(&Disp->mkd._w4);
	if (index == 4) Disp->SostavOnWay(&Disp->mkd._w5);
	if (index == 5) Disp->SostavOnWay(&Disp->mkd._w6);

	mkd_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Maykuduk);
}

void UMaykudukWidget::mkd_LocoOnWay(int index)
{
	if (index == 0) Disp->SostavOnWay(&Disp->mkd._M5_tupic);
	if (index == 1) Disp->SostavOnWay(&Disp->mkd._M6_tupic);
	

	mkd_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Maykuduk);
}






#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UMaykudukWidget::OtmenaOneRouter()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	if (com != Commd::NotDef) SendCommToServer(com);

	ExitMenu();
}

void UMaykudukWidget::Za_N()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_N_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_N_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_N_Create);
	if (dopstat == EdopStat::CH6)  SendCommToServer(Commd::CH6_N_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_ND()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Maykuduk, Direction::EVEN)) return;


	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_ND_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_ND_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_ND_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_ND_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_ND_Create);
	if (dopstat == EdopStat::CH6)  SendCommToServer(Commd::CH6_ND_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_CH()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CH_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CH_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CH_Create);
	if (dopstat == EdopStat::N6)  SendCommToServer(Commd::N6_CH_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_CHD()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (!Disp->IsConturKeyReady(Station::Maykuduk, Direction::ODD)) return;

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_CHD_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_CHD_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_CHD_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_CHD_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_CHD_Create);
	if (dopstat == EdopStat::N6)  SendCommToServer(Commd::N6_CHD_Create);


	ExitMenu();
}


void UMaykudukWidget::On_way_1()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_1P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_1P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_1P_Create);


	ExitMenu();
}
void UMaykudukWidget::On_way_2()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_2P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_2P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_2P_Create);


	ExitMenu();
}
void UMaykudukWidget::On_way_3()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_3P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_3P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_3P_Create);


	ExitMenu();
}
void UMaykudukWidget::On_way_4()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_4P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_4P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_4P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_4P_Create);


	ExitMenu();
}
void UMaykudukWidget::On_way_5()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_5P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_5P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_5P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_5P_Create);


	ExitMenu();
}
void UMaykudukWidget::On_way_6()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_6P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_6P_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_6P_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_6P_Create);


	ExitMenu();
}



void UMaykudukWidget::Za_CH1()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH1_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH1_Create);
	if (dopstat == EdopStat::M7)  SendCommToServer(Commd::M7_CH1_Create);

	ExitMenu();

}
void UMaykudukWidget::Za_CH2()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH2_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH2_Create);

	ExitMenu();
}
void UMaykudukWidget::Za_CH3()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH3_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH3_Create);

	ExitMenu();
}
void UMaykudukWidget::Za_CH4()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH4_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH4_Create);

	ExitMenu();
}
void UMaykudukWidget::Za_CH5()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH5_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH5_Create);
	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_CH5_Create);

	ExitMenu();
}
void UMaykudukWidget::Za_CH6()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CH6_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CH6_Create);
	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_CH6_Create);

	ExitMenu();
}



void UMaykudukWidget::Za_N1()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N1_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N1_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_N2()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N2_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_N2_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_N3()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N3_Create);



	ExitMenu();
}
void UMaykudukWidget::Za_N4()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N4_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N4_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_N5()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N5_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N5_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_N6()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N6_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N6_Create);
	if (dopstat == EdopStat::M8)  SendCommToServer(Commd::M8_N6_Create);

	ExitMenu();
}




void UMaykudukWidget::Za_M1()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M1_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M1_Create);
	if (dopstat == EdopStat::CH6)  SendCommToServer(Commd::CH6_M1_Create);
	

	ExitMenu();
}
void UMaykudukWidget::Za_M2()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M2_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M2_Create);
	if (dopstat == EdopStat::N6)  SendCommToServer(Commd::N6_M2_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_M3()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M3_Create);
	if (dopstat == EdopStat::CH2)  SendCommToServer(Commd::CH2_M3_Create);
	if (dopstat == EdopStat::CH3)  SendCommToServer(Commd::CH3_M3_Create);
	if (dopstat == EdopStat::CH4)  SendCommToServer(Commd::CH4_M3_Create);
	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M3_Create);
	if (dopstat == EdopStat::CH6)  SendCommToServer(Commd::CH6_M3_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_M4()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M4_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M4_Create);
	if (dopstat == EdopStat::N3)  SendCommToServer(Commd::N3_M4_Create);
	if (dopstat == EdopStat::N4)  SendCommToServer(Commd::N4_M4_Create);
	if (dopstat == EdopStat::N5)  SendCommToServer(Commd::N5_M4_Create);
	if (dopstat == EdopStat::N6)  SendCommToServer(Commd::N6_M4_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_M5()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::CH5)  SendCommToServer(Commd::CH5_M5_Create);
	if (dopstat == EdopStat::CH6)  SendCommToServer(Commd::CH6_M5_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_M6()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N1)  SendCommToServer(Commd::N1_M6_Create);
	if (dopstat == EdopStat::N2)  SendCommToServer(Commd::N2_M6_Create);


	ExitMenu();
}
void UMaykudukWidget::Za_M7()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::CH1)  SendCommToServer(Commd::CH1_M7_Create);



	ExitMenu();
}
void UMaykudukWidget::Za_M8()
{
	EdopStat dopstat = mkd_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::N6)  SendCommToServer(Commd::N6_M8_Create);



	ExitMenu();
}

#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N
bool UMaykudukWidget::mkd_N_1P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_1P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_N_2P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_2P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_N_3P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_3P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_N_4P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_4P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_N_5P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_5P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_N_6P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N_6P.IsFree()) return  false;
	return true;
}


#pragma endregion
#pragma region from ND
bool UMaykudukWidget::mkd_ND_1P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_1P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_ND_2P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_2P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_ND_3P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_3P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_ND_4P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_4P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_ND_5P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_5P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_ND_6P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_ND_6P.IsFree()) return  false;
	return true;
}


#pragma endregion
#pragma region from CH
bool UMaykudukWidget::mkd_CH_1P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_1P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CH_2P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_2P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CH_3P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_3P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CH_4P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_4P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CH_5P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_5P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CH_6P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH_6P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CHD
bool UMaykudukWidget::mkd_CHD_1P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_1P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CHD_2P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_2P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CHD_3P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_3P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CHD_4P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_4P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CHD_5P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_5P.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_CHD_6P_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CHD_6P.IsFree()) return  false;
	return true;
}

#pragma endregion

#pragma region from M1
bool UMaykudukWidget::mkd_M1_CH1_CheckPossCreate()
{
	if (Disp->mkd._w1.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->mkd._w1.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M1_CH2_CheckPossCreate()
{
	if (Disp->mkd._w2.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->mkd._w2.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M1_CH3_CheckPossCreate()
{
	if (Disp->mkd._w3.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->mkd._w3.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M1_CH4_CheckPossCreate()
{
	if (Disp->mkd._w4.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->mkd._w4.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M1_CH5_CheckPossCreate()
{
	if (Disp->mkd._w5.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH5.IsFree()) return  true;
	}
	else if (Disp->mkd._w5.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M1_CH6_CheckPossCreate()
{
	if (Disp->mkd._w6.stat == EAStat::Free)
	{
		if (Disp->mkd_M1_CH6.IsFree()) return  true;
	}
	else if (Disp->mkd._w6.stat == EAStat::Busy)
	{
		if (Disp->mkd_M1_CH6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M2
bool UMaykudukWidget::mkd_M2_N1_CheckPossCreate()
{
	if (Disp->mkd._w1.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N1.IsFree()) return  true;
	}
	else if (Disp->mkd._w1.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M2_N2_CheckPossCreate()
{
	if (Disp->mkd._w2.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N2.IsFree()) return  true;
	}
	else if (Disp->mkd._w2.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M2_N3_CheckPossCreate()
{
	if (Disp->mkd._w3.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N3.IsFree()) return  true;
	}
	else if (Disp->mkd._w3.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M2_N4_CheckPossCreate()
{
	if (Disp->mkd._w4.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N4.IsFree()) return  true;
	}
	else if (Disp->mkd._w4.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M2_N5_CheckPossCreate()
{
	if (Disp->mkd._w5.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N5.IsFree()) return  true;
	}
	else if (Disp->mkd._w5.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M2_N6_CheckPossCreate()
{
	if (Disp->mkd._w6.stat == EAStat::Free)
	{
		if (Disp->mkd_M2_N6.IsFree()) return  true;
	}
	else if (Disp->mkd._w6.stat == EAStat::Busy)
	{
		if (Disp->mkd_M2_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M3
bool UMaykudukWidget::mkd_M3_CH1_CheckPossCreate()
{
	if (Disp->mkd._w1.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH1.IsFree()) return  true;
	}
	else if (Disp->mkd._w1.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M3_CH2_CheckPossCreate()
{
	if (Disp->mkd._w2.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH2.IsFree()) return  true;
	}
	else if (Disp->mkd._w2.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M3_CH3_CheckPossCreate()
{
	if (Disp->mkd._w3.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH3.IsFree()) return  true;
	}
	else if (Disp->mkd._w3.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M3_CH4_CheckPossCreate()
{
	if (Disp->mkd._w4.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->mkd._w4.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M3_CH5_CheckPossCreate()
{
	if (Disp->mkd._w5.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH5.IsFree()) return  true;
	}
	else if (Disp->mkd._w5.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M3_CH6_CheckPossCreate()
{
	if (Disp->mkd._w6.stat == EAStat::Free)
	{
		if (Disp->mkd_M3_CH6.IsFree()) return  true;
	}
	else if (Disp->mkd._w6.stat == EAStat::Busy)
	{
		if (Disp->mkd_M3_CH6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M4
bool UMaykudukWidget::mkd_M4_N1_CheckPossCreate()
{
	if (Disp->mkd._w1.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N1.IsFree()) return  true;
	}
	else if (Disp->mkd._w1.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M4_N2_CheckPossCreate()
{
	if (Disp->mkd._w2.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N2.IsFree()) return  true;
	}
	else if (Disp->mkd._w2.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M4_N3_CheckPossCreate()
{
	if (Disp->mkd._w3.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N3.IsFree()) return  true;
	}
	else if (Disp->mkd._w3.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M4_N4_CheckPossCreate()
{
	if (Disp->mkd._w4.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N4.IsFree()) return  true;
	}
	else if (Disp->mkd._w4.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M4_N5_CheckPossCreate()
{
	if (Disp->mkd._w5.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N5.IsFree()) return  true;
	}
	else if (Disp->mkd._w5.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M4_N6_CheckPossCreate()
{
	if (Disp->mkd._w6.stat == EAStat::Free)
	{
		if (Disp->mkd_M4_N6.IsFree()) return  true;
	}
	else if (Disp->mkd._w6.stat == EAStat::Busy)
	{
		if (Disp->mkd_M4_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M5
bool UMaykudukWidget::mkd_M5_CH5_CheckPossCreate()
{
	if (!Disp->mkd_M5_CH5.IsFree()) return  false;
	return true;
}
bool UMaykudukWidget::mkd_M5_CH6_CheckPossCreate()
{
	if (!Disp->mkd_M5_CH6.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M6
bool UMaykudukWidget::mkd_M6_N1_CheckPossCreate()
{
	if (Disp->mkd._w1.stat == EAStat::Free)
	{
		if (Disp->mkd_M6_N1.IsFree()) return  true;
	}
	else if (Disp->mkd._w1.stat == EAStat::Busy)
	{
		if (Disp->mkd_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UMaykudukWidget::mkd_M6_N2_CheckPossCreate()
{
	if (Disp->mkd._w2.stat == EAStat::Free)
	{
		if (Disp->mkd_M6_N2.IsFree()) return  true;
	}
	else if (Disp->mkd._w2.stat == EAStat::Busy)
	{
		if (Disp->mkd_M6_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion

#pragma region from CH1
bool UMaykudukWidget::mkd_CH1_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH1_M1.IsFree()) return  false;
	if (Disp->mkd._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH1_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH1_M3.IsFree()) return  false;
	if (Disp->mkd._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH1_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH1_N.IsFree()) return  false;
	if (Disp->mkd._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH1_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH1_ND.IsFree()) return  false;
	if (Disp->mkd._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH2
bool UMaykudukWidget::mkd_CH2_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH2_M1.IsFree()) return  false;
	if (Disp->mkd._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH2_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH2_M3.IsFree()) return  false;
	if (Disp->mkd._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH2_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH2_N.IsFree()) return  false;
	if (Disp->mkd._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH2_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH2_ND.IsFree()) return  false;
	if (Disp->mkd._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH3
bool UMaykudukWidget::mkd_CH3_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH3_M1.IsFree()) return  false;
	if (Disp->mkd._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH3_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH3_M3.IsFree()) return  false;
	if (Disp->mkd._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH3_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH3_N.IsFree()) return  false;
	if (Disp->mkd._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH3_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH3_ND.IsFree()) return  false;
	if (Disp->mkd._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH4
bool UMaykudukWidget::mkd_CH4_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH4_M1.IsFree()) return  false;
	if (Disp->mkd._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH4_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH4_M3.IsFree()) return  false;
	if (Disp->mkd._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH4_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH4_N.IsFree()) return  false;
	if (Disp->mkd._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH4_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH4_ND.IsFree()) return  false;
	if (Disp->mkd._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH5
bool UMaykudukWidget::mkd_CH5_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH5_M1.IsFree()) return  false;
	if (Disp->mkd._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH5_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH5_M3.IsFree()) return  false;
	if (Disp->mkd._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH5_M5_CheckPossCreate()
{
	if (!Disp->mkd_CH5_M1.IsFree()) return  false;
	if (Disp->mkd._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH5_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH5_N.IsFree()) return  false;
	if (Disp->mkd._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH5_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH5_ND.IsFree()) return  false;
	if (Disp->mkd._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH6
bool UMaykudukWidget::mkd_CH6_M1_CheckPossCreate()
{
	if (!Disp->mkd_CH6_M1.IsFree()) return  false;
	if (Disp->mkd._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH6_M3_CheckPossCreate()
{
	if (!Disp->mkd_CH6_M3.IsFree()) return  false;
	if (Disp->mkd._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH6_M5_CheckPossCreate()
{
	if (!Disp->mkd_CH6_M5.IsFree()) return  false;
	if (Disp->mkd._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH6_N_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH6_N.IsFree()) return  false;
	if (Disp->mkd._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_CH6_ND_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->mkd_CH6_ND.IsFree()) return  false;
	if (Disp->mkd._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion

#pragma region from N1
bool UMaykudukWidget::mkd_N1_M2_CheckPossCreate()
{
	if (!Disp->mkd_N1_M2.IsFree()) return  false;
	if (Disp->mkd._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N1_M4_CheckPossCreate()
{
	if (!Disp->mkd_N1_M4.IsFree()) return  false;
	if (Disp->mkd._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N1_M6_CheckPossCreate()
{
	if (!Disp->mkd_N1_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->mkd._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N1_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N1_CH.IsFree()) return  false;
	if (Disp->mkd._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N1_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N1_CHD.IsFree()) return  false;
	if (Disp->mkd._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N2
bool UMaykudukWidget::mkd_N2_M2_CheckPossCreate()
{
	if (!Disp->mkd_N2_M2.IsFree()) return  false;
	if (Disp->mkd._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N2_M4_CheckPossCreate()
{
	if (!Disp->mkd_N2_M4.IsFree()) return  false;
	if (Disp->mkd._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N2_M6_CheckPossCreate()
{
	if (!Disp->mkd_N2_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->mkd._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N2_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N2_CH.IsFree()) return  false;
	if (Disp->mkd._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N2_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N2_CHD.IsFree()) return  false;
	if (Disp->mkd._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N3
bool UMaykudukWidget::mkd_N3_M2_CheckPossCreate()
{
	if (!Disp->mkd_N3_M2.IsFree()) return  false;
	if (Disp->mkd._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N3_M4_CheckPossCreate()
{
	if (!Disp->mkd_N3_M4.IsFree()) return  false;
	if (Disp->mkd._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N3_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N3_CH.IsFree()) return  false;
	if (Disp->mkd._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N3_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N3_CHD.IsFree()) return  false;
	if (Disp->mkd._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N4
bool UMaykudukWidget::mkd_N4_M2_CheckPossCreate()
{
	if (!Disp->mkd_N4_M2.IsFree()) return  false;
	if (Disp->mkd._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N4_M4_CheckPossCreate()
{
	if (!Disp->mkd_N4_M4.IsFree()) return  false;
	if (Disp->mkd._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N4_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N4_CH.IsFree()) return  false;
	if (Disp->mkd._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N4_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N4_CHD.IsFree()) return  false;
	if (Disp->mkd._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N5
bool UMaykudukWidget::mkd_N5_M2_CheckPossCreate()
{
	if (!Disp->mkd_N5_M2.IsFree()) return  false;
	if (Disp->mkd._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N5_M4_CheckPossCreate()
{
	if (!Disp->mkd_N5_M4.IsFree()) return  false;
	if (Disp->mkd._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N5_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N5_CH.IsFree()) return  false;
	if (Disp->mkd._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N5_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N5_CHD.IsFree()) return  false;
	if (Disp->mkd._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion
#pragma region from N6
bool UMaykudukWidget::mkd_N6_M2_CheckPossCreate()
{
	if (!Disp->mkd_N6_M2.IsFree()) return  false;
	if (Disp->mkd._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N6_M4_CheckPossCreate()
{
	if (!Disp->mkd_N6_M4.IsFree()) return  false;
	if (Disp->mkd._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}

bool UMaykudukWidget::mkd_N6_CH_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N6_CH.IsFree()) return  false;
	if (Disp->mkd._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UMaykudukWidget::mkd_N6_CHD_CheckPossCreate()
{
	if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->mkd_N6_CHD.IsFree()) return  false;
	if (Disp->mkd._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}

#pragma endregion


#pragma endregion


FElm* UMaykudukWidget::mkd_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}

//Router* UMaykudukWidget::mkd_GetReadyRouter(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		if (Disp->mkd._N.stat == EAStat::Green)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::N) return &Disp->mkd_N_1P;
//			if (Disp->mkd._w2.dopstat == EdopStat::N) return &Disp->mkd_N_2P;
//			if (Disp->mkd._w3.dopstat == EdopStat::N) return &Disp->mkd_N_3P;
//			if (Disp->mkd._w4.dopstat == EdopStat::N) return &Disp->mkd_N_4P;
//			if (Disp->mkd._w5.dopstat == EdopStat::N) return &Disp->mkd_N_5P;
//			if (Disp->mkd._w6.dopstat == EdopStat::N) return &Disp->mkd_N_6P;
//		
//		}
//
//	}
//	else if (dopstat == EdopStat::ND)
//	{
//		if (Disp->mkd._ND.stat == EAStat::Green)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::ND) return &Disp->mkd_ND_1P;
//			if (Disp->mkd._w2.dopstat == EdopStat::ND) return &Disp->mkd_ND_2P;
//			if (Disp->mkd._w3.dopstat == EdopStat::ND) return &Disp->mkd_ND_3P;
//			if (Disp->mkd._w4.dopstat == EdopStat::ND) return &Disp->mkd_ND_4P;
//			if (Disp->mkd._w5.dopstat == EdopStat::ND) return &Disp->mkd_ND_5P;
//			if (Disp->mkd._w6.dopstat == EdopStat::ND) return &Disp->mkd_ND_6P;
//			
//		}
//
//	}
//	else if (dopstat == EdopStat::CH)
//	{
//		if (Disp->mkd._CH.stat == EAStat::Green)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::CH) return &Disp->mkd_CH_1P;
//			if (Disp->mkd._w2.dopstat == EdopStat::CH) return &Disp->mkd_CH_2P;
//			if (Disp->mkd._w3.dopstat == EdopStat::CH) return &Disp->mkd_CH_3P;
//			if (Disp->mkd._w4.dopstat == EdopStat::CH) return &Disp->mkd_CH_4P;
//			if (Disp->mkd._w5.dopstat == EdopStat::CH) return &Disp->mkd_CH_5P;
//			if (Disp->mkd._w6.dopstat == EdopStat::CH) return &Disp->mkd_CH_6P;
//		
//		}
//
//	}
//	else if (dopstat == EdopStat::CHD)
//	{
//		if (Disp->mkd._CHD.stat == EAStat::Green)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_1P;
//			if (Disp->mkd._w2.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_2P;
//			if (Disp->mkd._w3.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_3P;
//			if (Disp->mkd._w4.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_4P;
//			if (Disp->mkd._w5.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_5P;
//			if (Disp->mkd._w6.dopstat == EdopStat::CHD) return &Disp->mkd_CHD_6P;
//	
//		}
//
//	}
//
//
//	else if (dopstat == EdopStat::M1)
//	{
//		if (Disp->mkd._M1.stat == EAStat::White)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH1;
//			if (Disp->mkd._w2.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH2;
//			if (Disp->mkd._w3.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH3;
//			if (Disp->mkd._w4.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH4;
//			if (Disp->mkd._w5.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH5;
//			if (Disp->mkd._w6.dopstat == EdopStat::M1) return &Disp->mkd_M1_CH6;
//		
//		}
//
//	}
//	else if (dopstat == EdopStat::M2)
//	{
//		if (Disp->mkd._M2.stat == EAStat::White)
//		{
//
//		
//
//			if (Disp->mkd._w1.dopstat == EdopStat::M2) return &Disp->mkd_M2_N1;
//			if (Disp->mkd._w2.dopstat == EdopStat::M2) return &Disp->mkd_M2_N2;
//			if (Disp->mkd._w3.dopstat == EdopStat::M2) return &Disp->mkd_M2_N3;
//			if (Disp->mkd._w4.dopstat == EdopStat::M2) return &Disp->mkd_M2_N4;
//			if (Disp->mkd._w5.dopstat == EdopStat::M2) return &Disp->mkd_M2_N5;
//			if (Disp->mkd._w6.dopstat == EdopStat::M2) return &Disp->mkd_M2_N6;
//			
//		}
//
//	}
//	else if (dopstat == EdopStat::M3)
//	{
//		if (Disp->mkd._M3.stat == EAStat::White)
//		{
//			if (Disp->mkd._w1.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH1;
//			if (Disp->mkd._w2.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH2;
//			if (Disp->mkd._w3.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH3;
//			if (Disp->mkd._w4.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH4;
//			if (Disp->mkd._w5.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH5;
//			if (Disp->mkd._w6.dopstat == EdopStat::M3) return &Disp->mkd_M3_CH6;
//		
//		}
//
//	}
//	else if (dopstat == EdopStat::M4)
//	{
//		if (Disp->mkd._M4.stat == EAStat::White)
//		{
//
//			
//
//			if (Disp->mkd._w1.dopstat == EdopStat::M4) return &Disp->mkd_M4_N1;
//			if (Disp->mkd._w2.dopstat == EdopStat::M4) return &Disp->mkd_M4_N2;
//			if (Disp->mkd._w3.dopstat == EdopStat::M4) return &Disp->mkd_M4_N3;
//			if (Disp->mkd._w4.dopstat == EdopStat::M4) return &Disp->mkd_M4_N4;
//			if (Disp->mkd._w5.dopstat == EdopStat::M4) return &Disp->mkd_M4_N5;
//			if (Disp->mkd._w6.dopstat == EdopStat::M4) return &Disp->mkd_M4_N6;
//			
//		}
//
//	}
//	else if (dopstat == EdopStat::M5)
//	{
//		if (Disp->mkd._M5.stat == EAStat::White)
//		{
//			if (Disp->mkd._w5.dopstat == EdopStat::M5) return &Disp->mkd_M5_CH5;
//			if (Disp->mkd._w6.dopstat == EdopStat::M5) return &Disp->mkd_M5_CH6;
//
//		}
//
//	}
//	else if (dopstat == EdopStat::M6)
//	{
//		if (Disp->mkd._M6.stat == EAStat::White)
//		{
//
//			if (Disp->mkd._w1.dopstat == EdopStat::M6) return &Disp->mkd_M6_N1;
//			if (Disp->mkd._w2.dopstat == EdopStat::M6) return &Disp->mkd_M6_N2;
//
//		}
//
//	}
//
//
//	else if (dopstat == EdopStat::CH1)
//	{
//		if (Disp->mkd._CH1.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH1) return &Disp->mkd_CH1_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH1) return &Disp->mkd_CH1_M3;
//		}
//		if (Disp->mkd._CH1.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH1) return &Disp->mkd_CH1_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH1) return &Disp->mkd_CH1_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH2)
//	{
//		if (Disp->mkd._CH2.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH2) return &Disp->mkd_CH2_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH2) return &Disp->mkd_CH2_M3;
//		}
//		if (Disp->mkd._CH2.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH2) return &Disp->mkd_CH2_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH2) return &Disp->mkd_CH2_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH3)
//	{
//		if (Disp->mkd._CH3.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH3) return &Disp->mkd_CH3_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH3) return &Disp->mkd_CH3_M3;
//		}
//		if (Disp->mkd._CH3.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH3) return &Disp->mkd_CH3_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH3) return &Disp->mkd_CH3_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH4)
//	{
//		if (Disp->mkd._CH4.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH4) return &Disp->mkd_CH4_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH4) return &Disp->mkd_CH4_M3;
//		}
//		if (Disp->mkd._CH4.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH4) return &Disp->mkd_CH4_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH4) return &Disp->mkd_CH4_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH5)
//	{
//		if (Disp->mkd._CH5.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH5) return &Disp->mkd_CH5_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH5) return &Disp->mkd_CH5_M3;
//		}
//		if (Disp->mkd._CH5.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH5) return &Disp->mkd_CH5_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH5) return &Disp->mkd_CH5_ND;
//		}
//	}
//	else if (dopstat == EdopStat::CH6)
//	{
//		if (Disp->mkd._CH6.stat == EAStat::White)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH6) return &Disp->mkd_CH6_M1;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH6) return &Disp->mkd_CH6_M3;
//			if (Disp->mkd._M5_tupic.dopstat == EdopStat::CH6) return &Disp->mkd_CH6_M5;
//		}
//		if (Disp->mkd._CH6.stat == EAStat::Green)
//		{
//			if (Disp->mkd._NP.dopstat == EdopStat::CH6) return &Disp->mkd_CH6_N;
//			if (Disp->mkd._NAP.dopstat == EdopStat::CH6) return &Disp->mkd_CH6_ND;
//		}
//	}
//
//
//	else if (dopstat == EdopStat::N1)
//	{
//		if (Disp->mkd._N1.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N1) return &Disp->mkd_N1_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N1) return &Disp->mkd_N1_M4;
//			if (Disp->mkd._M6_tupic.dopstat == EdopStat::N1) return &Disp->mkd_N1_M6;
//		
//		}
//		if (Disp->mkd._N1.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N1) return &Disp->mkd_N1_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N1) return &Disp->mkd_N1_CHD;
//			
//		}
//	}
//	else if (dopstat == EdopStat::N2)
//	{
//		if (Disp->mkd._N2.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N2) return &Disp->mkd_N2_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N2) return &Disp->mkd_N2_M4;
//			if (Disp->mkd._M6_tupic.dopstat == EdopStat::N2) return &Disp->mkd_N2_M6;
//	
//		}
//		if (Disp->mkd._N2.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N2) return &Disp->mkd_N2_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N2) return &Disp->mkd_N2_CHD;
//		
//		}
//	}
//	else if (dopstat == EdopStat::N3)
//	{
//		if (Disp->mkd._N3.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N3) return &Disp->mkd_N3_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N3) return &Disp->mkd_N3_M4;
//		
//
//		}
//		if (Disp->mkd._N3.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N3) return &Disp->mkd_N3_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N3) return &Disp->mkd_N3_CHD;
//		
//		}
//	}
//	else if (dopstat == EdopStat::N4)
//	{
//		if (Disp->mkd._N4.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N4) return &Disp->mkd_N4_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N4) return &Disp->mkd_N4_M4;
//		
//
//		}
//		if (Disp->mkd._N4.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N4) return &Disp->mkd_N4_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N4) return &Disp->mkd_N4_CHD;
//			
//		}
//	}
//	else if (dopstat == EdopStat::N5)
//	{
//		if (Disp->mkd._N5.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N5) return &Disp->mkd_N5_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N5) return &Disp->mkd_N5_M4;
//			
//
//		}
//		if (Disp->mkd._N5.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N5) return &Disp->mkd_N5_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N5) return &Disp->mkd_N5_CHD;
//			
//		}
//	}
//	else if (dopstat == EdopStat::N6)
//	{
//		if (Disp->mkd._N6.stat == EAStat::White)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N6) return &Disp->mkd_N6_M2;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N6) return &Disp->mkd_N6_M4;
//			
//
//		}
//		if (Disp->mkd._N6.stat == EAStat::Green)
//		{
//			if (Disp->mkd._CHP.dopstat == EdopStat::N6) return &Disp->mkd_N6_CH;
//			if (Disp->mkd._CHAP.dopstat == EdopStat::N6) return &Disp->mkd_N6_CHD;
//			
//		}
//	}
//
//
//
//	return nullptr;
//}

void UMaykudukWidget::mkd_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Maykuduk);
}

#pragma endregion

#pragma region Strelki



int UMaykudukWidget::mkd_Make_Strelka_Redact(int number)
{
	if (number == 1) RedactStrelka = &Disp->mkd._str1;
	else if (number == 2) RedactStrelka = &Disp->mkd._str2;
	else if (number == 3) RedactStrelka = &Disp->mkd._str3;
	else if (number == 4) RedactStrelka = &Disp->mkd._str4;
	else if (number == 5) RedactStrelka = &Disp->mkd._str5;
	else if (number == 6) RedactStrelka = &Disp->mkd._str6;
	else if (number == 7) RedactStrelka = &Disp->mkd._str7;
	else if (number == 8) RedactStrelka = &Disp->mkd._str8;
	else if (number == 9) RedactStrelka = &Disp->mkd._str9;
	else if (number == 10) RedactStrelka = &Disp->mkd._str10;
	else if (number == 11) RedactStrelka = &Disp->mkd._str11;
	else if (number == 12) RedactStrelka = &Disp->mkd._str12;
	else if (number == 13) RedactStrelka = &Disp->mkd._str13;
	else if (number == 14) RedactStrelka = &Disp->mkd._str14;
	else if (number == 15) RedactStrelka = &Disp->mkd._str15;
	else if (number == 16) RedactStrelka = &Disp->mkd._str16;
	else if (number == 17) RedactStrelka = &Disp->mkd._str17;
	else if (number == 18) RedactStrelka = &Disp->mkd._str18;

	else if (number == 19) RedactStrelka = &Disp->mkd._str19;
	else if (number == 20) RedactStrelka = &Disp->mkd._str20;

	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->mkd_arrStr.size(); i++)
	{
		if (Disp->mkd_arrStr[i]->num == number) return number;
	}
	return 0;
}
void UMaykudukWidget::mkd_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;
}
void UMaykudukWidget::mkd_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->mkd._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->mkd._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->mkd._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->mkd._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->mkd._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->mkd._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->mkd._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->mkd._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->mkd._str9) SendCommToServer(Commd::s9_Minus);
	if (RedactStrelka == &Disp->mkd._str10) SendCommToServer(Commd::s10_Minus);
	if (RedactStrelka == &Disp->mkd._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->mkd._str12) SendCommToServer(Commd::s12_Minus);
	if (RedactStrelka == &Disp->mkd._str13) SendCommToServer(Commd::s13_Minus);
	if (RedactStrelka == &Disp->mkd._str14) SendCommToServer(Commd::s14_Minus);
	if (RedactStrelka == &Disp->mkd._str15) SendCommToServer(Commd::s15_Minus);
	if (RedactStrelka == &Disp->mkd._str16) SendCommToServer(Commd::s16_Minus);
	if (RedactStrelka == &Disp->mkd._str17) SendCommToServer(Commd::s17_Minus);
	if (RedactStrelka == &Disp->mkd._str18) SendCommToServer(Commd::s18_Minus);

	if (RedactStrelka == &Disp->mkd._str19) SendCommToServer(Commd::s19_Minus);
	if (RedactStrelka == &Disp->mkd._str20) SendCommToServer(Commd::s20_Minus);


	mkd_Make_Strelka_UnRedact();

}
void UMaykudukWidget::mkd_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->mkd._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->mkd._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->mkd._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->mkd._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->mkd._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->mkd._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->mkd._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->mkd._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->mkd._str9) SendCommToServer(Commd::s9_Plus);
	if (RedactStrelka == &Disp->mkd._str10) SendCommToServer(Commd::s10_Plus);
	if (RedactStrelka == &Disp->mkd._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->mkd._str12) SendCommToServer(Commd::s12_Plus);
	if (RedactStrelka == &Disp->mkd._str13) SendCommToServer(Commd::s13_Plus);
	if (RedactStrelka == &Disp->mkd._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->mkd._str15) SendCommToServer(Commd::s15_Plus);
	if (RedactStrelka == &Disp->mkd._str16) SendCommToServer(Commd::s16_Plus);
	if (RedactStrelka == &Disp->mkd._str17) SendCommToServer(Commd::s17_Plus);
	if (RedactStrelka == &Disp->mkd._str18) SendCommToServer(Commd::s18_Plus);

	if (RedactStrelka == &Disp->mkd._str19) SendCommToServer(Commd::s19_Plus);
	if (RedactStrelka == &Disp->mkd._str20) SendCommToServer(Commd::s20_Plus);


	mkd_Make_Strelka_UnRedact();
}
void UMaykudukWidget::mkd_RedactStrelkaToBreak()
{

	RedactStrelka->cur = ExCurator::NotControl;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Maykuduk);
}
void UMaykudukWidget::mkd_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Maykuduk);
}
void UMaykudukWidget::mkd_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Maykuduk);
}
void UMaykudukWidget::mkd_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->mkd_arrStr.size(); i++)
	{
		Disp->mkd_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Maykuduk);
}
#pragma endregion

#pragma region Svetofori

void UMaykudukWidget::mkd_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->mkd._N;
	else if (dopstat == EdopStat::ND) RedactSvetofor = &Disp->mkd._ND;
	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->mkd._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->mkd._CHD;

	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->mkd._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->mkd._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->mkd._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->mkd._M4;
	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->mkd._M5;
	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->mkd._M6;

	else if (dopstat == EdopStat::M7) RedactSvetofor = &Disp->mkd._M7;
	else if (dopstat == EdopStat::M8) RedactSvetofor = &Disp->mkd._M8;



	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->mkd._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->mkd._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->mkd._CH3;
	else if (dopstat == EdopStat::CH4) RedactSvetofor = &Disp->mkd._CH4;
	else if (dopstat == EdopStat::CH5) RedactSvetofor = &Disp->mkd._CH5;
	else if (dopstat == EdopStat::CH6) RedactSvetofor = &Disp->mkd._CH6;


	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->mkd._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->mkd._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->mkd._N3;
	else if (dopstat == EdopStat::N4) RedactSvetofor = &Disp->mkd._N4;
	else if (dopstat == EdopStat::N5) RedactSvetofor = &Disp->mkd._N5;
	else if (dopstat == EdopStat::N6) RedactSvetofor = &Disp->mkd._N6;


	
}
EdopStat UMaykudukWidget::mkd_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->mkd._N) return EdopStat::N;
	else if (RedactSvetofor == &Disp->mkd._ND) return EdopStat::ND;
	else if (RedactSvetofor == &Disp->mkd._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->mkd._CHD) return EdopStat::CHD;


	else if (RedactSvetofor == &Disp->mkd._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->mkd._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->mkd._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->mkd._M4) return EdopStat::M4;
	else if (RedactSvetofor == &Disp->mkd._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->mkd._M6) return EdopStat::M6;

	else if (RedactSvetofor == &Disp->mkd._M7) return EdopStat::M7;
	else if (RedactSvetofor == &Disp->mkd._M8) return EdopStat::M8;



	else if (RedactSvetofor == &Disp->mkd._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->mkd._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->mkd._CH3) return EdopStat::CH3;
	else if (RedactSvetofor == &Disp->mkd._CH4) return EdopStat::CH4;
	else if (RedactSvetofor == &Disp->mkd._CH5) return EdopStat::CH5;
	else if (RedactSvetofor == &Disp->mkd._CH6) return EdopStat::CH6;



	else if (RedactSvetofor == &Disp->mkd._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->mkd._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->mkd._N3) return EdopStat::N3;
	else if (RedactSvetofor == &Disp->mkd._N4) return EdopStat::N4;
	else if (RedactSvetofor == &Disp->mkd._N5) return EdopStat::N5;
	else if (RedactSvetofor == &Disp->mkd._N6) return EdopStat::N6;

	else return EdopStat::Norm;

}
bool UMaykudukWidget::mkd_IsRedactSvetoforFree()
{
	if (RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;

	return false;
}

void UMaykudukWidget::mkd_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UMaykudukWidget::mkd_BrokenSvetoforMake(ExCurator cur)
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
	mkd_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Maykuduk);
}
void UMaykudukWidget::mkd_RedactSvetofor_Remont()
{
	RedactSvetofor->cur = ExCurator::Norm;
	mkd_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Maykuduk);
}
void UMaykudukWidget::mkd_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->mkd_arrSvetofor.size(); i++)
	{
		Disp->mkd_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::Maykuduk);
}


#pragma endregion

#pragma region Signals
void UMaykudukWidget::mkd_RazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		if (Disp->mkd.GreenKey_N.stat == EAStat::Green)
		{
			if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left)
			{
				Disp->mkd.GreenKey_N.dopstat = EdopStat::Right;
				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->mkd.GreenKey_N.dopstat = EdopStat::Left;
				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Maykuduk);
		}
	}
	if (dopstat == EdopStat::ND)
	{
		if (Disp->mkd.GreenKey_ND.stat == EAStat::Green)
		{
			if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left)
			{
				Disp->mkd.GreenKey_ND.dopstat = EdopStat::Right;
				Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->mkd.GreenKey_ND.dopstat = EdopStat::Left;
				Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Maykuduk);
		}
	}
	if (dopstat == EdopStat::CH)
	{
		if (Disp->mkd.GreenKey_CH.stat == EAStat::Green)
		{
			if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left)
			{
				Disp->mkd.GreenKey_CH.dopstat = EdopStat::Right;
				Disp->mkd.GreenKey_ND.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->mkd.GreenKey_CH.dopstat = EdopStat::Left;
				Disp->mkd.GreenKey_ND.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Maykuduk);
		}
	}
	if (dopstat == EdopStat::CHD)
	{
		if (Disp->mkd.GreenKey_CHD.stat == EAStat::Green)
		{
			if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left)
			{
				Disp->mkd.GreenKey_CHD.dopstat = EdopStat::Right;
				Disp->mkd.GreenKey_N.dopstat = EdopStat::Right;
			}
			else
			{
				Disp->mkd.GreenKey_CHD.dopstat = EdopStat::Left;
				Disp->mkd.GreenKey_N.dopstat = EdopStat::Left;
			}
			Disp->SendDataStationToAll(Station::Maykuduk);
		}
	}

}
void UMaykudukWidget::mkd_VspomogatRazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{

		if (Disp->mkd.GreenKey_N.dopstat == EdopStat::Left)
		{
			Disp->mkd.GreenKey_N.dopstat = EdopStat::Right;
			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->mkd.GreenKey_N.dopstat = EdopStat::Left;
			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Maykuduk);

	}
	if (dopstat == EdopStat::ND)
	{

		if (Disp->mkd.GreenKey_ND.dopstat == EdopStat::Left)
		{
			Disp->mkd.GreenKey_ND.dopstat = EdopStat::Right;
			Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->mkd.GreenKey_ND.dopstat = EdopStat::Left;
			Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Maykuduk);

	}
	if (dopstat == EdopStat::CH)
	{

		if (Disp->mkd.GreenKey_CH.dopstat == EdopStat::Left)
		{
			Disp->mkd.GreenKey_CH.dopstat = EdopStat::Right;
			Disp->mkd.GreenKey_ND.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->mkd.GreenKey_CH.dopstat = EdopStat::Left;
			Disp->mkd.GreenKey_ND.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Maykuduk);

	}
	if (dopstat == EdopStat::CHD)
	{

		if (Disp->mkd.GreenKey_CHD.dopstat == EdopStat::Left)
		{
			Disp->mkd.GreenKey_CHD.dopstat = EdopStat::Right;
			Disp->mkd.GreenKey_N.dopstat = EdopStat::Right;
		}
		else
		{
			Disp->mkd.GreenKey_CHD.dopstat = EdopStat::Left;
			Disp->mkd.GreenKey_N.dopstat = EdopStat::Left;
		}
		Disp->SendDataStationToAll(Station::Maykuduk);

	}

}

#pragma endregion