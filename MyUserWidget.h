#pragma once
#include "DisPawn.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

UCLASS()
class NEWSTATIONDISPETCHER_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
//		virtual bool Initialize();
//
//	ADisPawn* Disp;
//#pragma region For Menu
//#pragma region General
//
//		UPROPERTY(meta = (BindWidget))
//		class UVerticalBox* VerticalBoxMenu;
//		UPROPERTY(meta = (BindWidget))
//			class UButton* But_Exit_Menu;
//
//#pragma endregion
//#pragma region Buttons of Menu of Svetofor
//
//		UPROPERTY(meta = (BindWidget))
//			class UButton* But_OtmenaOneRouter;
//		UPROPERTY(meta = (BindWidget))
//			class UButton* But_OtmenaAllRouters;
//
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_ND;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CHD;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CHR;
//
//
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_1;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_2;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_3;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_4;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_5;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_6;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_poezd_on_way_7;
//	
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_1;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_2;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_3;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_4;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_5;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_6;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_CH_7;
//
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_1;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_2;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_3;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_4;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_5;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_6;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_N_7;
//
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_1;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_2;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_3;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_4;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_5;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_6;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_7;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_8;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_9;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_10;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_11;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_12;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_13;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_14;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_15;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_16;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_17;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_18;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_19;
//	UPROPERTY(meta = (BindWidget))
//		class UButton* But_za_M_20;
//#pragma endregion
//
//
//#pragma endregion
//	
//#pragma region General Foo
//	
//	FVector2D GetMenuCoordinates(FVector2D pos);
//	UFUNCTION(BlueprintCallable)
//		void CreateMenuRouter(FVector2D pos);
//	UFUNCTION()
//		void ExitMenu();
//
//#pragma endregion
//	
//#pragma region Foo of router s buttons
//
//	UFUNCTION()
//		void OtmenaOneRouter();
//	UFUNCTION()
//		void Za_N();
//	UFUNCTION()
//		void Za_ND();
//	UFUNCTION()
//		void Za_CH();
//	UFUNCTION()
//		void Za_CHD();
//	UFUNCTION()
//		void Za_CHR();
//
//	UFUNCTION()
//		void On_way_1();
//	UFUNCTION()
//		void On_way_2();
//	UFUNCTION()
//		void On_way_3();
//	UFUNCTION()
//		void On_way_4();
//	UFUNCTION()
//		void On_way_5();
//	UFUNCTION()
//		void On_way_6();
//	UFUNCTION()
//		void On_way_7();
//
//	UFUNCTION()
//		void Za_CH1();
//	UFUNCTION()
//		void Za_CH2();
//	UFUNCTION()
//		void Za_CH3();
//	UFUNCTION()
//		void Za_CH4();
//	UFUNCTION()
//		void Za_CH5();
//	UFUNCTION()
//		void Za_CH6();
//	UFUNCTION()
//		void Za_CH7();
//
//	UFUNCTION()
//		void Za_N1();
//	UFUNCTION()
//		void Za_N2();
//	UFUNCTION()
//		void Za_N3();
//	UFUNCTION()
//		void Za_N4();
//	UFUNCTION()
//		void Za_N5();
//	UFUNCTION()
//		void Za_N6();
//	UFUNCTION()
//		void Za_N7();
//
//	UFUNCTION()
//		void Za_M1();
//	UFUNCTION()
//		void Za_M2();
//	UFUNCTION()
//		void Za_M3();
//	UFUNCTION()
//		void Za_M4();
//	UFUNCTION()
//		void Za_M5();
//	UFUNCTION()
//		void Za_M6();
//	UFUNCTION()
//		void Za_M7();
//	UFUNCTION()
//		void Za_M8();
//	UFUNCTION()
//		void Za_M9();
//	UFUNCTION()
//		void Za_M10();
//	UFUNCTION()
//		void Za_M11();
//	UFUNCTION()
//		void Za_M12();
//	UFUNCTION()
//		void Za_M13();
//	UFUNCTION()
//		void Za_M14();
//	UFUNCTION()
//		void Za_M15();
//	UFUNCTION()
//		void Za_M16();
//	UFUNCTION()
//		void Za_M17();
//	UFUNCTION()
//		void Za_M18();
//	UFUNCTION()
//		void Za_M19();
//	UFUNCTION()
//		void Za_M20();
//
//#pragma endregion
//	
//#pragma region Start
//	UFUNCTION(BlueprintCallable)//для автоматического запуска некоторых функций: для перевода парных стрелок и автостарта анимации выполнения маршрута
//		void krz_CheckerOfStation();
//	UFUNCTION(BlueprintCallable)
//		void krz_Hand_Direct();
//	UFUNCTION(BlueprintCallable)
//		void krz_Distans_Direct();
//#pragma endregion
//#pragma region Strelki
//	void ToMinus(FElm& str);
//	void ToPlus(FElm& str);
//	bool WayFree(FElm& way1, FElm& way2);
//	bool WayFree(FElm& way1, FElm& way2, FElm& Way3);
//	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4);
//	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4, FElm& Way5);
//	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4, FElm& Way5, FElm& way6);
//	void StrToEndChange(FElm& str);
//	bool krz_IsStrelkaFree(FElm& elm);
//
//
//	FElm* krz_CheckTwiceStrelka(FElm* strelka);//заменяет при необходимости объект перевода для парной стрелки
//	UFUNCTION(BlueprintCallable)
//		int krz_Make_Strelka_Redact(int number);
//
//	UFUNCTION(BlueprintCallable)
//		void krz_Make_All_Strelka_UnRedact();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactStrelkaToMinus();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactStrelkaToPlus();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactStrelkaToBreak();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactStrelkaMakeWaitingAvaria();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactStrelkaRemont();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_RemontAllStrelka();
//
//#pragma endregion
//#pragma region Svetofori
//
//	UFUNCTION(BlueprintCallable)
//		EdopStat krz_Make_Svetofor_Redact(EdopStat dopstat);
//	UFUNCTION(BlueprintCallable)
//		bool krz_IsRedactSvetoforFree();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_Make_All_Svetofor_UnRedact();
//	UFUNCTION(BlueprintCallable)
//		void krz_BrokenSvetoforMake(ExCurator cur);
//	UFUNCTION(BlueprintCallable)
//		void krz_RedactSvetofor_Remont();
//	UFUNCTION(BlueprintCallable)
//		void krz_AllSvetofor_Remont();
//	EdopStat  krz_Get_Svetofor_Redact();
//
//#pragma endregion
//#pragma region Signals
//	UFUNCTION(BlueprintCallable)
//		void krz_RazvorotPeregona(EdopStat dopstat);
//	UFUNCTION(BlueprintCallable)
//		void krz_VspomogatRazvorotPeregona(EdopStat dopstat);
//#pragma endregion
//#pragma region Destroy Routers
//
//	UFUNCTION(BlueprintCallable)
//		void krz_DestroyOneRouter();
//	void krz_DestroyOneRouterEndInThread(Router& router);
//
//#pragma endregion
//#pragma region Routers: Def: CheckPossCreate
//#pragma region from N
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_1P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_2P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_3P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_4P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_5P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_6P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N_7P_CheckPossCreate();
//#pragma endregion
//#pragma region from ND
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_1P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_2P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_3P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_4P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_5P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_6P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_ND_7P_CheckPossCreate();
//#pragma endregion
//#pragma region from CH
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_1P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_2P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_3P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_4P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_5P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_6P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH_7P_CheckPossCreate();
//#pragma endregion
//#pragma region from CHD
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_1P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_2P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_3P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_4P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_5P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_6P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHD_7P_CheckPossCreate();
//#pragma endregion
//#pragma region from CHR
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_1P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_2P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_3P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_4P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_5P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_6P_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CHR_7P_CheckPossCreate();
//#pragma endregion
//#pragma region from M1
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M1_CH7_CheckPossCreate();
//#pragma endregion
//#pragma region from M2
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M2_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M3
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M3_CH7_CheckPossCreate();
//#pragma endregion
//#pragma region from M4
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M4_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M5
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M16_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M18_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M5_M20_CheckPossCreate();
//#pragma endregion
//#pragma region from M6
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M6_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M10
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M10_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M12
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M12_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M14
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M14_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from M16
//
//	UFUNCTION(BlueprintCallable)
//		bool krz_M16_M5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M16_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M16_N2_CheckPossCreate();
//#pragma endregion
//#pragma region from M18
//
//	UFUNCTION(BlueprintCallable)
//		bool krz_M18_M5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M18_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M18_N2_CheckPossCreate();
//#pragma endregion
//#pragma region from M20
//
//	UFUNCTION(BlueprintCallable)
//		bool krz_M20_M5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M20_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M20_N2_CheckPossCreate();
//#pragma endregion
//#pragma region from M8
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N5_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_N7_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_M8_M5_CheckPossCreate();
//#pragma endregion
//#pragma region from CH1
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH1_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH1_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH1_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH1_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH2
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH2_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH2_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH2_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH2_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH3
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH3_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH3_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH3_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH3_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH4
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH4_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH4_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH4_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH4_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH5
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH5_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH5_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH5_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH5_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH6
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH6_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH6_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH6_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH6_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from CH7
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH7_M1_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH7_M3_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH7_N_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_CH7_ND_CheckPossCreate();
//#pragma endregion
//#pragma region from N1
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M16_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M18_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_M20_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N1_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N2
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M16_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M18_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_M20_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N2_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N3
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N3_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N4
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N4_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N5
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N5_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N6
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N6_CHR_CheckPossCreate();
//#pragma endregion
//#pragma region from N7
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M2_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M4_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M6_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M8_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M10_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M12_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_M14_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_CH_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_CHD_CheckPossCreate();
//	UFUNCTION(BlueprintCallable)
//		bool krz_N7_CHR_CheckPossCreate();
//#pragma endregion
//
//#pragma endregion
//#pragma region Routers: Def: Create
//#pragma region from N
//	UFUNCTION(BlueprintCallable)
//		void krz_N_1P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_2P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_3P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_4P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_5P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_6P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_7P_Create();
//
//#pragma endregion
//#pragma region from ND
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_1P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_2P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_3P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_4P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_5P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_6P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_ND_7P_Create();
//
//#pragma endregion
//#pragma region from CH
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_1P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_2P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_3P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_4P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_5P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_6P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH_7P_Create();
//#pragma endregion
//#pragma region from CHD
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_1P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_2P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_3P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_4P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_5P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_6P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHD_7P_Create();
//#pragma endregion
//#pragma region from CHR
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_1P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_2P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_3P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_4P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_5P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_6P_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CHR_7P_Create();
//#pragma endregion
//#pragma region from M1
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M1_CH7_Create();
//#pragma endregion
//#pragma region from M2
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M2_M5_Create();
//#pragma endregion
//#pragma region from M3
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M3_CH7_Create();
//#pragma endregion
//#pragma region from M4
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M4_M5_Create();
//#pragma endregion
//#pragma region from M5
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M16_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M18_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M5_M20_Create();
//#pragma endregion
//#pragma region from M6
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M6_M5_Create();
//#pragma endregion
//#pragma region from M10
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M10_M5_Create();
//#pragma endregion
//#pragma region from M12
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M12_M5_Create();
//#pragma endregion
//#pragma region from M14
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M14_M5_Create();
//#pragma endregion
//#pragma region from M16
//	UFUNCTION(BlueprintCallable)
//		void krz_M16_M5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M16_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M16_N2_Create();
//#pragma endregion
//#pragma region from M18
//
//	UFUNCTION(BlueprintCallable)
//		void krz_M18_M5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M18_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M18_N2_Create();
//#pragma endregion
//#pragma region from M20
//
//	UFUNCTION(BlueprintCallable)
//		void krz_M20_M5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M20_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M20_N2_Create();
//#pragma endregion
//#pragma region from M8
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N5_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_N7_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_M8_M5_Create();
//#pragma endregion
//#pragma region from CH1
//	UFUNCTION(BlueprintCallable)
//		void krz_CH1_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH1_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH1_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH1_ND_Create();
//#pragma endregion
//#pragma region from CH2
//	UFUNCTION(BlueprintCallable)
//		void krz_CH2_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH2_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH2_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH2_ND_Create();
//#pragma endregion
//#pragma region from CH3
//	UFUNCTION(BlueprintCallable)
//		void krz_CH3_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH3_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH3_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH3_ND_Create();
//#pragma endregion
//#pragma region from CH4
//	UFUNCTION(BlueprintCallable)
//		void krz_CH4_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH4_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH4_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH4_ND_Create();
//#pragma endregion
//#pragma region from CH5
//	UFUNCTION(BlueprintCallable)
//		void krz_CH5_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH5_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH5_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH5_ND_Create();
//#pragma endregion
//#pragma region from CH6
//	UFUNCTION(BlueprintCallable)
//		void krz_CH6_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH6_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH6_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH6_ND_Create();
//#pragma endregion
//#pragma region from CH7
//	UFUNCTION(BlueprintCallable)
//		void krz_CH7_M1_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH7_M3_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH7_N_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_CH7_ND_Create();
//#pragma endregion
//#pragma region from N1
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M16_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M18_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_M20_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N1_CHR_Create();
//#pragma endregion
//#pragma region from N2
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M16_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M18_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_M20_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N2_CHR_Create();
//#pragma endregion
//#pragma region from N3
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N3_CHR_Create();
//#pragma endregion
//#pragma region from N4
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N4_CHR_Create();
//#pragma endregion
//#pragma region from N5
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N5_CHR_Create();
//#pragma endregion
//#pragma region from N6
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N6_CHR_Create();
//#pragma endregion
//#pragma region from N7
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M2_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M4_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M6_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M8_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M10_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M12_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_M14_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_CH_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_CHD_Create();
//	UFUNCTION(BlueprintCallable)
//		void krz_N7_CHR_Create();
//#pragma endregion
//#pragma endregion
//#pragma region Routers: Def: CreateEnd
//#pragma region from N
//	void krz_N_1P_CreateEnd();
//	void krz_N_2P_CreateEnd();
//	void krz_N_3P_CreateEnd();
//	void krz_N_4P_CreateEnd();
//	void krz_N_5P_CreateEnd();
//	void krz_N_6P_CreateEnd();
//	void krz_N_7P_CreateEnd();
//
//#pragma endregion
//#pragma region from ND
//	void krz_ND_1P_CreateEnd();
//	void krz_ND_2P_CreateEnd();
//	void krz_ND_3P_CreateEnd();
//	void krz_ND_4P_CreateEnd();
//	void krz_ND_5P_CreateEnd();
//	void krz_ND_6P_CreateEnd();
//	void krz_ND_7P_CreateEnd();
//
//#pragma endregion
//#pragma region from CH
//	void krz_CH_1P_CreateEnd();
//	void krz_CH_2P_CreateEnd();
//	void krz_CH_3P_CreateEnd();
//	void krz_CH_4P_CreateEnd();
//	void krz_CH_5P_CreateEnd();
//	void krz_CH_6P_CreateEnd();
//	void krz_CH_7P_CreateEnd();
//#pragma endregion
//#pragma region from CHD
//	void krz_CHD_1P_CreateEnd();
//	void krz_CHD_2P_CreateEnd();
//	void krz_CHD_3P_CreateEnd();
//	void krz_CHD_4P_CreateEnd();
//	void krz_CHD_5P_CreateEnd();
//	void krz_CHD_6P_CreateEnd();
//	void krz_CHD_7P_CreateEnd();
//#pragma endregion
//#pragma region from CHR
//	void krz_CHR_1P_CreateEnd();
//	void krz_CHR_2P_CreateEnd();
//	void krz_CHR_3P_CreateEnd();
//	void krz_CHR_4P_CreateEnd();
//	void krz_CHR_5P_CreateEnd();
//	void krz_CHR_6P_CreateEnd();
//	void krz_CHR_7P_CreateEnd();
//#pragma endregion
//#pragma region from M1
//	void krz_M1_CH1_CreateEnd();
//	void krz_M1_CH2_CreateEnd();
//	void krz_M1_CH3_CreateEnd();
//	void krz_M1_CH4_CreateEnd();
//	void krz_M1_CH5_CreateEnd();
//	void krz_M1_CH6_CreateEnd();
//	void krz_M1_CH7_CreateEnd();
//#pragma endregion
//#pragma region from M2
//	void krz_M2_N1_CreateEnd();
//	void krz_M2_N2_CreateEnd();
//	void krz_M2_N3_CreateEnd();
//	void krz_M2_N4_CreateEnd();
//	void krz_M2_N5_CreateEnd();
//	void krz_M2_N6_CreateEnd();
//	void krz_M2_N7_CreateEnd();
//	void krz_M2_M5_CreateEnd();
//#pragma endregion
//#pragma region from M3
//	void krz_M3_CH1_CreateEnd();
//	void krz_M3_CH2_CreateEnd();
//	void krz_M3_CH3_CreateEnd();
//	void krz_M3_CH4_CreateEnd();
//	void krz_M3_CH5_CreateEnd();
//	void krz_M3_CH6_CreateEnd();
//	void krz_M3_CH7_CreateEnd();
//#pragma endregion
//#pragma region from M4
//	void krz_M4_N1_CreateEnd();
//	void krz_M4_N2_CreateEnd();
//	void krz_M4_N3_CreateEnd();
//	void krz_M4_N4_CreateEnd();
//	void krz_M4_N5_CreateEnd();
//	void krz_M4_N6_CreateEnd();
//	void krz_M4_N7_CreateEnd();
//	void krz_M4_M5_CreateEnd();
//#pragma endregion
//#pragma region from M5
//	void krz_M5_M2_CreateEnd();
//	void krz_M5_M4_CreateEnd();
//	void krz_M5_M6_CreateEnd();
//	void krz_M5_M8_CreateEnd();
//	void krz_M5_M10_CreateEnd();
//	void krz_M5_M12_CreateEnd();
//	void krz_M5_M14_CreateEnd();
//	void krz_M5_M16_CreateEnd();
//	void krz_M5_M18_CreateEnd();
//	void krz_M5_M20_CreateEnd();
//#pragma endregion
//#pragma region from M6
//	void krz_M6_N1_CreateEnd();
//	void krz_M6_N2_CreateEnd();
//	void krz_M6_N3_CreateEnd();
//	void krz_M6_N4_CreateEnd();
//	void krz_M6_N5_CreateEnd();
//	void krz_M6_N6_CreateEnd();
//	void krz_M6_N7_CreateEnd();
//	void krz_M6_M5_CreateEnd();
//#pragma endregion
//#pragma region from M10
//	void krz_M10_N1_CreateEnd();
//	void krz_M10_N2_CreateEnd();
//	void krz_M10_N3_CreateEnd();
//	void krz_M10_N4_CreateEnd();
//	void krz_M10_N5_CreateEnd();
//	void krz_M10_N6_CreateEnd();
//	void krz_M10_N7_CreateEnd();
//	void krz_M10_M5_CreateEnd();
//#pragma endregion
//#pragma region from M12
//	void krz_M12_N1_CreateEnd();
//	void krz_M12_N2_CreateEnd();
//	void krz_M12_N3_CreateEnd();
//	void krz_M12_N4_CreateEnd();
//	void krz_M12_N5_CreateEnd();
//	void krz_M12_N6_CreateEnd();
//	void krz_M12_N7_CreateEnd();
//	void krz_M12_M5_CreateEnd();
//#pragma endregion
//#pragma region from M14
//	void krz_M14_N1_CreateEnd();
//	void krz_M14_N2_CreateEnd();
//	void krz_M14_N3_CreateEnd();
//	void krz_M14_N4_CreateEnd();
//	void krz_M14_N5_CreateEnd();
//	void krz_M14_N6_CreateEnd();
//	void krz_M14_N7_CreateEnd();
//	void krz_M14_M5_CreateEnd();
//#pragma endregion
//#pragma region from M16
//
//	void krz_M16_M5_CreateEnd();
//	void krz_M16_N1_CreateEnd();
//	void krz_M16_N2_CreateEnd();
//#pragma endregion
//#pragma region from M18
//
//	void krz_M18_M5_CreateEnd();
//	void krz_M18_N1_CreateEnd();
//	void krz_M18_N2_CreateEnd();
//#pragma endregion
//#pragma region from M20
//
//	void krz_M20_M5_CreateEnd();
//	void krz_M20_N1_CreateEnd();
//	void krz_M20_N2_CreateEnd();
//#pragma endregion
//#pragma region from M8
//	void krz_M8_N1_CreateEnd();
//	void krz_M8_N2_CreateEnd();
//	void krz_M8_N3_CreateEnd();
//	void krz_M8_N4_CreateEnd();
//	void krz_M8_N5_CreateEnd();
//	void krz_M8_N6_CreateEnd();
//	void krz_M8_N7_CreateEnd();
//	void krz_M8_M5_CreateEnd();
//#pragma endregion
//#pragma region from CH1
//	void krz_CH1_M1_CreateEnd();
//	void krz_CH1_M3_CreateEnd();
//	void krz_CH1_N_CreateEnd();
//	void krz_CH1_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH2
//	void krz_CH2_M1_CreateEnd();
//	void krz_CH2_M3_CreateEnd();
//	void krz_CH2_N_CreateEnd();
//	void krz_CH2_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH3
//	void krz_CH3_M1_CreateEnd();
//	void krz_CH3_M3_CreateEnd();
//	void krz_CH3_N_CreateEnd();
//	void krz_CH3_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH4
//	void krz_CH4_M1_CreateEnd();
//	void krz_CH4_M3_CreateEnd();
//	void krz_CH4_N_CreateEnd();
//	void krz_CH4_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH5
//	void krz_CH5_M1_CreateEnd();
//	void krz_CH5_M3_CreateEnd();
//	void krz_CH5_N_CreateEnd();
//	void krz_CH5_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH6
//	void krz_CH6_M1_CreateEnd();
//	void krz_CH6_M3_CreateEnd();
//	void krz_CH6_N_CreateEnd();
//	void krz_CH6_ND_CreateEnd();
//#pragma endregion
//#pragma region from CH7
//	void krz_CH7_M1_CreateEnd();
//	void krz_CH7_M3_CreateEnd();
//	void krz_CH7_N_CreateEnd();
//	void krz_CH7_ND_CreateEnd();
//#pragma endregion
//#pragma region from N1
//	void krz_N1_M2_CreateEnd();
//	void krz_N1_M4_CreateEnd();
//	void krz_N1_M6_CreateEnd();
//	void krz_N1_M8_CreateEnd();
//	void krz_N1_M10_CreateEnd();
//	void krz_N1_M12_CreateEnd();
//	void krz_N1_M14_CreateEnd();
//	void krz_N1_M16_CreateEnd();
//	void krz_N1_M18_CreateEnd();
//	void krz_N1_M20_CreateEnd();
//	void krz_N1_CH_CreateEnd();
//	void krz_N1_CHD_CreateEnd();
//	void krz_N1_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N2
//	void krz_N2_M2_CreateEnd();
//	void krz_N2_M4_CreateEnd();
//	void krz_N2_M6_CreateEnd();
//	void krz_N2_M8_CreateEnd();
//	void krz_N2_M10_CreateEnd();
//	void krz_N2_M12_CreateEnd();
//	void krz_N2_M14_CreateEnd();
//	void krz_N2_M16_CreateEnd();
//	void krz_N2_M18_CreateEnd();
//	void krz_N2_M20_CreateEnd();
//	void krz_N2_CH_CreateEnd();
//	void krz_N2_CHD_CreateEnd();
//	void krz_N2_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N3
//	void krz_N3_M2_CreateEnd();
//	void krz_N3_M4_CreateEnd();
//	void krz_N3_M6_CreateEnd();
//	void krz_N3_M8_CreateEnd();
//	void krz_N3_M10_CreateEnd();
//	void krz_N3_M12_CreateEnd();
//	void krz_N3_M14_CreateEnd();
//	void krz_N3_CH_CreateEnd();
//	void krz_N3_CHD_CreateEnd();
//	void krz_N3_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N4
//	void krz_N4_M2_CreateEnd();
//	void krz_N4_M4_CreateEnd();
//	void krz_N4_M6_CreateEnd();
//	void krz_N4_M8_CreateEnd();
//	void krz_N4_M10_CreateEnd();
//	void krz_N4_M12_CreateEnd();
//	void krz_N4_M14_CreateEnd();
//	void krz_N4_CH_CreateEnd();
//	void krz_N4_CHD_CreateEnd();
//	void krz_N4_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N5
//	void krz_N5_M2_CreateEnd();
//	void krz_N5_M4_CreateEnd();
//	void krz_N5_M6_CreateEnd();
//	void krz_N5_M8_CreateEnd();
//	void krz_N5_M10_CreateEnd();
//	void krz_N5_M12_CreateEnd();
//	void krz_N5_M14_CreateEnd();
//	void krz_N5_CH_CreateEnd();
//	void krz_N5_CHD_CreateEnd();
//	void krz_N5_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N6
//	void krz_N6_M2_CreateEnd();
//	void krz_N6_M4_CreateEnd();
//	void krz_N6_M6_CreateEnd();
//	void krz_N6_M8_CreateEnd();
//	void krz_N6_M10_CreateEnd();
//	void krz_N6_M12_CreateEnd();
//	void krz_N6_M14_CreateEnd();
//	void krz_N6_CH_CreateEnd();
//	void krz_N6_CHD_CreateEnd();
//	void krz_N6_CHR_CreateEnd();
//#pragma endregion
//#pragma region from N7
//	void krz_N7_M2_CreateEnd();
//	void krz_N7_M4_CreateEnd();
//	void krz_N7_M6_CreateEnd();
//	void krz_N7_M8_CreateEnd();
//	void krz_N7_M10_CreateEnd();
//	void krz_N7_M12_CreateEnd();
//	void krz_N7_M14_CreateEnd();
//	void krz_N7_CH_CreateEnd();
//	void krz_N7_CHD_CreateEnd();
//	void krz_N7_CHR_CreateEnd();
//#pragma endregion
//
//#pragma endregion
//#pragma region Routers: Def: StartRun
//#pragma region from N
//	UFUNCTION(BlueprintCallable)
//		void krz_N_1P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_2P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_3P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_4P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_5P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_6P_StartRun();
//	UFUNCTION(BlueprintCallable)
//		void krz_N_7P_StartRun();
//
//#pragma endregion
//#pragma region from ND
//	void krz_ND_1P_StartRun();
//	void krz_ND_2P_StartRun();
//	void krz_ND_3P_StartRun();
//	void krz_ND_4P_StartRun();
//	void krz_ND_5P_StartRun();
//	void krz_ND_6P_StartRun();
//	void krz_ND_7P_StartRun();
//
//#pragma endregion
//#pragma region from CH
//	void krz_CH_1P_StartRun();
//	void krz_CH_2P_StartRun();
//	void krz_CH_3P_StartRun();
//	void krz_CH_4P_StartRun();
//	void krz_CH_5P_StartRun();
//	void krz_CH_6P_StartRun();
//	void krz_CH_7P_StartRun();
//#pragma endregion
//#pragma region from CHD
//	void krz_CHD_1P_StartRun();
//	void krz_CHD_2P_StartRun();
//	void krz_CHD_3P_StartRun();
//	void krz_CHD_4P_StartRun();
//	void krz_CHD_5P_StartRun();
//	void krz_CHD_6P_StartRun();
//	void krz_CHD_7P_StartRun();
//#pragma endregion
//#pragma region from CHR
//	void krz_CHR_1P_StartRun();
//	void krz_CHR_2P_StartRun();
//	void krz_CHR_3P_StartRun();
//	void krz_CHR_4P_StartRun();
//	void krz_CHR_5P_StartRun();
//	void krz_CHR_6P_StartRun();
//	void krz_CHR_7P_StartRun();
//#pragma endregion
//#pragma region from M1
//	void krz_M1_CH1_StartRun();
//	void krz_M1_CH2_StartRun();
//	void krz_M1_CH3_StartRun();
//	void krz_M1_CH4_StartRun();
//	void krz_M1_CH5_StartRun();
//	void krz_M1_CH6_StartRun();
//	void krz_M1_CH7_StartRun();
//#pragma endregion
//#pragma region from M2
//	void krz_M2_N1_StartRun();
//	void krz_M2_N2_StartRun();
//	void krz_M2_N3_StartRun();
//	void krz_M2_N4_StartRun();
//	void krz_M2_N5_StartRun();
//	void krz_M2_N6_StartRun();
//	void krz_M2_N7_StartRun();
//	void krz_M2_M5_StartRun();
//#pragma endregion
//#pragma region from M3
//	void krz_M3_CH1_StartRun();
//	void krz_M3_CH2_StartRun();
//	void krz_M3_CH3_StartRun();
//	void krz_M3_CH4_StartRun();
//	void krz_M3_CH5_StartRun();
//	void krz_M3_CH6_StartRun();
//	void krz_M3_CH7_StartRun();
//#pragma endregion
//#pragma region from M4
//	void krz_M4_N1_StartRun();
//	void krz_M4_N2_StartRun();
//	void krz_M4_N3_StartRun();
//	void krz_M4_N4_StartRun();
//	void krz_M4_N5_StartRun();
//	void krz_M4_N6_StartRun();
//	void krz_M4_N7_StartRun();
//	void krz_M4_M5_StartRun();
//#pragma endregion
//#pragma region from M5
//	void krz_M5_M2_StartRun();
//	void krz_M5_M4_StartRun();
//	void krz_M5_M6_StartRun();
//	void krz_M5_M8_StartRun();
//	void krz_M5_M10_StartRun();
//	void krz_M5_M12_StartRun();
//	void krz_M5_M14_StartRun();
//	void krz_M5_M16_StartRun();
//	void krz_M5_M18_StartRun();
//	void krz_M5_M20_StartRun();
//#pragma endregion
//#pragma region from M6
//	void krz_M6_N1_StartRun();
//	void krz_M6_N2_StartRun();
//	void krz_M6_N3_StartRun();
//	void krz_M6_N4_StartRun();
//	void krz_M6_N5_StartRun();
//	void krz_M6_N6_StartRun();
//	void krz_M6_N7_StartRun();
//	void krz_M6_M5_StartRun();
//#pragma endregion
//#pragma region from M10
//	void krz_M10_N1_StartRun();
//	void krz_M10_N2_StartRun();
//	void krz_M10_N3_StartRun();
//	void krz_M10_N4_StartRun();
//	void krz_M10_N5_StartRun();
//	void krz_M10_N6_StartRun();
//	void krz_M10_N7_StartRun();
//	void krz_M10_M5_StartRun();
//#pragma endregion
//#pragma region from M12
//	void krz_M12_N1_StartRun();
//	void krz_M12_N2_StartRun();
//	void krz_M12_N3_StartRun();
//	void krz_M12_N4_StartRun();
//	void krz_M12_N5_StartRun();
//	void krz_M12_N6_StartRun();
//	void krz_M12_N7_StartRun();
//	void krz_M12_M5_StartRun();
//#pragma endregion
//#pragma region from M14
//	void krz_M14_N1_StartRun();
//	void krz_M14_N2_StartRun();
//	void krz_M14_N3_StartRun();
//	void krz_M14_N4_StartRun();
//	void krz_M14_N5_StartRun();
//	void krz_M14_N6_StartRun();
//	void krz_M14_N7_StartRun();
//	void krz_M14_M5_StartRun();
//#pragma endregion
//#pragma region from M16
//
//	void krz_M16_M5_StartRun();
//	void krz_M16_N1_StartRun();
//	void krz_M16_N2_StartRun();
//#pragma endregion
//#pragma region from M18
//
//	void krz_M18_M5_StartRun();
//	void krz_M18_N1_StartRun();
//	void krz_M18_N2_StartRun();
//#pragma endregion
//#pragma region from M20
//
//	void krz_M20_M5_StartRun();
//	void krz_M20_N1_StartRun();
//	void krz_M20_N2_StartRun();
//#pragma endregion
//#pragma region from M8
//	void krz_M8_N1_StartRun();
//	void krz_M8_N2_StartRun();
//	void krz_M8_N3_StartRun();
//	void krz_M8_N4_StartRun();
//	void krz_M8_N5_StartRun();
//	void krz_M8_N6_StartRun();
//	void krz_M8_N7_StartRun();
//	void krz_M8_M5_StartRun();
//#pragma endregion
//#pragma region from CH1
//	void krz_CH1_M1_StartRun();
//	void krz_CH1_M3_StartRun();
//	void krz_CH1_N_StartRun();
//	void krz_CH1_ND_StartRun();
//#pragma endregion
//#pragma region from CH2
//	void krz_CH2_M1_StartRun();
//	void krz_CH2_M3_StartRun();
//	void krz_CH2_N_StartRun();
//	void krz_CH2_ND_StartRun();
//#pragma endregion
//#pragma region from CH3
//	void krz_CH3_M1_StartRun();
//	void krz_CH3_M3_StartRun();
//	void krz_CH3_N_StartRun();
//	void krz_CH3_ND_StartRun();
//#pragma endregion
//#pragma region from CH4
//	void krz_CH4_M1_StartRun();
//	void krz_CH4_M3_StartRun();
//	void krz_CH4_N_StartRun();
//	void krz_CH4_ND_StartRun();
//#pragma endregion
//#pragma region from CH5
//	void krz_CH5_M1_StartRun();
//	void krz_CH5_M3_StartRun();
//	void krz_CH5_N_StartRun();
//	void krz_CH5_ND_StartRun();
//#pragma endregion
//#pragma region from CH6
//	void krz_CH6_M1_StartRun();
//	void krz_CH6_M3_StartRun();
//	void krz_CH6_N_StartRun();
//	void krz_CH6_ND_StartRun();
//#pragma endregion
//#pragma region from CH7
//	void krz_CH7_M1_StartRun();
//	void krz_CH7_M3_StartRun();
//	void krz_CH7_N_StartRun();
//	void krz_CH7_ND_StartRun();
//#pragma endregion
//#pragma region from N1
//	void krz_N1_M2_StartRun();
//	void krz_N1_M4_StartRun();
//	void krz_N1_M6_StartRun();
//	void krz_N1_M8_StartRun();
//	void krz_N1_M10_StartRun();
//	void krz_N1_M12_StartRun();
//	void krz_N1_M14_StartRun();
//	void krz_N1_M16_StartRun();
//	void krz_N1_M18_StartRun();
//	void krz_N1_M20_StartRun();
//	void krz_N1_CH_StartRun();
//	void krz_N1_CHD_StartRun();
//	void krz_N1_CHR_StartRun();
//#pragma endregion
//#pragma region from N2
//	void krz_N2_M2_StartRun();
//	void krz_N2_M4_StartRun();
//	void krz_N2_M6_StartRun();
//	void krz_N2_M8_StartRun();
//	void krz_N2_M10_StartRun();
//	void krz_N2_M12_StartRun();
//	void krz_N2_M14_StartRun();
//	void krz_N2_M16_StartRun();
//	void krz_N2_M18_StartRun();
//	void krz_N2_M20_StartRun();
//	void krz_N2_CH_StartRun();
//	void krz_N2_CHD_StartRun();
//	void krz_N2_CHR_StartRun();
//#pragma endregion
//#pragma region from N3
//	void krz_N3_M2_StartRun();
//	void krz_N3_M4_StartRun();
//	void krz_N3_M6_StartRun();
//	void krz_N3_M8_StartRun();
//	void krz_N3_M10_StartRun();
//	void krz_N3_M12_StartRun();
//	void krz_N3_M14_StartRun();
//	void krz_N3_CH_StartRun();
//	void krz_N3_CHD_StartRun();
//	void krz_N3_CHR_StartRun();
//#pragma endregion
//#pragma region from N4
//	void krz_N4_M2_StartRun();
//	void krz_N4_M4_StartRun();
//	void krz_N4_M6_StartRun();
//	void krz_N4_M8_StartRun();
//	void krz_N4_M10_StartRun();
//	void krz_N4_M12_StartRun();
//	void krz_N4_M14_StartRun();
//	void krz_N4_CH_StartRun();
//	void krz_N4_CHD_StartRun();
//	void krz_N4_CHR_StartRun();
//#pragma endregion
//#pragma region from N5
//	void krz_N5_M2_StartRun();
//	void krz_N5_M4_StartRun();
//	void krz_N5_M6_StartRun();
//	void krz_N5_M8_StartRun();
//	void krz_N5_M10_StartRun();
//	void krz_N5_M12_StartRun();
//	void krz_N5_M14_StartRun();
//	void krz_N5_CH_StartRun();
//	void krz_N5_CHD_StartRun();
//	void krz_N5_CHR_StartRun();
//#pragma endregion
//#pragma region from N6
//	void krz_N6_M2_StartRun();
//	void krz_N6_M4_StartRun();
//	void krz_N6_M6_StartRun();
//	void krz_N6_M8_StartRun();
//	void krz_N6_M10_StartRun();
//	void krz_N6_M12_StartRun();
//	void krz_N6_M14_StartRun();
//	void krz_N6_CH_StartRun();
//	void krz_N6_CHD_StartRun();
//	void krz_N6_CHR_StartRun();
//#pragma endregion
//#pragma region from N7
//	void krz_N7_M2_StartRun();
//	void krz_N7_M4_StartRun();
//	void krz_N7_M6_StartRun();
//	void krz_N7_M8_StartRun();
//	void krz_N7_M10_StartRun();
//	void krz_N7_M12_StartRun();
//	void krz_N7_M14_StartRun();
//	void krz_N7_CH_StartRun();
//	void krz_N7_CHD_StartRun();
//	void krz_N7_CHR_StartRun();
//#pragma endregion
//#pragma region OUT_voids
//	void krz_N_KARABAS_StartRun();
//	void krz_ND_KARABAS_StartRun();
//	void krz_KARABAS_N_StartRun();
//	void krz_KARABAS_ND_StartRun();
//	void krz_CH_KARAGANDA_StartRun();
//	void krz_CHD_KARAGANDA_StartRun();
//	void krz_KARAGANDA_CH_StartRun();
//	void krz_KARAGANDA_CHD_StartRun();
//	void krz_CHR_OUT_StartRun();
//	void krz_OUT_CHR_StartRun();
//#pragma endregion
//
//#pragma endregion
//#pragma region Router: Def:  Run // анимация имитации движения поездов и локомотивов
//
//	
//	Router& krz_GetReadyRouter(EdopStat dopstat);
//	void krz_RouterRun(Router& router);//реализация анимации движения поезда по станции
//	void krz_ManRouterRun(Router& router);//реализация анимации движения локомотива по станции
//	void krz_FromStationToOutRun(Router& router);//реализация анимации движения поезда от станции к ауту
//	void krz_FromOutToStationRun(Router& router);//реализация анимации движения поезда от аута к станции
//
//	void ImitWaitingEndRazmik(FElm& way);
//	void ImitWaitingEndRazmikOutStation(FElm& way);
//
//#pragma endregion
//
//#pragma region Pult
//
//	bool krz_pult_SvetoforChoice_1 = false;//НАЧАТО/не начато РЕДАКТИРОВАНИЕ СВЕТОФОРОВ
//	bool krz_pult_SvetoforChoice_2 = false;//НАЧАТО/не начато РЕДАКТИРОВАНИЕ СВЕТОФОРОВ
//	std::vector<std::string> krz_pult_arrComm;
//
//	UFUNCTION(BlueprintCallable)
//		FString krz_Pult_CreatePortHandler();
//	
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_PrepareArrCommandToFirstLoad();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_CheckerChanger();
//	UFUNCTION(BlueprintCallable)
//		FString krz_Pult_LoaderTo();
//	void krz_Pult_SenderTo_LoaderTo(Pelm elm);
//	void krz_Pult_FirstLoadTo();
//
//	UFUNCTION(BlueprintCallable)
//		EdopStat krz_Pult_Make_Svetofor_Redact(EdopStat dopstat);
//	EdopStat krz_Pult_Get_Svetofor_Redact();
//	EdopStat krz_Pult_Get_Svetofor_Redact_2();
//	void krz_Pult_Make_Redact_Svetofor_Default();
//	void krz_Pult_Make_All_Svetofor_UnRedact();
//	void krz_Pult_StartNabor();
//	void krz_Pult_EndNabor();
//
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat);
//
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_AvariynoeOtkritiePereezda();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_ZakritiePereezda();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_DGA();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_OtmenaAllRouters();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_ManevroviyRouter();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_PoezdnoyRouter();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_OtmenaNabora();
//	UFUNCTION(BlueprintCallable)
//		void krz_Pult_Iskusstvennaya_razdelka();
//
//
//#pragma endregion

};
