// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DisPawn.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KarabasPultWidget.generated.h"

/**
 * 
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UKarabasPultWidget : public UUserWidget
{
	GENERATED_BODY()


public:



#pragma region Pult

	void SendCommToServer(Commd comm);

	UFUNCTION(BlueprintCallable)
		void StrelkaToPlus(int number);

	UFUNCTION(BlueprintCallable)
		void StrelkaToMinus(int number);

		bool krb_pult_IsOtmenaRouterSet = false;
	ADisPawn* Disp;

	virtual bool Initialize();

	UFUNCTION(BlueprintCallable)
		bool krb_pult_SetStartOtmenaOneRouter();

	bool krb_pult_IsManevrRouterSet = false;
	bool krb_pult_IsTrainRouterSet = false;

	bool krb_pult_IsChetManRouterSet = false;
	bool krb_pult_IsNeChetManRouterSet = false;
	bool krb_pult_IsChetTrainRouterSet = false;
	bool krb_pult_IsNeChetTrainRouterSet = false;

	bool krb_pult_IsChetManRouterSetDop = false;
	bool krb_pult_IsNeChetManRouterSetDop = false;
	bool krb_pult_IsChetTrainRouterSetDop = false;
	bool krb_pult_IsNeChetTrainRouterSetDop = false;

	void krb_pult_CheckerSetterDirectRouter();

	void DopCheckerForPult();

	bool krb_IsThereToFreeWay();

	UFUNCTION(BlueprintCallable)
		bool krb_pult_ManevrRouterSet();
	UFUNCTION(BlueprintCallable)
		bool krb_pult_TrainRouterSet();

	UPROPERTY(BlueprintReadWrite)
		EdopStat RedactSvetoforStart = EdopStat::Norm;
	UPROPERTY(BlueprintReadWrite)
		EdopStat RedactSvetoforEnd = EdopStat::Norm;







	UFUNCTION(BlueprintCallable)
		void krb_Pult_Reload();
	void krb_Pult_Reload_InThread();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_Off();
	void krb_Pult_Off_InThread();





	UFUNCTION(BlueprintCallable)
		bool krb_Pult_Make_Svetofor_Redact(EdopStat dopstat);

	void krb_Pult_Make_All_Svetofor_UnRedact();


	UFUNCTION(BlueprintCallable)
		bool krb_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat);

	UFUNCTION(BlueprintCallable)
		void krb_Pult_AvariynoeOtkritiePereezda();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_ZakritiePereezda();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_DGA();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_OtmenaAllRouters();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_ManevroviyRouterCreate(EdopStat Rstart, EdopStat Rend);
	UFUNCTION(BlueprintCallable)
		void krb_Pult_PoezdnoyRouterCreate(EdopStat Rstart, EdopStat Rend);
	UFUNCTION(BlueprintCallable)
		void krb_Pult_OtmenaNabora();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_Iskusstvennaya_razdelka();


	UFUNCTION(BlueprintCallable)
		void krb_Pult_RazvorotPeregona_N();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_RazvorotPeregona_CH();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_VspomogatRazvorotPeregona_N();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_VspomogatRazvorotPeregona_CH();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_VspomogatRazvorotPeregona_CHD();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_RazvorotPeregona_CHD();


	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsAnyRouterDestrouing();

	

	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsThereVzrez();

	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsChetRouterSetting();

	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsNeChetRouterSetting();

	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsChetRouterSetted();

	UFUNCTION(BlueprintCallable)
		bool krb_Pult_IsNeChetRouterSetted();

#pragma endregion

#pragma region Routers: Def: CheckPossCreate
#pragma region from N

	UFUNCTION(BlueprintCallable)
		bool krb_N_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N_5P_CheckPossCreate();

#pragma endregion
#pragma region from CH

	UFUNCTION(BlueprintCallable)
		bool krb_CH_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH_5P_CheckPossCreate();

#pragma endregion
#pragma region from CHD

	UFUNCTION(BlueprintCallable)
		bool krb_CHD_1P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CHD_2P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CHD_3P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CHD_4P_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CHD_5P_CheckPossCreate();

#pragma endregion
#pragma region from M1
	UFUNCTION(BlueprintCallable)
		bool krb_M1_CH1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M1_CH2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M1_CH3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M1_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M1_CH5_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M1_M5_CheckPossCreate();
#pragma endregion
#pragma region from M2

	UFUNCTION(BlueprintCallable)
		bool krb_M2_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M2_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M2_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M2_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M2_N5_CheckPossCreate();

#pragma endregion
#pragma region from M3

	UFUNCTION(BlueprintCallable)
		bool krb_M3_CH4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M3_CH5_CheckPossCreate();

#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		bool krb_M4_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M4_N2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M4_N3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M4_N4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M4_N5_CheckPossCreate();

#pragma endregion
#pragma region from M5

	UFUNCTION(BlueprintCallable)
		bool krb_M5_M1_CheckPossCreate();

#pragma endregion
#pragma region from M6


	UFUNCTION(BlueprintCallable)
		bool krb_M6_N1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_M6_N2_CheckPossCreate();

#pragma endregion
#pragma region from CH1

	UFUNCTION(BlueprintCallable)
		bool krb_CH1_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH1_N_CheckPossCreate();

#pragma endregion
#pragma region from CH2

	UFUNCTION(BlueprintCallable)
		bool krb_CH2_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH2_N_CheckPossCreate();

#pragma endregion
#pragma region from CH3

	UFUNCTION(BlueprintCallable)
		bool krb_CH3_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH3_N_CheckPossCreate();

#pragma endregion
#pragma region from CH4

	UFUNCTION(BlueprintCallable)
		bool krb_CH4_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH4_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH4_N_CheckPossCreate();

#pragma endregion
#pragma region from CH5

	UFUNCTION(BlueprintCallable)
		bool krb_CH5_M1_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH5_M3_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_CH5_N_CheckPossCreate();

#pragma endregion
#pragma region from N1

	UFUNCTION(BlueprintCallable)
		bool krb_N1_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N1_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N1_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N1_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N1_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N2

	UFUNCTION(BlueprintCallable)
		bool krb_N2_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N2_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N2_M6_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N2_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N2_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N3

	UFUNCTION(BlueprintCallable)
		bool krb_N3_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N3_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N3_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N3_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N4

	UFUNCTION(BlueprintCallable)
		bool krb_N4_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N4_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N4_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N4_CHD_CheckPossCreate();

#pragma endregion
#pragma region from N5

	UFUNCTION(BlueprintCallable)
		bool krb_N5_M2_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N5_M4_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N5_CH_CheckPossCreate();
	UFUNCTION(BlueprintCallable)
		bool krb_N5_CHD_CheckPossCreate();

#pragma endregion


#pragma endregion
	
};
