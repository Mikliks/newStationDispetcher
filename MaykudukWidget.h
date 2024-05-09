// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DisPawn.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MaykudukWidget.generated.h"

/**
 * 
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UMaykudukWidget : public UUserWidget
{
	GENERATED_BODY()
	
		//указатель для обращения к полям и методам главного класса - посредника 
		ADisPawn* Disp;
	FElm* RedactSvetofor = nullptr;
	FElm* RedactStrelka = nullptr;

#pragma region Graphic

#pragma region General


	UPROPERTY(meta = (BindWidget))
		class UVerticalBox* VerticalBoxMenu;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_Exit_Menu;


#pragma endregion
#pragma region Buttons of Menu of Svetofor

	UPROPERTY(meta = (BindWidget))
		class UButton* But_OtmenaOneRouter;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_OtmenaAllRouters;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_ND;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHD;



	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_way_6;


	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_6;


	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_6;


	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_7;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_8;

#pragma endregion
#pragma region  InfoWay

#pragma region TextMenu
	UPROPERTY(meta = (BindWidget))
		class USizeBox* SizeBox_TrainInfo;
	UPROPERTY(meta = (BindWidget))
		class UVerticalBox* VerticalBox_TrainInfo;
	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_OtcepHead;


	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_1;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_2;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_3;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_4;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_5;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_6;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_7;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_8;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_8;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_9;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_9;

	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_Otcep_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_NumberOtcep_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_TypeVagon_Otcep_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_Otcep_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Station_Otcep_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Way_Otcep_10;




	UPROPERTY(meta = (BindWidget))
		class UBorder* Border_OtcepMenuEnd;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_CountVagon_OtcepItogo;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_ExitMenuTrainInfo;

#pragma endregion

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
		class UHorizontalBox* HB_LocoOdd_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_8;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_8;


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
		class UButton* Button_TrainInfo_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_8;



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
		class UTextBlock* TextButton_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_8;


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
		class UTextBlock* TB_LocoOdd_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_8;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_8;

#pragma endregion


#pragma endregion

#pragma region General Foo
	void SendCommToServer(Commd comm);
	virtual bool Initialize();

	UFUNCTION(BlueprintCallable)
		void mkd_StrelkiWaysSvetoforDefault();

	void PrintInfo(FElm* wayInfo, UHorizontalBox* HB_LocoEven_way, UTextBlock* TB_LocoEven_way, UButton* Button_TrainInfo_way, UTextBlock* TextButton_way, UHorizontalBox* HB_LocoOdd_way, UTextBlock* TB_LocoOdd_way);




	UFUNCTION(BlueprintCallable)
		void mkd_UpdateInfoStationWay();



	FVector2D GetMenuCoordinates(FVector2D pos);

	UFUNCTION(BlueprintCallable)
		void CreateMenuRouter(FVector2D pos);
	UFUNCTION()
		void ExitMenu();


	void CreateMenuInfo(int numTrain, int delta_X=0, int delta_Y=0);
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w1();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w2();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w3();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w4();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w5();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_w6();
	UFUNCTION()
	void CreateMenuTrainInfo_tupic_M5();
	UFUNCTION()
	void CreateMenuTrainInfo_tupic_M6();
	UFUNCTION()
	void CreateMenuTrainInfo_tupic_M7();
	UFUNCTION()
	void CreateMenuTrainInfo_tupic_M8();
	
	UFUNCTION(BlueprintCallable)
		void ExitMenuTrainInfo();



	UFUNCTION(BlueprintCallable)
		void mkd_SostavOnWay(int index);
	UFUNCTION(BlueprintCallable)
		void mkd_LocoOnWay(int index);


#pragma endregion

#pragma region Strelki


	



	UFUNCTION(BlueprintCallable)
		int mkd_Make_Strelka_Redact(int number);

	UFUNCTION(BlueprintCallable)
		void mkd_Make_Strelka_UnRedact();

	UFUNCTION(BlueprintCallable)
		void mkd_RedactStrelkaToMinus();

	UFUNCTION(BlueprintCallable)
		void mkd_RedactStrelkaToPlus();

	UFUNCTION(BlueprintCallable)
		void mkd_RedactStrelkaToBreak();

	UFUNCTION(BlueprintCallable)
		void mkd_RedactStrelkaMakeWaitingAvaria();

	UFUNCTION(BlueprintCallable)
		void mkd_RedactStrelkaRemont();

	UFUNCTION(BlueprintCallable)
		void mkd_RemontAllStrelka();

#pragma endregion

#pragma region Svetofori

	UFUNCTION(BlueprintCallable)
		void mkd_Make_Svetofor_Redact(EdopStat dopstat);
	EdopStat mkd_Get_Name_Redact_Svetofor();
	UFUNCTION(BlueprintCallable)
		bool mkd_IsRedactSvetoforFree();


	UFUNCTION(BlueprintCallable)
		void mkd_Make_Svetofor_UnRedact();
	UFUNCTION(BlueprintCallable)
		void mkd_BrokenSvetoforMake(ExCurator cur);
	UFUNCTION(BlueprintCallable)
		void mkd_RedactSvetofor_Remont();
	UFUNCTION(BlueprintCallable)
		void mkd_AllSvetofor_Remont();

#pragma endregion

#pragma region Signals
	UFUNCTION(BlueprintCallable)
		void mkd_RazvorotPeregona(EdopStat dopstat);
	UFUNCTION(BlueprintCallable)
		void mkd_VspomogatRazvorotPeregona(EdopStat dopstat);
#pragma endregion

#pragma region Routers


#pragma region Foo of router s buttons

	UFUNCTION()
		void OtmenaOneRouter();
	UFUNCTION()
		void Za_N();
	UFUNCTION()
		void Za_ND();
	UFUNCTION()
		void Za_CH();
	UFUNCTION()
		void Za_CHD();


	UFUNCTION()
		void On_way_1();
	UFUNCTION()
		void On_way_2();
	UFUNCTION()
		void On_way_3();
	UFUNCTION()
		void On_way_4();
	UFUNCTION()
		void On_way_5();
	UFUNCTION()
		void On_way_6();


	UFUNCTION()
		void Za_CH1();
	UFUNCTION()
		void Za_CH2();
	UFUNCTION()
		void Za_CH3();
	UFUNCTION()
		void Za_CH4();
	UFUNCTION()
		void Za_CH5();
	UFUNCTION()
		void Za_CH6();


	UFUNCTION()
		void Za_N1();
	UFUNCTION()
		void Za_N2();
	UFUNCTION()
		void Za_N3();
	UFUNCTION()
		void Za_N4();
	UFUNCTION()
		void Za_N5();
	UFUNCTION()
		void Za_N6();


	UFUNCTION()
		void Za_M1();
	UFUNCTION()
		void Za_M2();
	UFUNCTION()
		void Za_M3();
	UFUNCTION()
		void Za_M4();
	UFUNCTION()
		void Za_M5();
	UFUNCTION()
		void Za_M6();
	UFUNCTION()
	void Za_M7();
	UFUNCTION()
		void Za_M8();

#pragma endregion
#pragma region Routers: Def: CheckPossCreate
#pragma region from N
	UFUNCTION(BlueprintCallable)
		bool mkd_N_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N_6P_CheckPossCreate();

#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_ND_6P_CheckPossCreate();

#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH_6P_CheckPossCreate();

#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CHD_6P_CheckPossCreate();

#pragma endregion

#pragma region from M1
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M1_CH6_CheckPossCreate();

#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M2_N6_CheckPossCreate();


#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M3_CH6_CheckPossCreate();

#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M4_N6_CheckPossCreate();

#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		bool mkd_M5_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M5_CH6_CheckPossCreate();

#pragma endregion
#pragma region from M6
	UFUNCTION(BlueprintCallable)
		bool mkd_M6_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_M6_N2_CheckPossCreate();

#pragma endregion

#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		bool mkd_CH1_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH1_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH1_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH1_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		bool mkd_CH2_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH2_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH2_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH2_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		bool mkd_CH3_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH3_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH3_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH3_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		bool mkd_CH4_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH4_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH4_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH4_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH5
	UFUNCTION(BlueprintCallable)
		bool mkd_CH5_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH5_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH5_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH5_M5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH5_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH6
	UFUNCTION(BlueprintCallable)
		bool mkd_CH6_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH6_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH6_M5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH6_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_CH6_ND_CheckPossCreate();
#pragma endregion

#pragma region from N1
	UFUNCTION(BlueprintCallable)
		bool mkd_N1_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N1_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N1_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N1_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N1_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		bool mkd_N2_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N2_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N2_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N2_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N2_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		bool mkd_N3_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N3_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N3_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N3_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		bool mkd_N4_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N4_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N4_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N4_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N5
	UFUNCTION(BlueprintCallable)
		bool mkd_N5_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N5_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N5_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N5_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N6
	UFUNCTION(BlueprintCallable)
		bool mkd_N6_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N6_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N6_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool mkd_N6_CHD_CheckPossCreate();

#pragma endregion


#pragma endregion


	FElm* mkd_GetEndRouter(Router* router);

	//Router* mkd_GetReadyRouter(EdopStat dopstat);

	UFUNCTION(BlueprintCallable)
		void mkd_IskusstvennaiyaRazdelka();


#pragma endregion
};
