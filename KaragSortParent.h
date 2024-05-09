// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GeneralStationParentWidget.h"

//#include "CoreMinimal.h"
//#include "Blueprint/UserWidget.h"
#include "KaragSortParent.generated.h"

/**
 * 
 */
UCLASS()
class NEWSTATIONDISPETCHER_API UKaragSortParent : public UGeneralStationParentWidget
{
	GENERATED_BODY()

public:\


#pragma region Buttons of Menu of Svetofor


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
		class UButton* But_poezd_on_way_7;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayBP_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayBP_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayBP_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayBP_4;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayNadvig_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayNadvig_2;



	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM_7;


	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_6;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM_7;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N1A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N2A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N3A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N4A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_N5A;


	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM1A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM2A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM3A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM4A;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_CHM5A;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayAP_1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayAP_2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayAP_3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayAP_4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_poezd_on_wayAP_5;


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
		class UButton* But_za_M_12;//“”œ»  Õ¿  ¿–¿√¿Õƒ≈ 2

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_13;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_14;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_15;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_16;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_18;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_20;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_21;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_22;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_23;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_24;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_25;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_26;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_M_27;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM1B;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM2B;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM3B;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM4B;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM1;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM2;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM3;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM4;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM5;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM6;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM7;

	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM11;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM12;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM13;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM14;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM15;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM16;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM17;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM18;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM19;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM20;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM21;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM22;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM23;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM24;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM25;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM26;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM27;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM28;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM29;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM30;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM31;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM32;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM33;
	UPROPERTY(meta = (BindWidget))
		class UButton* But_za_NM34;

#pragma endregion

#pragma region generaFoo

	 bool Initialize();

	// void ExitMenu();

	EdopStat kg1_Get_Name_Redact_Svetofor();
	EdopStat kg2_Get_Name_Redact_Svetofor();
	void SendCommToServer(Commd comm);

	void OtmenaOneRouter() override;
	UFUNCTION(BlueprintCallable)
		void CreateMenuRouter(FVector2D pos);
	
#pragma endregion
#pragma region Foo of router s buttons


	UFUNCTION()
		void Za_N();
	UFUNCTION()
		void Za_ND();


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
		void Za_CHM1();
	UFUNCTION()
		void Za_CHM2();
	UFUNCTION()
		void Za_CHM3();
	UFUNCTION()
		void Za_CHM4();
	UFUNCTION()
		void Za_CHM5();
	UFUNCTION()
		void Za_CHM6();
	UFUNCTION()
		void Za_CHM7();







	UFUNCTION()
		void Za_M1();

	UFUNCTION()
		void Za_M3();
	UFUNCTION()
		void Za_M6();

	/*UFUNCTION()
		void Za_M12();*/

	UFUNCTION()
		void Za_M14();

	UFUNCTION()
		void Za_M16();

	UFUNCTION()
		void Za_M18();

	UFUNCTION()
		void Za_M20();

	UFUNCTION()
		void Za_M21();

	UFUNCTION()
		void Za_M23();

	UFUNCTION()
		void Za_M24();

	UFUNCTION()
		void Za_M25();

	UFUNCTION()
		void Za_M26();


	UFUNCTION()
		void On_wayNadvig_1();
	UFUNCTION()
		void On_wayNadvig_2();


	UFUNCTION()
		void Za_CH();
	UFUNCTION()
		void Za_CHD();


	UFUNCTION()
		void On_wayAP_1();
	UFUNCTION()
		void On_wayAP_2();
	UFUNCTION()
		void On_wayAP_3();
	UFUNCTION()
		void On_wayAP_4();
	UFUNCTION()
		void On_wayAP_5();



	UFUNCTION()
		void Za_CHM1A();
	UFUNCTION()
		void Za_CHM2A();
	UFUNCTION()
		void Za_CHM3A();
	UFUNCTION()
		void Za_CHM4A();
	UFUNCTION()
		void Za_CHM5A();


	UFUNCTION()
		void Za_N1A();
	UFUNCTION()
		void Za_N2A();
	UFUNCTION()
		void Za_N3A();
	UFUNCTION()
		void Za_N4A();
	UFUNCTION()
		void Za_N5A();

	UFUNCTION()
		void Za_NM1();
	UFUNCTION()
		void Za_NM2();
	UFUNCTION()
		void Za_NM3();
	UFUNCTION()
		void Za_NM4();
	UFUNCTION()
		void Za_NM5();
	UFUNCTION()
		void Za_NM6();
	UFUNCTION()
		void Za_NM7();


	UFUNCTION()
		void Za_M2();
	UFUNCTION()
		void Za_M4();
	UFUNCTION()
		void Za_M5();
	UFUNCTION()
		void Za_M12();
	UFUNCTION()
		void Za_M13();
	UFUNCTION()
		void Za_NM1B();
	UFUNCTION()
		void Za_NM2B();
	UFUNCTION()
		void Za_NM3B();
	UFUNCTION()
		void Za_NM4B();


	UFUNCTION()
		void Za_M15();
	UFUNCTION()
		void Za_M22();
	UFUNCTION()
		void Za_M27();

	UFUNCTION()
		void Za_NM11();
	UFUNCTION()
		void Za_NM12();
	UFUNCTION()
		void Za_NM13();
	UFUNCTION()
		void Za_NM14();
	UFUNCTION()
		void Za_NM15();
	UFUNCTION()
		void Za_NM16();
	UFUNCTION()
		void Za_NM17();
	UFUNCTION()
		void Za_NM18();
	UFUNCTION()
		void Za_NM19();
	UFUNCTION()
		void Za_NM20();
	UFUNCTION()
		void Za_NM21();
	UFUNCTION()
		void Za_NM22();
	UFUNCTION()
		void Za_NM23();
	UFUNCTION()
		void Za_NM24();
	UFUNCTION()
		void Za_NM25();
	UFUNCTION()
		void Za_NM26();
	UFUNCTION()
		void Za_NM27();
	UFUNCTION()
		void Za_NM28();
	UFUNCTION()
		void Za_NM29();
	UFUNCTION()
		void Za_NM30();
	UFUNCTION()
		void Za_NM31();
	UFUNCTION()
		void Za_NM32();
	UFUNCTION()
		void Za_NM33();
	UFUNCTION()
		void Za_NM34();

#pragma endregion

#pragma endregion
#pragma region Strelki


	UFUNCTION(BlueprintCallable)
		int kg1_Make_Strelka_Redact(int number);



	UFUNCTION(BlueprintCallable)
		void kg1_RedactStrelkaToMinus();

	UFUNCTION(BlueprintCallable)
		void kg1_RedactStrelkaToPlus();

	UFUNCTION(BlueprintCallable)
		void kg1_RedactStrelkaToBreak();

	UFUNCTION(BlueprintCallable)
		void kg1_RedactStrelkaMakeWaitingAvaria();

	UFUNCTION(BlueprintCallable)
		void kg1_RedactStrelkaRemont();

	UFUNCTION(BlueprintCallable)
		void kg1_RemontAllStrelka();

#pragma endregion
#pragma region Svetofori

	UFUNCTION(BlueprintCallable)
		void kg1_Make_Svetofor_Redact(EdopStat dopstat);




	
	UFUNCTION(BlueprintCallable)
		void kg1_BrokenSvetoforMake(ExCurator cur);
	UFUNCTION(BlueprintCallable)
		void kg1_RedactSvetofor_Remont();
	UFUNCTION(BlueprintCallable)
		void kg1_AllSvetofor_Remont();

#pragma endregion
};
