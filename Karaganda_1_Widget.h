// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "KaragSortParent.h"

#include "Karaganda_1_Widget.generated.h"

/**
 * 
 */

UCLASS()
class NEWSTATIONDISPETCHER_API UKaraganda_1_Widget : public UKaragSortParent
{
	GENERATED_BODY()

	
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




#pragma endregion


#pragma endregion



	virtual bool Initialize();





	UFUNCTION(BlueprintCallable)
		void kg1_UpdateInfoStationWay();

	void CreateMenuInfo(int numTrain, int delta_y = 0, int delta_x = 0);
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
		void CreateMenuTrainInfo_M23_tupic();
	UFUNCTION()
		void CreateMenuTrainInfo_M24_tupic();
	UFUNCTION()
		void CreateMenuTrainInfo_M25_tupic();
	UFUNCTION()
		void CreateMenuTrainInfo_M26_tupic();

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








	UFUNCTION(BlueprintCallable)
		void kg1_IskusstvennaiyaRazdelka();



};
