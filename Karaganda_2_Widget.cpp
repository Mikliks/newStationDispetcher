
#include "Karaganda_2_Widget.h"



#pragma region General Foo



bool UKaraganda_2_Widget::Initialize()
{
	Super::Initialize();

	SetCurrentWidget(Station::Karaganda_2);

	HB_LocoEven_way_AP_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_AP_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_AP_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_AP_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_AP_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_AP->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_way_GP_11->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_13->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_14->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_15->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_16->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_17->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_18->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_19->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_20->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_21->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_22->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_23->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_24->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_25->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_26->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_27->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_28->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_29->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_30->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_31->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_32->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_33->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_GP_34->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoOdd_way_AP_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_AP_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_AP_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_AP_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_AP_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_AP->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_GP_11->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_13->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_14->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_15->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_16->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_17->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_18->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_19->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_20->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_21->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_22->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_23->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_24->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_25->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_26->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_27->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_28->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_29->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_30->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_31->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_32->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_33->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_GP_34->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_tupic_M_13->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoEven_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_tupic_M_13->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_AP_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_AP_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_AP_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_AP_4->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_AP_5->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_AP->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_GP_11->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_12->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_13->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_14->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_15->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_16->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_17->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_18->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_19->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_20->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_21->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_22->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_23->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_24->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_25->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_26->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_27->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_28->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_29->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_30->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_31->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_32->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_33->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_GP_34->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_12->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_13->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_way_AP_1->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa1);
	Button_TrainInfo_way_AP_2->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa2);
	Button_TrainInfo_way_AP_3->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa3);
	Button_TrainInfo_way_AP_4->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa4);
	Button_TrainInfo_way_AP_5->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa5);
	Button_TrainInfo_way_AP->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_wa);

	Button_TrainInfo_tupic_M_12->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_tupic_M12);
	Button_TrainInfo_tupic_M_13->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_tupic_M13);

	Button_TrainInfo_way_GP_11->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_11);
	Button_TrainInfo_way_GP_12->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_12);
	Button_TrainInfo_way_GP_13->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_13);
	Button_TrainInfo_way_GP_14->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_14);
	Button_TrainInfo_way_GP_15->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_15);
	Button_TrainInfo_way_GP_16->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_16);
	Button_TrainInfo_way_GP_17->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_17);
	Button_TrainInfo_way_GP_18->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_18);
	Button_TrainInfo_way_GP_19->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_19);
	Button_TrainInfo_way_GP_20->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_20);
	Button_TrainInfo_way_GP_21->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_21);
	Button_TrainInfo_way_GP_22->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_22);
	Button_TrainInfo_way_GP_23->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_23);
	Button_TrainInfo_way_GP_24->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_24);
	Button_TrainInfo_way_GP_25->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_25);
	Button_TrainInfo_way_GP_26->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_26);
	Button_TrainInfo_way_GP_27->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_27);
	Button_TrainInfo_way_GP_28->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_28);
	Button_TrainInfo_way_GP_29->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_29);
	Button_TrainInfo_way_GP_30->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_30);
	Button_TrainInfo_way_GP_31->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_31);
	Button_TrainInfo_way_GP_32->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_32);
	Button_TrainInfo_way_GP_33->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_33);
	Button_TrainInfo_way_GP_34->OnClicked.AddDynamic(this, &UKaraganda_2_Widget::CreateMenuTrainInfo_gp_34);


	return true;
}





void UKaraganda_2_Widget::kg2_UpdateInfoStationWay()
{

	PrintInfo(&Disp->kg2._wa1, HB_LocoEven_way_AP_1, TB_LocoEven_way_AP_1, Button_TrainInfo_way_AP_1, TextButton_way_AP_1, HB_LocoOdd_way_AP_1, TB_LocoOdd_way_AP_1);
	PrintInfo(&Disp->kg2._wa2, HB_LocoEven_way_AP_2, TB_LocoEven_way_AP_2, Button_TrainInfo_way_AP_2, TextButton_way_AP_2, HB_LocoOdd_way_AP_2, TB_LocoOdd_way_AP_2);
	PrintInfo(&Disp->kg2._wa3, HB_LocoEven_way_AP_3, TB_LocoEven_way_AP_3, Button_TrainInfo_way_AP_3, TextButton_way_AP_3, HB_LocoOdd_way_AP_3, TB_LocoOdd_way_AP_3);
	PrintInfo(&Disp->kg2._wa4, HB_LocoEven_way_AP_4, TB_LocoEven_way_AP_4, Button_TrainInfo_way_AP_4, TextButton_way_AP_4, HB_LocoOdd_way_AP_4, TB_LocoOdd_way_AP_4);
	PrintInfo(&Disp->kg2._wa5, HB_LocoEven_way_AP_5, TB_LocoEven_way_AP_5, Button_TrainInfo_way_AP_5, TextButton_way_AP_5, HB_LocoOdd_way_AP_5, TB_LocoOdd_way_AP_5);
	PrintInfo(&Disp->kg2._M15_M22, HB_LocoEven_way_AP, TB_LocoEven_way_AP, Button_TrainInfo_way_AP, TextButton_way_AP, HB_LocoOdd_way_AP, TB_LocoOdd_way_AP);


	PrintInfo(&Disp->kg2._M12_tupic, HB_LocoEven_tupic_M_12, TB_LocoEven_tupic_M_12, Button_TrainInfo_tupic_M_12, TextButton_tupic_M_12, HB_LocoOdd_tupic_M_12, TB_LocoOdd_tupic_M_12);
	PrintInfo(&Disp->kg2._M13_tupic, HB_LocoEven_tupic_M_13, TB_LocoEven_tupic_M_13, Button_TrainInfo_tupic_M_13, TextButton_tupic_M_13, HB_LocoOdd_tupic_M_13, TB_LocoOdd_tupic_M_13);

	PrintInfo(&Disp->kg2._11GP, HB_LocoEven_way_GP_11, TB_LocoEven_way_GP_11, Button_TrainInfo_way_GP_11, TextButton_way_GP_11, HB_LocoOdd_way_GP_11, TB_LocoOdd_way_GP_11);
	PrintInfo(&Disp->kg2._12GP, HB_LocoEven_way_GP_12, TB_LocoEven_way_GP_12, Button_TrainInfo_way_GP_12, TextButton_way_GP_12, HB_LocoOdd_way_GP_12, TB_LocoOdd_way_GP_12);
	PrintInfo(&Disp->kg2._13GP, HB_LocoEven_way_GP_13, TB_LocoEven_way_GP_13, Button_TrainInfo_way_GP_13, TextButton_way_GP_13, HB_LocoOdd_way_GP_13, TB_LocoOdd_way_GP_13);
	PrintInfo(&Disp->kg2._14GP, HB_LocoEven_way_GP_14, TB_LocoEven_way_GP_14, Button_TrainInfo_way_GP_14, TextButton_way_GP_14, HB_LocoOdd_way_GP_14, TB_LocoOdd_way_GP_14);
	PrintInfo(&Disp->kg2._15GP, HB_LocoEven_way_GP_15, TB_LocoEven_way_GP_15, Button_TrainInfo_way_GP_15, TextButton_way_GP_15, HB_LocoOdd_way_GP_15, TB_LocoOdd_way_GP_15);
	PrintInfo(&Disp->kg2._16GP, HB_LocoEven_way_GP_16, TB_LocoEven_way_GP_16, Button_TrainInfo_way_GP_16, TextButton_way_GP_16, HB_LocoOdd_way_GP_16, TB_LocoOdd_way_GP_16);
	PrintInfo(&Disp->kg2._17GP, HB_LocoEven_way_GP_17, TB_LocoEven_way_GP_17, Button_TrainInfo_way_GP_17, TextButton_way_GP_17, HB_LocoOdd_way_GP_17, TB_LocoOdd_way_GP_17);
	PrintInfo(&Disp->kg2._18GP, HB_LocoEven_way_GP_18, TB_LocoEven_way_GP_18, Button_TrainInfo_way_GP_18, TextButton_way_GP_18, HB_LocoOdd_way_GP_18, TB_LocoOdd_way_GP_18);
	PrintInfo(&Disp->kg2._19GP, HB_LocoEven_way_GP_19, TB_LocoEven_way_GP_19, Button_TrainInfo_way_GP_19, TextButton_way_GP_19, HB_LocoOdd_way_GP_19, TB_LocoOdd_way_GP_19);
	PrintInfo(&Disp->kg2._20GP, HB_LocoEven_way_GP_20, TB_LocoEven_way_GP_20, Button_TrainInfo_way_GP_20, TextButton_way_GP_20, HB_LocoOdd_way_GP_20, TB_LocoOdd_way_GP_20);

	PrintInfo(&Disp->kg2._21GP, HB_LocoEven_way_GP_21, TB_LocoEven_way_GP_21, Button_TrainInfo_way_GP_21, TextButton_way_GP_21, HB_LocoOdd_way_GP_21, TB_LocoOdd_way_GP_21);
	PrintInfo(&Disp->kg2._22GP, HB_LocoEven_way_GP_22, TB_LocoEven_way_GP_22, Button_TrainInfo_way_GP_22, TextButton_way_GP_22, HB_LocoOdd_way_GP_22, TB_LocoOdd_way_GP_22);
	PrintInfo(&Disp->kg2._23GP, HB_LocoEven_way_GP_23, TB_LocoEven_way_GP_23, Button_TrainInfo_way_GP_23, TextButton_way_GP_23, HB_LocoOdd_way_GP_23, TB_LocoOdd_way_GP_23);
	PrintInfo(&Disp->kg2._24GP, HB_LocoEven_way_GP_24, TB_LocoEven_way_GP_24, Button_TrainInfo_way_GP_24, TextButton_way_GP_24, HB_LocoOdd_way_GP_24, TB_LocoOdd_way_GP_24);
	PrintInfo(&Disp->kg2._25GP, HB_LocoEven_way_GP_25, TB_LocoEven_way_GP_25, Button_TrainInfo_way_GP_25, TextButton_way_GP_25, HB_LocoOdd_way_GP_25, TB_LocoOdd_way_GP_25);
	PrintInfo(&Disp->kg2._26GP, HB_LocoEven_way_GP_26, TB_LocoEven_way_GP_26, Button_TrainInfo_way_GP_26, TextButton_way_GP_26, HB_LocoOdd_way_GP_26, TB_LocoOdd_way_GP_26);
	PrintInfo(&Disp->kg2._27GP, HB_LocoEven_way_GP_27, TB_LocoEven_way_GP_27, Button_TrainInfo_way_GP_27, TextButton_way_GP_27, HB_LocoOdd_way_GP_27, TB_LocoOdd_way_GP_27);
	PrintInfo(&Disp->kg2._28GP, HB_LocoEven_way_GP_28, TB_LocoEven_way_GP_28, Button_TrainInfo_way_GP_28, TextButton_way_GP_28, HB_LocoOdd_way_GP_28, TB_LocoOdd_way_GP_28);
	PrintInfo(&Disp->kg2._29GP, HB_LocoEven_way_GP_29, TB_LocoEven_way_GP_29, Button_TrainInfo_way_GP_29, TextButton_way_GP_29, HB_LocoOdd_way_GP_29, TB_LocoOdd_way_GP_29);
	PrintInfo(&Disp->kg2._30GP, HB_LocoEven_way_GP_30, TB_LocoEven_way_GP_30, Button_TrainInfo_way_GP_30, TextButton_way_GP_30, HB_LocoOdd_way_GP_30, TB_LocoOdd_way_GP_30);

	PrintInfo(&Disp->kg2._31GP, HB_LocoEven_way_GP_31, TB_LocoEven_way_GP_31, Button_TrainInfo_way_GP_31, TextButton_way_GP_31, HB_LocoOdd_way_GP_31, TB_LocoOdd_way_GP_31);
	PrintInfo(&Disp->kg2._32GP, HB_LocoEven_way_GP_32, TB_LocoEven_way_GP_32, Button_TrainInfo_way_GP_32, TextButton_way_GP_32, HB_LocoOdd_way_GP_32, TB_LocoOdd_way_GP_32);
	PrintInfo(&Disp->kg2._33GP, HB_LocoEven_way_GP_33, TB_LocoEven_way_GP_33, Button_TrainInfo_way_GP_33, TextButton_way_GP_33, HB_LocoOdd_way_GP_33, TB_LocoOdd_way_GP_33);
	PrintInfo(&Disp->kg2._34GP, HB_LocoEven_way_GP_34, TB_LocoEven_way_GP_34, Button_TrainInfo_way_GP_34, TextButton_way_GP_34, HB_LocoOdd_way_GP_34, TB_LocoOdd_way_GP_34);

//#pragma region GREEN_KEYS
//
//#pragma region CH
//
//	if (Disp->kg2._1CHP.stat == EAStat::Free
//		&& Disp->kg2._2CHP.stat == EAStat::Free
//		/*&& Disp->gu._1CHP.stat == EAStat::Free
//		&& Disp->gu._2CHP.stat == EAStat::Free*/)
//	{
//		Disp->kg2.GreenKey_CH.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->kg2.GreenKey_CH.stat = EAStat::Red;
//	}
//#pragma endregion
//#pragma region CHD
//	if (Disp->kg2._1UPCH.stat == EAStat::Free
//		&& Disp->kg2._2UPCH.stat == EAStat::Free
//		/*&& Disp->gu._2UPCH.stat == EAStat::Free
//		&& Disp->gu._1UPCH.stat == EAStat::Free*/)
//	{
//		Disp->kg2.GreenKey_CHD.stat = EAStat::Green;
//	}
//	else
//	{
//		Disp->kg2.GreenKey_CHD.stat = EAStat::Red;
//	}
//#pragma endregion
//
//
//#pragma endregion
}





void UKaraganda_2_Widget::CreateMenuTrainInfo_wa1()
{
	CreateMenuInfo(Disp->kg2._wa1.num,-200);

}
void UKaraganda_2_Widget::CreateMenuTrainInfo_wa2()
{
	CreateMenuInfo(Disp->kg2._wa2.num, -200);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_wa3()
{
	CreateMenuInfo(Disp->kg2._wa3.num,-200);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_wa4()
{
	CreateMenuInfo(Disp->kg2._wa4.num,-200);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_wa5()
{
	CreateMenuInfo(Disp->kg2._wa5.num,-200);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_wa()
{
	CreateMenuInfo(Disp->kg2._M15_M22.num,-100);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_tupic_M12()
{
	CreateMenuInfo(Disp->kg2._M12_tupic.num);
}
void UKaraganda_2_Widget::CreateMenuTrainInfo_tupic_M13()
{
	CreateMenuInfo(Disp->kg2._M13_tupic.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_11()
{
	CreateMenuInfo(Disp->kg2._11GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_12()
{
	CreateMenuInfo(Disp->kg2._12GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_13()
{
	CreateMenuInfo(Disp->kg2._13GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_14()
{
	CreateMenuInfo(Disp->kg2._14GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_15()
{
	CreateMenuInfo(Disp->kg2._15GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_16()
{
	CreateMenuInfo(Disp->kg2._16GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_17()
{
	CreateMenuInfo(Disp->kg2._17GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_18()
{
	CreateMenuInfo(Disp->kg2._18GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_19()
{
	CreateMenuInfo(Disp->kg2._19GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_20()
{
	CreateMenuInfo(Disp->kg2._20GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_21()
{
	CreateMenuInfo(Disp->kg2._21GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_22()
{
	CreateMenuInfo(Disp->kg2._22GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_23()
{
	CreateMenuInfo(Disp->kg2._23GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_24()
{
	CreateMenuInfo(Disp->kg2._24GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_25()
{
	CreateMenuInfo(Disp->kg2._25GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_26()
{
	CreateMenuInfo(Disp->kg2._26GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_27()
{
	CreateMenuInfo(Disp->kg2._27GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_28()
{
	CreateMenuInfo(Disp->kg2._28GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_29()
{
	CreateMenuInfo(Disp->kg2._29GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_30()
{
	CreateMenuInfo(Disp->kg2._30GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_31()
{
	CreateMenuInfo(Disp->kg2._31GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_32()
{
	CreateMenuInfo(Disp->kg2._32GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_33()
{
	CreateMenuInfo(Disp->kg2._33GP.num);
}

void UKaraganda_2_Widget::CreateMenuTrainInfo_gp_34()
{
	CreateMenuInfo(Disp->kg2._34GP.num);
}




void UKaraganda_2_Widget::TestSostavBeforeSvetofor(EdopStat dopstat, int numberPoezd, int numberLoco)
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

	if (dopstat == EdopStat::CH)
	{
		if (Disp->kg2._1CHP.stat == EAStat::Free)
		{
			Disp->kg2._1CHP.stat = EAStat::Busy;
			Disp->kg2._1CHP.num = numberPoezd;
			Disp->kg2._1CHP.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._1CHP.stat = EAStat::Free;
			Disp->kg2._1CHP.num = 0;
			Disp->kg2._1CHP.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHD)
	{
		if (Disp->kg2._1UPCH.stat == EAStat::Free)
		{
			Disp->kg2._1UPCH.stat = EAStat::Busy;
			Disp->kg2._1UPCH.num = numberPoezd;
			Disp->kg2._1UPCH.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._1UPCH.stat = EAStat::Free;
			Disp->kg2._1UPCH.num = 0;
			Disp->kg2._1UPCH.dopn = 0;
		}
	}

	if (dopstat == EdopStat::CHM1A)
	{
		if (Disp->kg2._wa1.stat == EAStat::Free)
		{
			Disp->kg2._wa1.stat = EAStat::Busy;
			Disp->kg2._wa1.num = numberPoezd;
			Disp->kg2._wa1.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa1.stat = EAStat::Free;
			Disp->kg2._wa1.num = 0;
			Disp->kg2._wa1.dopn = 0;
		}

	}
	if (dopstat == EdopStat::CHM2A)
	{
		if (Disp->kg2._wa2.stat == EAStat::Free)
		{
			Disp->kg2._wa2.stat = EAStat::Busy;
			Disp->kg2._wa2.num = numberPoezd;
			Disp->kg2._wa2.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa2.stat = EAStat::Free;
			Disp->kg2._wa2.num = 0;
			Disp->kg2._wa2.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM3A)
	{
		if (Disp->kg2._wa3.stat == EAStat::Free)
		{
			Disp->kg2._wa3.stat = EAStat::Busy;
			Disp->kg2._wa3.num = numberPoezd;
			Disp->kg2._wa3.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa3.stat = EAStat::Free;
			Disp->kg2._wa3.num = 0;
			Disp->kg2._wa3.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM4A)
	{
		if (Disp->kg2._wa4.stat == EAStat::Free)
		{
			Disp->kg2._wa4.stat = EAStat::Busy;
			Disp->kg2._wa4.num = numberPoezd;
			Disp->kg2._wa4.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa4.stat = EAStat::Free;
			Disp->kg2._wa4.num = 0;
			Disp->kg2._wa4.dopn = 0;
		}
	}
	if (dopstat == EdopStat::CHM5A)
	{
		if (Disp->kg2._wa5.stat == EAStat::Free)
		{
			Disp->kg2._wa5.stat = EAStat::Busy;
			Disp->kg2._wa5.num = numberPoezd;
			Disp->kg2._wa5.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa5.stat = EAStat::Free;
			Disp->kg2._wa5.num = 0;
			Disp->kg2._wa5.dopn = 0;
		}
	}

	if (dopstat == EdopStat::N1A)
	{
		if (Disp->kg2._wa1.stat == EAStat::Free)
		{
			Disp->kg2._wa1.stat = EAStat::Busy;
			Disp->kg2._wa1.num = numberPoezd;
			Disp->kg2._wa1.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa1.stat = EAStat::Free;
			Disp->kg2._wa1.num = 0;
			Disp->kg2._wa1.dopn = 0;
		}

	}
	if (dopstat == EdopStat::N2A)
	{
		if (Disp->kg2._wa2.stat == EAStat::Free)
		{
			Disp->kg2._wa2.stat = EAStat::Busy;
			Disp->kg2._wa2.num = numberPoezd;
			Disp->kg2._wa2.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa2.stat = EAStat::Free;
			Disp->kg2._wa2.num = 0;
			Disp->kg2._wa2.dopn = 0;
		}
	}
	if (dopstat == EdopStat::N3A)
	{
		if (Disp->kg2._wa3.stat == EAStat::Free)
		{
			Disp->kg2._wa3.stat = EAStat::Busy;
			Disp->kg2._wa3.num = numberPoezd;
			Disp->kg2._wa3.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa3.stat = EAStat::Free;
			Disp->kg2._wa3.num = 0;
			Disp->kg2._wa3.dopn = 0;
		}
	}
	if (dopstat == EdopStat::N4A)
	{
		if (Disp->kg2._wa4.stat == EAStat::Free)
		{
			Disp->kg2._wa4.stat = EAStat::Busy;
			Disp->kg2._wa4.num = numberPoezd;
			Disp->kg2._wa4.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa4.stat = EAStat::Free;
			Disp->kg2._wa4.num = 0;
			Disp->kg2._wa4.dopn = 0;
		}
	}
	if (dopstat == EdopStat::N5A)
	{
		if (Disp->kg2._wa5.stat == EAStat::Free)
		{
			Disp->kg2._wa5.stat = EAStat::Busy;
			Disp->kg2._wa5.num = numberPoezd;
			Disp->kg2._wa5.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._wa5.stat = EAStat::Free;
			Disp->kg2._wa5.num = 0;
			Disp->kg2._wa5.dopn = 0;
		}
	}

	if (dopstat == EdopStat::M2)
	{
		if (Disp->kg2._CHP.stat == EAStat::Free)
		{
			Disp->kg2._CHP.stat = EAStat::Busy;
			Disp->kg2._CHP.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._CHP.stat = EAStat::Free;
			Disp->kg2._CHP.dopn = 0;
		}

	}
	if (dopstat == EdopStat::M4)
	{
		if (Disp->kg2._CHAP.stat == EAStat::Free)
		{
			Disp->kg2._CHAP.stat = EAStat::Busy;
			Disp->kg2._CHAP.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._CHAP.stat = EAStat::Free;
			Disp->kg2._CHAP.dopn = 0;
		}
	}

	if (dopstat == EdopStat::M6)
	{
		if (Disp->kg2._s56_M6.stat == EAStat::Free)
		{
			Disp->kg2._s56_M6.stat = EAStat::Busy;
			Disp->kg2._s56_M6.dopn = numberLoco;
		
		}
		else
		{
			Disp->kg2._s56_M6.stat = EAStat::Free;
			Disp->kg2._s56_M6.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M15)
	{
		if (Disp->kg2._M15_M22.stat == EAStat::Free)
		{
			Disp->kg2._M15_M22.stat = EAStat::Busy;
			Disp->kg2._M15_M22.dopn = numberLoco;
			Disp->kg2._M15_M22.num = numberPoezd;
		}
		else
		{
			Disp->kg2._M15_M22.stat = EAStat::Free;
			Disp->kg2._M15_M22.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M22)
	{
		if (Disp->kg2._M15_M22.stat == EAStat::Free)
		{
			Disp->kg2._M15_M22.stat = EAStat::Busy;
			Disp->kg2._M15_M22.dopn = numberLoco;
			Disp->kg2._M15_M22.num = numberPoezd;
		}
		else
		{
			Disp->kg2._M15_M22.stat = EAStat::Free;
			Disp->kg2._M15_M22.dopn = 0;
		}
	}

	if (dopstat == EdopStat::M12)
	{
		if (Disp->kg2._M12_tupic.stat == EAStat::Free)
		{
			Disp->kg2._M12_tupic.stat = EAStat::Busy;
			Disp->kg2._M12_tupic.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._M12_tupic.stat = EAStat::Free;
			Disp->kg2._M12_tupic.dopn = 0;
		}
	}
	if (dopstat == EdopStat::M13)
	{
		if (Disp->kg2._M13_tupic.stat == EAStat::Free)
		{
			Disp->kg2._M13_tupic.stat = EAStat::Busy;
			Disp->kg2._M13_tupic.dopn = numberLoco;
		}
		else
		{
			Disp->kg2._M13_tupic.stat = EAStat::Free;
			Disp->kg2._M13_tupic.dopn = 0;
		}
	}
	
	kg2_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganda_2);
}

void UKaraganda_2_Widget::kg2_WayNumberChanger(int numberway)
{
	//FElm* wayForChanger;
	//if (numberway == 1) wayForChanger = &Disp->kg2._w1;
	//else if (numberway == 2) wayForChanger = &Disp->kg2._w2;
	//else if (numberway == 3) wayForChanger = &Disp->kg2._w3;
	//else if (numberway == 4) wayForChanger = &Disp->kg2._w4;
	//else if (numberway == 5) wayForChanger = &Disp->kg2._w5;
	//else if (numberway == 6) wayForChanger = &Disp->kg2._w6;
	//else if (numberway == 7) wayForChanger = &Disp->kg2._w7;
	//else wayForChanger = nullptr;

	//if (wayForChanger->dopn == 0)
	//{
	//	if (wayForChanger->num % 2 == 0)
	//	{
	//		wayForChanger->num++;
	//	}
	//	else
	//	{
	//		wayForChanger->num--;
	//	}
	//}
	////если  был один "правильный" локомотив
	//else if (wayForChanger->dopn > 0 && wayForChanger->dopn < 100)
	//{
	//	//у четного поезда правильный локомотив был слева
	//	if (wayForChanger->num % 2 == 0)
	//	{
	//		wayForChanger->num++;

	//		//после смены четности он становиться конфликтным
	//		wayForChanger->dopn = -wayForChanger->dopn;

	//		// и маркер левого конфликта
	//		wayForChanger->num = -wayForChanger->num;
	//	}
	//	else
	//	{
	//		wayForChanger->num--;

	//		//после смены четности он становиться конфликтным
	//		wayForChanger->dopn = -wayForChanger->dopn;

	//	}
	//}
	////если слева был один  "неправильный" локомотив
	//else if (wayForChanger->num < 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 100)
	//{
	//	//т.е. для нечетного поезда, который становится четным
	//	wayForChanger->num = abs(wayForChanger->num);
	//	wayForChanger->num--;
	//	wayForChanger->dopn = -wayForChanger->dopn;
	//}
	////если справа был один  "неправильный" локомотив
	//else if (wayForChanger->num > 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 100)
	//{
	//	//т.е. для четного поезда, который становится нечетным
	//	wayForChanger->num++;
	//	wayForChanger->dopn = -wayForChanger->dopn;
	//}
	////если слева был один  "неправильный" локомотив
	//else if (wayForChanger->num < 0 && wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 10000)
	//{
	//	//т.е. для нечетного поезда, который становится четным
	//	wayForChanger->num = abs(wayForChanger->num);
	//	wayForChanger->num--;

	//}
	////если справа был один  "неправильный" локомотив
	//else if (wayForChanger->dopn < 0 && abs(wayForChanger->dopn) < 10000)
	//{
	//	//т.е. для четного поезда, который становится нечетным
	//	wayForChanger->num++;
	//	wayForChanger->num = -wayForChanger->num;
	//}

	//Disp->SendToServer(Station::Karaganda_1);

}

#pragma endregion

#pragma region Routers








void UKaraganda_2_Widget::UKaraganda_2_Widget::kg2_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganda_2);
}

#pragma endregion

