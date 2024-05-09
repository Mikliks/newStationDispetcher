
#include "KaraganozekWidget.h"
//#include "Components/Button.h"
//#include "Components/VerticalBox.h"
//#include "Components/SizeBox.h"
//#include "Components/TextBlock.h"
//#include "Components/Border.h"
//#include "Components/Image.h"
//#include "Kismet/GameplayStatics.h"
//#include "Widgets/Text/STextBlock.h"

DEFINE_LOG_CATEGORY(qwont);
DEFINE_LOG_CATEGORY(qwofft);

#pragma region General Foo

void UKaraganozekWidget::MyBeepDef(int freq, int leng)
{
	std::thread t(&UKaraganozekWidget::MyBeepInThread, this, freq, leng, 1, 0);
	t.detach();
}
void UKaraganozekWidget::MyBeep(int freq, int leng, int count, int pause)
{
	std::thread t(&UKaraganozekWidget::MyBeepInThread, this, freq, leng, count, pause);
	t.detach();
}
void UKaraganozekWidget::MyBeepInThread(int freq, int leng, int count, int pause)
{
	for (size_t i = 0; i < count; i++)
	{
		Beep(freq, leng);
		Sleep(pause);
	}
}

void UKaraganozekWidget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Karaganozek, comm);
}
#pragma region pultExpert
void UKaraganozekWidget::SendCommandFor__NAP(CommdForServer commd)
{

	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_NAP_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_NAP_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_NAP_ROUT);
	
}
void UKaraganozekWidget::SendCommandFor__1PP(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_1PP_FREE);
	else if(commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_1PP_BUSY);

	
}

void UKaraganozekWidget::SendCommandFor__2PP(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_2PP_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_2PP_BUSY);


}
void UKaraganozekWidget::SendCommandFor__NDP(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_NDP_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_NDP_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_NDP_ROUT);

}
void UKaraganozekWidget::SendCommandFor__2UP(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_2UP_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_2UP_BUSY);


}
void UKaraganozekWidget::SendCommandFor__1UP(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_1UP_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_1UP_BUSY);


}
void UKaraganozekWidget::SendCommandFor__M1(CommdForServer commd)
{
	if (commd == CommdForServer::grey) SendCommToServer(Commd::M1_GREY);
	else if (commd == CommdForServer::white) SendCommToServer(Commd::M1_WHITE);
	else if (commd == CommdForServer::select) SendCommToServer(Commd::M1_SELECT);

}
void UKaraganozekWidget::SendCommandFor__M3(CommdForServer commd)
{
	if (commd == CommdForServer::grey) SendCommToServer(Commd::M3_GREY);
	else if (commd == CommdForServer::white) SendCommToServer(Commd::M3_WHITE);
	else if (commd == CommdForServer::select) SendCommToServer(Commd::M3_SELECT);
}
void UKaraganozekWidget::SendCommandFor__Way1(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_1_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_1_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_1_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way2(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_2_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_2_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_2_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way3(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_3_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_3_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_3_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way4(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_4_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_4_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_4_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way5(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_5_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_5_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_5_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way6(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_6_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_6_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_6_ROUT);

}
void UKaraganozekWidget::SendCommandFor__Way7(CommdForServer commd)
{
	if (commd == CommdForServer::free) SendCommToServer(Commd::WAY_7_FREE);
	else if (commd == CommdForServer::buzy) SendCommToServer(Commd::WAY_7_BUSY);
	else if (commd == CommdForServer::rout) SendCommToServer(Commd::WAY_7_ROUT);

}
#pragma endregion
bool UKaraganozekWidget::Initialize()
{
	Super::Initialize();

	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UKaraganozekWidget::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N);
	But_za_ND->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_ND);
	But_za_CH->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CHD);
	But_za_CHR->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CHR);

	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_4);
	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_5);
	But_poezd_on_way_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_6);
	But_poezd_on_way_7->OnClicked.AddDynamic(this, &UKaraganozekWidget::On_way_7);

	But_za_CH_1->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH1);
	But_za_CH_2->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH2);
	But_za_CH_3->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH3);
	But_za_CH_4->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH4);
	But_za_CH_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH5);
	But_za_CH_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH6);
	But_za_CH_7->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_CH7);

	But_za_N_1->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N1);
	But_za_N_2->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N2);
	But_za_N_3->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N3);
	But_za_N_4->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N4);
	But_za_N_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N5);
	But_za_N_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N6);
	But_za_N_7->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_N7);

	But_za_M_1->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M6);
	But_za_M_7->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M7);
	But_za_M_8->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M8);
	But_za_M_9->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M9);
	But_za_M_10->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M10);
	But_za_M_11->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M11);
	But_za_M_12->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M12);
	But_za_M_13->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M13);
	But_za_M_14->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M14);
	But_za_M_15->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M15);
	But_za_M_16->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M16);
	But_za_M_17->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M17);
	But_za_M_18->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M18);
	But_za_M_19->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M19);
	But_za_M_20->OnClicked.AddDynamic(this, &UKaraganozekWidget::Za_M20);




	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_7->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_7->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_10->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_14->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_16->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_18->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_20->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_10->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_14->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_16->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_18->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_20->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_4->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_6->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_7->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_tupic_M_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_6->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_10->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_14->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_16->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_18->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_20->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_way_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w6);
	Button_TrainInfo_way_7->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_w7);

	Button_TrainInfo_tupic_M_5->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M5);
	Button_TrainInfo_tupic_M_6->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M6);
	Button_TrainInfo_tupic_M_10->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M10);
	Button_TrainInfo_tupic_M_12->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M12);
	Button_TrainInfo_tupic_M_14->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M14);
	Button_TrainInfo_tupic_M_16->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M16);
	Button_TrainInfo_tupic_M_18->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M18);
	Button_TrainInfo_tupic_M_20->OnClicked.AddDynamic(this, &UKaraganozekWidget::CreateMenuTrainInfo_tupic_M20);


	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
	But_Exit_Menu->OnClicked.AddDynamic(this, &UKaraganozekWidget::ExitMenu);
	
	Button_ExitMenuTrainInfo->OnClicked.AddDynamic(this, &UKaraganozekWidget::ExitMenuTrainInfo);
	VerticalBox_TrainInfo->SetRenderTranslation(FVector2D(-500, -500));
	VerticalBox_TrainInfo->ClearChildren();

	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

void UKaraganozekWidget::krz_StrelkiWaysSvetoforDefault()
{
	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
	{
		Disp->krz_arrStr[i]->cur = ExCurator::Norm;
		Disp->krz_arrStr[i]->dopstat = EdopStat::Norm;
		Disp->krz_arrStr[i]->oper = EOper::Norm;
		Disp->krz_arrStr[i]->stat = EAStat::Plus;
	}
	for (size_t i = 0; i < Disp->krz_arrWay.size(); i++)
	{
		Disp->krz_arrWay[i]->cur = ExCurator::Norm;
		Disp->krz_arrWay[i]->dopn = 0;
		Disp->krz_arrWay[i]->num = 0;
		Disp->krz_arrWay[i]->dopstat = EdopStat::Norm;
		Disp->krz_arrWay[i]->oper = EOper::Norm;
		Disp->krz_arrWay[i]->stat = EAStat::Free;
	}
	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
	{
		Disp->krz_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->krz_arrSvetofor[i]->dopn = 0;
		Disp->krz_arrSvetofor[i]->num = 0;
		Disp->krz_arrSvetofor[i]->dopstat = EdopStat::Norm;
		Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
		Disp->krz_arrSvetofor[i]->stat = EAStat::Grey;
	}
	Disp->krz._N.stat = EAStat::Red;
	Disp->krz._ND.stat = EAStat::Red;
	Disp->krz._CH.stat = EAStat::Red;
	Disp->krz._CHD.stat = EAStat::Red;
	Disp->krz._CHR.stat = EAStat::Red;

	Disp->SendDataStationToAll(Station::Karaganozek);
}


void UKaraganozekWidget::PrintInfo(FElm* wayInfo,
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

void UKaraganozekWidget::krz_UpdateInfoStationWay()
{
	PrintInfo(&Disp->krz._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->krz._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->krz._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->krz._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->krz._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);
	PrintInfo(&Disp->krz._w6, HB_LocoEven_way_6, TB_LocoEven_way_6, Button_TrainInfo_way_6, TextButton_way_6, HB_LocoOdd_way_6, TB_LocoOdd_way_6);
	PrintInfo(&Disp->krz._w7, HB_LocoEven_way_7, TB_LocoEven_way_7, Button_TrainInfo_way_7, TextButton_way_7, HB_LocoOdd_way_7, TB_LocoOdd_way_7);

	PrintInfo(&Disp->krz._M5_tupic, HB_LocoEven_tupic_M_5, TB_LocoEven_tupic_M_5, Button_TrainInfo_tupic_M_5, TextButton_tupic_M_5, HB_LocoOdd_tupic_M_5, TB_LocoOdd_tupic_M_5);
	PrintInfo(&Disp->krz._M6_tupic, HB_LocoEven_tupic_M_6, TB_LocoEven_tupic_M_6, Button_TrainInfo_tupic_M_6, TextButton_tupic_M_6, HB_LocoOdd_tupic_M_6, TB_LocoOdd_tupic_M_6);
	PrintInfo(&Disp->krz._M10_tupic, HB_LocoEven_tupic_M_10, TB_LocoEven_tupic_M_10, Button_TrainInfo_tupic_M_10, TextButton_tupic_M_10, HB_LocoOdd_tupic_M_10, TB_LocoOdd_tupic_M_10);
	PrintInfo(&Disp->krz._M12_tupic, HB_LocoEven_tupic_M_12, TB_LocoEven_tupic_M_12, Button_TrainInfo_tupic_M_12, TextButton_tupic_M_12, HB_LocoOdd_tupic_M_12, TB_LocoOdd_tupic_M_12);
	PrintInfo(&Disp->krz._M14_tupic, HB_LocoEven_tupic_M_14, TB_LocoEven_tupic_M_14, Button_TrainInfo_tupic_M_14, TextButton_tupic_M_14, HB_LocoOdd_tupic_M_14, TB_LocoOdd_tupic_M_14);
	PrintInfo(&Disp->krz._M16_tupic, HB_LocoEven_tupic_M_16, TB_LocoEven_tupic_M_16, Button_TrainInfo_tupic_M_16, TextButton_tupic_M_16, HB_LocoOdd_tupic_M_16, TB_LocoOdd_tupic_M_16);
	PrintInfo(&Disp->krz._M18_tupic, HB_LocoEven_tupic_M_18, TB_LocoEven_tupic_M_18, Button_TrainInfo_tupic_M_18, TextButton_tupic_M_18, HB_LocoOdd_tupic_M_18, TB_LocoOdd_tupic_M_18);
	PrintInfo(&Disp->krz._M20_tupic, HB_LocoEven_tupic_M_20, TB_LocoEven_tupic_M_20, Button_TrainInfo_tupic_M_20, TextButton_tupic_M_20, HB_LocoOdd_tupic_M_20, TB_LocoOdd_tupic_M_20);


//#pragma region GREEN_KEYS
//
//#pragma region N
//
//	if (Disp->krb._1UPCH.stat == EAStat::Free
//		&& Disp->krb._2UPCH.stat == EAStat::Free
//		&& Disp->krz._2NP.stat == EAStat::Free
//		&& Disp->krz._1NP.stat == EAStat::Free)
//	{
//		Disp->krz.GreenKey_N.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krz.GreenKey_N.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region ND
//	if (Disp->krb._1CHP.stat == EAStat::Free
//		&& Disp->krb._2CHP.stat == EAStat::Free
//		&& Disp->krz._2UPN.stat == EAStat::Free
//		&& Disp->krz._1UPN.stat == EAStat::Free)
//	{
//		Disp->krz.GreenKey_ND.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krz.GreenKey_ND.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region CH
//	if (Disp->krz._1CHP.stat == EAStat::Free
//		&& Disp->krz._2CHP.stat == EAStat::Free
//		&& Disp->kg._2UPN.stat == EAStat::Free
//		&& Disp->kg._1UPN.stat == EAStat::Free)
//	{
//		Disp->krz.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krz.GreenKey_CH.stat = EAStat::Red;
//	}
//
//#pragma endregion
//#pragma region CHD
//	if (Disp->krz._1UPCH.stat == EAStat::Free
//		&& Disp->krz._2UPCH.stat == EAStat::Free
//		&& Disp->kg._2NP.stat == EAStat::Free
//		&& Disp->kg._1NP.stat == EAStat::Free)
//	{
//		Disp->krz.GreenKey_CHD.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krz.GreenKey_CHD.stat = EAStat::Red;
//	}
//
//#pragma endregion
//#pragma region CHR
//	if (Disp->krz._1PP.stat == EAStat::Free
//		&& Disp->krz._2PP.stat == EAStat::Free)
//	{
//		Disp->krz.GreenKey_CHR.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->krz.GreenKey_CHR.stat = EAStat::Red;
//	}
//
//#pragma endregion
//
//#pragma endregion
}


FVector2D UKaraganozekWidget::GetMenuCoordinates(FVector2D pos)
{
	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
	return pos;
}
void UKaraganozekWidget::CreateMenuRouter(FVector2D pos)
{
	VerticalBoxMenu->ClearChildren();
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();
	bool ImIRedactable = false;
	ImIRedactable = krz_IsRedactSvetoforFree();
	if (ImIRedactable)
	{
		switch (dopstat)
		{
#pragma region Enter Poezd Svetofor		

		case EdopStat::N:

			if (krz_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krz_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krz_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krz_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krz_N_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (krz_N_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
			if (krz_N_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::ND:

			if (krz_ND_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krz_ND_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krz_ND_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krz_ND_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krz_ND_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (krz_ND_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
			if (krz_ND_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH:

			if (krz_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krz_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krz_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krz_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krz_CH_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (krz_CH_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
			if (krz_CH_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHD:

			if (krz_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krz_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krz_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krz_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krz_CHD_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (krz_CHD_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
			if (krz_CHD_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CHR:

			if (krz_CHR_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
			if (krz_CHR_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
			if (krz_CHR_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
			if (krz_CHR_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
			if (krz_CHR_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
			if (krz_CHR_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
			if (krz_CHR_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

#pragma endregion
#pragma region Manevrovie Svetofor
		case EdopStat::M1:

			if (krz_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (krz_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (krz_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (krz_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (krz_M1_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (krz_M1_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);
			if (krz_M1_CH7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M2:


			if (krz_M2_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M2_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M2_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M2_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M3:


			if (krz_M3_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
			if (krz_M3_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
			if (krz_M3_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
			if (krz_M3_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
			if (krz_M3_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
			if (krz_M3_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);
			if (krz_M3_CH7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M4:

			if (krz_M4_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M4_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M4_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M4_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M5:

			if (krz_M5_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (krz_M5_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_M5_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (krz_M5_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_M5_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_M5_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_M5_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			if (krz_M5_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
			if (krz_M5_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
			if (krz_M5_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M6:

			if (krz_M6_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M6_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M6_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M6_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M6_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M6_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M6_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M6_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M8:

			if (krz_M8_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M8_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M8_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M8_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M8_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M8_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M8_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M8_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M10:

			if (krz_M10_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M10_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M10_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M10_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M10_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M10_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M10_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M10_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M12:

			if (krz_M12_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M12_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M12_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M12_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M12_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M12_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M12_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M12_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M14:

			if (krz_M14_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M14_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M14_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			if (krz_M14_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
			if (krz_M14_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
			if (krz_M14_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
			if (krz_M14_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
			if (krz_M14_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;


		case EdopStat::M16:

			if (Disp->krz_M16_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M16_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M16_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M18:

			if (Disp->krz_M18_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M18_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M18_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::M20:

			if (Disp->krz_M20_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
			if (krz_M20_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
			if (krz_M20_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

#pragma endregion		
#pragma region Exit All Svetofor
		case EdopStat::CH1:

			if (krz_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH1_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH1_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH2:

			if (krz_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH2_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH2_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH3:

			if (krz_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH3_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH3_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH4:

			if (krz_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH4_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH4_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH5:

			if (krz_CH5_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH5_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH5_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH6:

			if (krz_CH6_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH6_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH6_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH6_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::CH7:

			if (krz_CH7_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
			if (krz_CH7_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
			if (Disp->krz_CH7_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
			if (Disp->krz_CH7_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N1:

			if (krz_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N1_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N1_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N1_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N1_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N1_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N1_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N1_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N1_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			if (krz_N1_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
			if (krz_N1_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
			if (krz_N1_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N2:

			if (krz_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N2_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N2_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N2_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N2_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N2_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N2_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N2_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N2_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			if (krz_N2_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
			if (krz_N2_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
			if (krz_N2_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N3:

			if (krz_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N3_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N3_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N3_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N3_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N3_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N3_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N3_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N3_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N4:

			if (krz_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N4_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N4_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N4_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N4_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N4_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N4_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N4_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N4_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N5:

			if (krz_N5_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N5_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N5_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N5_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N5_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N5_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N5_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N5_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N5_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N5_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N6:

			if (krz_N6_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N6_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N6_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N6_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N6_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N6_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N6_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N6_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N6_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N6_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
			break;

		case EdopStat::N7:

			if (krz_N7_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
			if (krz_N7_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
			if (krz_N7_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
			if (Disp->krz_N7_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
			if (Disp->krz_N7_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
			if (krz_N7_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
			if (Disp->krz_N7_M8.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_8);
			if (krz_N7_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
			if (krz_N7_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
			if (krz_N7_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
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
		if (Disp->krz_GetReadyRouter(dopstat) != nullptr)
		{
			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
		}
		//VerticalBoxMenu->AddChild(OtmenaAllRouter);
		VerticalBoxMenu->AddChild(But_Exit_Menu);
		VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
	}

}
void UKaraganozekWidget::ExitMenu()
{
	krz_Make_Strelka_UnRedact();
	krz_Make_Svetofor_UnRedact();
	FVector2D pointSleepMenu(1000, -300);
	VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
	VerticalBoxMenu->ClearChildren();
}

void UKaraganozekWidget::CreateMenuInfo(int numTrain, int delta_X, int delta_Y)
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
void UKaraganozekWidget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->krz._w1.num);

}
void UKaraganozekWidget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->krz._w2.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->krz._w3.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->krz._w4.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->krz._w5.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_w6()
{
	CreateMenuInfo(Disp->krz._w6.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_w7()
{
	CreateMenuInfo(Disp->krz._w7.num);
}

void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M5()
{
	CreateMenuInfo(Disp->krz._M5_tupic.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M6()
{
	CreateMenuInfo(Disp->krz._M6_tupic.num, -400);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M10()
{
	CreateMenuInfo(Disp->krz._M10_tupic.num,-400);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M12()
{
	CreateMenuInfo(Disp->krz._M12_tupic.num, -400);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M14()
{
	CreateMenuInfo(Disp->krz._M14_tupic.num, -400);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M16()
{
	CreateMenuInfo(Disp->krz._M16_tupic.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M18()
{
	CreateMenuInfo(Disp->krz._M18_tupic.num);
}
void UKaraganozekWidget::CreateMenuTrainInfo_tupic_M20()
{
	CreateMenuInfo(Disp->krz._M20_tupic.num);
}


void UKaraganozekWidget::ExitMenuTrainInfo()
{
	//SizeBox_TrainInfo->SetRenderTranslation(FVector2D(-1000, -1000));
	SizeBox_TrainInfo->SetVisibility(ESlateVisibility::Hidden);
}

void UKaraganozekWidget::krz_SostavOnWay(int index)
{
	if (index == 0) Disp->SostavOnWay(&Disp->krz._w1);
	if (index == 1) Disp->SostavOnWay(&Disp->krz._w2);
	if (index == 2) Disp->SostavOnWay(&Disp->krz._w3);
	if (index == 3) Disp->SostavOnWay(&Disp->krz._w4);
	if (index == 4) Disp->SostavOnWay(&Disp->krz._w5);
	if (index == 5) Disp->SostavOnWay(&Disp->krz._w6);
	if (index == 6) Disp->SostavOnWay(&Disp->krz._w7);

	krz_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_LocoOnWay(int index)
{
	if (index == 0) Disp->LocoOnWay(&Disp->krz._M5_tupic);
	if (index == 1) Disp->LocoOnWay(&Disp->krz._M6_tupic);
	if (index == 2) Disp->LocoOnWay(&Disp->krz._M10_tupic);
	if (index == 3) Disp->LocoOnWay(&Disp->krz._M12_tupic);
	if (index == 4) Disp->LocoOnWay(&Disp->krz._M14_tupic);
	if (index == 5) Disp->LocoOnWay(&Disp->krz._M16_tupic);
	if (index == 6) Disp->LocoOnWay(&Disp->krz._M18_tupic);
	if (index == 7) Disp->LocoOnWay(&Disp->krz._M20_tupic);

	krz_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganozek);
}



#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons

void UKaraganozekWidget::OtmenaOneRouter()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	if (com != Commd::NotDef) SendCommToServer(com);

	ExitMenu();
}

void UKaraganozekWidget::Za_N()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_N_Create);
	if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_N_Create);
	if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_N_Create);
	if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_N_Create);
	if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_N_Create);
	if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_N_Create);
	if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_N_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_ND()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganozek, Direction::EVEN)) return;


	if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_ND_Create);
	if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_ND_Create);
	if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_ND_Create);
	if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_ND_Create);
	if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_ND_Create);
	if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_ND_Create);
	if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_ND_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_CH_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_CH_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_CH_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_CH_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_CH_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_CH_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_CH_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CHD()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganozek, Direction::ODD)) return;

	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_CHD_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_CHD_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_CHD_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_CHD_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_CHD_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_CHD_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_CHD_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CHR()
{

	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_CHR_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_CHR_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_CHR_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_CHR_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_CHR_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_CHR_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_CHR_Create);

	ExitMenu();
}

void UKaraganozekWidget::On_way_1()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_1P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_1P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_1P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_1P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_2()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_2P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_2P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_2P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_2P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_2P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_3()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_3P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_3P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_3P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_3P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_3P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_4()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_4P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_4P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_4P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_4P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_4P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_5()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_5P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_5P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_5P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_5P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_5P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_6()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_6P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_6P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_6P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_6P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_6P_Create);

	ExitMenu();
}
void UKaraganozekWidget::On_way_7()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_7P_Create);
	if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_7P_Create);
	if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_7P_Create);
	if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_7P_Create);
	if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_7P_Create);

	ExitMenu();
}


void UKaraganozekWidget::Za_CH1()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH1_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH1_Create);

	ExitMenu();

}
void UKaraganozekWidget::Za_CH2()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH2_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH2_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH3()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH3_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH3_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH4()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH4_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH4_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH5()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH5_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH5_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH6()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH6_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH6_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_CH7()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_CH7_Create);
	if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_CH7_Create);

	ExitMenu();
}


void UKaraganozekWidget::Za_N1()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N1_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N1_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N1_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N1_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N1_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N1_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N1_Create);
	if (dopstat == EdopStat::M16) SendCommToServer(Commd::M16_N1_Create);
	if (dopstat == EdopStat::M18) SendCommToServer(Commd::M18_N1_Create);
	if (dopstat == EdopStat::M20) SendCommToServer(Commd::M20_N1_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_N2()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N2_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N2_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N2_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N2_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N2_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N2_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N2_Create);
	if (dopstat == EdopStat::M16) SendCommToServer(Commd::M16_N2_Create);
	if (dopstat == EdopStat::M18) SendCommToServer(Commd::M18_N2_Create);
	if (dopstat == EdopStat::M20) SendCommToServer(Commd::M20_N2_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_N3()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N3_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N3_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N3_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N3_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N3_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N3_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N3_Create);


	ExitMenu();
}
void UKaraganozekWidget::Za_N4()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N4_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N4_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N4_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N4_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N4_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N4_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N4_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_N5()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N5_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N5_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N5_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N5_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N5_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N5_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N5_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_N6()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N6_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N6_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N6_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N6_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N6_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N6_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N6_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_N7()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_N7_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_N7_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_N7_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_N7_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_N7_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_N7_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_N7_Create);

	ExitMenu();
}



void UKaraganozekWidget::Za_M1()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_M1_Create);
	if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_M1_Create);
	if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_M1_Create);
	if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_M1_Create);
	if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_M1_Create);
	if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_M1_Create);
	if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_M1_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M2()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M2_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M2_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M2_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M2_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M2_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M2_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M2_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M2_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M3()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_M3_Create);
	if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_M3_Create);
	if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_M3_Create);
	if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_M3_Create);
	if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_M3_Create);
	if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_M3_Create);
	if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_M3_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M4()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M4_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M4_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M4_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M4_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M4_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M4_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M4_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M4_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M5()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_M5_Create);
	if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_M5_Create);
	if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_M5_Create);
	if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_M5_Create);
	if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_M5_Create);
	if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_M5_Create);
	if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_M5_Create);
	if (dopstat == EdopStat::M16) SendCommToServer(Commd::M16_M5_Create);
	if (dopstat == EdopStat::M18) SendCommToServer(Commd::M18_M5_Create);
	if (dopstat == EdopStat::M20) SendCommToServer(Commd::M20_M5_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M6()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M6_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M6_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M6_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M6_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M6_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M6_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M6_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M6_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M7()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M8()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M8_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M8_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M8_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M8_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M8_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M8_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M8_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M8_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M9()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M10()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M10_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M10_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M10_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M10_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M10_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M10_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M10_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M10_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M11()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M12()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M12_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M12_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M12_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M12_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M12_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M12_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M12_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M12_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M13()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M14()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M14_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M14_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M14_Create);
	if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_M14_Create);
	if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_M14_Create);
	if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_M14_Create);
	if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_M14_Create);
	if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_M14_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M15()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M16()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M16_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M16_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M16_Create);


	ExitMenu();
}
void UKaraganozekWidget::Za_M17()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M18()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M18_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M18_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M18_Create);

	ExitMenu();
}
void UKaraganozekWidget::Za_M19()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();



	ExitMenu();
}
void UKaraganozekWidget::Za_M20()
{
	EdopStat dopstat = krz_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_M20_Create);
	if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_M20_Create);
	if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_M20_Create);

	ExitMenu();
}

#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N
bool UKaraganozekWidget::krz_N_1P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_1P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_2P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_2P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_3P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_3P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_4P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_4P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_5P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_5P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_6P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_6P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_N_7P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N_7P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from ND
bool UKaraganozekWidget::krz_ND_1P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_1P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_2P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_2P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_3P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_3P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_4P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_4P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_5P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_5P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_6P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_6P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_ND_7P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_ND_7P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH
bool UKaraganozekWidget::krz_CH_1P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_1P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_2P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_2P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_3P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_3P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_4P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_4P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_5P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_5P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_6P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_6P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CH_7P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH_7P.IsFree()) return  false;
	return true;
}
#pragma endregion
#pragma region from CHD
bool UKaraganozekWidget::krz_CHD_1P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_1P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_2P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_2P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_3P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_3P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_4P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_4P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_5P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_5P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_6P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_6P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHD_7P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHD_7P.IsFree()) return  false;
	return true;
}
#pragma endregion
#pragma region from CHR
bool UKaraganozekWidget::krz_CHR_1P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_1P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_2P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_2P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_3P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_3P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_4P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_4P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_5P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_5P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_6P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_6P.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_CHR_7P_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CHR_7P.IsFree()) return  false;
	return true;
}
#pragma endregion
#pragma region from M1
bool UKaraganozekWidget::krz_M1_CH1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M1_CH7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M1_CH7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M1_CH7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M2
bool UKaraganozekWidget::krz_M2_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M2_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M2_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M2_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M2_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M3
bool UKaraganozekWidget::krz_M3_CH1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M3_CH7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M3_CH7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M3_CH7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M4
bool UKaraganozekWidget::krz_M4_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M4_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M4_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M4_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M4_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M5
bool UKaraganozekWidget::krz_M5_M2_CheckPossCreate()
{
	if (!Disp->krz_M5_M2.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M4_CheckPossCreate()
{
	if (!Disp->krz_M5_M4.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M6_CheckPossCreate()
{
	if (!Disp->krz_M5_M6.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M8_CheckPossCreate()
{
	if (!Disp->krz_M5_M8.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M10_CheckPossCreate()
{
	if (!Disp->krz_M5_M10.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M12_CheckPossCreate()
{
	if (!Disp->krz_M5_M12.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M14_CheckPossCreate()
{
	if (!Disp->krz_M5_M14.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M16_CheckPossCreate()
{
	if (!Disp->krz_M5_M16.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M18_CheckPossCreate()
{
	if (!Disp->krz_M5_M18.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M5_M20_CheckPossCreate()
{
	if (!Disp->krz_M5_M20.IsFree()) return  false;
	return true;
}
#pragma endregion
#pragma region from M6
bool UKaraganozekWidget::krz_M6_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M6_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M6_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M6_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M6_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M10
bool UKaraganozekWidget::krz_M10_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M10_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M10_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M10_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M10_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M12
bool UKaraganozekWidget::krz_M12_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M12_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M12_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M12_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M12_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M14
bool UKaraganozekWidget::krz_M14_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M14_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M14_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M14_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M14_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M16
bool UKaraganozekWidget::krz_M16_M5_CheckPossCreate()
{
	if (!Disp->krz_M16_M5.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M16_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M16_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M16_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M16_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M16_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M16_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M18
bool UKaraganozekWidget::krz_M18_M5_CheckPossCreate()
{
	if (!Disp->krz_M18_M5.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M18_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M18_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M18_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M18_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M18_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M18_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M20

bool UKaraganozekWidget::krz_M20_M5_CheckPossCreate()
{
	if (!Disp->krz_M20_M5.IsFree()) return  false;
	return true;
}
bool UKaraganozekWidget::krz_M20_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M20_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M20_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M20_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M20_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M20_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from M8
bool UKaraganozekWidget::krz_M8_N1_CheckPossCreate()
{
	if (Disp->krz._w1.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N1.IsFree()) return  true;
	}
	else if (Disp->krz._w1.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N2_CheckPossCreate()
{
	if (Disp->krz._w2.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N2.IsFree()) return  true;
	}
	else if (Disp->krz._w2.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N3_CheckPossCreate()
{
	if (Disp->krz._w3.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N3.IsFree()) return  true;
	}
	else if (Disp->krz._w3.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N4_CheckPossCreate()
{
	if (Disp->krz._w4.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N4.IsFree()) return  true;
	}
	else if (Disp->krz._w4.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N5_CheckPossCreate()
{
	if (Disp->krz._w5.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N5.IsFree()) return  true;
	}
	else if (Disp->krz._w5.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N6_CheckPossCreate()
{
	if (Disp->krz._w6.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N6.IsFree()) return  true;
	}
	else if (Disp->krz._w6.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N6.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_N7_CheckPossCreate()
{
	if (Disp->krz._w7.stat == EAStat::Free)
	{
		if (Disp->krz_M8_N7.IsFree()) return  true;
	}
	else if (Disp->krz._w7.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_N7.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKaraganozekWidget::krz_M8_M5_CheckPossCreate()
{
	if (Disp->krz._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krz_M8_M5.IsFree()) return  true;
	}
	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krz_M8_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
#pragma endregion
#pragma region from CH1
bool UKaraganozekWidget::krz_CH1_M1_CheckPossCreate()
{
	if (!Disp->krz_CH1_M1.IsFree()) return  false;
	if (Disp->krz._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH1_M3_CheckPossCreate()
{
	if (!Disp->krz_CH1_M3.IsFree()) return  false;
	if (Disp->krz._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH1_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH1_N.IsFree()) return  false;
	if (Disp->krz._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH1_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH1_ND.IsFree()) return  false;
	if (Disp->krz._N1.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH2
bool UKaraganozekWidget::krz_CH2_M1_CheckPossCreate()
{
	if (!Disp->krz_CH2_M1.IsFree()) return  false;
	if (Disp->krz._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH2_M3_CheckPossCreate()
{
	if (!Disp->krz_CH2_M3.IsFree()) return  false;
	if (Disp->krz._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH2_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH2_N.IsFree()) return  false;
	if (Disp->krz._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH2_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH2_ND.IsFree()) return  false;
	if (Disp->krz._N2.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH3
bool UKaraganozekWidget::krz_CH3_M1_CheckPossCreate()
{
	if (!Disp->krz_CH3_M1.IsFree()) return  false;
	if (Disp->krz._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH3_M3_CheckPossCreate()
{
	if (!Disp->krz_CH3_M3.IsFree()) return  false;
	if (Disp->krz._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH3_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH3_N.IsFree()) return  false;
	if (Disp->krz._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH3_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH3_ND.IsFree()) return  false;
	if (Disp->krz._N3.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH4
bool UKaraganozekWidget::krz_CH4_M1_CheckPossCreate()
{
	if (!Disp->krz_CH4_M1.IsFree()) return  false;
	if (Disp->krz._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH4_M3_CheckPossCreate()
{
	if (!Disp->krz_CH4_M3.IsFree()) return  false;
	if (Disp->krz._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH4_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH4_N.IsFree()) return  false;
	if (Disp->krz._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH4_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH4_ND.IsFree()) return  false;
	if (Disp->krz._N4.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH5
bool UKaraganozekWidget::krz_CH5_M1_CheckPossCreate()
{
	if (!Disp->krz_CH5_M1.IsFree()) return  false;
	if (Disp->krz._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH5_M3_CheckPossCreate()
{
	if (!Disp->krz_CH5_M3.IsFree()) return  false;
	if (Disp->krz._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH5_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH5_N.IsFree()) return  false;
	if (Disp->krz._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH5_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH5_ND.IsFree()) return  false;
	if (Disp->krz._N5.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH6
bool UKaraganozekWidget::krz_CH6_M1_CheckPossCreate()
{
	if (!Disp->krz_CH6_M1.IsFree()) return  false;
	if (Disp->krz._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH6_M3_CheckPossCreate()
{
	if (!Disp->krz_CH6_M3.IsFree()) return  false;
	if (Disp->krz._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH6_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH6_N.IsFree()) return  false;
	if (Disp->krz._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH6_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH6_ND.IsFree()) return  false;
	if (Disp->krz._N6.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from CH7
bool UKaraganozekWidget::krz_CH7_M1_CheckPossCreate()
{
	if (!Disp->krz_CH7_M1.IsFree()) return  false;
	if (Disp->krz._N7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH7_M3_CheckPossCreate()
{
	if (!Disp->krz_CH7_M3.IsFree()) return  false;
	if (Disp->krz._N7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH7_N_CheckPossCreate()
{
	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH7_N.IsFree()) return  false;
	if (Disp->krz._N7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_CH7_ND_CheckPossCreate()
{
	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
	if (!Disp->krz_CH7_ND.IsFree()) return  false;
	if (Disp->krz._N7.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N1
bool UKaraganozekWidget::krz_N1_M2_CheckPossCreate()
{
	if (!Disp->krz_N1_M2.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M4_CheckPossCreate()
{
	if (!Disp->krz_N1_M4.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M6_CheckPossCreate()
{
	if (!Disp->krz_N1_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M8_CheckPossCreate()
{
	if (!Disp->krz_N1_M8.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M10_CheckPossCreate()
{
	if (!Disp->krz_N1_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M12_CheckPossCreate()
{
	if (!Disp->krz_N1_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M14_CheckPossCreate()
{
	if (!Disp->krz_N1_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M16_CheckPossCreate()
{
	if (!Disp->krz_N1_M16.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M18_CheckPossCreate()
{
	if (!Disp->krz_N1_M18.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_M20_CheckPossCreate()
{
	if (!Disp->krz_N1_M20.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N1_CH.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N1_CHD.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N1_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N1_CHR.IsFree()) return  false;
	if (Disp->krz._CH1.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N2
bool UKaraganozekWidget::krz_N2_M2_CheckPossCreate()
{
	if (!Disp->krz_N2_M2.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M4_CheckPossCreate()
{
	if (!Disp->krz_N2_M4.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M6_CheckPossCreate()
{
	if (!Disp->krz_N2_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M8_CheckPossCreate()
{
	if (!Disp->krz_N2_M8.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M10_CheckPossCreate()
{
	if (!Disp->krz_N2_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M12_CheckPossCreate()
{
	if (!Disp->krz_N2_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M14_CheckPossCreate()
{
	if (!Disp->krz_N2_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M16_CheckPossCreate()
{
	if (!Disp->krz_N2_M16.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M18_CheckPossCreate()
{
	if (!Disp->krz_N2_M18.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_M20_CheckPossCreate()
{
	if (!Disp->krz_N2_M20.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N2_CH.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N2_CHD.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N2_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N2_CHR.IsFree()) return  false;
	if (Disp->krz._CH2.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N3
bool UKaraganozekWidget::krz_N3_M2_CheckPossCreate()
{
	if (!Disp->krz_N3_M2.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M4_CheckPossCreate()
{
	if (!Disp->krz_N3_M4.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M6_CheckPossCreate()
{
	if (!Disp->krz_N3_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M8_CheckPossCreate()
{
	if (!Disp->krz_N3_M8.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M10_CheckPossCreate()
{
	if (!Disp->krz_N3_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M12_CheckPossCreate()
{
	if (!Disp->krz_N3_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_M14_CheckPossCreate()
{
	if (!Disp->krz_N3_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N3_CH.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N3_CHD.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N3_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N3_CHR.IsFree()) return  false;
	if (Disp->krz._CH3.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N4
bool UKaraganozekWidget::krz_N4_M2_CheckPossCreate()
{
	if (!Disp->krz_N4_M2.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M4_CheckPossCreate()
{
	if (!Disp->krz_N4_M4.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M6_CheckPossCreate()
{
	if (!Disp->krz_N4_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M8_CheckPossCreate()
{
	if (!Disp->krz_N4_M8.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M10_CheckPossCreate()
{
	if (!Disp->krz_N4_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M12_CheckPossCreate()
{
	if (!Disp->krz_N4_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_M14_CheckPossCreate()
{
	if (!Disp->krz_N4_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N4_CH.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N4_CHD.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N4_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N4_CHR.IsFree()) return  false;
	if (Disp->krz._CH4.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N5
bool UKaraganozekWidget::krz_N5_M2_CheckPossCreate()
{
	if (!Disp->krz_N5_M2.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M4_CheckPossCreate()
{
	if (!Disp->krz_N5_M4.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M6_CheckPossCreate()
{
	if (!Disp->krz_N5_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M8_CheckPossCreate()
{
	if (!Disp->krz_N5_M8.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M10_CheckPossCreate()
{
	if (!Disp->krz_N5_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M12_CheckPossCreate()
{
	if (!Disp->krz_N5_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_M14_CheckPossCreate()
{
	if (!Disp->krz_N5_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N5_CH.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N5_CHD.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N5_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N5_CHR.IsFree()) return  false;
	if (Disp->krz._CH5.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N6
bool UKaraganozekWidget::krz_N6_M2_CheckPossCreate()
{
	if (!Disp->krz_N6_M2.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M4_CheckPossCreate()
{
	if (!Disp->krz_N6_M4.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M6_CheckPossCreate()
{
	if (!Disp->krz_N6_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M8_CheckPossCreate()
{
	if (!Disp->krz_N6_M8.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M10_CheckPossCreate()
{
	if (!Disp->krz_N6_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M12_CheckPossCreate()
{
	if (!Disp->krz_N6_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_M14_CheckPossCreate()
{
	if (!Disp->krz_N6_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N6_CH.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N6_CHD.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N6_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N6_CHR.IsFree()) return  false;
	if (Disp->krz._CH6.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion
#pragma region from N7
bool UKaraganozekWidget::krz_N7_M2_CheckPossCreate()
{
	if (!Disp->krz_N7_M2.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M4_CheckPossCreate()
{
	if (!Disp->krz_N7_M4.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M6_CheckPossCreate()
{
	if (!Disp->krz_N7_M6.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M8_CheckPossCreate()
{
	if (!Disp->krz_N7_M8.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M10_CheckPossCreate()
{
	if (!Disp->krz_N7_M10.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M12_CheckPossCreate()
{
	if (!Disp->krz_N7_M12.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_M14_CheckPossCreate()
{
	if (!Disp->krz_N7_M14.IsManevrFreeToBusyWay()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_CH_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N7_CH.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_CHD_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N7_CHD.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
bool UKaraganozekWidget::krz_N7_CHR_CheckPossCreate()
{
	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
	if (!Disp->krz_N7_CHR.IsFree()) return  false;
	if (Disp->krz._CH7.dopstat != EdopStat::Norm) return false;
	return true;
}
#pragma endregion

#pragma endregion


FElm* UKaraganozekWidget::krz_GetEndRouter(Router* router)
{
	FElm* endRouter = nullptr;
	for (size_t i = 0; i < router->sizeRouter; i++)
	{
		endRouter = router->arrRouter[i];
		if (i == router->sizeRouter - 1) break;
	}
	return endRouter;
}



void UKaraganozekWidget::krz_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganozek);
}



bool UKaraganozekWidget::krz_pult_ManevrRouterSet()
{
	if (krz_pult_IsManevrRouterSet == false)
	{
		krz_pult_IsManevrRouterSet = true;
		krz_pult_IsTrainRouterSet = false;

		return true;
	}
	krz_pult_IsManevrRouterSet = false;
	return false;
}

bool UKaraganozekWidget::krz_pult_TrainRouterSet()
{
	if (krz_pult_IsTrainRouterSet == false)
	{
		krz_pult_IsTrainRouterSet = true;
		krz_pult_IsManevrRouterSet = false;
		return true;
	}
	krz_pult_IsTrainRouterSet = false;
	return false;
}

void UKaraganozekWidget::krz_pult_SetConditionStrelkaToMinus()
{
	if (krz_pult_IsStrelkaToMinus == false)
	{
		krz_pult_IsStrelkaToMinus = true;
		krz_pult_IsStrelkaToPlus = false;
	}
	else krz_pult_IsStrelkaToMinus = false;
}

void UKaraganozekWidget::krz_pult_SetConditionStrelkaToPlus()
{
	if (krz_pult_IsStrelkaToPlus == false)
	{
		krz_pult_IsStrelkaToPlus = true;
		krz_pult_IsStrelkaToMinus = false;
	}
	else krz_pult_IsStrelkaToPlus = false;
}

#pragma endregion

#pragma region Strelki

bool UKaraganozekWidget::krz_Make_Strelka_Redact(int number)
{

	if (RedactStrelka == Disp->krz_GetStrelka(number))
	{
		RedactStrelka = nullptr;
		SendCommToServer(Disp->GetCommdForStrelka(number));
		return false;
	}
	if (number == 1)
	{
		RedactStrelka = &Disp->krz._str1;
		SendCommToServer(Commd::s1_vibor);		
	}
	else if (number == 2)
	{
		RedactStrelka = &Disp->krz._str2;
		SendCommToServer(Commd::s2_vibor);
	}
	else if (number == 3)
	{
		RedactStrelka = &Disp->krz._str3;
		SendCommToServer(Commd::s3_vibor);
	}
	else if (number == 4)
	{
		RedactStrelka = &Disp->krz._str4;
		SendCommToServer(Commd::s4_vibor);
	}
	else if (number == 5)
	{
		RedactStrelka = &Disp->krz._str5;
		SendCommToServer(Commd::s5_vibor);
	}
	else if (number == 6)
	{
		RedactStrelka = &Disp->krz._str6;
		SendCommToServer(Commd::s6_vibor);
	}
	else if (number == 7)
	{
		RedactStrelka = &Disp->krz._str7;
		SendCommToServer(Commd::s7_vibor);
	}
	else if (number == 8)
	{
		RedactStrelka = &Disp->krz._str8;
		SendCommToServer(Commd::s8_vibor);
	}
	else if (number == 9)
	{
		RedactStrelka = &Disp->krz._str9;
		SendCommToServer(Commd::s9_vibor);
	}
	else if (number == 10)
	{
		RedactStrelka = &Disp->krz._str10;
		SendCommToServer(Commd::s10_vibor);
	}
	else if (number == 11)
	{
		RedactStrelka = &Disp->krz._str11;
		SendCommToServer(Commd::s11_vibor);
	}
	else if (number == 12)
	{
		RedactStrelka = &Disp->krz._str12;
		SendCommToServer(Commd::s12_vibor);
	}
	else if (number == 13)
	{
		RedactStrelka = &Disp->krz._str13;
		SendCommToServer(Commd::s13_vibor);
	}
	else if (number == 14)
	{
		RedactStrelka = &Disp->krz._str14;
		SendCommToServer(Commd::s14_vibor);
	}
	else if (number == 15)
	{
		RedactStrelka = &Disp->krz._str15;
		SendCommToServer(Commd::s15_vibor);
	}
	else if (number == 16)
	{
		RedactStrelka = &Disp->krz._str16;
		SendCommToServer(Commd::s16_vibor);
	}
	else if (number == 17)
	{
		RedactStrelka = &Disp->krz._str17;
		SendCommToServer(Commd::s17_vibor);
	}
	else if (number == 18)
	{
		RedactStrelka = &Disp->krz._str18;
		SendCommToServer(Commd::s18_vibor);
	}

	else if (number == 20)
	{
		RedactStrelka = &Disp->krz._str20;
		SendCommToServer(Commd::s20_vibor);
	}

	else if (number == 22)
	{
		RedactStrelka = &Disp->krz._str22;
		SendCommToServer(Commd::s22_vibor);
	}

	else if (number == 24)
	{
		RedactStrelka = &Disp->krz._str24;
		SendCommToServer(Commd::s24_vibor);
	}

	else if (number == 26)
	{
		RedactStrelka = &Disp->krz._str26;
		SendCommToServer(Commd::s26_vibor);
	}

	else if (number == 28)
	{
		RedactStrelka = &Disp->krz._str28;
		SendCommToServer(Commd::s28_vibor);
	}

	else if (number == 30)
	{
		RedactStrelka = &Disp->krz._str30;
		SendCommToServer(Commd::s30_vibor);
	}

	else if (number == 32)
	{
	RedactStrelka = &Disp->krz._str32;
	SendCommToServer(Commd::s32_vibor);
	}

	else if (number == 34)
	{
	RedactStrelka = &Disp->krz._str34;
	SendCommToServer(Commd::s34_vibor);
	}

	else if (number == 36)
	{
	RedactStrelka = &Disp->krz._str36;
	SendCommToServer(Commd::s36_vibor);
	}

	
	return true;
}

void UKaraganozekWidget::krz_Make_Strelka_UnRedact()
{
	RedactStrelka = nullptr;
}
bool UKaraganozekWidget::krz_RedactStrelkaToMinus()
{
	if (RedactStrelka == nullptr) return false;
	if (RedactStrelka == &Disp->krz._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->krz._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->krz._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->krz._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->krz._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->krz._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->krz._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->krz._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->krz._str9) SendCommToServer(Commd::s9_Minus);
	if (RedactStrelka == &Disp->krz._str10) SendCommToServer(Commd::s10_Minus);
	if (RedactStrelka == &Disp->krz._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->krz._str12) SendCommToServer(Commd::s12_Minus);
	if (RedactStrelka == &Disp->krz._str13) SendCommToServer(Commd::s13_Minus);
	if (RedactStrelka == &Disp->krz._str14) SendCommToServer(Commd::s14_Minus);
	if (RedactStrelka == &Disp->krz._str15) SendCommToServer(Commd::s15_Minus);
	if (RedactStrelka == &Disp->krz._str16) SendCommToServer(Commd::s16_Minus);
	if (RedactStrelka == &Disp->krz._str17) SendCommToServer(Commd::s17_Minus);
	if (RedactStrelka == &Disp->krz._str18) SendCommToServer(Commd::s18_Minus);
	//if (RedactStrelka == &Disp->krz._str19) SendCommToServer(Commd::s19_Minus);
	if (RedactStrelka == &Disp->krz._str20) SendCommToServer(Commd::s20_Minus);
	//if (RedactStrelka == &Disp->krz._str21) SendCommToServer(Commd::s21_Minus);
	if (RedactStrelka == &Disp->krz._str22) SendCommToServer(Commd::s22_Minus);
	//if (RedactStrelka == &Disp->krz._str23) SendCommToServer(Commd::s23_Minus);
	if (RedactStrelka == &Disp->krz._str24) SendCommToServer(Commd::s24_Minus);
	//if (RedactStrelka == &Disp->krz._str25) SendCommToServer(Commd::s25_Minus);
	if (RedactStrelka == &Disp->krz._str26) SendCommToServer(Commd::s26_Minus);
	//if (RedactStrelka == &Disp->krz._str27) SendCommToServer(Commd::s27_Minus);
	if (RedactStrelka == &Disp->krz._str28) SendCommToServer(Commd::s28_Minus);
	//if (RedactStrelka == &Disp->krz._str29) SendCommToServer(Commd::s29_Minus);
	if (RedactStrelka == &Disp->krz._str30) SendCommToServer(Commd::s30_Minus);
	//if (RedactStrelka == &Disp->krz._str31) SendCommToServer(Commd::s31_Minus);
	if (RedactStrelka == &Disp->krz._str32) SendCommToServer(Commd::s32_Minus);
	//if (RedactStrelka == &Disp->krz._str33) SendCommToServer(Commd::s33_Minus);
	if (RedactStrelka == &Disp->krz._str34) SendCommToServer(Commd::s34_Minus);
	//if (RedactStrelka == &Disp->krz._str35) SendCommToServer(Commd::s35_Minus);
	if (RedactStrelka == &Disp->krz._str36) SendCommToServer(Commd::s36_Minus);

	krz_Make_Strelka_UnRedact();
	return true;
}
bool UKaraganozekWidget::krz_RedactStrelkaToPlus()
{
	if (RedactStrelka == nullptr) return false;
	if (RedactStrelka == &Disp->krz._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->krz._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->krz._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->krz._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->krz._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->krz._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->krz._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->krz._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->krz._str9) SendCommToServer(Commd::s9_Plus);
	if (RedactStrelka == &Disp->krz._str10) SendCommToServer(Commd::s10_Plus);
	if (RedactStrelka == &Disp->krz._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->krz._str12) SendCommToServer(Commd::s12_Plus);
	if (RedactStrelka == &Disp->krz._str13) SendCommToServer(Commd::s13_Plus);
	if (RedactStrelka == &Disp->krz._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->krz._str15) SendCommToServer(Commd::s15_Plus);
	if (RedactStrelka == &Disp->krz._str16) SendCommToServer(Commd::s16_Plus);
	if (RedactStrelka == &Disp->krz._str17) SendCommToServer(Commd::s17_Plus);
	if (RedactStrelka == &Disp->krz._str18) SendCommToServer(Commd::s18_Plus);
	//if (RedactStrelka == &Disp->krz._str19) SendCommToServer(Commd::s19_Plus);
	if (RedactStrelka == &Disp->krz._str20) SendCommToServer(Commd::s20_Plus);
	//if (RedactStrelka == &Disp->krz._str21) SendCommToServer(Commd::s21_Plus);
	if (RedactStrelka == &Disp->krz._str22) SendCommToServer(Commd::s22_Plus);
	//if (RedactStrelka == &Disp->krz._str23) SendCommToServer(Commd::s23_Plus);
	if (RedactStrelka == &Disp->krz._str24) SendCommToServer(Commd::s24_Plus);
	//if (RedactStrelka == &Disp->krz._str25) SendCommToServer(Commd::s25_Plus);
	if (RedactStrelka == &Disp->krz._str26) SendCommToServer(Commd::s26_Plus);
	//if (RedactStrelka == &Disp->krz._str27) SendCommToServer(Commd::s27_Plus);
	if (RedactStrelka == &Disp->krz._str28) SendCommToServer(Commd::s28_Plus);
	//if (RedactStrelka == &Disp->krz._str29) SendCommToServer(Commd::s29_Plus);
	if (RedactStrelka == &Disp->krz._str30) SendCommToServer(Commd::s30_Plus);
	//if (RedactStrelka == &Disp->krz._str31) SendCommToServer(Commd::s31_Plus);
	if (RedactStrelka == &Disp->krz._str32) SendCommToServer(Commd::s32_Plus);
	//if (RedactStrelka == &Disp->krz._str33) SendCommToServer(Commd::s33_Plus);
	if (RedactStrelka == &Disp->krz._str34) SendCommToServer(Commd::s34_Plus);
	//if (RedactStrelka == &Disp->krz._str35) SendCommToServer(Commd::s35_Plus);
	if (RedactStrelka == &Disp->krz._str36) SendCommToServer(Commd::s36_Plus);

	krz_Make_Strelka_UnRedact();
	return true;
}
void UKaraganozekWidget::krz_RedactStrelkaToBreak()
{

	RedactStrelka->cur = ExCurator::NotControl;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
	{
		Disp->krz_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karaganozek);
}
#pragma endregion

#pragma region Svetofori

bool UKaraganozekWidget::krz_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->krz._N;
	else if (dopstat == EdopStat::ND) RedactSvetofor = &Disp->krz._ND;
	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->krz._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->krz._CHD;
	else if (dopstat == EdopStat::CHR) RedactSvetofor = &Disp->krz._CHR;

	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->krz._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->krz._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->krz._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->krz._M4;
	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->krz._M5;
	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->krz._M6;
	else if (dopstat == EdopStat::M8) RedactSvetofor = &Disp->krz._M8;
	else if (dopstat == EdopStat::M10) RedactSvetofor = &Disp->krz._M10;
	else if (dopstat == EdopStat::M12) RedactSvetofor = &Disp->krz._M12;
	else if (dopstat == EdopStat::M14) RedactSvetofor = &Disp->krz._M14;
	else if (dopstat == EdopStat::M16) RedactSvetofor = &Disp->krz._M16;
	else if (dopstat == EdopStat::M18) RedactSvetofor = &Disp->krz._M18;
	else if (dopstat == EdopStat::M20) RedactSvetofor = &Disp->krz._M20;


	else if (dopstat == EdopStat::CH1) RedactSvetofor = &Disp->krz._CH1;
	else if (dopstat == EdopStat::CH2) RedactSvetofor = &Disp->krz._CH2;
	else if (dopstat == EdopStat::CH3) RedactSvetofor = &Disp->krz._CH3;
	else if (dopstat == EdopStat::CH4) RedactSvetofor = &Disp->krz._CH4;
	else if (dopstat == EdopStat::CH5) RedactSvetofor = &Disp->krz._CH5;
	else if (dopstat == EdopStat::CH6) RedactSvetofor = &Disp->krz._CH6;
	else if (dopstat == EdopStat::CH7) RedactSvetofor = &Disp->krz._CH7;

	else if (dopstat == EdopStat::N1) RedactSvetofor = &Disp->krz._N1;
	else if (dopstat == EdopStat::N2) RedactSvetofor = &Disp->krz._N2;
	else if (dopstat == EdopStat::N3) RedactSvetofor = &Disp->krz._N3;
	else if (dopstat == EdopStat::N4) RedactSvetofor = &Disp->krz._N4;
	else if (dopstat == EdopStat::N5) RedactSvetofor = &Disp->krz._N5;
	else if (dopstat == EdopStat::N6) RedactSvetofor = &Disp->krz._N6;
	else if (dopstat == EdopStat::N7) RedactSvetofor = &Disp->krz._N7;

	//krz_Pult_StartNabor();
	return true;
}
EdopStat UKaraganozekWidget::krz_Get_Name_Redact_Svetofor()
{
	if (RedactSvetofor == &Disp->krz._N) return EdopStat::N;
	else if (RedactSvetofor == &Disp->krz._ND) return EdopStat::ND;
	else if (RedactSvetofor == &Disp->krz._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->krz._CHD) return EdopStat::CHD;
	else if (RedactSvetofor == &Disp->krz._CHR) return EdopStat::CHR;

	else if (RedactSvetofor == &Disp->krz._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->krz._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->krz._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->krz._M4) return EdopStat::M4;
	else if (RedactSvetofor == &Disp->krz._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->krz._M6) return EdopStat::M6;
	else if (RedactSvetofor == &Disp->krz._M8) return EdopStat::M8;
	else if (RedactSvetofor == &Disp->krz._M10) return EdopStat::M10;
	else if (RedactSvetofor == &Disp->krz._M12) return EdopStat::M12;
	else if (RedactSvetofor == &Disp->krz._M14) return EdopStat::M14;
	else if (RedactSvetofor == &Disp->krz._M16) return EdopStat::M16;
	else if (RedactSvetofor == &Disp->krz._M18) return EdopStat::M18;
	else if (RedactSvetofor == &Disp->krz._M20) return EdopStat::M20;


	else if (RedactSvetofor == &Disp->krz._CH1) return EdopStat::CH1;
	else if (RedactSvetofor == &Disp->krz._CH2) return EdopStat::CH2;
	else if (RedactSvetofor == &Disp->krz._CH3) return EdopStat::CH3;
	else if (RedactSvetofor == &Disp->krz._CH4) return EdopStat::CH4;
	else if (RedactSvetofor == &Disp->krz._CH5) return EdopStat::CH5;
	else if (RedactSvetofor == &Disp->krz._CH6) return EdopStat::CH6;
	else if (RedactSvetofor == &Disp->krz._CH7) return EdopStat::CH7;


	else if (RedactSvetofor == &Disp->krz._N1) return EdopStat::N1;
	else if (RedactSvetofor == &Disp->krz._N2) return EdopStat::N2;
	else if (RedactSvetofor == &Disp->krz._N3) return EdopStat::N3;
	else if (RedactSvetofor == &Disp->krz._N4) return EdopStat::N4;
	else if (RedactSvetofor == &Disp->krz._N5) return EdopStat::N5;
	else if (RedactSvetofor == &Disp->krz._N6) return EdopStat::N6;
	else if (RedactSvetofor == &Disp->krz._N7) return EdopStat::N7;
	else return EdopStat::Norm;

}
bool UKaraganozekWidget::krz_IsRedactSvetoforFree()
{
	if (RedactSvetofor != nullptr && (RedactSvetofor->stat == EAStat::Grey || RedactSvetofor->stat == EAStat::Red)) return true;

	return false;
}

void UKaraganozekWidget::krz_Make_Svetofor_UnRedact()
{
	RedactSvetofor = nullptr;
}
void UKaraganozekWidget::krz_BrokenSvetoforMake(ExCurator cur)
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
	krz_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_RedactSvetofor_Remont()
{
	RedactSvetofor->cur = ExCurator::Norm;
	krz_Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganozek);
}
void UKaraganozekWidget::krz_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
	{
		Disp->krz_arrSvetofor[i]->cur = ExCurator::Norm;

	}
	Disp->SendDataStationToAll(Station::Karaganozek);
}


#pragma endregion

#pragma region Signals
void UKaraganozekWidget::krz_RazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		Disp->SendCommForGreenKey(Station::Karaganozek, EdopStat::N);
	}
	else if (dopstat == EdopStat::ND)
	{
		Disp->SendCommForGreenKey(Station::Karaganozek, EdopStat::ND);
	}
	else if (dopstat == EdopStat::CH)
	{
		Disp->SendCommForGreenKey(Station::Karaganozek, EdopStat::CH);
	}
	else if (dopstat == EdopStat::CHD)
	{
		Disp->SendCommForGreenKey(Station::Karaganozek, EdopStat::CHD);
	}
	else if (dopstat == EdopStat::CHR)
	{
		Disp->SendCommForGreenKey(Station::Karaganozek, EdopStat::CHR);
	}

}
void UKaraganozekWidget::krz_VspomogatRazvorotPeregona(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		Disp->SendCommForGreenKeyMain(Station::Karaganozek, EdopStat::N);
	}
	else if (dopstat == EdopStat::ND)
	{
		Disp->SendCommForGreenKeyMain(Station::Karaganozek, EdopStat::ND);
	}
	else if (dopstat == EdopStat::CH)
	{
		Disp->SendCommForGreenKeyMain(Station::Karaganozek, EdopStat::CH);
	}
	else if (dopstat == EdopStat::CHD)
	{
		Disp->SendCommForGreenKeyMain(Station::Karaganozek, EdopStat::CHD);
	}
	else if (dopstat == EdopStat::CHR)
	{
		Disp->SendCommForGreenKeyMain(Station::Karaganozek, EdopStat::CHR);
	}

}

#pragma endregion

#pragma region Pult

bool UKaraganozekWidget::krz_Pult_Make_Svetofor_Redact(EdopStat dopstat)
{
	//если начальный светофор  выбран , то отменяем выбор при совпадении допстат
	if (RedactSvetoforStart == dopstat)
	{
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);
		else if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_vibor);
		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);
		else if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_vibor);

		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);
		else if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_vibor);
		else if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_vibor);

		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);
		else if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_vibor);
		else if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_vibor);

		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);
		else if (dopstat == EdopStat::M7) SendCommToServer(Commd::M7_vibor);
		else if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_vibor);
		else if (dopstat == EdopStat::M9) SendCommToServer(Commd::M9_vibor);
		else if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_vibor);

		else if (dopstat == EdopStat::M11) SendCommToServer(Commd::M11_vibor);
		else if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_vibor);
		else if (dopstat == EdopStat::M13) SendCommToServer(Commd::M13_vibor);
		else if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_vibor);
		else if (dopstat == EdopStat::M15) SendCommToServer(Commd::M15_vibor);
		else if (dopstat == EdopStat::M16) SendCommToServer(Commd::M16_vibor);
		else if (dopstat == EdopStat::M17) SendCommToServer(Commd::M17_vibor);
		else if (dopstat == EdopStat::M18) SendCommToServer(Commd::M18_vibor);
		else if (dopstat == EdopStat::M19) SendCommToServer(Commd::M19_vibor);
		else if (dopstat == EdopStat::M20) SendCommToServer(Commd::M20_vibor);
		return false;
	}
	//если при невыбранном светофоре ожидается статус отмены, то запускаем отмену маршрута
	else if (krz_pult_IsOtmenaRouterSet == true)
	{
		Commd com = Disp->GetCommFromDopStat(dopstat);

		if (com != Commd::NotDef)
		{
			SendCommToServer(com);
		}
		krz_pult_IsOtmenaRouterSet = false;
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		return true;
	}
	//если не выбран ни старт ни финиш - выбираем светофор старт
	else if (RedactSvetoforStart == EdopStat::Norm && RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforStart = dopstat;
		if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);
		else if (dopstat == EdopStat::ND) SendCommToServer(Commd::ND_vibor);
		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);
		else if (dopstat == EdopStat::CHR) SendCommToServer(Commd::CHR_vibor);

		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);
		else if (dopstat == EdopStat::N6) SendCommToServer(Commd::N6_vibor);
		else if (dopstat == EdopStat::N7) SendCommToServer(Commd::N7_vibor);

		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);
		else if (dopstat == EdopStat::CH6) SendCommToServer(Commd::CH6_vibor);
		else if (dopstat == EdopStat::CH7) SendCommToServer(Commd::CH7_vibor);

		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);
		else if (dopstat == EdopStat::M7) SendCommToServer(Commd::M7_vibor);
		else if (dopstat == EdopStat::M8) SendCommToServer(Commd::M8_vibor);
		else if (dopstat == EdopStat::M9) SendCommToServer(Commd::M9_vibor);
		else if (dopstat == EdopStat::M10) SendCommToServer(Commd::M10_vibor);

		else if (dopstat == EdopStat::M11) SendCommToServer(Commd::M11_vibor);
		else if (dopstat == EdopStat::M12) SendCommToServer(Commd::M12_vibor);
		else if (dopstat == EdopStat::M13) SendCommToServer(Commd::M13_vibor);
		else if (dopstat == EdopStat::M14) SendCommToServer(Commd::M14_vibor);
		else if (dopstat == EdopStat::M15) SendCommToServer(Commd::M15_vibor);
		else if (dopstat == EdopStat::M16) SendCommToServer(Commd::M16_vibor);
		else if (dopstat == EdopStat::M17) SendCommToServer(Commd::M17_vibor);
		else if (dopstat == EdopStat::M18) SendCommToServer(Commd::M18_vibor);
		else if (dopstat == EdopStat::M19) SendCommToServer(Commd::M19_vibor);
		else if (dopstat == EdopStat::M20) SendCommToServer(Commd::M20_vibor);
		return true;
	}
	//если не выбран только финиш то - создаем маршрут
	else if (RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforEnd = dopstat;

		if (krz_pult_IsManevrRouterSet) krz_Pult_ManevroviyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		else if (krz_pult_IsTrainRouterSet) krz_Pult_PoezdnoyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		krz_pult_IsManevrRouterSet = false;
		krz_pult_IsTrainRouterSet = false;
		RedactSvetoforStart = EdopStat::Norm;
		RedactSvetoforEnd = EdopStat::Norm;
		return true;
	}

	return false;
}


void UKaraganozekWidget::krz_Pult_Make_All_Svetofor_UnRedact()
{
	RedactSvetoforStart = EdopStat::Norm;
	RedactSvetoforEnd = EdopStat::Norm;
	SendCommToServer(Commd::GeneralOtmenaNabor);
	
}

bool UKaraganozekWidget::krz_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		if (Disp->krz._N.stat != EAStat::White)
		{
			SendCommToServer(Commd::N_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krz._N.dopstat != EdopStat::Norm)
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
	if (dopstat == EdopStat::ND)
	{
		if (Disp->krz._ND.stat != EAStat::White)
		{
			SendCommToServer(Commd::ND_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krz._ND.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::ND_ToGreen);
				return false;
			}
			else
			{
				SendCommToServer(Commd::ND_ToRed);
				return false;
			}
		}
	}
	if (dopstat == EdopStat::CH)
	{
		if (Disp->krz._CH.stat != EAStat::White)
		{
			SendCommToServer(Commd::CH_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krz._CH.dopstat != EdopStat::Norm)
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
		if (Disp->krz._CHD.stat != EAStat::White)
		{
			SendCommToServer(Commd::CHD_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krz._CHD.dopstat != EdopStat::Norm)
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
	if (dopstat == EdopStat::CHR)
	{
		if (Disp->krz._CHR.stat != EAStat::White)
		{
			SendCommToServer(Commd::CHR_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krz._CHR.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::CHR_ToGreen2);
				return false;
			}
			else
			{
				SendCommToServer(Commd::CHR_ToRed);
				return false;
			}
		}
	}
	return false;
}
void UKaraganozekWidget::krz_Pult_OtmenaAllRouters()
{
}
void UKaraganozekWidget::krz_Pult_ManevroviyRouterCreate(EdopStat Rstart, EdopStat Rend)
{

	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
	{
		if (Rstart == EdopStat::M1)
		{

			if (Rend == EdopStat::CH1)
			{
				if (krz_M1_CH1_CheckPossCreate()) SendCommToServer(Commd::M1_CH1_Create);
			}

			if (Rend == EdopStat::CH2)
			{
				if (krz_M1_CH2_CheckPossCreate()) SendCommToServer(Commd::M1_CH2_Create);
			}

			if (Rend == EdopStat::CH3)
			{
				if (krz_M1_CH3_CheckPossCreate()) SendCommToServer(Commd::M1_CH3_Create);
			}

			if (Rend == EdopStat::CH4)
			{
				if (krz_M1_CH4_CheckPossCreate()) SendCommToServer(Commd::M1_CH4_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krz_M1_CH5_CheckPossCreate()) SendCommToServer(Commd::M1_CH5_Create);
			}

			if (Rend == EdopStat::CH6)
			{
				if (krz_M1_CH6_CheckPossCreate()) SendCommToServer(Commd::M1_CH6_Create);
			}

			if (Rend == EdopStat::CH7)
			{
				if (krz_M1_CH7_CheckPossCreate()) SendCommToServer(Commd::M1_CH7_Create);
			}
		}
		if (Rstart == EdopStat::M2)
		{

			if (Rend == EdopStat::N1)
			{
				if (krz_M2_N1_CheckPossCreate()) SendCommToServer(Commd::M2_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M2_N2_CheckPossCreate()) SendCommToServer(Commd::M2_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M2_N3_CheckPossCreate()) SendCommToServer(Commd::M2_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M2_N4_CheckPossCreate()) SendCommToServer(Commd::M2_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M2_N5_CheckPossCreate()) SendCommToServer(Commd::M2_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M2_N6_CheckPossCreate()) SendCommToServer(Commd::M2_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M2_N7_CheckPossCreate()) SendCommToServer(Commd::M2_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M2_M5_CheckPossCreate()) SendCommToServer(Commd::M2_M5_Create);
			}
		}
		if (Rstart == EdopStat::M3)
		{
			if (Rend == EdopStat::CH1)
			{
				if (krz_M3_CH1_CheckPossCreate()) SendCommToServer(Commd::M3_CH1_Create);
			}

			if (Rend == EdopStat::CH2)
			{
				if (krz_M3_CH2_CheckPossCreate()) SendCommToServer(Commd::M3_CH2_Create);
			}

			if (Rend == EdopStat::CH3)
			{
				if (krz_M3_CH3_CheckPossCreate()) SendCommToServer(Commd::M3_CH3_Create);
			}

			if (Rend == EdopStat::CH4)
			{
				if (krz_M3_CH4_CheckPossCreate()) SendCommToServer(Commd::M3_CH4_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krz_M3_CH5_CheckPossCreate()) SendCommToServer(Commd::M3_CH5_Create);
			}

			if (Rend == EdopStat::CH6)
			{
				if (krz_M3_CH6_CheckPossCreate()) SendCommToServer(Commd::M3_CH6_Create);
			}

			if (Rend == EdopStat::CH7)
			{
				if (krz_M3_CH7_CheckPossCreate()) SendCommToServer(Commd::M3_CH7_Create);
			}
		}
		if (Rstart == EdopStat::M4)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M4_N1_CheckPossCreate()) SendCommToServer(Commd::M4_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M4_N2_CheckPossCreate()) SendCommToServer(Commd::M4_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M4_N3_CheckPossCreate()) SendCommToServer(Commd::M4_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M4_N4_CheckPossCreate()) SendCommToServer(Commd::M4_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M4_N5_CheckPossCreate()) SendCommToServer(Commd::M4_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M4_N6_CheckPossCreate()) SendCommToServer(Commd::M4_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M4_N7_CheckPossCreate()) SendCommToServer(Commd::M4_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M4_M5_CheckPossCreate()) SendCommToServer(Commd::M4_M5_Create);
			}

		}
		if (Rstart == EdopStat::M5)
		{
			if (Rend == EdopStat::M2)
			{
				if (krz_M5_M2_CheckPossCreate()) SendCommToServer(Commd::M5_M2_Create);
			}
			if (Rend == EdopStat::M4)
			{
				if (krz_M5_M4_CheckPossCreate()) SendCommToServer(Commd::M5_M4_Create);
			}
		}
		if (Rstart == EdopStat::M6)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M6_N1_CheckPossCreate()) SendCommToServer(Commd::M6_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M6_N2_CheckPossCreate()) SendCommToServer(Commd::M6_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M6_N3_CheckPossCreate()) SendCommToServer(Commd::M6_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M6_N4_CheckPossCreate()) SendCommToServer(Commd::M6_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M6_N5_CheckPossCreate()) SendCommToServer(Commd::M6_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M6_N6_CheckPossCreate()) SendCommToServer(Commd::M6_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M6_N7_CheckPossCreate()) SendCommToServer(Commd::M6_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M6_M5_CheckPossCreate()) SendCommToServer(Commd::M6_M5_Create);
			}
		}
		if (Rstart == EdopStat::M8)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M8_N1_CheckPossCreate()) SendCommToServer(Commd::M8_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M8_N2_CheckPossCreate()) SendCommToServer(Commd::M8_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M8_N3_CheckPossCreate()) SendCommToServer(Commd::M8_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M8_N4_CheckPossCreate()) SendCommToServer(Commd::M8_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M8_N5_CheckPossCreate()) SendCommToServer(Commd::M8_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M8_N6_CheckPossCreate()) SendCommToServer(Commd::M8_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M8_N7_CheckPossCreate()) SendCommToServer(Commd::M8_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M8_M5_CheckPossCreate()) SendCommToServer(Commd::M8_M5_Create);
			}
		}
		if (Rstart == EdopStat::M10)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M10_N1_CheckPossCreate()) SendCommToServer(Commd::M10_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M10_N2_CheckPossCreate()) SendCommToServer(Commd::M10_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M10_N3_CheckPossCreate()) SendCommToServer(Commd::M10_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M10_N4_CheckPossCreate()) SendCommToServer(Commd::M10_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M10_N5_CheckPossCreate()) SendCommToServer(Commd::M10_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M10_N6_CheckPossCreate()) SendCommToServer(Commd::M10_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M10_N7_CheckPossCreate()) SendCommToServer(Commd::M10_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M10_M5_CheckPossCreate()) SendCommToServer(Commd::M10_M5_Create);
			}
		}
		if (Rstart == EdopStat::M12)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M12_N1_CheckPossCreate()) SendCommToServer(Commd::M12_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M12_N2_CheckPossCreate()) SendCommToServer(Commd::M12_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M12_N3_CheckPossCreate()) SendCommToServer(Commd::M12_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M12_N4_CheckPossCreate()) SendCommToServer(Commd::M12_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M12_N5_CheckPossCreate()) SendCommToServer(Commd::M12_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M12_N6_CheckPossCreate()) SendCommToServer(Commd::M12_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M12_N7_CheckPossCreate()) SendCommToServer(Commd::M12_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M12_M5_CheckPossCreate()) SendCommToServer(Commd::M12_M5_Create);
			}
		}
		if (Rstart == EdopStat::M14)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M14_N1_CheckPossCreate()) SendCommToServer(Commd::M14_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M14_N2_CheckPossCreate()) SendCommToServer(Commd::M14_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_M14_N3_CheckPossCreate()) SendCommToServer(Commd::M14_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_M14_N4_CheckPossCreate()) SendCommToServer(Commd::M14_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_M14_N5_CheckPossCreate()) SendCommToServer(Commd::M14_N5_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_M14_N6_CheckPossCreate()) SendCommToServer(Commd::M14_N6_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_M14_N7_CheckPossCreate()) SendCommToServer(Commd::M14_N7_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M14_M5_CheckPossCreate()) SendCommToServer(Commd::M14_M5_Create);
			}
		}
		if (Rstart == EdopStat::M16)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M16_N1_CheckPossCreate()) SendCommToServer(Commd::M16_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M16_N2_CheckPossCreate()) SendCommToServer(Commd::M16_N2_Create);
			}



			if (Rend == EdopStat::M5)
			{
				if (krz_M16_M5_CheckPossCreate()) SendCommToServer(Commd::M16_M5_Create);
			}
		}
		if (Rstart == EdopStat::M18)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M18_N1_CheckPossCreate()) SendCommToServer(Commd::M18_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M18_N2_CheckPossCreate()) SendCommToServer(Commd::M18_N2_Create);
			}

			if (Rend == EdopStat::M5)
			{
				if (krz_M18_M5_CheckPossCreate()) SendCommToServer(Commd::M18_M5_Create);
			}
		}
		if (Rstart == EdopStat::M20)
		{
			if (Rend == EdopStat::N1)
			{
				if (krz_M20_N1_CheckPossCreate()) SendCommToServer(Commd::M20_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_M20_N2_CheckPossCreate()) SendCommToServer(Commd::M20_N2_Create);
			}



			if (Rend == EdopStat::M5)
			{
				if (krz_M20_M5_CheckPossCreate()) SendCommToServer(Commd::M20_M5_Create);
			}
		}


		if (Rend == EdopStat::M1)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krz_CH1_M1_CheckPossCreate()) SendCommToServer(Commd::CH1_M1_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krz_CH2_M1_CheckPossCreate()) SendCommToServer(Commd::CH2_M1_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krz_CH3_M1_CheckPossCreate()) SendCommToServer(Commd::CH3_M1_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krz_CH4_M1_CheckPossCreate()) SendCommToServer(Commd::CH4_M1_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krz_CH5_M1_CheckPossCreate()) SendCommToServer(Commd::CH5_M1_Create);
			}
			if (Rstart == EdopStat::CH6)
			{
				if (krz_CH6_M1_CheckPossCreate()) SendCommToServer(Commd::CH6_M1_Create);
			}
			if (Rstart == EdopStat::CH7)
			{
				if (krz_CH7_M1_CheckPossCreate()) SendCommToServer(Commd::CH7_M1_Create);
			}
		}

		if (Rend == EdopStat::M2)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M2_CheckPossCreate()) SendCommToServer(Commd::M5_M2_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M2_CheckPossCreate()) SendCommToServer(Commd::N1_M2_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M2_CheckPossCreate()) SendCommToServer(Commd::N2_M2_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M2_CheckPossCreate()) SendCommToServer(Commd::N3_M2_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M2_CheckPossCreate()) SendCommToServer(Commd::N4_M2_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M2_CheckPossCreate()) SendCommToServer(Commd::N5_M2_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M2_CheckPossCreate()) SendCommToServer(Commd::N6_M2_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M2_CheckPossCreate()) SendCommToServer(Commd::N7_M2_Create);
			}
		}

		if (Rend == EdopStat::M3)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krz_CH1_M3_CheckPossCreate()) SendCommToServer(Commd::CH1_M3_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krz_CH2_M3_CheckPossCreate()) SendCommToServer(Commd::CH2_M3_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krz_CH3_M3_CheckPossCreate()) SendCommToServer(Commd::CH3_M3_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krz_CH4_M3_CheckPossCreate()) SendCommToServer(Commd::CH4_M3_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krz_CH5_M3_CheckPossCreate()) SendCommToServer(Commd::CH5_M3_Create);
			}
			if (Rstart == EdopStat::CH6)
			{
				if (krz_CH6_M3_CheckPossCreate()) SendCommToServer(Commd::CH6_M3_Create);
			}
			if (Rstart == EdopStat::CH7)
			{
				if (krz_CH7_M3_CheckPossCreate()) SendCommToServer(Commd::CH7_M3_Create);
			}

		}

		if (Rend == EdopStat::M4)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M4_CheckPossCreate()) SendCommToServer(Commd::M5_M4_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M4_CheckPossCreate()) SendCommToServer(Commd::N1_M4_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M4_CheckPossCreate()) SendCommToServer(Commd::N2_M4_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M4_CheckPossCreate()) SendCommToServer(Commd::N3_M4_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M4_CheckPossCreate()) SendCommToServer(Commd::N4_M4_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M4_CheckPossCreate()) SendCommToServer(Commd::N5_M4_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M4_CheckPossCreate()) SendCommToServer(Commd::N6_M4_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M4_CheckPossCreate()) SendCommToServer(Commd::N7_M4_Create);
			}

		}

		if (Rend == EdopStat::M6)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M6_CheckPossCreate()) SendCommToServer(Commd::M5_M6_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M6_CheckPossCreate()) SendCommToServer(Commd::N1_M6_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M6_CheckPossCreate()) SendCommToServer(Commd::N2_M6_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M6_CheckPossCreate()) SendCommToServer(Commd::N3_M6_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M6_CheckPossCreate()) SendCommToServer(Commd::N4_M6_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M6_CheckPossCreate()) SendCommToServer(Commd::N5_M6_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M6_CheckPossCreate()) SendCommToServer(Commd::N6_M6_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M6_CheckPossCreate()) SendCommToServer(Commd::N7_M6_Create);
			}

		}

		if (Rend == EdopStat::M8)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M8_CheckPossCreate()) SendCommToServer(Commd::M5_M8_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M8_CheckPossCreate()) SendCommToServer(Commd::N1_M8_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M8_CheckPossCreate()) SendCommToServer(Commd::N2_M8_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M8_CheckPossCreate()) SendCommToServer(Commd::N3_M8_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M8_CheckPossCreate()) SendCommToServer(Commd::N4_M8_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M8_CheckPossCreate()) SendCommToServer(Commd::N5_M8_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M8_CheckPossCreate()) SendCommToServer(Commd::N6_M8_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M8_CheckPossCreate()) SendCommToServer(Commd::N7_M8_Create);
			}

		}

		if (Rend == EdopStat::M10)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M10_CheckPossCreate()) SendCommToServer(Commd::M5_M10_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M10_CheckPossCreate()) SendCommToServer(Commd::N1_M10_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M10_CheckPossCreate()) SendCommToServer(Commd::N2_M10_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M10_CheckPossCreate()) SendCommToServer(Commd::N3_M10_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M10_CheckPossCreate()) SendCommToServer(Commd::N4_M10_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M10_CheckPossCreate()) SendCommToServer(Commd::N5_M10_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M10_CheckPossCreate()) SendCommToServer(Commd::N6_M10_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M10_CheckPossCreate()) SendCommToServer(Commd::N7_M10_Create);
			}

		}

		if (Rend == EdopStat::M12)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M12_CheckPossCreate()) SendCommToServer(Commd::M5_M12_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M12_CheckPossCreate()) SendCommToServer(Commd::N1_M12_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M12_CheckPossCreate()) SendCommToServer(Commd::N2_M12_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M12_CheckPossCreate()) SendCommToServer(Commd::N3_M12_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M12_CheckPossCreate()) SendCommToServer(Commd::N4_M12_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M12_CheckPossCreate()) SendCommToServer(Commd::N5_M12_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M12_CheckPossCreate()) SendCommToServer(Commd::N6_M12_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M12_CheckPossCreate()) SendCommToServer(Commd::N7_M12_Create);
			}

		}

		if (Rend == EdopStat::M14)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M14_CheckPossCreate()) SendCommToServer(Commd::M5_M14_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M14_CheckPossCreate()) SendCommToServer(Commd::N1_M14_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M14_CheckPossCreate()) SendCommToServer(Commd::N2_M14_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_M14_CheckPossCreate()) SendCommToServer(Commd::N3_M14_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_M14_CheckPossCreate()) SendCommToServer(Commd::N4_M14_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_M14_CheckPossCreate()) SendCommToServer(Commd::N5_M14_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_M14_CheckPossCreate()) SendCommToServer(Commd::N6_M14_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_M14_CheckPossCreate()) SendCommToServer(Commd::N7_M14_Create);
			}

		}

		if (Rend == EdopStat::M16)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M16_CheckPossCreate()) SendCommToServer(Commd::M5_M16_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M16_CheckPossCreate()) SendCommToServer(Commd::N1_M16_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M16_CheckPossCreate()) SendCommToServer(Commd::N2_M16_Create);
			}

		}

		if (Rend == EdopStat::M18)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M18_CheckPossCreate()) SendCommToServer(Commd::M5_M18_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M18_CheckPossCreate()) SendCommToServer(Commd::N1_M18_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M18_CheckPossCreate()) SendCommToServer(Commd::N2_M18_Create);
			}

		}

		if (Rend == EdopStat::M20)
		{
			if (Rstart == EdopStat::M5)
			{
				if (krz_M5_M20_CheckPossCreate()) SendCommToServer(Commd::M5_M20_Create);
			}
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_M20_CheckPossCreate()) SendCommToServer(Commd::N1_M20_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_M20_CheckPossCreate()) SendCommToServer(Commd::N2_M20_Create);
			}

		}


	}
	//krz_pult_SvetoforChoice_1 = false;
	//krz_pult_SvetoforChoice_2 = false;
}
void UKaraganozekWidget::krz_Pult_PoezdnoyRouterCreate(EdopStat Rstart, EdopStat Rend)
{

	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
	{
		if (Rstart == EdopStat::N)
		{

			if (Rend == EdopStat::CH1)
			{
				if (krz_N_1P_CheckPossCreate()) SendCommToServer(Commd::N_1P_Create);
			}

			if (Rend == EdopStat::CH2)
			{
				if (krz_N_2P_CheckPossCreate()) SendCommToServer(Commd::N_2P_Create);
			}

			if (Rend == EdopStat::CH3)
			{
				if (krz_N_3P_CheckPossCreate()) SendCommToServer(Commd::N_3P_Create);
			}

			if (Rend == EdopStat::CH4)
			{
				if (krz_N_4P_CheckPossCreate()) SendCommToServer(Commd::N_4P_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krz_N_5P_CheckPossCreate()) SendCommToServer(Commd::N_5P_Create);
			}

			if (Rend == EdopStat::CH6)
			{
				if (krz_N_6P_CheckPossCreate()) SendCommToServer(Commd::N_6P_Create);
			}

			if (Rend == EdopStat::CH7)
			{
				if (krz_N_7P_CheckPossCreate()) SendCommToServer(Commd::N_7P_Create);
			}
		}
		if (Rstart == EdopStat::ND)
		{

			if (Rend == EdopStat::CH1)
			{
				if (krz_ND_1P_CheckPossCreate()) SendCommToServer(Commd::ND_1P_Create);
			}

			if (Rend == EdopStat::CH2)
			{
				if (krz_ND_2P_CheckPossCreate()) SendCommToServer(Commd::ND_2P_Create);
			}

			if (Rend == EdopStat::CH3)
			{
				if (krz_ND_3P_CheckPossCreate()) SendCommToServer(Commd::ND_3P_Create);
			}

			if (Rend == EdopStat::CH4)
			{
				if (krz_ND_4P_CheckPossCreate()) SendCommToServer(Commd::ND_4P_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krz_ND_5P_CheckPossCreate()) SendCommToServer(Commd::ND_5P_Create);
			}

			if (Rend == EdopStat::CH6)
			{
				if (krz_ND_6P_CheckPossCreate()) SendCommToServer(Commd::ND_6P_Create);
			}

			if (Rend == EdopStat::CH7)
			{
				if (krz_ND_7P_CheckPossCreate()) SendCommToServer(Commd::ND_7P_Create);
			}
		}
		if (Rstart == EdopStat::CH)
		{

			if (Rend == EdopStat::N1)
			{
				if (krz_CH_1P_CheckPossCreate()) SendCommToServer(Commd::CH_1P_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_CH_2P_CheckPossCreate()) SendCommToServer(Commd::CH_2P_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_CH_3P_CheckPossCreate()) SendCommToServer(Commd::CH_3P_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_CH_4P_CheckPossCreate()) SendCommToServer(Commd::CH_4P_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_CH_5P_CheckPossCreate()) SendCommToServer(Commd::CH_5P_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_CH_6P_CheckPossCreate()) SendCommToServer(Commd::CH_6P_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_CH_7P_CheckPossCreate()) SendCommToServer(Commd::CH_7P_Create);
			}
		}
		if (Rstart == EdopStat::CHD)
		{

			if (Rend == EdopStat::N1)
			{
				if (krz_CHD_1P_CheckPossCreate()) SendCommToServer(Commd::CHD_1P_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_CHD_2P_CheckPossCreate()) SendCommToServer(Commd::CHD_2P_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_CHD_3P_CheckPossCreate()) SendCommToServer(Commd::CHD_3P_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_CHD_4P_CheckPossCreate()) SendCommToServer(Commd::CHD_4P_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_CHD_5P_CheckPossCreate()) SendCommToServer(Commd::CHD_5P_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_CHD_6P_CheckPossCreate()) SendCommToServer(Commd::CHD_6P_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_CHD_7P_CheckPossCreate()) SendCommToServer(Commd::CHD_7P_Create);
			}
		}
		if (Rstart == EdopStat::CHR)
		{

			if (Rend == EdopStat::N1)
			{
				if (krz_CHR_1P_CheckPossCreate()) SendCommToServer(Commd::CHR_1P_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krz_CHR_2P_CheckPossCreate()) SendCommToServer(Commd::CHR_2P_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krz_CHR_3P_CheckPossCreate()) SendCommToServer(Commd::CHR_3P_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krz_CHR_4P_CheckPossCreate()) SendCommToServer(Commd::CHR_4P_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krz_CHR_5P_CheckPossCreate()) SendCommToServer(Commd::CHR_5P_Create);
			}

			if (Rend == EdopStat::N6)
			{
				if (krz_CHR_6P_CheckPossCreate()) SendCommToServer(Commd::CHR_6P_Create);
			}

			if (Rend == EdopStat::N7)
			{
				if (krz_CHR_7P_CheckPossCreate()) SendCommToServer(Commd::CHR_7P_Create);
			}
		}

		if (Rend == EdopStat::N)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krz_CH1_N_CheckPossCreate()) SendCommToServer(Commd::CH1_N_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krz_CH2_N_CheckPossCreate()) SendCommToServer(Commd::CH2_N_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krz_CH3_N_CheckPossCreate()) SendCommToServer(Commd::CH3_N_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krz_CH4_N_CheckPossCreate()) SendCommToServer(Commd::CH4_N_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krz_CH5_N_CheckPossCreate()) SendCommToServer(Commd::CH5_N_Create);
			}
			if (Rstart == EdopStat::CH6)
			{
				if (krz_CH6_N_CheckPossCreate()) SendCommToServer(Commd::CH6_N_Create);
			}
			if (Rstart == EdopStat::CH7)
			{
				if (krz_CH7_N_CheckPossCreate()) SendCommToServer(Commd::CH7_N_Create);
			}
		}
		if (Rend == EdopStat::ND)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krz_CH1_ND_CheckPossCreate()) SendCommToServer(Commd::CH1_ND_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krz_CH2_ND_CheckPossCreate()) SendCommToServer(Commd::CH2_ND_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krz_CH3_ND_CheckPossCreate()) SendCommToServer(Commd::CH3_ND_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krz_CH4_ND_CheckPossCreate()) SendCommToServer(Commd::CH4_ND_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krz_CH5_ND_CheckPossCreate()) SendCommToServer(Commd::CH5_ND_Create);
			}
			if (Rstart == EdopStat::CH6)
			{
				if (krz_CH6_ND_CheckPossCreate()) SendCommToServer(Commd::CH6_ND_Create);
			}
			if (Rstart == EdopStat::CH7)
			{
				if (krz_CH7_ND_CheckPossCreate()) SendCommToServer(Commd::CH7_ND_Create);
			}
		}
		if (Rend == EdopStat::CH)
		{
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_CH_CheckPossCreate()) SendCommToServer(Commd::N1_CH_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_CH_CheckPossCreate()) SendCommToServer(Commd::N2_CH_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_CH_CheckPossCreate()) SendCommToServer(Commd::N3_CH_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_CH_CheckPossCreate()) SendCommToServer(Commd::N4_CH_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_CH_CheckPossCreate()) SendCommToServer(Commd::N5_CH_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_CH_CheckPossCreate()) SendCommToServer(Commd::N6_CH_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_CH_CheckPossCreate()) SendCommToServer(Commd::N7_CH_Create);
			}
		}
		if (Rend == EdopStat::CHD)
		{
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_CHD_CheckPossCreate()) SendCommToServer(Commd::N1_CHD_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_CHD_CheckPossCreate()) SendCommToServer(Commd::N2_CHD_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_CHD_CheckPossCreate()) SendCommToServer(Commd::N3_CHD_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_CHD_CheckPossCreate()) SendCommToServer(Commd::N4_CHD_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_CHD_CheckPossCreate()) SendCommToServer(Commd::N5_CHD_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_CHD_CheckPossCreate()) SendCommToServer(Commd::N6_CHD_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_CHD_CheckPossCreate()) SendCommToServer(Commd::N7_CHD_Create);
			}
		}
		if (Rend == EdopStat::CHR)
		{
			if (Rstart == EdopStat::N1)
			{
				if (krz_N1_CHR_CheckPossCreate()) SendCommToServer(Commd::N1_CHR_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krz_N2_CHR_CheckPossCreate()) SendCommToServer(Commd::N2_CHR_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krz_N3_CHR_CheckPossCreate()) SendCommToServer(Commd::N3_CHR_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krz_N4_CHR_CheckPossCreate()) SendCommToServer(Commd::N4_CHR_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krz_N5_CHR_CheckPossCreate()) SendCommToServer(Commd::N5_CHR_Create);
			}
			if (Rstart == EdopStat::N6)
			{
				if (krz_N6_CHR_CheckPossCreate()) SendCommToServer(Commd::N6_CHR_Create);
			}
			if (Rstart == EdopStat::N7)
			{
				if (krz_N7_CHR_CheckPossCreate()) SendCommToServer(Commd::N7_CHR_Create);
			}
		}
	}
	/*krz_pult_SvetoforChoice_1 = false;
	krz_pult_SvetoforChoice_2 = false;*/
}
void UKaraganozekWidget::krz_Pult_OtmenaNabora()
{
	krz_Pult_Make_All_Svetofor_UnRedact();
	
}
void UKaraganozekWidget::krz_Pult_Iskusstvennaya_razdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganozek);
}
bool UKaraganozekWidget::krz_Pult_Otmena_Marshruta()
{
	if (krz_pult_IsOtmenaRouterSet == false)
	{
		krz_pult_IsOtmenaRouterSet = true;
		return true;
	}
	krz_pult_IsOtmenaRouterSet = false;
	return false;
}


void UKaraganozekWidget::krz_Pult_Reload()
{
	std::thread t1(&UKaraganozekWidget::krz_Pult_Reload_InThread, this);
	t1.detach();
}
void UKaraganozekWidget::krz_Pult_Reload_InThread()
{
	//krz_Pult_Off_InThread();
	Disp->krz_Pult_FirstInitArrPelm();
}
void UKaraganozekWidget::krz_Pult_Off()
{
	std::thread t1(&UKaraganozekWidget::krz_Pult_Off_InThread, this);
	t1.detach();
}
void UKaraganozekWidget::krz_Pult_Off_InThread()
{
	Disp->krz_pult_arrComm.clear();
	
	Disp->krz_pult_arrComm.push_back("a53off\n");
	Disp->krz_pult_arrComm.push_back("a52off\n");
	Disp->krz_pult_arrComm.push_back("a51off\n");
	Disp->krz_pult_arrComm.push_back("a50off\n");
	Disp->krz_pult_arrComm.push_back("a49off\n");
	Disp->krz_pult_arrComm.push_back("a48off\n");
	Disp->krz_pult_arrComm.push_back("a47off\n");
	Disp->krz_pult_arrComm.push_back("a46off\n");
	Disp->krz_pult_arrComm.push_back("a45off\n");
	Disp->krz_pult_arrComm.push_back("a44off\n");
	Disp->krz_pult_arrComm.push_back("a43off\n");
	Disp->krz_pult_arrComm.push_back("a42off\n");
	Disp->krz_pult_arrComm.push_back("a41off\n");
	Disp->krz_pult_arrComm.push_back("a40off\n");
	Disp->krz_pult_arrComm.push_back("a39off\n");
	Disp->krz_pult_arrComm.push_back("a38off\n");
	Disp->krz_pult_arrComm.push_back("a37off\n");
	Disp->krz_pult_arrComm.push_back("a36off\n");
	Disp->krz_pult_arrComm.push_back("a35off\n");
	Disp->krz_pult_arrComm.push_back("a34off\n");
	Disp->krz_pult_arrComm.push_back("a33off\n");
	Disp->krz_pult_arrComm.push_back("a32off\n");
	Disp->krz_pult_arrComm.push_back("a31off\n");
	Disp->krz_pult_arrComm.push_back("a30off\n");
	Disp->krz_pult_arrComm.push_back("a29off\n");
	Disp->krz_pult_arrComm.push_back("a28off\n");
	Disp->krz_pult_arrComm.push_back("a27off\n");
	Disp->krz_pult_arrComm.push_back("a26off\n");
	Disp->krz_pult_arrComm.push_back("a25off\n");
	Disp->krz_pult_arrComm.push_back("a24off\n");
	Disp->krz_pult_arrComm.push_back("a23off\n");
	Disp->krz_pult_arrComm.push_back("a22off\n");
	Disp->krz_pult_arrComm.push_back("a13off\n");
	Disp->krz_pult_arrComm.push_back("a12off\n");
	Disp->krz_pult_arrComm.push_back("a11off\n");
	Disp->krz_pult_arrComm.push_back("a10off\n");
	Disp->krz_pult_arrComm.push_back("a9off\n");
	Disp->krz_pult_arrComm.push_back("a8off\n");
	Disp->krz_pult_arrComm.push_back("a7off\n");
	Disp->krz_pult_arrComm.push_back("a6off\n");
	Disp->krz_pult_arrComm.push_back("a5off\n");
	Disp->krz_pult_arrComm.push_back("a4off\n");
	Disp->krz_pult_arrComm.push_back("a3off\n");
	Disp->krz_pult_arrComm.push_back("a2off\n");
	Disp->krz_pult_arrComm.push_back("an0off\n");
	Disp->krz_pult_arrComm.push_back("an1off\n");
	Disp->krz_pult_arrComm.push_back("an2off\n");
	Disp->krz_pult_arrComm.push_back("an3off\n");
	Disp->krz_pult_arrComm.push_back("an4off\n");
	Disp->krz_pult_arrComm.push_back("an5off\n");
	Disp->krz_pult_arrComm.push_back("an6off\n");
	Disp->krz_pult_arrComm.push_back("an7off\n");
	Disp->krz_pult_arrComm.push_back("an8off\n");
	Disp->krz_pult_arrComm.push_back("an9off\n");
	Disp->krz_pult_arrComm.push_back("an10off\n");
	Disp->krz_pult_arrComm.push_back("an11off\n");
	Disp->krz_pult_arrComm.push_back("an12off\n");
	Disp->krz_pult_arrComm.push_back("an13off\n");
	Disp->krz_pult_arrComm.push_back("an14off\n");
	Disp->krz_pult_arrComm.push_back("an15off\n");

	Disp->krz_pult_arrComm.push_back("b53off\n");
	Disp->krz_pult_arrComm.push_back("b52off\n");
	Disp->krz_pult_arrComm.push_back("b51off\n");
	Disp->krz_pult_arrComm.push_back("b50off\n");
	Disp->krz_pult_arrComm.push_back("b49off\n");
	Disp->krz_pult_arrComm.push_back("b48off\n");
	Disp->krz_pult_arrComm.push_back("b47off\n");
	Disp->krz_pult_arrComm.push_back("b46off\n");
	Disp->krz_pult_arrComm.push_back("b45off\n");
	Disp->krz_pult_arrComm.push_back("b44off\n");
	Disp->krz_pult_arrComm.push_back("b43off\n");
	Disp->krz_pult_arrComm.push_back("b42off\n");
	Disp->krz_pult_arrComm.push_back("b41off\n");
	Disp->krz_pult_arrComm.push_back("b40off\n");
	Disp->krz_pult_arrComm.push_back("b39off\n");
	Disp->krz_pult_arrComm.push_back("b38off\n");
	Disp->krz_pult_arrComm.push_back("b37off\n");
	Disp->krz_pult_arrComm.push_back("b36off\n");
	Disp->krz_pult_arrComm.push_back("b35off\n");
	Disp->krz_pult_arrComm.push_back("b34off\n");
	Disp->krz_pult_arrComm.push_back("b33off\n");
	Disp->krz_pult_arrComm.push_back("b32off\n");
	Disp->krz_pult_arrComm.push_back("b31off\n");
	Disp->krz_pult_arrComm.push_back("b30off\n");
	Disp->krz_pult_arrComm.push_back("b29off\n");
	Disp->krz_pult_arrComm.push_back("b28off\n");
	Disp->krz_pult_arrComm.push_back("b27off\n");
	Disp->krz_pult_arrComm.push_back("b26off\n");
	Disp->krz_pult_arrComm.push_back("b25off\n");
	Disp->krz_pult_arrComm.push_back("b24off\n");
	Disp->krz_pult_arrComm.push_back("b23off\n");
	Disp->krz_pult_arrComm.push_back("b22off\n");
	Disp->krz_pult_arrComm.push_back("b13off\n");
	Disp->krz_pult_arrComm.push_back("b12off\n");
	Disp->krz_pult_arrComm.push_back("b11off\n");
	Disp->krz_pult_arrComm.push_back("b10off\n");
	Disp->krz_pult_arrComm.push_back("b9off\n");
	Disp->krz_pult_arrComm.push_back("b8off\n");
	Disp->krz_pult_arrComm.push_back("b7off\n");
	Disp->krz_pult_arrComm.push_back("b6off\n");
	Disp->krz_pult_arrComm.push_back("b5off\n");
	Disp->krz_pult_arrComm.push_back("b4off\n");
	Disp->krz_pult_arrComm.push_back("b3off\n");
	Disp->krz_pult_arrComm.push_back("b2off\n");
	Disp->krz_pult_arrComm.push_back("bn0off\n");
	Disp->krz_pult_arrComm.push_back("bn1off\n");
	Disp->krz_pult_arrComm.push_back("bn2off\n");
	Disp->krz_pult_arrComm.push_back("bn3off\n");
	Disp->krz_pult_arrComm.push_back("bn4off\n");
	Disp->krz_pult_arrComm.push_back("bn5off\n");
	Disp->krz_pult_arrComm.push_back("bn6off\n");
	Disp->krz_pult_arrComm.push_back("bn7off\n");
	Disp->krz_pult_arrComm.push_back("bn8off\n");
	Disp->krz_pult_arrComm.push_back("bn9off\n");
	Disp->krz_pult_arrComm.push_back("bn10off\n");
	Disp->krz_pult_arrComm.push_back("bn11off\n");
	Disp->krz_pult_arrComm.push_back("bn12off\n");
	Disp->krz_pult_arrComm.push_back("bn13off\n");
	Disp->krz_pult_arrComm.push_back("bn14off\n");
	Disp->krz_pult_arrComm.push_back("bn15off\n");

	Disp->krz_pult_arrComm.push_back("c53off\n");
	Disp->krz_pult_arrComm.push_back("c52off\n");
	Disp->krz_pult_arrComm.push_back("c51off\n");
	Disp->krz_pult_arrComm.push_back("c50off\n");
	Disp->krz_pult_arrComm.push_back("c49off\n");
	Disp->krz_pult_arrComm.push_back("c48off\n");
	Disp->krz_pult_arrComm.push_back("c47off\n");
	Disp->krz_pult_arrComm.push_back("c46off\n");
	Disp->krz_pult_arrComm.push_back("c45off\n");
	Disp->krz_pult_arrComm.push_back("c44off\n");
	Disp->krz_pult_arrComm.push_back("c43off\n");
	Disp->krz_pult_arrComm.push_back("c42off\n");
	Disp->krz_pult_arrComm.push_back("c41off\n");
	Disp->krz_pult_arrComm.push_back("c40off\n");
	Disp->krz_pult_arrComm.push_back("c39off\n");
	Disp->krz_pult_arrComm.push_back("c38off\n");
	Disp->krz_pult_arrComm.push_back("c37off\n");
	Disp->krz_pult_arrComm.push_back("c36off\n");
	Disp->krz_pult_arrComm.push_back("c35off\n");
	Disp->krz_pult_arrComm.push_back("c34off\n");
	Disp->krz_pult_arrComm.push_back("c33off\n");
	Disp->krz_pult_arrComm.push_back("c32off\n");
	Disp->krz_pult_arrComm.push_back("c31off\n");
	Disp->krz_pult_arrComm.push_back("c30off\n");
	Disp->krz_pult_arrComm.push_back("c29off\n");
	Disp->krz_pult_arrComm.push_back("c28off\n");
	Disp->krz_pult_arrComm.push_back("c27off\n");
	Disp->krz_pult_arrComm.push_back("c26off\n");
	Disp->krz_pult_arrComm.push_back("c25off\n");
	Disp->krz_pult_arrComm.push_back("c24off\n");
	Disp->krz_pult_arrComm.push_back("c23off\n");
	Disp->krz_pult_arrComm.push_back("c22off\n");
	Disp->krz_pult_arrComm.push_back("c13off\n");
	Disp->krz_pult_arrComm.push_back("c12off\n");
	Disp->krz_pult_arrComm.push_back("c11off\n");
	Disp->krz_pult_arrComm.push_back("c10off\n");
	Disp->krz_pult_arrComm.push_back("c9off\n");
	Disp->krz_pult_arrComm.push_back("c8off\n");
	Disp->krz_pult_arrComm.push_back("c7off\n");
	Disp->krz_pult_arrComm.push_back("c6off\n");
	Disp->krz_pult_arrComm.push_back("c5off\n");
	Disp->krz_pult_arrComm.push_back("c4off\n");
	Disp->krz_pult_arrComm.push_back("c3off\n");
	Disp->krz_pult_arrComm.push_back("c2off\n");
	Disp->krz_pult_arrComm.push_back("cn0off\n");
	Disp->krz_pult_arrComm.push_back("cn1off\n");
	Disp->krz_pult_arrComm.push_back("cn2off\n");
	Disp->krz_pult_arrComm.push_back("cn3off\n");
	Disp->krz_pult_arrComm.push_back("cn4off\n");
	Disp->krz_pult_arrComm.push_back("cn5off\n");
	Disp->krz_pult_arrComm.push_back("cn6off\n");
	Disp->krz_pult_arrComm.push_back("cn7off\n");
	Disp->krz_pult_arrComm.push_back("cn8off\n");
	Disp->krz_pult_arrComm.push_back("cn9off\n");
	Disp->krz_pult_arrComm.push_back("cn10off\n");
	Disp->krz_pult_arrComm.push_back("cn11off\n");
	Disp->krz_pult_arrComm.push_back("cn12off\n");
	Disp->krz_pult_arrComm.push_back("cn13off\n");
	Disp->krz_pult_arrComm.push_back("cn14off\n");
	Disp->krz_pult_arrComm.push_back("cn15off\n");

	Disp->krz_pult_arrComm.push_back("d53off\n");
	Disp->krz_pult_arrComm.push_back("d52off\n");
	Disp->krz_pult_arrComm.push_back("d51off\n");
	Disp->krz_pult_arrComm.push_back("d50off\n");
	Disp->krz_pult_arrComm.push_back("d49off\n");
	Disp->krz_pult_arrComm.push_back("d48off\n");
	Disp->krz_pult_arrComm.push_back("d47off\n");
	Disp->krz_pult_arrComm.push_back("d46off\n");
	Disp->krz_pult_arrComm.push_back("d45off\n");
	Disp->krz_pult_arrComm.push_back("d44off\n");
	Disp->krz_pult_arrComm.push_back("d43off\n");
	Disp->krz_pult_arrComm.push_back("d42off\n");
	Disp->krz_pult_arrComm.push_back("d41off\n");
	Disp->krz_pult_arrComm.push_back("d40off\n");
	Disp->krz_pult_arrComm.push_back("d39off\n");
	Disp->krz_pult_arrComm.push_back("d38off\n");
	Disp->krz_pult_arrComm.push_back("d37off\n");
	Disp->krz_pult_arrComm.push_back("d36off\n");
	Disp->krz_pult_arrComm.push_back("d35off\n");
	Disp->krz_pult_arrComm.push_back("d34off\n");
	Disp->krz_pult_arrComm.push_back("d33off\n");
	Disp->krz_pult_arrComm.push_back("d32off\n");
	Disp->krz_pult_arrComm.push_back("d31off\n");
	Disp->krz_pult_arrComm.push_back("d30off\n");
	Disp->krz_pult_arrComm.push_back("d29off\n");
	Disp->krz_pult_arrComm.push_back("d28off\n");
	Disp->krz_pult_arrComm.push_back("d27off\n");
	Disp->krz_pult_arrComm.push_back("d26off\n");
	Disp->krz_pult_arrComm.push_back("d25off\n");
	Disp->krz_pult_arrComm.push_back("d24off\n");
	Disp->krz_pult_arrComm.push_back("d23off\n");
	Disp->krz_pult_arrComm.push_back("d22off\n");
	Disp->krz_pult_arrComm.push_back("d13off\n");
	Disp->krz_pult_arrComm.push_back("d12off\n");
	Disp->krz_pult_arrComm.push_back("d11off\n");
	Disp->krz_pult_arrComm.push_back("d10off\n");
	Disp->krz_pult_arrComm.push_back("d9off\n");
	Disp->krz_pult_arrComm.push_back("d8off\n");
	Disp->krz_pult_arrComm.push_back("d7off\n");
	Disp->krz_pult_arrComm.push_back("d6off\n");
	Disp->krz_pult_arrComm.push_back("d5off\n");
	Disp->krz_pult_arrComm.push_back("d4off\n");
	Disp->krz_pult_arrComm.push_back("d3off\n");
	Disp->krz_pult_arrComm.push_back("d2off\n");
	Disp->krz_pult_arrComm.push_back("dn0off\n");
	Disp->krz_pult_arrComm.push_back("dn1off\n");
	Disp->krz_pult_arrComm.push_back("dn2off\n");
	Disp->krz_pult_arrComm.push_back("dn3off\n");
	Disp->krz_pult_arrComm.push_back("dn4off\n");
	Disp->krz_pult_arrComm.push_back("dn5off\n");
	Disp->krz_pult_arrComm.push_back("dn6off\n");
	Disp->krz_pult_arrComm.push_back("dn7off\n");
	Disp->krz_pult_arrComm.push_back("dn8off\n");
	Disp->krz_pult_arrComm.push_back("dn9off\n");
	Disp->krz_pult_arrComm.push_back("dn10off\n");
	Disp->krz_pult_arrComm.push_back("dn11off\n");
	Disp->krz_pult_arrComm.push_back("dn12off\n");
	Disp->krz_pult_arrComm.push_back("dn13off\n");
	Disp->krz_pult_arrComm.push_back("dn14off\n");
	Disp->krz_pult_arrComm.push_back("dn15off\n");

	Disp->krz_pult_arrComm.push_back("e53off\n");
	Disp->krz_pult_arrComm.push_back("e52off\n");
	Disp->krz_pult_arrComm.push_back("e51off\n");
	Disp->krz_pult_arrComm.push_back("e50off\n");
	Disp->krz_pult_arrComm.push_back("e49off\n");
	Disp->krz_pult_arrComm.push_back("e48off\n");
	Disp->krz_pult_arrComm.push_back("e47off\n");
	Disp->krz_pult_arrComm.push_back("e46off\n");
	Disp->krz_pult_arrComm.push_back("e45off\n");
	Disp->krz_pult_arrComm.push_back("e44off\n");
	Disp->krz_pult_arrComm.push_back("e43off\n");
	Disp->krz_pult_arrComm.push_back("e42off\n");
	Disp->krz_pult_arrComm.push_back("e41off\n");
	Disp->krz_pult_arrComm.push_back("e40off\n");
	Disp->krz_pult_arrComm.push_back("e39off\n");
	Disp->krz_pult_arrComm.push_back("e38off\n");
	Disp->krz_pult_arrComm.push_back("e37off\n");
	Disp->krz_pult_arrComm.push_back("e36off\n");
	Disp->krz_pult_arrComm.push_back("e35off\n");
	Disp->krz_pult_arrComm.push_back("e34off\n");
	Disp->krz_pult_arrComm.push_back("e33off\n");
	Disp->krz_pult_arrComm.push_back("e32off\n");
	Disp->krz_pult_arrComm.push_back("e31off\n");
	Disp->krz_pult_arrComm.push_back("e30off\n");
	Disp->krz_pult_arrComm.push_back("e29off\n");
	Disp->krz_pult_arrComm.push_back("e28off\n");
	Disp->krz_pult_arrComm.push_back("e27off\n");
	Disp->krz_pult_arrComm.push_back("e26off\n");
	Disp->krz_pult_arrComm.push_back("e25off\n");
	Disp->krz_pult_arrComm.push_back("e24off\n");
	Disp->krz_pult_arrComm.push_back("e23off\n");
	Disp->krz_pult_arrComm.push_back("e22off\n");
	Disp->krz_pult_arrComm.push_back("e13off\n");
	Disp->krz_pult_arrComm.push_back("e12off\n");
	Disp->krz_pult_arrComm.push_back("e11off\n");
	Disp->krz_pult_arrComm.push_back("e10off\n");
	Disp->krz_pult_arrComm.push_back("e9off\n");
	Disp->krz_pult_arrComm.push_back("e8off\n");
	Disp->krz_pult_arrComm.push_back("e7off\n");
	Disp->krz_pult_arrComm.push_back("e6off\n");
	Disp->krz_pult_arrComm.push_back("e5off\n");
	Disp->krz_pult_arrComm.push_back("e4off\n");
	Disp->krz_pult_arrComm.push_back("e3off\n");
	Disp->krz_pult_arrComm.push_back("e2off\n");
	Disp->krz_pult_arrComm.push_back("en0off\n");
	Disp->krz_pult_arrComm.push_back("en1off\n");
	Disp->krz_pult_arrComm.push_back("en2off\n");
	Disp->krz_pult_arrComm.push_back("en3off\n");
	Disp->krz_pult_arrComm.push_back("en4off\n");
	Disp->krz_pult_arrComm.push_back("en5off\n");
	Disp->krz_pult_arrComm.push_back("en6off\n");
	Disp->krz_pult_arrComm.push_back("en7off\n");
	Disp->krz_pult_arrComm.push_back("en8off\n");
	Disp->krz_pult_arrComm.push_back("en9off\n");
	Disp->krz_pult_arrComm.push_back("en10off\n");
	Disp->krz_pult_arrComm.push_back("en11off\n");
	Disp->krz_pult_arrComm.push_back("en12off\n");
	Disp->krz_pult_arrComm.push_back("en13off\n");
	Disp->krz_pult_arrComm.push_back("en14off\n");
	Disp->krz_pult_arrComm.push_back("en15off\n");

	Disp->krz_pult_arrComm.push_back("f53off\n");
	Disp->krz_pult_arrComm.push_back("f52off\n");
	Disp->krz_pult_arrComm.push_back("f51off\n");
	Disp->krz_pult_arrComm.push_back("f50off\n");
	Disp->krz_pult_arrComm.push_back("f49off\n");
	Disp->krz_pult_arrComm.push_back("f48off\n");
	Disp->krz_pult_arrComm.push_back("f47off\n");
	Disp->krz_pult_arrComm.push_back("f46off\n");
	Disp->krz_pult_arrComm.push_back("f45off\n");
	Disp->krz_pult_arrComm.push_back("f44off\n");
	Disp->krz_pult_arrComm.push_back("f43off\n");
	Disp->krz_pult_arrComm.push_back("f42off\n");
	Disp->krz_pult_arrComm.push_back("f41off\n");
	Disp->krz_pult_arrComm.push_back("f40off\n");
	Disp->krz_pult_arrComm.push_back("f39off\n");
	Disp->krz_pult_arrComm.push_back("f38off\n");
	Disp->krz_pult_arrComm.push_back("f37off\n");
	Disp->krz_pult_arrComm.push_back("f36off\n");
	Disp->krz_pult_arrComm.push_back("f35off\n");
	Disp->krz_pult_arrComm.push_back("f34off\n");
	Disp->krz_pult_arrComm.push_back("f33off\n");
	Disp->krz_pult_arrComm.push_back("f32off\n");
	Disp->krz_pult_arrComm.push_back("f31off\n");
	Disp->krz_pult_arrComm.push_back("f30off\n");
	Disp->krz_pult_arrComm.push_back("f29off\n");
	Disp->krz_pult_arrComm.push_back("f28off\n");
	Disp->krz_pult_arrComm.push_back("f27off\n");
	Disp->krz_pult_arrComm.push_back("f26off\n");
	Disp->krz_pult_arrComm.push_back("f25off\n");
	Disp->krz_pult_arrComm.push_back("f24off\n");
	Disp->krz_pult_arrComm.push_back("f23off\n");
	Disp->krz_pult_arrComm.push_back("f22off\n");
	Disp->krz_pult_arrComm.push_back("f13off\n");
	Disp->krz_pult_arrComm.push_back("f12off\n");
	Disp->krz_pult_arrComm.push_back("f11off\n");
	Disp->krz_pult_arrComm.push_back("f10off\n");
	Disp->krz_pult_arrComm.push_back("f9off\n");
	Disp->krz_pult_arrComm.push_back("f8off\n");
	Disp->krz_pult_arrComm.push_back("f7off\n");
	Disp->krz_pult_arrComm.push_back("f6off\n");
	Disp->krz_pult_arrComm.push_back("f5off\n");
	Disp->krz_pult_arrComm.push_back("f4off\n");
	Disp->krz_pult_arrComm.push_back("f3off\n");
	Disp->krz_pult_arrComm.push_back("f2off\n");
	Disp->krz_pult_arrComm.push_back("fn0off\n");
	Disp->krz_pult_arrComm.push_back("fn1off\n");
	Disp->krz_pult_arrComm.push_back("fn2off\n");
	Disp->krz_pult_arrComm.push_back("fn3off\n");
	Disp->krz_pult_arrComm.push_back("fn4off\n");
	Disp->krz_pult_arrComm.push_back("fn5off\n");
	Disp->krz_pult_arrComm.push_back("fn6off\n");
	Disp->krz_pult_arrComm.push_back("fn7off\n");
	Disp->krz_pult_arrComm.push_back("fn8off\n");
	Disp->krz_pult_arrComm.push_back("fn9off\n");
	Disp->krz_pult_arrComm.push_back("fn10off\n");
	Disp->krz_pult_arrComm.push_back("fn11off\n");
	Disp->krz_pult_arrComm.push_back("fn12off\n");
	Disp->krz_pult_arrComm.push_back("fn13off\n");
	Disp->krz_pult_arrComm.push_back("fn14off\n");
	Disp->krz_pult_arrComm.push_back("fn15off\n");

	Disp->krz_pult_arrComm.push_back("g53off\n");
	Disp->krz_pult_arrComm.push_back("g52off\n");
	Disp->krz_pult_arrComm.push_back("g51off\n");
	Disp->krz_pult_arrComm.push_back("g50off\n");
	Disp->krz_pult_arrComm.push_back("g49off\n");
	Disp->krz_pult_arrComm.push_back("g48off\n");
	Disp->krz_pult_arrComm.push_back("g47off\n");
	Disp->krz_pult_arrComm.push_back("g46off\n");
	Disp->krz_pult_arrComm.push_back("g45off\n");
	Disp->krz_pult_arrComm.push_back("g44off\n");
	Disp->krz_pult_arrComm.push_back("g43off\n");
	Disp->krz_pult_arrComm.push_back("g42off\n");
	Disp->krz_pult_arrComm.push_back("g41off\n");
	Disp->krz_pult_arrComm.push_back("g40off\n");
	Disp->krz_pult_arrComm.push_back("g39off\n");
	Disp->krz_pult_arrComm.push_back("g38off\n");
	Disp->krz_pult_arrComm.push_back("g37off\n");
	Disp->krz_pult_arrComm.push_back("g36off\n");
	Disp->krz_pult_arrComm.push_back("g35off\n");
	Disp->krz_pult_arrComm.push_back("g34off\n");
	Disp->krz_pult_arrComm.push_back("g33off\n");
	Disp->krz_pult_arrComm.push_back("g32off\n");
	Disp->krz_pult_arrComm.push_back("g31off\n");
	Disp->krz_pult_arrComm.push_back("g30off\n");
	Disp->krz_pult_arrComm.push_back("g29off\n");
	Disp->krz_pult_arrComm.push_back("g28off\n");
	Disp->krz_pult_arrComm.push_back("g27off\n");
	Disp->krz_pult_arrComm.push_back("g26off\n");
	Disp->krz_pult_arrComm.push_back("g25off\n");
	Disp->krz_pult_arrComm.push_back("g24off\n");
	Disp->krz_pult_arrComm.push_back("g23off\n");
	Disp->krz_pult_arrComm.push_back("g22off\n");
	Disp->krz_pult_arrComm.push_back("g13off\n");
	Disp->krz_pult_arrComm.push_back("g12off\n");
	Disp->krz_pult_arrComm.push_back("g11off\n");
	Disp->krz_pult_arrComm.push_back("g10off\n");
	Disp->krz_pult_arrComm.push_back("g9off\n");
	Disp->krz_pult_arrComm.push_back("g8off\n");
	Disp->krz_pult_arrComm.push_back("g7off\n");
	Disp->krz_pult_arrComm.push_back("g6off\n");
	Disp->krz_pult_arrComm.push_back("g5off\n");
	Disp->krz_pult_arrComm.push_back("g4off\n");
	Disp->krz_pult_arrComm.push_back("g3off\n");
	Disp->krz_pult_arrComm.push_back("g2off\n");
	Disp->krz_pult_arrComm.push_back("gn0off\n");
	Disp->krz_pult_arrComm.push_back("gn1off\n");
	Disp->krz_pult_arrComm.push_back("gn2off\n");
	Disp->krz_pult_arrComm.push_back("gn3off\n");
	Disp->krz_pult_arrComm.push_back("gn4off\n");
	Disp->krz_pult_arrComm.push_back("gn5off\n");
	Disp->krz_pult_arrComm.push_back("gn6off\n");
	Disp->krz_pult_arrComm.push_back("gn7off\n");
	Disp->krz_pult_arrComm.push_back("gn8off\n");
	Disp->krz_pult_arrComm.push_back("gn9off\n");
	Disp->krz_pult_arrComm.push_back("gn10off\n");
	Disp->krz_pult_arrComm.push_back("gn11off\n");
	Disp->krz_pult_arrComm.push_back("gn12off\n");
	Disp->krz_pult_arrComm.push_back("gn13off\n");
	Disp->krz_pult_arrComm.push_back("gn14off\n");
	Disp->krz_pult_arrComm.push_back("gn15off\n");

}



void UKaraganozekWidget::krz_Pult_DGA()
{
	if (Disp->krz.DGA == false)
	{
		SendCommToServer(Commd::DGA_true);
	}
	else
	{
		SendCommToServer(Commd::DGA_false);
	}
}

#pragma endregion