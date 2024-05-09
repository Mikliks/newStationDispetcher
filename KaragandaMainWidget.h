// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "KaragSortParent.h"

//#include "CoreMinimal.h"
//#include "Blueprint/UserWidget.h"
#include "KaragandaMainWidget.generated.h"

/**
 * 
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UKaragandaMainWidget : public UKaragSortParent
{
	GENERATED_BODY()



	

	//bool AnimatorCPP = false;
	

	FSlateColor tintColorRed;
	FSlateColor tintColorYellow;
	FSlateColor tintColorBlack;

#pragma region Graphic

#pragma region  InfoWay



	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_4;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_7;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_BP_4;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_4;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_7;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_BP_4;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_27;




	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_26;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_27;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_26;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_P1G2P;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_P1G2P;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_P1G2P;



	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_7;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_BP_4;


	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_27;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_26;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_7;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_P1G2P;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_BP_4;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_27;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_26;



	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_BP_4;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_P1G2P;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_7;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_BP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_BP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_BP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_BP_4;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_P1G1P;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_P1G2P;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_26;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_26;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_way_GP_34;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_GP_34;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_13;



	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_13;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_GP_34;


	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_13;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_way_GP_34;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_13;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_way_GP_34;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_AP_5;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_11;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_13;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_15;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_17;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_19;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_20;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_22;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_26;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_28;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_29;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_30;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_31;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_32;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_33;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_GP_34;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_13;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_13;


#pragma endregion
#pragma region istr

	UPROPERTY(meta = (BindWidget))
		class UImage* i1;
	UPROPERTY(meta = (BindWidget))
		class UImage* i2;
	UPROPERTY(meta = (BindWidget))
		class UImage* i3;
	UPROPERTY(meta = (BindWidget))
		class UImage* i4;
	UPROPERTY(meta = (BindWidget))
		class UImage* i5_2;
	UPROPERTY(meta = (BindWidget))
		class UImage* i6;
	UPROPERTY(meta = (BindWidget))
		class UImage* i7;
	UPROPERTY(meta = (BindWidget))
		class UImage* i8;
	UPROPERTY(meta = (BindWidget))
		class UImage* i9;
	UPROPERTY(meta = (BindWidget))
		class UImage* i10;
	UPROPERTY(meta = (BindWidget))
		class UImage* i11;
	UPROPERTY(meta = (BindWidget))
		class UImage* i12;
	UPROPERTY(meta = (BindWidget))
		class UImage* i13;
	UPROPERTY(meta = (BindWidget))
		class UImage* i14;
	UPROPERTY(meta = (BindWidget))
		class UImage* i15;
	UPROPERTY(meta = (BindWidget))
		class UImage* i16;
	UPROPERTY(meta = (BindWidget))
		class UImage* i17;
	UPROPERTY(meta = (BindWidget))
		class UImage* i18;
	UPROPERTY(meta = (BindWidget))
		class UImage* i19;
	UPROPERTY(meta = (BindWidget))
		class UImage* i20;
	UPROPERTY(meta = (BindWidget))
		class UImage* i21;
	UPROPERTY(meta = (BindWidget))
		class UImage* i22;
	UPROPERTY(meta = (BindWidget))
		class UImage* i23;
	UPROPERTY(meta = (BindWidget))
		class UImage* i24;
	UPROPERTY(meta = (BindWidget))
		class UImage* i25;
	UPROPERTY(meta = (BindWidget))
		class UImage* i26;
	UPROPERTY(meta = (BindWidget))
		class UImage* i27;
	UPROPERTY(meta = (BindWidget))
		class UImage* i28;
	UPROPERTY(meta = (BindWidget))
		class UImage* i29;
	UPROPERTY(meta = (BindWidget))
		class UImage* i30;
	UPROPERTY(meta = (BindWidget))
		class UImage* i31;
	UPROPERTY(meta = (BindWidget))
		class UImage* i32;
	UPROPERTY(meta = (BindWidget))
		class UImage* i33;
	UPROPERTY(meta = (BindWidget))
		class UImage* i34;
	UPROPERTY(meta = (BindWidget))
		class UImage* i35;
	UPROPERTY(meta = (BindWidget))
		class UImage* i36;
	UPROPERTY(meta = (BindWidget))
		class UImage* i37;
	UPROPERTY(meta = (BindWidget))
		class UImage* i38;
	UPROPERTY(meta = (BindWidget))
		class UImage* i39;
	UPROPERTY(meta = (BindWidget))
		class UImage* i40;
	UPROPERTY(meta = (BindWidget))
		class UImage* i41;
	UPROPERTY(meta = (BindWidget))
		class UImage* i42;
	UPROPERTY(meta = (BindWidget))
		class UImage* i43;
	UPROPERTY(meta = (BindWidget))
		class UImage* i44;
	UPROPERTY(meta = (BindWidget))
		class UImage* i45;
	UPROPERTY(meta = (BindWidget))
		class UImage* i46;
	UPROPERTY(meta = (BindWidget))
		class UImage* i47;
	UPROPERTY(meta = (BindWidget))
		class UImage* i48;

	UPROPERTY(meta = (BindWidget))
		class UImage* i50;
	UPROPERTY(meta = (BindWidget))
		class UImage* i51;
	UPROPERTY(meta = (BindWidget))
		class UImage* i52;
	UPROPERTY(meta = (BindWidget))
		class UImage* i53;
	UPROPERTY(meta = (BindWidget))
		class UImage* i54;
	UPROPERTY(meta = (BindWidget))
		class UImage* i55;
	UPROPERTY(meta = (BindWidget))
		class UImage* i56;
	UPROPERTY(meta = (BindWidget))
		class UImage* i57;
	UPROPERTY(meta = (BindWidget))
		class UImage* i58;
	UPROPERTY(meta = (BindWidget))
		class UImage* i59;
	UPROPERTY(meta = (BindWidget))
		class UImage* i60;
	UPROPERTY(meta = (BindWidget))
		class UImage* i61;
	UPROPERTY(meta = (BindWidget))
		class UImage* i62;
	UPROPERTY(meta = (BindWidget))
		class UImage* i63;
	UPROPERTY(meta = (BindWidget))
		class UImage* i64;
	UPROPERTY(meta = (BindWidget))
		class UImage* i65;
	UPROPERTY(meta = (BindWidget))
		class UImage* i66;

	UPROPERTY(meta = (BindWidget))
		class UImage* i68;
	UPROPERTY(meta = (BindWidget))
		class UImage* i69;
	UPROPERTY(meta = (BindWidget))
		class UImage* i70;
	UPROPERTY(meta = (BindWidget))
		class UImage* i71;
	UPROPERTY(meta = (BindWidget))
		class UImage* i72;
	UPROPERTY(meta = (BindWidget))
		class UImage* i73;
	UPROPERTY(meta = (BindWidget))
		class UImage* i74;
	UPROPERTY(meta = (BindWidget))
		class UImage* i75;
	UPROPERTY(meta = (BindWidget))
		class UImage* i76;
	UPROPERTY(meta = (BindWidget))
		class UImage* i77;
	UPROPERTY(meta = (BindWidget))
		class UImage* i78;
	UPROPERTY(meta = (BindWidget))
		class UImage* i79;
	UPROPERTY(meta = (BindWidget))
		class UImage* i80;
	UPROPERTY(meta = (BindWidget))
		class UImage* i81;
	UPROPERTY(meta = (BindWidget))
		class UImage* i82;
	UPROPERTY(meta = (BindWidget))
		class UImage* i83;
	UPROPERTY(meta = (BindWidget))
		class UImage* i84;
	UPROPERTY(meta = (BindWidget))
		class UImage* i85;
	UPROPERTY(meta = (BindWidget))
		class UImage* i86;
	UPROPERTY(meta = (BindWidget))
		class UImage* i87;
	UPROPERTY(meta = (BindWidget))
		class UImage* i88;
	UPROPERTY(meta = (BindWidget))
		class UImage* i89;
	UPROPERTY(meta = (BindWidget))
		class UImage* i90;
	UPROPERTY(meta = (BindWidget))
		class UImage* i91;
	UPROPERTY(meta = (BindWidget))
		class UImage* i92;
	UPROPERTY(meta = (BindWidget))
		class UImage* i93;
	UPROPERTY(meta = (BindWidget))
		class UImage* i94;
	UPROPERTY(meta = (BindWidget))
		class UImage* i95;
	UPROPERTY(meta = (BindWidget))
		class UImage* i96;
	UPROPERTY(meta = (BindWidget))
		class UImage* i97;
	UPROPERTY(meta = (BindWidget))
		class UImage* i98;
	UPROPERTY(meta = (BindWidget))
		class UImage* i99;
	UPROPERTY(meta = (BindWidget))
		class UImage* i100;

	UPROPERTY(meta = (BindWidget))
		class UImage* i101;
	UPROPERTY(meta = (BindWidget))
		class UImage* i103;
	UPROPERTY(meta = (BindWidget))
		class UImage* i105;
	UPROPERTY(meta = (BindWidget))
		class UImage* i107;
	UPROPERTY(meta = (BindWidget))
		class UImage* i109;
	UPROPERTY(meta = (BindWidget))
		class UImage* i111;
	UPROPERTY(meta = (BindWidget))
		class UImage* i113;
	UPROPERTY(meta = (BindWidget))
		class UImage* i115;
	UPROPERTY(meta = (BindWidget))
		class UImage* i117;
	UPROPERTY(meta = (BindWidget))
		class UImage* i119;
	UPROPERTY(meta = (BindWidget))
		class UImage* i121;
	UPROPERTY(meta = (BindWidget))
		class UImage* i123;
	UPROPERTY(meta = (BindWidget))
		class UImage* i125;
	UPROPERTY(meta = (BindWidget))
		class UImage* i127;
	UPROPERTY(meta = (BindWidget))
		class UImage* i129;
	UPROPERTY(meta = (BindWidget))
		class UImage* i131;
	UPROPERTY(meta = (BindWidget))
		class UImage* i133;
	UPROPERTY(meta = (BindWidget))
		class UImage* i135;
	UPROPERTY(meta = (BindWidget))
		class UImage* i137;
	UPROPERTY(meta = (BindWidget))
		class UImage* i301;
	UPROPERTY(meta = (BindWidget))
		class UImage* i303;
	UPROPERTY(meta = (BindWidget))
		class UImage* i305;
	UPROPERTY(meta = (BindWidget))
		class UImage* i307;
#pragma endregion
#pragma region tstr

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t5_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t11;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t13;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t15;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t17;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t19;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t20;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t21;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t22;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t23;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t24;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t25;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t26;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t27;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t28;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t29;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t30;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t31;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t32;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t33;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t34;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t35;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t36;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t37;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t38;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t39;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t40;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t41;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t42;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t43;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t44;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t45;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t46;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t47;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t48;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t50;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t51;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t52;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t53;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t54;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t55;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t56;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t57;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t58;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t59;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t60;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t61;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t62;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t63;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t64;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t65;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t66;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t68;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t69;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t70;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t71;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t72;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t73;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t74;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t75;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t76;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t77;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t78;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t79;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t80;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t81;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t82;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t83;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t84;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t85;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t86;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t87;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t88;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t89;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t90;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t91;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t92;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t93;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t94;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t95;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t96;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t97;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t98;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t99;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t100;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t101;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t103;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t105;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t107;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t109;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t111;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t113;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t115;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t117;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t119;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t121;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t123;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t125;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t127;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t129;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t131;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t133;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t135;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t137;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t301;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t303;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t305;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* t307;
#pragma endregion
#pragma region bways
	UPROPERTY(meta = (BindWidget))
		class UBorder* M33_s75;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M35_s77;


	UPROPERTY(meta = (BindWidget))
		class UBorder* _1np;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _2np;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _np;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _nap;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _1upn;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _2upn;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s3;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s5;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s7;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s9;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s13;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s15;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s17;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s19;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s21;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s23;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s25;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s27;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s29;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s31;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s33;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s35;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s37;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s39;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s41;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s43;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s45;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s47;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s51;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s53;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s55;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s57;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s59;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s61;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s63;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s65;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s67;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s69;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s71;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s73;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s75;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s77;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s79;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s81;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s83;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s85;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s1_s7;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M3_s1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s3_s5;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s3_s9;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M7_s7;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s9_s11;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M8_s9;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s11_s17;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s13_s15;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s13_s39;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s17_s23;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M8_s19;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s21_s23;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M9_s21;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s19_s25;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s25_s27;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM4_s27;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s29_s31;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M7_s29;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM5_s31;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM6_s33;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM7_s33;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M9_s35;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM3_s35;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M11_s37;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM2_s37;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M11_s39;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM1_s41;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M14_s43;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M16_s45;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M18_s47;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M20_s47;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s51_s65;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM1B_s51;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM2B_s51;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM1_s53;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM2_s53;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s57_s63;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM4_s57;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s59_s79;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM5_s59;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM6_s61;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM7_s61;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s63_s81;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M27_s63;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s65_s71;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s67_s69;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s67_s77;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s69_s85;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s71_s73;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s73_s75;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s81_s83;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM3B_s85;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM4B_s85;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM3_s55;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M1_s5;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w3;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w4;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w5;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w6;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M21_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M27_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wb1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wb2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wb3;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wb4;

	UPROPERTY(meta = (BindWidget))
		class UBorder* p1g1p;

	UPROPERTY(meta = (BindWidget))
		class UBorder* p1g2p;
	UPROPERTY(meta = (BindWidget))
		class UBorder* w7;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M21_s15;
	UPROPERTY(meta = (BindWidget))
		class UBorder* chp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _1chp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _2chp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* chap;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _1upch;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _2upch;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s4;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s6;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s8;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s10;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s11;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s12;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s14;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s16;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s18;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s20;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s22;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s24;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s26;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s28;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s30;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s32;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s34;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s36;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s38;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s40;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s42;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s44;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s46;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s48;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s50;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s52;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s54;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s56;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s100;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s58_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s60_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s62_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s64_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s66_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s68_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s70_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s72_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s74_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s76_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s78_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s80_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s82_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s84_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s86_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s88_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s90_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s92_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s94_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s96_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s58_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s60_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s62_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s64_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s66_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s68_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s70_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s72_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s74_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s76_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s78_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s80_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s82_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s84_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s86_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s88_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s90_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s92_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s94_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s96_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_2;

	UPROPERTY(meta = (BindWidget))
		class UBorder* s2_s8;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s4_s6;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s4_s12;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s8_s10;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s18_s36;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s20_s40;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s22_s28;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s24_s30;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s24_s26;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s28_s32;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s30_s50;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s32_s38;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s34_s44;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s34_s36;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s38_s56;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s40_s48;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s42_s44;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s42_s58;

	UPROPERTY(meta = (BindWidget))
		class UBorder* s46_s48;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s50_s52;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s54_s79;

	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_s100_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_s100_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_s100_3;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s98_s100_4;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s46_s74_1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s46_s74_2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M22_s100;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M2_s2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M4_s6;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M5_s52;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M5_s54;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M6_s56;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M6_s83;


	UPROPERTY(meta = (BindWidget))
		class UBorder* M12_s52;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M13_s50;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M15_s16;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M15_M22;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM1A_s20;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM2A_s18;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM3A_s22;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM4A_s26;
	UPROPERTY(meta = (BindWidget))
		class UBorder* CHM5A_s30;
	UPROPERTY(meta = (BindWidget))
		class UBorder* N1A_s16;
	UPROPERTY(meta = (BindWidget))
		class UBorder* N2A_s14;
	UPROPERTY(meta = (BindWidget))
		class UBorder* N3A_s12;
	UPROPERTY(meta = (BindWidget))
		class UBorder* N4A_s10;
	UPROPERTY(meta = (BindWidget))
		class UBorder* N5A_s10;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM11_s58;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM12_s60;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM13_s62;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM14_s64;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM15_s66;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM16_s68;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM17_s70;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM18_s72;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM19_s72;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM20_s74;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM21_s76;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM22_s76;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM23_s78;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM24_s78;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM25_s80;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM26_s82;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM27_s84;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM28_s86;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM29_s88;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM30_s90;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM31_s92;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM32_s94;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM33_s96;
	UPROPERTY(meta = (BindWidget))
		class UBorder* NM34_s96;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wa1;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wa2;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wa3;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wa4;
	UPROPERTY(meta = (BindWidget))
		class UBorder* wa5;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M12_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M13_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _11gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _12gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _13gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _14gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _15gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _16gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _17gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _18gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _19gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _20gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _21gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _22gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _23gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _24gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _25gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _26gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _27gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _28gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _29gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _30gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _31gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _32gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _33gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _34gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s87;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s89;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s91;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s93;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s95;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s97;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s99;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s101;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s103;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s105;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s107;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s109;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s111;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s113;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s115;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s117;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s119;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s121;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s123;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s125;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s127;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s129;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s301;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s303;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s305;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s307;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M31_s77;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M29_s75;
	UPROPERTY(meta = (BindWidget))
		class UBorder* G1P;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M31_s121;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M29_s93;
	UPROPERTY(meta = (BindWidget))
		class UBorder* G2P;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _gp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _gp_dop;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _301sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _303sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _305sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _307sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _87sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _89sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _91sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _93sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _95sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _97sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _99sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _101sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _103sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _105sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _107sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _109sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _111sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _113sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _115sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _117sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _119sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _121sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _123sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _125sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _127sp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _129sp;

	UPROPERTY(meta = (BindWidget))
		class UBorder* _305ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _307ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _91ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _97ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _103ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _107ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _111ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _115ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _117ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _119ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _123ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _125ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _127ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _129ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _305mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _307mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _91mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _97mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _103mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _107mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _111mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _115mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _117mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _123mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _125mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _127mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _129mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _305pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _307pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _87pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _89pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _91pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _95pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _97pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _99pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _101pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _103pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _105ma;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _107pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _109pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _115pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _117pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _119pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _127pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _129pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _305pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _307pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _89pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _91pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _95pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _97pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _101pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _103pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _105mv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _107pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _115pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _117pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _127pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _129pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _89pv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _101pv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _111mv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _113pv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _1_3zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _2_3zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _11zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _12zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _21zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _22zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _31zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _32zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _41zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _42zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _111zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _121zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _131zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _141zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _151zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _161zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _171zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _181zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _191zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _201zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _211zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _221zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _231zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _241zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _251zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _261zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _271zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _281zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _291zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _301zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _311zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _321zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _331zp;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _341zp;

	UPROPERTY(meta = (BindWidget))
		class UBorder* M23_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M24_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M25_tupic;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M26_tupic;

	UPROPERTY(meta = (BindWidget))
		class UBorder* M23_s133;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M24_s137;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M25_s133;
	UPROPERTY(meta = (BindWidget))
		class UBorder* M26_s137;

	UPROPERTY(meta = (BindWidget))
		class UBorder* s131_s133;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s33_s131;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s135_s137;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s131;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s133;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s135;
	UPROPERTY(meta = (BindWidget))
		class UBorder* s137;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _113pa;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _113pb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _87ma;

	UPROPERTY(meta = (BindWidget))
		class UBorder* _95pv;

	UPROPERTY(meta = (BindWidget))
		class UBorder* _105mb;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _125mv;
	UPROPERTY(meta = (BindWidget))
		class UBorder* _123mv;


#pragma endregion

#pragma endregion
#pragma region ResourceSet


	UFUNCTION(BlueprintCallable)
		void SetAllSwitcersResource();
	void SetSwitcherResource(FElm str, UImage* istr, UTextBlock* tstr);
	UFUNCTION(BlueprintCallable)
		void SetAllWaysResource();
	void SetOneWayResource(FElm way, UBorder* bway);

#pragma endregion

	UFUNCTION(BlueprintCallable)
		void SetDSP_direct();
	UFUNCTION(BlueprintCallable)
		void SetDSC_direct();

#pragma region General Foo
	
	 bool Initialize();





	////UFUNCTION(BlueprintCallable)
	//	void kg1_StrelkiWaysSvetoforDefault();

	///*UFUNCTION(BlueprintCallable)

	//	void kg1_CheckerOfStation();*/





	
		void kg1_UpdateInfoStationWay();



	UFUNCTION()
		void CreateMenuTrainInfo_w1();
	UFUNCTION()
		void CreateMenuTrainInfo_w2();
	UFUNCTION()
		void CreateMenuTrainInfo_w3();
	UFUNCTION()
		void CreateMenuTrainInfo_w4();
	UFUNCTION()
		void CreateMenuTrainInfo_w5();
	UFUNCTION()
		void CreateMenuTrainInfo_w6();
	UFUNCTION()
		void CreateMenuTrainInfo_w7();
	UFUNCTION()
		void CreateMenuTrainInfo_P1G1P();
	UFUNCTION()
		void CreateMenuTrainInfo_P1G2P();
	UFUNCTION()
		void CreateMenuTrainInfo_M21_tupic();
	UFUNCTION()
		void CreateMenuTrainInfo_M27_tupic();

	UFUNCTION()
		void CreateMenuTrainInfo_wb1();
	UFUNCTION()
		void CreateMenuTrainInfo_wb2();
	UFUNCTION()
		void CreateMenuTrainInfo_wb3();
	UFUNCTION()
		void CreateMenuTrainInfo_wb4();



	UFUNCTION(BlueprintCallable)
		void TestSostavBeforeSvetofor(EdopStat dopstat, int numberPoezd, int numberLoco);

	UFUNCTION(BlueprintCallable)
		void kg1_WayNumberChanger(int numberway);


#pragma endregion

#pragma region General Foo


	//UFUNCTION(BlueprintCallable)
	//	void kg2_StrelkiWaysSvetoforDefault();

	/*UFUNCTION(BlueprintCallable)

		void kg2_CheckerOfStation();*/












	UFUNCTION()
		void CreateMenuTrainInfo_wa1();
	UFUNCTION()
		void CreateMenuTrainInfo_wa2();
	UFUNCTION()
		void CreateMenuTrainInfo_wa3();
	UFUNCTION()
		void CreateMenuTrainInfo_wa4();
	UFUNCTION()
		void CreateMenuTrainInfo_wa5();
	UFUNCTION()
		void CreateMenuTrainInfo_wa();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M12();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M13();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_11();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_12();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_13();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_14();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_15();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_16();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_17();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_18();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_19();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_20();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_21();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_22();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_23();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_24();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_25();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_26();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_27();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_28();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_29();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_30();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_31();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_32();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_33();
	UFUNCTION()
		void CreateMenuTrainInfo_gp_34();





	//UFUNCTION(BlueprintCallable)
	//	void kg2_WayNumberChanger(int numberway);


#pragma endregion







#pragma region Routers

	/*FElm* kg1_GetEndRouter(Router* router);*/

	UFUNCTION(BlueprintCallable)
		void kg1_IskusstvennaiyaRazdelka();
#pragma endregion

#pragma region Routers

	/*FElm* kg2_GetEndRouter(Router* router);*/



	UFUNCTION(BlueprintCallable)
		void kg2_IskusstvennaiyaRazdelka();




#pragma endregion

};
