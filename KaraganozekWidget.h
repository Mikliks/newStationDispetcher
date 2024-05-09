#pragma once
#include "DisPawn.h"
#include <time.h>
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KaraganozekWidget.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(qwont, Display, All);
DECLARE_LOG_CATEGORY_EXTERN(qwofft, Display, All);

UCLASS()
class NEWSTATIONDISPETCHER_API UKaraganozekWidget : public UUserWidget
{
	GENERATED_BODY()

		//указатель для обращения к полям и методам главного класса - посредника 
		ADisPawn* Disp;
	FElm* RedactSvetofor = nullptr;
	FElm* RedactStrelka = nullptr;

	void MyBeepDef(int freq, int leng);

	void MyBeep(int freq, int leng, int count, int pause);

	void MyBeepInThread(int freq, int leng, int count, int pause);

	void SendCommToServer(Commd comm);
	

#pragma region pultExpert
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__NAP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__1PP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__2PP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__NDP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__2UP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__1UP(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__M1(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__M3(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way1(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way2(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way3(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way4(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way5(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way6(CommdForServer commd);
	UFUNCTION(BlueprintCallable)
		void SendCommandFor__Way7(CommdForServer commd);

#pragma endregion

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
		class UButton* But_za_CHR;


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
		class UButton* But_poezd_on_way_7;

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
		class UButton* But_za_CH_7;

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
		class UButton* But_za_N_7;

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
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_9;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_10;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_11;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_12;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_13;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_14;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_15;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_16;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_17;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_18;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_19;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_20;
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
		class UHorizontalBox* HB_LocoEven_way_7;

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
		class UHorizontalBox* HB_LocoOdd_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoOdd_tupic_M_20;

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* HB_LocoEven_tupic_M_20;




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
		class UButton* Button_TrainInfo_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_TrainInfo_tupic_M_20;



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
		class UTextBlock* TextButton_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextButton_tupic_M_20;


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
		class UTextBlock* TB_LocoOdd_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoOdd_tupic_M_20;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_5;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_6;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_10;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_12;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_14;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_16;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_18;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_LocoEven_tupic_M_20;



#pragma endregion


#pragma endregion

#pragma region General Foo

	virtual bool Initialize();

	UFUNCTION(BlueprintCallable)
		void krz_StrelkiWaysSvetoforDefault();

	void PrintInfo(FElm* wayInfo, UHorizontalBox* HB_LocoEven_way, UTextBlock* TB_LocoEven_way, UButton* Button_TrainInfo_way, UTextBlock* TextButton_way, UHorizontalBox* HB_LocoOdd_way, UTextBlock* TB_LocoOdd_way);
	UFUNCTION(BlueprintCallable)
		void krz_UpdateInfoStationWay();



	FVector2D GetMenuCoordinates(FVector2D pos);

	UFUNCTION(BlueprintCallable)
		void CreateMenuRouter(FVector2D pos);

	UFUNCTION()
		void ExitMenu();

	void CreateMenuInfo(int numTrain, int delta_X=0, int delta_Y=0);
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
		void CreateMenuTrainInfo_tupic_M5();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M6();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M10();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M12();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M14();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M16();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M18();
	UFUNCTION()
		void CreateMenuTrainInfo_tupic_M20();

	UFUNCTION(BlueprintCallable)
		void ExitMenuTrainInfo();

	UFUNCTION(BlueprintCallable)
		void krz_SostavOnWay(int index);
	UFUNCTION(BlueprintCallable)
		void krz_LocoOnWay(int index);


#pragma endregion

#pragma region Strelki






	UFUNCTION(BlueprintCallable)
		bool krz_Make_Strelka_Redact(int number);

	FElm* GetStrelka(int num);

	UFUNCTION(BlueprintCallable)
		void krz_Make_Strelka_UnRedact();

	UFUNCTION(BlueprintCallable)
		bool krz_RedactStrelkaToMinus();

	UFUNCTION(BlueprintCallable)
		bool krz_RedactStrelkaToPlus();

	UFUNCTION(BlueprintCallable)
		void krz_RedactStrelkaToBreak();

	UFUNCTION(BlueprintCallable)
		void krz_RedactStrelkaMakeWaitingAvaria();

	UFUNCTION(BlueprintCallable)
		void krz_RedactStrelkaRemont();

	UFUNCTION(BlueprintCallable)
		void krz_RemontAllStrelka();

#pragma endregion

#pragma region Svetofori

	UFUNCTION(BlueprintCallable)
		bool krz_Make_Svetofor_Redact(EdopStat dopstat);
	EdopStat krz_Get_Name_Redact_Svetofor();
	UFUNCTION(BlueprintCallable)
		bool krz_IsRedactSvetoforFree();


	UFUNCTION(BlueprintCallable)
		void krz_Make_Svetofor_UnRedact();
	UFUNCTION(BlueprintCallable)
		void krz_BrokenSvetoforMake(ExCurator cur);
	UFUNCTION(BlueprintCallable)
		void krz_RedactSvetofor_Remont();
	UFUNCTION(BlueprintCallable)
		void krz_AllSvetofor_Remont();

#pragma endregion

#pragma region Signals
	UFUNCTION(BlueprintCallable)
		void krz_RazvorotPeregona(EdopStat dopstat);
	UFUNCTION(BlueprintCallable)
		void krz_VspomogatRazvorotPeregona(EdopStat dopstat);
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
		void Za_CHR();

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
		void On_way_7();

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
		void Za_CH7();

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
		void Za_N7();

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
	UFUNCTION()
		void Za_M9();
	UFUNCTION()
		void Za_M10();
	UFUNCTION()
		void Za_M11();
	UFUNCTION()
		void Za_M12();
	UFUNCTION()
		void Za_M13();
	UFUNCTION()
		void Za_M14();
	UFUNCTION()
		void Za_M15();
	UFUNCTION()
		void Za_M16();
	UFUNCTION()
		void Za_M17();
	UFUNCTION()
		void Za_M18();
	UFUNCTION()
		void Za_M19();
	UFUNCTION()
		void Za_M20();

#pragma endregion
#pragma region Routers: Def: CheckPossCreate
#pragma region from N
	UFUNCTION(BlueprintCallable)
		bool krz_N_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_6P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N_7P_CheckPossCreate();
#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		bool krz_ND_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_6P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_ND_7P_CheckPossCreate();
#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		bool krz_CH_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_6P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH_7P_CheckPossCreate();
#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_6P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHD_7P_CheckPossCreate();
#pragma endregion
#pragma region from CHR
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_5P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_6P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CHR_7P_CheckPossCreate();
#pragma endregion
#pragma region from M1
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M1_CH7_CheckPossCreate();
#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M2_M5_CheckPossCreate();
#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M3_CH7_CheckPossCreate();
#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M4_M5_CheckPossCreate();
#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M16_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M18_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M5_M20_CheckPossCreate();
#pragma endregion
#pragma region from M6
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M6_M5_CheckPossCreate();
#pragma endregion
#pragma region from M10
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M10_M5_CheckPossCreate();
#pragma endregion
#pragma region from M12
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M12_M5_CheckPossCreate();
#pragma endregion
#pragma region from M14
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M14_M5_CheckPossCreate();
#pragma endregion
#pragma region from M16

	UFUNCTION(BlueprintCallable)
		bool krz_M16_M5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M16_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M16_N2_CheckPossCreate();
#pragma endregion
#pragma region from M18

	UFUNCTION(BlueprintCallable)
		bool krz_M18_M5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M18_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M18_N2_CheckPossCreate();
#pragma endregion
#pragma region from M20

	UFUNCTION(BlueprintCallable)
		bool krz_M20_M5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M20_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M20_N2_CheckPossCreate();
#pragma endregion
#pragma region from M8
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_N7_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_M8_M5_CheckPossCreate();
#pragma endregion
#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		bool krz_CH1_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH1_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH1_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH1_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		bool krz_CH2_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH2_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH2_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH2_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		bool krz_CH3_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH3_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH3_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH3_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		bool krz_CH4_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH4_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH4_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH4_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH5
	UFUNCTION(BlueprintCallable)
		bool krz_CH5_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH5_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH5_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH5_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH6
	UFUNCTION(BlueprintCallable)
		bool krz_CH6_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH6_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH6_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH6_ND_CheckPossCreate();
#pragma endregion
#pragma region from CH7
	UFUNCTION(BlueprintCallable)
		bool krz_CH7_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH7_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH7_N_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_CH7_ND_CheckPossCreate();
#pragma endregion
#pragma region from N1
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M16_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M18_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_M20_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N1_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M16_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M18_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_M20_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N2_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N3_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N4_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N5
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N5_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N6
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N6_CHR_CheckPossCreate();
#pragma endregion
#pragma region from N7
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M8_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M10_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M12_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_M14_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_CHD_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krz_N7_CHR_CheckPossCreate();
#pragma endregion

#pragma endregion


	FElm* krz_GetEndRouter(Router* router);



	UFUNCTION(BlueprintCallable)
		void krz_IskusstvennaiyaRazdelka();


#pragma endregion

#pragma region Pult

	bool krz_pult_IsOtmenaRouterSet = false;

	

	bool krz_pult_IsManevrRouterSet = false;
	bool krz_pult_IsTrainRouterSet = false;
	UFUNCTION(BlueprintCallable)
		bool krz_pult_ManevrRouterSet();
	UFUNCTION(BlueprintCallable)
		bool krz_pult_TrainRouterSet();

	bool krz_pult_IsStrelkaToPlus = false;
	bool krz_pult_IsStrelkaToMinus = false;
	UFUNCTION(BlueprintCallable)
		void krz_pult_SetConditionStrelkaToMinus();
	UFUNCTION(BlueprintCallable)
		void krz_pult_SetConditionStrelkaToPlus();

	bool krz_pult_IsChetManRouterSet = false;
	bool krz_pult_IsNeChetManRouterSet = false;
	bool krz_pult_IsChetTrainRouterSet = false;
	bool krz_pult_IsNeChetTrainRouterSet = false;

	bool krz_pult_IsChetManRouterSetDop = false;
	bool krz_pult_IsNeChetManRouterSetDop = false;
	bool krz_pult_IsChetTrainRouterSetDop = false;
	bool krz_pult_IsNeChetTrainRouterSetDop = false;


	public:
	UPROPERTY(BlueprintReadWrite)
	EdopStat RedactSvetoforStart = EdopStat::Norm;
	UPROPERTY(BlueprintReadWrite)
	EdopStat RedactSvetoforEnd = EdopStat::Norm;

	private:
	UFUNCTION(BlueprintCallable)
		void krz_Pult_Reload();
	void krz_Pult_Reload_InThread();
	UFUNCTION(BlueprintCallable)
		void krz_Pult_Off();
	void krz_Pult_Off_InThread();



	UFUNCTION(BlueprintCallable)
		bool krz_Pult_Make_Svetofor_Redact(EdopStat dopstat);

		


	void krz_Pult_Make_All_Svetofor_UnRedact();


	UFUNCTION(BlueprintCallable)
		bool krz_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat);



	UFUNCTION(BlueprintCallable)
		void krz_Pult_DGA();
	UFUNCTION(BlueprintCallable)
		void krz_Pult_OtmenaAllRouters();
	UFUNCTION(BlueprintCallable)
		void krz_Pult_ManevroviyRouterCreate(EdopStat Rstart, EdopStat Rend);
	UFUNCTION(BlueprintCallable)
		void krz_Pult_PoezdnoyRouterCreate(EdopStat Rstart, EdopStat Rend);
	UFUNCTION(BlueprintCallable)
		void krz_Pult_OtmenaNabora();
	UFUNCTION(BlueprintCallable)
		void krz_Pult_Iskusstvennaya_razdelka();
	UFUNCTION(BlueprintCallable)
		bool krz_Pult_Otmena_Marshruta();

#pragma endregion
};
