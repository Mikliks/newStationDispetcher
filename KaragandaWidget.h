// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DisPawn.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KaragandaWidget.generated.h"

/**
 *
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UKaragandaWidget : public UUserWidget
{
	GENERATED_BODY()
		//указатель для обращения к полям и методам главного класса - посредника 
		ADisPawn* Disp;
	FElm* RedactSvetofor = nullptr;
	FElm* RedactStrelka = nullptr;
	void SendCommToServer(Commd comm);

	FName selectedStringOption;

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
		class UButton* But_za_CH_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CH_4;



	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N_4;



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
		class UHorizontalBox* HB_LocoOdd_way_1;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_2;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_3;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_way_4;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_8;


	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_7;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_8;


	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_way_4;



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
		class UTextBlock* TB_LocoOdd_way_1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_way_4;


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

	virtual bool Initialize();

	UFUNCTION(BlueprintCallable)
		void kg_StrelkiWaysSvetoforDefault();

	void PrintInfo(FElm* wayInfo, UHorizontalBox* HB_LocoEven_way, UTextBlock* TB_LocoEven_way, UButton* Button_TrainInfo_way, UTextBlock* TextButton_way, UHorizontalBox* HB_LocoOdd_way, UTextBlock* TB_LocoOdd_way);






	UFUNCTION(BlueprintCallable)
		void kg_UpdateInfoStationWay();


	FVector2D GetMenuCoordinates(FVector2D pos);

	UFUNCTION(BlueprintCallable)
		void CreateMenuRouter(FVector2D pos);


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
		void CreateMenuTrainInfo_tupic_M5();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_tupic_M6();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_tupic_M7();
	UFUNCTION(BlueprintCallable)
		void CreateMenuTrainInfo_tupic_M8();


	UFUNCTION(BlueprintCallable)
		void ExitMenuTrainInfo();
	UFUNCTION()
		void ExitMenu();


#pragma endregion

#pragma region Strelki

	UFUNCTION(BlueprintCallable)
		int kg_Make_Strelka_Redact(int number);

	UFUNCTION(BlueprintCallable)
		void kg_Make_Strelka_UnRedact();

	UFUNCTION(BlueprintCallable)
		void kg_RedactStrelkaToMinus();

	UFUNCTION(BlueprintCallable)
		void kg_RedactStrelkaToPlus();

	UFUNCTION(BlueprintCallable)
		void kg_RedactStrelkaToBreak();

	UFUNCTION(BlueprintCallable)
		void kg_RedactStrelkaMakeWaitingAvaria();

	UFUNCTION(BlueprintCallable)
		void kg_RedactStrelkaRemont();

	UFUNCTION(BlueprintCallable)
		void kg_RemontAllStrelka();

#pragma endregion

#pragma region Svetofori

	UFUNCTION(BlueprintCallable)
		void kg_Make_Svetofor_Redact(EdopStat dopstat);
	EdopStat kg_Get_Name_Redact_Svetofor();
	UFUNCTION(BlueprintCallable)
		bool kg_IsRedactSvetoforFree();


	UFUNCTION(BlueprintCallable)
		void kg_Make_Svetofor_UnRedact();
	UFUNCTION(BlueprintCallable)
		void kg_BrokenSvetoforMake(ExCurator cur);
	UFUNCTION(BlueprintCallable)
		void kg_RedactSvetofor_Remont();
	UFUNCTION(BlueprintCallable)
		void kg_AllSvetofor_Remont();

#pragma endregion

#pragma region Signals
	UFUNCTION(BlueprintCallable)
		void kg_RazvorotPeregona(EdopStat dopstat);
	UFUNCTION(BlueprintCallable)
		void kg_VspomogatRazvorotPeregona(EdopStat dopstat);
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
		void Za_CH1();
	UFUNCTION()
		void Za_CH2();
	UFUNCTION()
		void Za_CH3();
	UFUNCTION()
		void Za_CH4();



	UFUNCTION()
		void Za_N1();
	UFUNCTION()
		void Za_N2();
	UFUNCTION()
		void Za_N3();
	UFUNCTION()
		void Za_N4();



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
		bool kg_N_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N_4P_CheckPossCreate();


#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		bool kg_ND_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_ND_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_ND_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_ND_4P_CheckPossCreate();


#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		bool kg_CH_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH_4P_CheckPossCreate();


#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		bool kg_CHD_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CHD_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CHD_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CHD_4P_CheckPossCreate();


#pragma endregion

#pragma region from M1
	UFUNCTION(BlueprintCallable)
		bool kg_M1_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M1_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M1_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M1_CH4_CheckPossCreate();


#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		bool kg_M2_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M2_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M2_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M2_N4_CheckPossCreate();



#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		bool kg_M3_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M3_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M3_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M3_CH4_CheckPossCreate();


#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		bool kg_M4_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M4_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M4_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_M4_N4_CheckPossCreate();


#pragma endregion

#pragma region from M6
	UFUNCTION(BlueprintCallable)
		bool kg_M6_N1_CheckPossCreate();


#pragma endregion

#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		bool kg_CH1_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH1_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH1_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH1_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		bool kg_CH2_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH2_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH2_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH2_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		bool kg_CH3_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH3_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH3_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH3_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		bool kg_CH4_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH4_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH4_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_CH4_ND_CheckPossCreate();
#pragma endregion


#pragma region from N1
	UFUNCTION(BlueprintCallable)
		bool kg_N1_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N1_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N1_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N1_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N1_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		bool kg_N2_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N2_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N2_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N2_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N2_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		bool kg_N3_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N3_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N3_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N3_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		bool kg_N4_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N4_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N4_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool kg_N4_CHD_CheckPossCreate();

#pragma endregion




#pragma endregion


	FElm* kg_GetEndRouter(Router* router);

	//Router* kg_GetReadyRouter(EdopStat dopstat);

	UFUNCTION(BlueprintCallable)
		void kg_IskusstvennaiyaRazdelka();


#pragma endregion
};
