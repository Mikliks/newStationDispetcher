// Fill out your copyright notice in the Description page of Project Settings.


#include "KaragandaMainWidget.h"



bool UKaragandaMainWidget::Initialize()
{
	Super::Initialize();

	
	
	GetWorld()->GetTimerManager().SetTimer(UpdaterStationInfo, this, &UKaragandaMainWidget::kg1_UpdateInfoStationWay, 0.5f, true, 0.1f);

#pragma region TrainInfo
	HB_LocoEven_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_7->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoEven_way_BP_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_BP_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_BP_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_BP_4->SetVisibility(ESlateVisibility::Hidden);


	HB_LocoEven_way_P1G1P->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoEven_way_P1G2P->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_4->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_5->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_6->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_7->SetVisibility(ESlateVisibility::Hidden);

	HB_LocoOdd_way_BP_1->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_BP_2->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_BP_3->SetVisibility(ESlateVisibility::Hidden);
	HB_LocoOdd_way_BP_4->SetVisibility(ESlateVisibility::Hidden);


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

	Button_TrainInfo_way_BP_1->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_BP_2->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_BP_3->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_BP_4->SetVisibility(ESlateVisibility::Hidden);


	Button_TrainInfo_way_P1G1P->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_way_P1G2P->SetVisibility(ESlateVisibility::Hidden);

	Button_TrainInfo_tupic_M_21->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_27->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_23->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_24->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_25->SetVisibility(ESlateVisibility::Hidden);
	Button_TrainInfo_tupic_M_26->SetVisibility(ESlateVisibility::Hidden);




	





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

	Button_TrainInfo_way_AP_1->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa1);
	Button_TrainInfo_way_AP_2->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa2);
	Button_TrainInfo_way_AP_3->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa3);
	Button_TrainInfo_way_AP_4->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa4);
	Button_TrainInfo_way_AP_5->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa5);
	Button_TrainInfo_way_AP->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wa);

	Button_TrainInfo_tupic_M_12->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_tupic_M12);
	Button_TrainInfo_tupic_M_13->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_tupic_M13);

	Button_TrainInfo_way_GP_11->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_11);
	Button_TrainInfo_way_GP_12->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_12);
	Button_TrainInfo_way_GP_13->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_13);
	Button_TrainInfo_way_GP_14->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_14);
	Button_TrainInfo_way_GP_15->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_15);
	Button_TrainInfo_way_GP_16->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_16);
	Button_TrainInfo_way_GP_17->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_17);
	Button_TrainInfo_way_GP_18->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_18);
	Button_TrainInfo_way_GP_19->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_19);
	Button_TrainInfo_way_GP_20->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_20);
	Button_TrainInfo_way_GP_21->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_21);
	Button_TrainInfo_way_GP_22->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_22);
	Button_TrainInfo_way_GP_23->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_23);
	Button_TrainInfo_way_GP_24->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_24);
	Button_TrainInfo_way_GP_25->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_25);
	Button_TrainInfo_way_GP_26->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_26);
	Button_TrainInfo_way_GP_27->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_27);
	Button_TrainInfo_way_GP_28->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_28);
	Button_TrainInfo_way_GP_29->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_29);
	Button_TrainInfo_way_GP_30->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_30);
	Button_TrainInfo_way_GP_31->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_31);
	Button_TrainInfo_way_GP_32->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_32);
	Button_TrainInfo_way_GP_33->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_33);
	Button_TrainInfo_way_GP_34->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_gp_34);


	Button_TrainInfo_way_1->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w1);
	Button_TrainInfo_way_2->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w2);
	Button_TrainInfo_way_3->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w3);
	Button_TrainInfo_way_4->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w4);
	Button_TrainInfo_way_5->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w5);
	Button_TrainInfo_way_6->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w6);
	Button_TrainInfo_way_7->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_w7);

	Button_TrainInfo_way_P1G1P->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_P1G1P);
	Button_TrainInfo_way_P1G2P->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_P1G2P);

	Button_TrainInfo_way_BP_1->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wb1);
	Button_TrainInfo_way_BP_2->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wb2);
	Button_TrainInfo_way_BP_3->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wb3);
	Button_TrainInfo_way_BP_4->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_wb4);

	Button_TrainInfo_tupic_M_21->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_M21_tupic);
	Button_TrainInfo_tupic_M_27->OnClicked.AddDynamic(this, &UKaragandaMainWidget::CreateMenuTrainInfo_M27_tupic);
#pragma endregion
	

	tintColorRed = FSlateColor(FLinearColor::Red);
	tintColorYellow = FSlateColor(FLinearColor::Yellow);
	tintColorBlack = FSlateColor(FLinearColor::Black);

	return true;
}

#pragma region ResourceSet

void UKaragandaMainWidget::SetAllSwitcersResource()
{

	SetSwitcherResource(Disp->kg1._str1, i1, t1);
	SetSwitcherResource(Disp->kg2._str2, i2, t2);
	SetSwitcherResource(Disp->kg1._str3, i3, t3);
	SetSwitcherResource(Disp->kg2._str4, i4, t4);
	SetSwitcherResource(Disp->kg1._str5, i5_2, t5_2);
	SetSwitcherResource(Disp->kg2._str6, i6, t6);
	SetSwitcherResource(Disp->kg1._str7, i7, t7);
	SetSwitcherResource(Disp->kg2._str8, i8, t8);
	SetSwitcherResource(Disp->kg1._str9, i9, t9);
	SetSwitcherResource(Disp->kg2._str10, i10, t10);
	SetSwitcherResource(Disp->kg1._str11, i11, t11);
	SetSwitcherResource(Disp->kg2._str12, i12, t12);
	SetSwitcherResource(Disp->kg1._str13, i13, t13);
	SetSwitcherResource(Disp->kg2._str14, i14, t14);
	SetSwitcherResource(Disp->kg1._str15, i15, t15);
	SetSwitcherResource(Disp->kg2._str16, i16, t16);
	SetSwitcherResource(Disp->kg1._str17, i17, t17);
	SetSwitcherResource(Disp->kg2._str18, i18, t18);
	SetSwitcherResource(Disp->kg1._str19, i19, t19);
	SetSwitcherResource(Disp->kg2._str20, i20, t20);
	SetSwitcherResource(Disp->kg1._str21, i21, t21);
	SetSwitcherResource(Disp->kg2._str22, i22, t22);
	SetSwitcherResource(Disp->kg1._str23, i23, t23);
	SetSwitcherResource(Disp->kg2._str24, i24, t24);
	SetSwitcherResource(Disp->kg1._str25, i25, t25);
	SetSwitcherResource(Disp->kg2._str26, i26, t26);
	SetSwitcherResource(Disp->kg1._str27, i27, t27);
	SetSwitcherResource(Disp->kg2._str28, i28, t28);
	SetSwitcherResource(Disp->kg1._str29, i29, t29);
	SetSwitcherResource(Disp->kg2._str30, i30, t30);
	SetSwitcherResource(Disp->kg1._str31, i31, t31);
	SetSwitcherResource(Disp->kg2._str32, i32, t32);
	SetSwitcherResource(Disp->kg1._str33, i33, t33);
	SetSwitcherResource(Disp->kg2._str34, i34, t34);
	SetSwitcherResource(Disp->kg1._str35, i35, t35);
	SetSwitcherResource(Disp->kg2._str36, i36, t36);
	SetSwitcherResource(Disp->kg1._str37, i37, t37);
	SetSwitcherResource(Disp->kg2._str38, i38, t38);
	SetSwitcherResource(Disp->kg1._str39, i39, t39);
	SetSwitcherResource(Disp->kg2._str40, i40, t40);
	SetSwitcherResource(Disp->kg1._str41, i41, t41);
	SetSwitcherResource(Disp->kg2._str42, i42, t42);
	SetSwitcherResource(Disp->kg1._str43, i43, t43);
	SetSwitcherResource(Disp->kg2._str44, i44, t44);
	SetSwitcherResource(Disp->kg1._str45, i45, t45);
	SetSwitcherResource(Disp->kg2._str46, i46, t46);
	SetSwitcherResource(Disp->kg1._str47, i47, t47);
	SetSwitcherResource(Disp->kg2._str48, i48, t48);
	SetSwitcherResource(Disp->kg2._str50, i50, t50);
	SetSwitcherResource(Disp->kg1._str51, i51, t51);
	SetSwitcherResource(Disp->kg2._str52, i52, t52);
	SetSwitcherResource(Disp->kg1._str53, i53, t53);
	SetSwitcherResource(Disp->kg2._str54, i54, t54);
	SetSwitcherResource(Disp->kg1._str55, i55, t55);
	SetSwitcherResource(Disp->kg2._str56, i56, t56);
	SetSwitcherResource(Disp->kg1._str57, i57, t57);
	SetSwitcherResource(Disp->kg2._str58, i58, t58);
	SetSwitcherResource(Disp->kg1._str59, i59, t59);
	SetSwitcherResource(Disp->kg2._str60, i60, t60);
	SetSwitcherResource(Disp->kg1._str61, i61, t61);
	SetSwitcherResource(Disp->kg2._str62, i62, t62);
	SetSwitcherResource(Disp->kg1._str63, i63, t63);
	SetSwitcherResource(Disp->kg2._str64, i64, t64);
	SetSwitcherResource(Disp->kg1._str65, i65, t65);
	SetSwitcherResource(Disp->kg2._str66, i66, t66);
	SetSwitcherResource(Disp->kg2._str68, i68, t68);
	SetSwitcherResource(Disp->kg1._str69, i69, t69);
	SetSwitcherResource(Disp->kg2._str70, i70, t70);
	SetSwitcherResource(Disp->kg1._str71, i71, t71);
	SetSwitcherResource(Disp->kg2._str72, i72, t72);
	SetSwitcherResource(Disp->kg1._str73, i73, t73);
	SetSwitcherResource(Disp->kg2._str74, i74, t74);
	SetSwitcherResource(Disp->kg1._str75, i75, t75);
	SetSwitcherResource(Disp->kg2._str76, i76, t76);
	SetSwitcherResource(Disp->kg1._str77, i77, t77);
	SetSwitcherResource(Disp->kg2._str78, i78, t78);
	SetSwitcherResource(Disp->kg1._str79, i79, t79);
	SetSwitcherResource(Disp->kg2._str80, i80, t80);
	SetSwitcherResource(Disp->kg1._str81, i81, t81);
	SetSwitcherResource(Disp->kg2._str82, i82, t82);
	SetSwitcherResource(Disp->kg1._str83, i83, t83);
	SetSwitcherResource(Disp->kg2._str84, i84, t84);
	SetSwitcherResource(Disp->kg1._str85, i85, t85);
	SetSwitcherResource(Disp->kg2._str86, i86, t86);
	SetSwitcherResource(Disp->kg3._str87, i87, t87);
	SetSwitcherResource(Disp->kg2._str88, i88, t88);
	SetSwitcherResource(Disp->kg3._str89, i89, t89);
	SetSwitcherResource(Disp->kg2._str90, i90, t90);
	SetSwitcherResource(Disp->kg3._str91, i91, t91);
	SetSwitcherResource(Disp->kg2._str92, i92, t92);
	SetSwitcherResource(Disp->kg3._str93, i93, t93);
	SetSwitcherResource(Disp->kg2._str94, i94, t94);
	SetSwitcherResource(Disp->kg3._str95, i95, t95);
	SetSwitcherResource(Disp->kg2._str96, i96, t96);
	SetSwitcherResource(Disp->kg3._str97, i97, t97);
	SetSwitcherResource(Disp->kg2._str98, i98, t98);
	SetSwitcherResource(Disp->kg3._str99, i99, t99);
	SetSwitcherResource(Disp->kg2._str100, i100, t100);
	SetSwitcherResource(Disp->kg3._str101, i101, t101);
	SetSwitcherResource(Disp->kg3._str103, i103, t103);
	SetSwitcherResource(Disp->kg3._str105, i105, t105);
	SetSwitcherResource(Disp->kg3._str107, i107, t107);
	SetSwitcherResource(Disp->kg3._str109, i109, t109);
	SetSwitcherResource(Disp->kg3._str111, i111, t111);
	SetSwitcherResource(Disp->kg3._str113, i113, t113);
	SetSwitcherResource(Disp->kg3._str115, i115, t115);
	SetSwitcherResource(Disp->kg3._str117, i117, t117);
	SetSwitcherResource(Disp->kg3._str119, i119, t119);
	SetSwitcherResource(Disp->kg3._str121, i121, t121);
	SetSwitcherResource(Disp->kg3._str123, i123, t123);
	SetSwitcherResource(Disp->kg3._str125, i125, t125);
	SetSwitcherResource(Disp->kg3._str127, i127, t127);
	SetSwitcherResource(Disp->kg3._str129, i129, t129);
	SetSwitcherResource(Disp->kg1._str131, i131, t131);
	SetSwitcherResource(Disp->kg1._str133, i133, t133);
	SetSwitcherResource(Disp->kg1._str135, i135, t135);
	SetSwitcherResource(Disp->kg1._str137, i137, t137);
	SetSwitcherResource(Disp->kg3._str301, i301, t301);
	SetSwitcherResource(Disp->kg3._str303, i303, t303);
	SetSwitcherResource(Disp->kg3._str305, i305, t305);
	SetSwitcherResource(Disp->kg3._str307, i307, t307);



}
void UKaragandaMainWidget::SetSwitcherResource(FElm str, UImage* istr, UTextBlock* tstr)
{
	if (str.stat == EAStat::Plus && str.cur == ExCurator::Norm)
	{
		istr->SetBrushTintColor(tintColorBlack);
		tstr->SetColorAndOpacity(tintColorBlack);
	}
	else if (str.stat == EAStat::Minus && str.cur == ExCurator::Norm)
	{
		istr->SetBrushTintColor(tintColorYellow);
		tstr->SetColorAndOpacity(tintColorYellow);
	}
	else if (str.stat == EAStat::Status_changes || str.cur == ExCurator::NotControl)
	{
		if (Animator)
		{
			istr->SetBrushTintColor(tintColorRed);
			tstr->SetColorAndOpacity(tintColorRed);
		}
		else
		{
			istr->SetBrushTintColor(tintColorYellow);
			tstr->SetColorAndOpacity(tintColorYellow);
		}
	}
}

void UKaragandaMainWidget::SetAllWaysResource()
{
	SetOneWayResource(Disp->kg1._M33_s75, M33_s75);
	SetOneWayResource(Disp->kg1._M35_s77, M35_s77);
	SetOneWayResource(Disp->kg1._1NP, _1np);
	SetOneWayResource(Disp->kg1._2NP, _2np);
	SetOneWayResource(Disp->kg1._NP, _np);
	SetOneWayResource(Disp->kg1._NAP, _nap);
	SetOneWayResource(Disp->kg1._1UPN, _1upn);
	SetOneWayResource(Disp->kg1._2UPN, _2upn);
	SetOneWayResource(Disp->kg1._s1, s1);
	SetOneWayResource(Disp->kg1._s3, s3);
	SetOneWayResource(Disp->kg1._s5, s5);
	SetOneWayResource(Disp->kg1._s7, s7);
	SetOneWayResource(Disp->kg1._s9, s9);
	SetOneWayResource(Disp->kg1._s13, s13);
	SetOneWayResource(Disp->kg1._s15, s15);
	SetOneWayResource(Disp->kg1._s17, s17);
	SetOneWayResource(Disp->kg1._s19, s19);
	SetOneWayResource(Disp->kg1._s21, s21);
	SetOneWayResource(Disp->kg1._s23, s23);
	SetOneWayResource(Disp->kg1._s25, s25);
	SetOneWayResource(Disp->kg1._s27, s27);
	SetOneWayResource(Disp->kg1._s29, s29);
	SetOneWayResource(Disp->kg1._s31, s31);
	SetOneWayResource(Disp->kg1._s33, s33);
	SetOneWayResource(Disp->kg1._s35, s35);
	SetOneWayResource(Disp->kg1._s37, s37);
	SetOneWayResource(Disp->kg1._s39, s39);
	SetOneWayResource(Disp->kg1._s41, s41);
	SetOneWayResource(Disp->kg1._s43, s43);
	SetOneWayResource(Disp->kg1._s45, s45);
	SetOneWayResource(Disp->kg1._s47, s47);
	SetOneWayResource(Disp->kg1._s51, s51);
	SetOneWayResource(Disp->kg1._s53, s53);
	SetOneWayResource(Disp->kg1._s55, s55);
	SetOneWayResource(Disp->kg1._s57, s57);
	SetOneWayResource(Disp->kg1._s59, s59);
	SetOneWayResource(Disp->kg1._s61, s61);
	SetOneWayResource(Disp->kg1._s63, s63);
	SetOneWayResource(Disp->kg1._s65, s65);
	SetOneWayResource(Disp->kg1._s67, s67);
	SetOneWayResource(Disp->kg1._s69, s69);
	SetOneWayResource(Disp->kg1._s71, s71);
	SetOneWayResource(Disp->kg1._s73, s73);
	SetOneWayResource(Disp->kg1._s75, s75);
	SetOneWayResource(Disp->kg1._s77, s77);
	SetOneWayResource(Disp->kg1._s79, s79);
	SetOneWayResource(Disp->kg1._s81, s81);
	SetOneWayResource(Disp->kg1._s83, s83);
	SetOneWayResource(Disp->kg1._s85, s85);
	SetOneWayResource(Disp->kg1._s1_s7, s1_s7);
	SetOneWayResource(Disp->kg1._s1_M3, M3_s1);
	SetOneWayResource(Disp->kg1._s3_s5, s3_s5);
	SetOneWayResource(Disp->kg1._s3_s9, s3_s9);
	SetOneWayResource(Disp->kg1._s7_M7, M7_s7);
	SetOneWayResource(Disp->kg1._s9_s11, s9_s11);
	SetOneWayResource(Disp->kg1._s9_M8, M8_s9);
	SetOneWayResource(Disp->kg1._s11_s17, s11_s17);
	SetOneWayResource(Disp->kg1._s13_s15, s13_s15);
	SetOneWayResource(Disp->kg1._s13_s39, s13_s39);
	SetOneWayResource(Disp->kg1._s17_s23, s17_s23);
	SetOneWayResource(Disp->kg1._s19_M8, M8_s19);
	SetOneWayResource(Disp->kg1._s21_s23, s21_s23);
	SetOneWayResource(Disp->kg1._s21_M9, M9_s21);
	SetOneWayResource(Disp->kg1._s19_s25, s19_s25);
	SetOneWayResource(Disp->kg1._s25_s27, s25_s27);
	SetOneWayResource(Disp->kg1._s27_CHM4, CHM4_s27);
	SetOneWayResource(Disp->kg1._s29_s31, s29_s31);
	SetOneWayResource(Disp->kg1._s29_M7, M7_s29);
	SetOneWayResource(Disp->kg1._s31_CHM5, CHM5_s31);
	SetOneWayResource(Disp->kg1._s33_CHM6, CHM6_s33);
	SetOneWayResource(Disp->kg1._s33_CHM7, CHM7_s33);
	SetOneWayResource(Disp->kg1._s35_M9, M9_s35);
	SetOneWayResource(Disp->kg1._s35_CHM3, CHM3_s35);
	SetOneWayResource(Disp->kg1._s37_M11, M11_s37);
	SetOneWayResource(Disp->kg1._s37_CHM2, CHM2_s37);
	SetOneWayResource(Disp->kg1._s39_M11, M11_s39);
	SetOneWayResource(Disp->kg1._s41_CHM1, CHM1_s41);
	SetOneWayResource(Disp->kg1._s43_M14, M14_s43);
	SetOneWayResource(Disp->kg1._s45_M16, M16_s45);
	SetOneWayResource(Disp->kg1._s47_M18, M18_s47);
	SetOneWayResource(Disp->kg1._s47_M20, M20_s47);
	SetOneWayResource(Disp->kg1._s51_s65, s51_s65);
	SetOneWayResource(Disp->kg1._s51_NM1B, NM1B_s51);
	SetOneWayResource(Disp->kg1._s51_NM2B, NM2B_s51);
	SetOneWayResource(Disp->kg1._s53_NM1, NM1_s53);
	SetOneWayResource(Disp->kg1._s53_NM2, NM2_s53);
	SetOneWayResource(Disp->kg1._s57_s63, s57_s63);
	SetOneWayResource(Disp->kg1._s57_NM4, NM4_s57);
	SetOneWayResource(Disp->kg1._s59_s79, s59_s79);
	SetOneWayResource(Disp->kg1._s59_NM5, NM5_s59);
	SetOneWayResource(Disp->kg1._s61_NM6, NM6_s61);
	SetOneWayResource(Disp->kg1._s61_NM7, NM7_s61);
	SetOneWayResource(Disp->kg1._s63_s81, s63_s81);
	SetOneWayResource(Disp->kg1._s63_M27, M27_s63);
	SetOneWayResource(Disp->kg1._s65_s71, s65_s71);
	SetOneWayResource(Disp->kg1._s67_s69, s67_s69);
	SetOneWayResource(Disp->kg1._s67_s77, s67_s77);
	SetOneWayResource(Disp->kg1._s69_s85, s69_s85);
	SetOneWayResource(Disp->kg1._s71_s73, s71_s73);
	SetOneWayResource(Disp->kg1._s73_s75, s73_s75);
	SetOneWayResource(Disp->kg1._s81_s83, s81_s83);
	SetOneWayResource(Disp->kg1._s85_NM3B, NM3B_s85);
	SetOneWayResource(Disp->kg1._s85_NM4B, NM4B_s85);
	SetOneWayResource(Disp->kg1._s55_NM3, NM3_s55);
	SetOneWayResource(Disp->kg1._s5_M1, M1_s5);
	SetOneWayResource(Disp->kg1._w1, w1);
	SetOneWayResource(Disp->kg1._w2, w2);
	SetOneWayResource(Disp->kg1._w3, w3);
	SetOneWayResource(Disp->kg1._w4, w4);
	SetOneWayResource(Disp->kg1._w5, w5);
	SetOneWayResource(Disp->kg1._w6, w6);
	SetOneWayResource(Disp->kg1._M21_tupic, M21_tupic);
	SetOneWayResource(Disp->kg1._M27_tupic, M27_tupic);
	SetOneWayResource(Disp->kg1._wb1, wb1);
	SetOneWayResource(Disp->kg1._wb2, wb2);
	SetOneWayResource(Disp->kg1._wb3, wb3);
	SetOneWayResource(Disp->kg1._wb4, wb4);
	SetOneWayResource(Disp->kg1._p1g1p, p1g1p);
	SetOneWayResource(Disp->kg1._p1g2p, p1g2p);
	SetOneWayResource(Disp->kg1._w7, w7);
	SetOneWayResource(Disp->kg1._s15_M21, M21_s15);
	SetOneWayResource(Disp->kg2._M15_M22, M15_M22);
	SetOneWayResource(Disp->kg2._CH, chp);
	SetOneWayResource(Disp->kg2._1CHP, _1chp);
	SetOneWayResource(Disp->kg2._2CHP, _2chp);
	SetOneWayResource(Disp->kg2._CHAP, chap);
	SetOneWayResource(Disp->kg2._1UPCH, _1upch);
	SetOneWayResource(Disp->kg2._2UPCH, _2upch);
	SetOneWayResource(Disp->kg2._s2, s2);
	SetOneWayResource(Disp->kg2._s4, s4);
	SetOneWayResource(Disp->kg2._s6, s6);
	SetOneWayResource(Disp->kg2._s8, s8);
	SetOneWayResource(Disp->kg2._s10, s10);
	SetOneWayResource(Disp->kg2._s12, s12);
	SetOneWayResource(Disp->kg2._s14, s14);
	SetOneWayResource(Disp->kg2._s16, s16);
	SetOneWayResource(Disp->kg2._s18, s18);
	SetOneWayResource(Disp->kg2._s20, s20);
	SetOneWayResource(Disp->kg2._s22, s22);
	SetOneWayResource(Disp->kg2._s24, s24);
	SetOneWayResource(Disp->kg2._s26, s26);
	SetOneWayResource(Disp->kg2._s28, s28);
	SetOneWayResource(Disp->kg2._s30, s30);
	SetOneWayResource(Disp->kg2._s32, s32);
	SetOneWayResource(Disp->kg2._s34, s34);
	SetOneWayResource(Disp->kg2._s36, s36);
	SetOneWayResource(Disp->kg2._s38, s38);
	SetOneWayResource(Disp->kg2._s40, s40);
	SetOneWayResource(Disp->kg2._s42, s42);
	SetOneWayResource(Disp->kg2._s44, s44);
	SetOneWayResource(Disp->kg2._s46, s46);
	SetOneWayResource(Disp->kg2._s48, s48);
	SetOneWayResource(Disp->kg2._s50, s50);
	SetOneWayResource(Disp->kg2._s52, s52);
	SetOneWayResource(Disp->kg2._s54, s54);
	SetOneWayResource(Disp->kg2._s56, s56);
	SetOneWayResource(Disp->kg2._s100, s100);
	SetOneWayResource(Disp->kg2._s58_s1, s58_1);
	SetOneWayResource(Disp->kg2._s60_s1, s60_1);
	SetOneWayResource(Disp->kg2._s62_s1, s62_1);
	SetOneWayResource(Disp->kg2._s64_s1, s64_1);
	SetOneWayResource(Disp->kg2._s66_s1, s66_1);
	SetOneWayResource(Disp->kg2._s68_s1, s68_1);
	SetOneWayResource(Disp->kg2._s70_s1, s70_1);
	SetOneWayResource(Disp->kg2._s72_s1, s72_1);
	SetOneWayResource(Disp->kg2._s74_s1, s74_1);
	SetOneWayResource(Disp->kg2._s76_s1, s76_1);
	SetOneWayResource(Disp->kg2._s78_s1, s78_1);
	SetOneWayResource(Disp->kg2._s80_s1, s80_1);
	SetOneWayResource(Disp->kg2._s82_s1, s82_1);
	SetOneWayResource(Disp->kg2._s84_s1, s84_1);
	SetOneWayResource(Disp->kg2._s86_s1, s86_1);
	SetOneWayResource(Disp->kg2._s88_s1, s88_1);
	SetOneWayResource(Disp->kg2._s90_s1, s90_1);
	SetOneWayResource(Disp->kg2._s92_s1, s92_1);
	SetOneWayResource(Disp->kg2._s94_s1, s94_1);
	SetOneWayResource(Disp->kg2._s96_s1, s96_1);
	SetOneWayResource(Disp->kg2._s98_s1, s98_1);
	SetOneWayResource(Disp->kg2._s58_s2, s58_2);
	SetOneWayResource(Disp->kg2._s60_s2, s60_2);
	SetOneWayResource(Disp->kg2._s62_s2, s62_2);
	SetOneWayResource(Disp->kg2._s64_s2, s64_2);
	SetOneWayResource(Disp->kg2._s66_s2, s66_2);
	SetOneWayResource(Disp->kg2._s68_s2, s68_2);
	SetOneWayResource(Disp->kg2._s70_s2, s70_2);
	SetOneWayResource(Disp->kg2._s72_s2, s72_2);
	SetOneWayResource(Disp->kg2._s74_s2, s74_2);
	SetOneWayResource(Disp->kg2._s76_s2, s76_2);
	SetOneWayResource(Disp->kg2._s78_s2, s78_2);
	SetOneWayResource(Disp->kg2._s80_s2, s80_2);
	SetOneWayResource(Disp->kg2._s82_s2, s82_2);
	SetOneWayResource(Disp->kg2._s84_s2, s84_2);
	SetOneWayResource(Disp->kg2._s86_s2, s86_2);
	SetOneWayResource(Disp->kg2._s88_s2, s88_2);
	SetOneWayResource(Disp->kg2._s90_s2, s90_2);
	SetOneWayResource(Disp->kg2._s92_s2, s92_2);
	SetOneWayResource(Disp->kg2._s94_s2, s94_2);
	SetOneWayResource(Disp->kg2._s96_s2, s96_2);
	SetOneWayResource(Disp->kg2._s98_s2, s98_2);
	SetOneWayResource(Disp->kg2._s2_s8, s2_s8);
	SetOneWayResource(Disp->kg2._s4_s6, s4_s6);
	SetOneWayResource(Disp->kg2._s4_s12, s4_s12);
	SetOneWayResource(Disp->kg2._s8_s10, s8_s10);
	SetOneWayResource(Disp->kg2._s18_s36, s18_s36);
	SetOneWayResource(Disp->kg2._s20_s40, s20_s40);
	SetOneWayResource(Disp->kg2._s22_s28, s22_s28);
	SetOneWayResource(Disp->kg2._s24_s30, s24_s30);
	SetOneWayResource(Disp->kg2._s24_s26, s24_s26);
	SetOneWayResource(Disp->kg2._s28_s32, s28_s32);
	SetOneWayResource(Disp->kg2._s30_s50, s30_s50);
	SetOneWayResource(Disp->kg2._s32_s38, s32_s38);
	SetOneWayResource(Disp->kg2._s34_s44, s34_s44);
	SetOneWayResource(Disp->kg2._s34_s36, s34_s36);
	SetOneWayResource(Disp->kg2._s38_s56, s38_s56);
	SetOneWayResource(Disp->kg2._s40_s48, s40_s48);
	SetOneWayResource(Disp->kg2._s42_s44, s42_s44);
	SetOneWayResource(Disp->kg2._s42_s58, s42_s58);
	SetOneWayResource(Disp->kg2._s46_s48, s46_s48);
	SetOneWayResource(Disp->kg2._s50_s52, s50_s52);
	SetOneWayResource(Disp->kg2._s98_s100, s98_s100_2);
	SetOneWayResource(Disp->kg2._s98_s13, s98_s100_1);
	SetOneWayResource(Disp->kg2._s100_s98, s98_s100_3);
	SetOneWayResource(Disp->kg2._ss100, s98_s100_4);
	SetOneWayResource(Disp->kg2._ss46, s46_s74_1);
	SetOneWayResource(Disp->kg2._ss74, s46_s74_2);
	SetOneWayResource(Disp->kg2._s100_M22, M22_s100);
	SetOneWayResource(Disp->kg2._s2_M2, M2_s2);
	SetOneWayResource(Disp->kg2._s6_M4, M4_s6);
	SetOneWayResource(Disp->kg2._s52_M5, M5_s52);
	SetOneWayResource(Disp->kg2._s54_M5, M5_s54);
	SetOneWayResource(Disp->kg2._s56_M6, M6_s56);
	SetOneWayResource(Disp->kg2._s83_M6, M6_s83);
	SetOneWayResource(Disp->kg2._s52_M12, M12_s52);
	SetOneWayResource(Disp->kg2._s50_M13, M13_s50);
	SetOneWayResource(Disp->kg2._s16_M15, M15_s16);
	SetOneWayResource(Disp->kg2._M15_M22, M15_M22);
	SetOneWayResource(Disp->kg2._s20_CHM1A, CHM1A_s20);
	SetOneWayResource(Disp->kg2._s18_CHM2A, CHM2A_s18);
	SetOneWayResource(Disp->kg2._s22_CHM3A, CHM3A_s22);
	SetOneWayResource(Disp->kg2._s26_CHM4A, CHM4A_s26);
	SetOneWayResource(Disp->kg2._s30_CHM5A, CHM5A_s30);
	SetOneWayResource(Disp->kg2._s16_N1A, N1A_s16);
	SetOneWayResource(Disp->kg2._s14_N2A, N2A_s14);
	SetOneWayResource(Disp->kg2._s12_N3A, N3A_s12);
	SetOneWayResource(Disp->kg2._s10_N4A, N4A_s10);
	SetOneWayResource(Disp->kg2._s10_N5A, N5A_s10);
	SetOneWayResource(Disp->kg2._s58_NM11, NM11_s58);
	SetOneWayResource(Disp->kg2._s60_NM12, NM12_s60);
	SetOneWayResource(Disp->kg2._s62_NM13, NM13_s62);
	SetOneWayResource(Disp->kg2._s64_NM14, NM14_s64);
	SetOneWayResource(Disp->kg2._s66_NM15, NM15_s66);
	SetOneWayResource(Disp->kg2._s68_NM16, NM16_s68);
	SetOneWayResource(Disp->kg2._s70_NM17, NM17_s70);
	SetOneWayResource(Disp->kg2._s72_NM18, NM18_s72);
	SetOneWayResource(Disp->kg2._s72_NM19, NM19_s72);
	SetOneWayResource(Disp->kg2._s74_NM20, NM20_s74);
	SetOneWayResource(Disp->kg2._s76_NM21, NM21_s76);
	SetOneWayResource(Disp->kg2._s76_NM22, NM22_s76);
	SetOneWayResource(Disp->kg2._s78_NM23, NM23_s78);
	SetOneWayResource(Disp->kg2._s78_NM24, NM24_s78);
	SetOneWayResource(Disp->kg2._s80_NM25, NM25_s80);
	SetOneWayResource(Disp->kg2._s82_NM26, NM26_s82);
	SetOneWayResource(Disp->kg2._s84_NM27, NM27_s84);
	SetOneWayResource(Disp->kg2._s86_NM28, NM28_s86);
	SetOneWayResource(Disp->kg2._s88_NM29, NM29_s88);
	SetOneWayResource(Disp->kg2._s90_NM30, NM30_s90);
	SetOneWayResource(Disp->kg2._s92_NM31, NM31_s92);
	SetOneWayResource(Disp->kg2._s94_NM32, NM32_s94);
	SetOneWayResource(Disp->kg2._s96_NM33, NM33_s96);
	SetOneWayResource(Disp->kg2._s96_NM34, NM34_s96);
	SetOneWayResource(Disp->kg2._wa1, wa1);
	SetOneWayResource(Disp->kg2._wa2, wa2);
	SetOneWayResource(Disp->kg2._wa3, wa3);
	SetOneWayResource(Disp->kg2._wa4, wa4);
	SetOneWayResource(Disp->kg2._wa5, wa5);
	SetOneWayResource(Disp->kg2._M12_tupic, M12_tupic);
	SetOneWayResource(Disp->kg2._M13_tupic, M13_tupic);
	SetOneWayResource(Disp->kg2._11GP, _11gp);
	SetOneWayResource(Disp->kg2._12GP, _12gp);
	SetOneWayResource(Disp->kg2._13GP, _13gp);
	SetOneWayResource(Disp->kg2._14GP, _14gp);
	SetOneWayResource(Disp->kg2._15GP, _15gp);
	SetOneWayResource(Disp->kg2._16GP, _16gp);
	SetOneWayResource(Disp->kg2._17GP, _17gp);
	SetOneWayResource(Disp->kg2._18GP, _18gp);
	SetOneWayResource(Disp->kg2._19GP, _19gp);
	SetOneWayResource(Disp->kg2._20GP, _20gp);
	SetOneWayResource(Disp->kg2._21GP, _21gp);
	SetOneWayResource(Disp->kg2._22GP, _22gp);
	SetOneWayResource(Disp->kg2._23GP, _23gp);
	SetOneWayResource(Disp->kg2._24GP, _24gp);
	SetOneWayResource(Disp->kg2._25GP, _25gp);
	SetOneWayResource(Disp->kg2._26GP, _26gp);
	SetOneWayResource(Disp->kg2._27GP, _27gp);
	SetOneWayResource(Disp->kg2._28GP, _28gp);
	SetOneWayResource(Disp->kg2._29GP, _29gp);
	SetOneWayResource(Disp->kg2._30GP, _30gp);
	SetOneWayResource(Disp->kg2._31GP, _31gp);
	SetOneWayResource(Disp->kg2._32GP, _32gp);
	SetOneWayResource(Disp->kg2._33GP, _33gp);
	SetOneWayResource(Disp->kg2._34GP, _34gp);
	SetOneWayResource(Disp->kg3._s87, s87);
	SetOneWayResource(Disp->kg3._s89, s89);
	SetOneWayResource(Disp->kg3._s91, s91);
	SetOneWayResource(Disp->kg3._s93, s93);
	SetOneWayResource(Disp->kg3._s95, s95);
	SetOneWayResource(Disp->kg3._s97, s97);
	SetOneWayResource(Disp->kg3._s99, s99);
	SetOneWayResource(Disp->kg3._s101, s101);
	SetOneWayResource(Disp->kg3._s103, s103);
	SetOneWayResource(Disp->kg3._s105, s105);
	SetOneWayResource(Disp->kg3._s107, s107);
	SetOneWayResource(Disp->kg3._s109, s109);
	SetOneWayResource(Disp->kg3._s111, s111);
	SetOneWayResource(Disp->kg3._s113, s113);
	SetOneWayResource(Disp->kg3._s115, s115);
	SetOneWayResource(Disp->kg3._s117, s117);
	SetOneWayResource(Disp->kg3._s119, s119);
	SetOneWayResource(Disp->kg3._s121, s121);
	SetOneWayResource(Disp->kg3._s123, s123);
	SetOneWayResource(Disp->kg3._s125, s125);
	SetOneWayResource(Disp->kg3._s127, s127);
	SetOneWayResource(Disp->kg3._s129, s129);
	SetOneWayResource(Disp->kg3._s301, s301);
	SetOneWayResource(Disp->kg3._s303, s303);
	SetOneWayResource(Disp->kg3._s305, s305);
	SetOneWayResource(Disp->kg3._s307, s307);
	SetOneWayResource(Disp->kg3._M31_s77, M31_s77);
	SetOneWayResource(Disp->kg3._M29_s75, M29_s75);
	SetOneWayResource(Disp->kg3._g1p, G1P);
	SetOneWayResource(Disp->kg3._M31_s121, M31_s121);
	SetOneWayResource(Disp->kg3._M29_s93, M29_s93);
	SetOneWayResource(Disp->kg3._g2p, G2P);
	SetOneWayResource(Disp->kg3._gp, _gp);
	SetOneWayResource(Disp->kg3._gp, _gp_dop);
	SetOneWayResource(Disp->kg3._301sp, _301sp);
	SetOneWayResource(Disp->kg3._303sp, _303sp);
	SetOneWayResource(Disp->kg3._305sp, _305sp);
	SetOneWayResource(Disp->kg3._307sp, _307sp);
	SetOneWayResource(Disp->kg3._87sp, _87sp);
	SetOneWayResource(Disp->kg3._89sp, _89sp);
	SetOneWayResource(Disp->kg3._91sp, _91sp);
	SetOneWayResource(Disp->kg3._93sp, _93sp);
	SetOneWayResource(Disp->kg3._95sp, _95sp);
	SetOneWayResource(Disp->kg3._97sp, _97sp);
	SetOneWayResource(Disp->kg3._99sp, _99sp);
	SetOneWayResource(Disp->kg3._101sp, _101sp);
	SetOneWayResource(Disp->kg3._103sp, _103sp);
	SetOneWayResource(Disp->kg3._105sp, _105sp);
	SetOneWayResource(Disp->kg3._107sp, _107sp);
	SetOneWayResource(Disp->kg3._109sp, _109sp);
	SetOneWayResource(Disp->kg3._111sp, _111sp);
	SetOneWayResource(Disp->kg3._113sp, _113sp);
	SetOneWayResource(Disp->kg3._115sp, _115sp);
	SetOneWayResource(Disp->kg3._117sp, _117sp);
	SetOneWayResource(Disp->kg3._119sp, _119sp);
	SetOneWayResource(Disp->kg3._121sp, _121sp);
	SetOneWayResource(Disp->kg3._123sp, _123sp);
	SetOneWayResource(Disp->kg3._125sp, _125sp);
	SetOneWayResource(Disp->kg3._127sp, _127sp);
	SetOneWayResource(Disp->kg3._129sp, _129sp);
	SetOneWayResource(Disp->kg3._305ma, _305ma);
	SetOneWayResource(Disp->kg3._307ma, _307ma);
	SetOneWayResource(Disp->kg3._91ma, _91ma);
	SetOneWayResource(Disp->kg3._97ma, _97ma);
	SetOneWayResource(Disp->kg3._103ma, _103ma);
	SetOneWayResource(Disp->kg3._107ma, _107ma);
	SetOneWayResource(Disp->kg3._111ma, _111ma);
	SetOneWayResource(Disp->kg3._115ma, _115ma);
	SetOneWayResource(Disp->kg3._117ma, _117ma);
	SetOneWayResource(Disp->kg3._119ma, _119ma);
	SetOneWayResource(Disp->kg3._123ma, _123ma);
	SetOneWayResource(Disp->kg3._125ma, _125ma);
	SetOneWayResource(Disp->kg3._127ma, _127ma);
	SetOneWayResource(Disp->kg3._129ma, _129ma);
	SetOneWayResource(Disp->kg3._305mb, _305mb);
	SetOneWayResource(Disp->kg3._307mb, _307mb);
	SetOneWayResource(Disp->kg3._91mb, _91mb);
	SetOneWayResource(Disp->kg3._97mb, _97mb);
	SetOneWayResource(Disp->kg3._103mb, _103mb);
	SetOneWayResource(Disp->kg3._107mb, _107mb);
	SetOneWayResource(Disp->kg3._111mb, _111mb);
	SetOneWayResource(Disp->kg3._115mb, _115mb);
	SetOneWayResource(Disp->kg3._117mb, _117mb);
	SetOneWayResource(Disp->kg3._123mb, _123mb);
	SetOneWayResource(Disp->kg3._125mb, _125mb);
	SetOneWayResource(Disp->kg3._127mb, _127mb);
	SetOneWayResource(Disp->kg3._129mb, _129mb);
	SetOneWayResource(Disp->kg3._305pa, _305pa);
	SetOneWayResource(Disp->kg3._307pa, _307pa);
	SetOneWayResource(Disp->kg3._87pa, _87pa);
	SetOneWayResource(Disp->kg3._89pa, _89pa);
	SetOneWayResource(Disp->kg3._91pa, _91pa);
	SetOneWayResource(Disp->kg3._95pa, _95pa);
	SetOneWayResource(Disp->kg3._97pa, _97pa);
	SetOneWayResource(Disp->kg3._99pa, _99pa);
	SetOneWayResource(Disp->kg3._101pa, _101pa);
	SetOneWayResource(Disp->kg3._103pa, _103pa);
	SetOneWayResource(Disp->kg3._105ma, _105ma);
	SetOneWayResource(Disp->kg3._107pa, _107pa);
	SetOneWayResource(Disp->kg3._109pa, _109pa);
	SetOneWayResource(Disp->kg3._115pa, _115pa);
	SetOneWayResource(Disp->kg3._117pa, _117pa);
	SetOneWayResource(Disp->kg3._119pa, _119pa);
	SetOneWayResource(Disp->kg3._127pa, _127pa);
	SetOneWayResource(Disp->kg3._129pa, _129pa);
	SetOneWayResource(Disp->kg3._305pb, _305pb);
	SetOneWayResource(Disp->kg3._307pb, _307pb);
	SetOneWayResource(Disp->kg3._89pb, _89pb);
	SetOneWayResource(Disp->kg3._91pb, _91pb);
	SetOneWayResource(Disp->kg3._95pb, _95pb);
	SetOneWayResource(Disp->kg3._97pb, _97pb);
	SetOneWayResource(Disp->kg3._101pb, _101pb);
	SetOneWayResource(Disp->kg3._103pb, _103pb);
	SetOneWayResource(Disp->kg3._105mv, _105mv);
	SetOneWayResource(Disp->kg3._107pb, _107pb);
	SetOneWayResource(Disp->kg3._115pb, _115pb);
	SetOneWayResource(Disp->kg3._117pb, _117pb);
	SetOneWayResource(Disp->kg3._127pb, _127pb);
	SetOneWayResource(Disp->kg3._129pb, _129pb);
	SetOneWayResource(Disp->kg3._89pv, _89pv);
	SetOneWayResource(Disp->kg3._101pv, _101pv);
	SetOneWayResource(Disp->kg3._111mv, _111mv);
	SetOneWayResource(Disp->kg3._113pv, _113pv);
	SetOneWayResource(Disp->kg3._1_3zp, _1_3zp);
	SetOneWayResource(Disp->kg3._2_3zp, _2_3zp);
	SetOneWayResource(Disp->kg3._11zp, _11zp);
	SetOneWayResource(Disp->kg3._12zp, _12zp);
	SetOneWayResource(Disp->kg3._21zp, _21zp);
	SetOneWayResource(Disp->kg3._22zp, _22zp);
	SetOneWayResource(Disp->kg3._31zp, _31zp);
	SetOneWayResource(Disp->kg3._32zp, _32zp);
	SetOneWayResource(Disp->kg3._41zp, _41zp);
	SetOneWayResource(Disp->kg3._42zp, _42zp);
	SetOneWayResource(Disp->kg3._111zp, _111zp);
	SetOneWayResource(Disp->kg3._121zp, _121zp);
	SetOneWayResource(Disp->kg3._131zp, _131zp);
	SetOneWayResource(Disp->kg3._141zp, _141zp);
	SetOneWayResource(Disp->kg3._151zp, _151zp);
	SetOneWayResource(Disp->kg3._161zp, _161zp);
	SetOneWayResource(Disp->kg3._171zp, _171zp);
	SetOneWayResource(Disp->kg3._181zp, _181zp);
	SetOneWayResource(Disp->kg3._191zp, _191zp);
	SetOneWayResource(Disp->kg3._201zp, _201zp);
	SetOneWayResource(Disp->kg3._211zp, _211zp);
	SetOneWayResource(Disp->kg3._221zp, _221zp);
	SetOneWayResource(Disp->kg3._231zp, _231zp);
	SetOneWayResource(Disp->kg3._241zp, _241zp);
	SetOneWayResource(Disp->kg3._251zp, _251zp);
	SetOneWayResource(Disp->kg3._261zp, _261zp);
	SetOneWayResource(Disp->kg3._271zp, _271zp);
	SetOneWayResource(Disp->kg3._281zp, _281zp);
	SetOneWayResource(Disp->kg3._291zp, _291zp);
	SetOneWayResource(Disp->kg3._301zp, _301zp);
	SetOneWayResource(Disp->kg3._311zp, _311zp);
	SetOneWayResource(Disp->kg3._321zp, _321zp);
	SetOneWayResource(Disp->kg3._331zp, _331zp);
	SetOneWayResource(Disp->kg3._341zp, _341zp);

	SetOneWayResource(Disp->kg2._s79_M10, s54_s79);

	SetOneWayResource(Disp->kg1._M23_tupic, M23_tupic);
	SetOneWayResource(Disp->kg1._M24_tupic, M24_tupic);
	SetOneWayResource(Disp->kg1._M25_tupic, M25_tupic);
	SetOneWayResource(Disp->kg1._M26_tupic, M26_tupic);

	SetOneWayResource(Disp->kg1._M23_s133, M23_s133);
	SetOneWayResource(Disp->kg1._M24_s137, M24_s137);
	SetOneWayResource(Disp->kg1._M25_s133, M25_s133);
	SetOneWayResource(Disp->kg1._M26_s137, M26_s137);

	SetOneWayResource(Disp->kg1._s131_s133, s131_s133);
	SetOneWayResource(Disp->kg1._s33_s131, s33_s131);
	SetOneWayResource(Disp->kg1._s135_s137, s135_s137);

	SetOneWayResource(Disp->kg1._s131, s131);
	SetOneWayResource(Disp->kg1._s133, s133);
	SetOneWayResource(Disp->kg1._s135, s135);
	SetOneWayResource(Disp->kg1._s137, s137);

	SetOneWayResource(Disp->kg3._113pa, _113pa);
	SetOneWayResource(Disp->kg3._113pb, _113pb);
	SetOneWayResource(Disp->kg3._113pv, _113pv);

	SetOneWayResource(Disp->kg3._87ma, _87ma);
	SetOneWayResource(Disp->kg3._95pv, _95pv);
	SetOneWayResource(Disp->kg3._105mb, _105mb);
	SetOneWayResource(Disp->kg3._125mv, _125mv);
	SetOneWayResource(Disp->kg3._123mv, _123mv);

	SetOneWayResource(Disp->kg1._s11, s11);

}

void UKaragandaMainWidget::SetOneWayResource(FElm way, UBorder* bway)
{
	if (
		way.cur == ExCurator::Norm && way.stat == EAStat::Free
		|| way.cur == ExCurator::FalseFree && way.stat == EAStat::Busy
		)
	{
		bway->SetBrushColor(FLinearColor::Black);
	}
	else if (
		way.cur == ExCurator::Norm && way.stat == EAStat::Busy
		|| way.cur == ExCurator::FalseBusy && way.stat == EAStat::Free
		)
	{
		bway->SetBrushColor(FLinearColor::Red);
	}
	else if (way.stat == EAStat::ManRouted)
	{
		bway->SetBrushColor(FLinearColor::White);
	}
	else if (way.stat == EAStat::Routed)
	{
		bway->SetBrushColor(FLinearColor::Green);
	}
	else if (way.stat == EAStat::ToRouted)
	{
		bway->SetBrushColor(FLinearColor::Blue);
	}
	else if (way.stat == EAStat::ToFree)
	{
		if (Animator)
		{
			bway->SetBrushColor(FLinearColor::Yellow);
		}
		else
		{
			bway->SetBrushColor(FLinearColor::Black);
		}
	}
}


#pragma endregion

void UKaragandaMainWidget::SetDSP_direct()
{
	Disp->SendCommToServer(Station::Karaganda_DSP, Commd::Karaganda_DSP_directSet);
}

void UKaragandaMainWidget::SetDSC_direct()
{
	Disp->SendCommToServer(Station::Karaganda_DSC, Commd::Karaganda_DSC_directSet);
}

#pragma region General Foo

void UKaragandaMainWidget::kg1_UpdateInfoStationWay()
{

	PrintInfo(&Disp->kg1._w1, HB_LocoEven_way_1, TB_LocoEven_way_1, Button_TrainInfo_way_1, TextButton_way_1, HB_LocoOdd_way_1, TB_LocoOdd_way_1);
	PrintInfo(&Disp->kg1._w2, HB_LocoEven_way_2, TB_LocoEven_way_2, Button_TrainInfo_way_2, TextButton_way_2, HB_LocoOdd_way_2, TB_LocoOdd_way_2);
	PrintInfo(&Disp->kg1._w3, HB_LocoEven_way_3, TB_LocoEven_way_3, Button_TrainInfo_way_3, TextButton_way_3, HB_LocoOdd_way_3, TB_LocoOdd_way_3);
	PrintInfo(&Disp->kg1._w4, HB_LocoEven_way_4, TB_LocoEven_way_4, Button_TrainInfo_way_4, TextButton_way_4, HB_LocoOdd_way_4, TB_LocoOdd_way_4);
	PrintInfo(&Disp->kg1._w5, HB_LocoEven_way_5, TB_LocoEven_way_5, Button_TrainInfo_way_5, TextButton_way_5, HB_LocoOdd_way_5, TB_LocoOdd_way_5);
	PrintInfo(&Disp->kg1._w6, HB_LocoEven_way_6, TB_LocoEven_way_6, Button_TrainInfo_way_6, TextButton_way_6, HB_LocoOdd_way_6, TB_LocoOdd_way_6);
	PrintInfo(&Disp->kg1._w7, HB_LocoEven_way_7, TB_LocoEven_way_7, Button_TrainInfo_way_7, TextButton_way_7, HB_LocoOdd_way_7, TB_LocoOdd_way_7);

	PrintInfo(&Disp->kg1._M21_tupic, HB_LocoEven_tupic_M_21, TB_LocoEven_tupic_M_21, Button_TrainInfo_tupic_M_21, TextButton_tupic_M_21, HB_LocoOdd_tupic_M_21, TB_LocoOdd_tupic_M_21);

	PrintInfo(&Disp->kg1._M23_tupic, HB_LocoEven_tupic_M_23, TB_LocoEven_tupic_M_23, Button_TrainInfo_tupic_M_23, TextButton_tupic_M_23, HB_LocoOdd_tupic_M_23, TB_LocoOdd_tupic_M_23);
	PrintInfo(&Disp->kg1._M24_tupic, HB_LocoEven_tupic_M_24, TB_LocoEven_tupic_M_24, Button_TrainInfo_tupic_M_24, TextButton_tupic_M_24, HB_LocoOdd_tupic_M_24, TB_LocoOdd_tupic_M_24);
	PrintInfo(&Disp->kg1._M25_tupic, HB_LocoEven_tupic_M_25, TB_LocoEven_tupic_M_25, Button_TrainInfo_tupic_M_25, TextButton_tupic_M_25, HB_LocoOdd_tupic_M_25, TB_LocoOdd_tupic_M_25);
	PrintInfo(&Disp->kg1._M26_tupic, HB_LocoEven_tupic_M_26, TB_LocoEven_tupic_M_26, Button_TrainInfo_tupic_M_26, TextButton_tupic_M_26, HB_LocoOdd_tupic_M_26, TB_LocoOdd_tupic_M_26);
	PrintInfo(&Disp->kg2._M12_tupic, HB_LocoEven_tupic_M_12, TB_LocoEven_tupic_M_12, Button_TrainInfo_tupic_M_12, TextButton_tupic_M_12, HB_LocoOdd_tupic_M_12, TB_LocoOdd_tupic_M_12);
	PrintInfo(&Disp->kg2._M13_tupic, HB_LocoEven_tupic_M_13, TB_LocoEven_tupic_M_13, Button_TrainInfo_tupic_M_13, TextButton_tupic_M_13, HB_LocoOdd_tupic_M_13, TB_LocoOdd_tupic_M_13);


	PrintInfo(&Disp->kg1._M27_tupic, HB_LocoEven_tupic_M_27, TB_LocoEven_tupic_M_27, Button_TrainInfo_tupic_M_27, TextButton_tupic_M_27, HB_LocoOdd_tupic_M_27, TB_LocoOdd_tupic_M_27);

	PrintInfo(&Disp->kg1._wb1, HB_LocoEven_way_BP_1, TB_LocoEven_way_BP_1, Button_TrainInfo_way_BP_1, TextButton_way_BP_1, HB_LocoOdd_way_BP_1, TB_LocoOdd_way_BP_1);
	PrintInfo(&Disp->kg1._wb2, HB_LocoEven_way_BP_2, TB_LocoEven_way_BP_2, Button_TrainInfo_way_BP_2, TextButton_way_BP_2, HB_LocoOdd_way_BP_2, TB_LocoOdd_way_BP_2);
	PrintInfo(&Disp->kg1._wb3, HB_LocoEven_way_BP_3, TB_LocoEven_way_BP_3, Button_TrainInfo_way_BP_3, TextButton_way_BP_3, HB_LocoOdd_way_BP_3, TB_LocoOdd_way_BP_3);
	PrintInfo(&Disp->kg1._wb4, HB_LocoEven_way_BP_4, TB_LocoEven_way_BP_4, Button_TrainInfo_way_BP_4, TextButton_way_BP_4, HB_LocoOdd_way_BP_4, TB_LocoOdd_way_BP_4);

	PrintInfo(&Disp->kg1._p1g1p, HB_LocoEven_way_P1G1P, TB_LocoEven_way_P1G1P, Button_TrainInfo_way_P1G1P, TextButton_way_P1G1P, HB_LocoOdd_way_P1G1P, TB_LocoOdd_way_P1G1P);
	PrintInfo(&Disp->kg1._p1g2p, HB_LocoEven_way_P1G2P, TB_LocoEven_way_P1G2P, Button_TrainInfo_way_P1G2P, TextButton_way_P1G2P, HB_LocoOdd_way_P1G2P, TB_LocoOdd_way_P1G2P);

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



void UKaragandaMainWidget::CreateMenuTrainInfo_w1()
{
	CreateMenuInfo(Disp->kg1._w1.num);

}
void UKaragandaMainWidget::CreateMenuTrainInfo_w2()
{
	CreateMenuInfo(Disp->kg1._w2.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_w3()
{
	CreateMenuInfo(Disp->kg1._w3.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_w4()
{
	CreateMenuInfo(Disp->kg1._w4.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_w5()
{
	CreateMenuInfo(Disp->kg1._w5.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_w6()
{
	CreateMenuInfo(Disp->kg1._w6.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_w7()
{
	CreateMenuInfo(Disp->kg1._w7.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_P1G1P()
{
	CreateMenuInfo(Disp->kg1._p1g1p.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_P1G2P()
{
	CreateMenuInfo(Disp->kg1._p1g2p.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_M21_tupic()
{
	CreateMenuInfo(Disp->kg1._M21_tupic.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_M27_tupic()
{
	CreateMenuInfo(Disp->kg1._M27_tupic.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_wb1()
{
	CreateMenuInfo(Disp->kg1._wb1.num);

}
void UKaragandaMainWidget::CreateMenuTrainInfo_wb2()
{
	CreateMenuInfo(Disp->kg1._wb2.num);

}
void UKaragandaMainWidget::CreateMenuTrainInfo_wb3()
{
	CreateMenuInfo(Disp->kg1._wb3.num);

}
void UKaragandaMainWidget::CreateMenuTrainInfo_wb4()
{
	CreateMenuInfo(Disp->kg1._wb4.num);

}


void UKaragandaMainWidget::TestSostavBeforeSvetofor(EdopStat dopstat, int numberPoezd, int numberLoco)
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

	if (dopstat == EdopStat::CHM1)
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
	if (dopstat == EdopStat::CHM2)
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
	if (dopstat == EdopStat::CHM3)
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
	if (dopstat == EdopStat::CHM4)
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
	if (dopstat == EdopStat::CHM5)
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
	if (dopstat == EdopStat::CHM6)
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
	if (dopstat == EdopStat::CHM7)
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

	if (dopstat == EdopStat::NM1)
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
	if (dopstat == EdopStat::NM2)
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
	if (dopstat == EdopStat::NM3)
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
	if (dopstat == EdopStat::NM4)
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
	if (dopstat == EdopStat::NM5)
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
	if (dopstat == EdopStat::NM6)
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
	if (dopstat == EdopStat::NM7)
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

	//kg2_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganda_2);

	kg1_UpdateInfoStationWay();
	Disp->SendDataStationToAll(Station::Karaganda_1);
}

void UKaragandaMainWidget::kg1_WayNumberChanger(int numberway)
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

#pragma region General Foo


void UKaragandaMainWidget::CreateMenuTrainInfo_wa1()
{
	CreateMenuInfo(Disp->kg2._wa1.num);

}
void UKaragandaMainWidget::CreateMenuTrainInfo_wa2()
{
	CreateMenuInfo(Disp->kg2._wa2.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_wa3()
{
	CreateMenuInfo(Disp->kg2._wa3.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_wa4()
{
	CreateMenuInfo(Disp->kg2._wa4.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_wa5()
{
	CreateMenuInfo(Disp->kg2._wa5.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_wa()
{
	CreateMenuInfo(Disp->kg2._M15_M22.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_tupic_M12()
{
	CreateMenuInfo(Disp->kg2._M12_tupic.num);
}
void UKaragandaMainWidget::CreateMenuTrainInfo_tupic_M13()
{
	CreateMenuInfo(Disp->kg2._M13_tupic.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_11()
{
	CreateMenuInfo(Disp->kg2._11GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_12()
{
	CreateMenuInfo(Disp->kg2._12GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_13()
{
	CreateMenuInfo(Disp->kg2._13GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_14()
{
	CreateMenuInfo(Disp->kg2._14GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_15()
{
	CreateMenuInfo(Disp->kg2._15GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_16()
{
	CreateMenuInfo(Disp->kg2._16GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_17()
{
	CreateMenuInfo(Disp->kg2._17GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_18()
{
	CreateMenuInfo(Disp->kg2._18GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_19()
{
	CreateMenuInfo(Disp->kg2._19GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_20()
{
	CreateMenuInfo(Disp->kg2._20GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_21()
{
	CreateMenuInfo(Disp->kg2._21GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_22()
{
	CreateMenuInfo(Disp->kg2._22GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_23()
{
	CreateMenuInfo(Disp->kg2._23GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_24()
{
	CreateMenuInfo(Disp->kg2._24GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_25()
{
	CreateMenuInfo(Disp->kg2._25GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_26()
{
	CreateMenuInfo(Disp->kg2._26GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_27()
{
	CreateMenuInfo(Disp->kg2._27GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_28()
{
	CreateMenuInfo(Disp->kg2._28GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_29()
{
	CreateMenuInfo(Disp->kg2._29GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_30()
{
	CreateMenuInfo(Disp->kg2._30GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_31()
{
	CreateMenuInfo(Disp->kg2._31GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_32()
{
	CreateMenuInfo(Disp->kg2._32GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_33()
{
	CreateMenuInfo(Disp->kg2._33GP.num);
}

void UKaragandaMainWidget::CreateMenuTrainInfo_gp_34()
{
	CreateMenuInfo(Disp->kg2._34GP.num);
}









#pragma endregion

#pragma region Routers

#pragma region Foo of router s buttons








//void UKaragandaMainWidget::Za_M12()
//{
//	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();
//
//
//	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_M12_Create);
//	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_M12_Create);
//	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_M12_Create);
//	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_M12_Create);
//	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_M12_Create);
//	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_M12_Create);
//	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_M12_Create);
//
//	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_M12_Create);
//	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_M12_Create);
//	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_M12_Create);
//	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_M12_Create);
//
//	ExitMenu();
//}



#pragma endregion






//FElm* UKaragandaMainWidget::kg1_GetEndRouter(Router* router)
//{
//	FElm* endRouter = nullptr;
//	for (size_t i = 0; i < router->sizeRouter; i++)
//	{
//		endRouter = router->arrRouter[i];
//		if (i == router->sizeRouter - 1) break;
//	}
//	return endRouter;
//}



void UKaragandaMainWidget::kg1_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganda_1);
}

#pragma endregion

#pragma region Routers





//
//FElm* UKaragandaMainWidget::kg2_GetEndRouter(Router* router)
//{
//	FElm* endRouter = nullptr;
//	for (size_t i = 0; i < router->sizeRouter; i++)
//	{
//		endRouter = router->arrRouter[i];
//		if (i == router->sizeRouter - 1) break;
//	}
//	return endRouter;
//}

void UKaragandaMainWidget::UKaragandaMainWidget::kg2_IskusstvennaiyaRazdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karaganda_2);
}

#pragma endregion





