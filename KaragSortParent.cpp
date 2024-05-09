// Fill out your copyright notice in the Description page of Project Settings.


#include "KaragSortParent.h"


#pragma region generaFoo

bool UKaragSortParent::Initialize()
{
	Super::Initialize();

	
	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UKaragSortParent::OtmenaOneRouter);

	But_za_N->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N);
	But_za_ND->OnClicked.AddDynamic(this, &UKaragSortParent::Za_ND);
	But_za_CH->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CH);
	But_za_CHD->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHD);

	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_1);
	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_2);
	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_3);
	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_4);
	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_5);
	But_poezd_on_way_6->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_6);
	But_poezd_on_way_7->OnClicked.AddDynamic(this, &UKaragSortParent::On_way_7);

	But_za_CHM_1->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM1);
	But_za_CHM_2->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM2);
	But_za_CHM_3->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM3);
	But_za_CHM_4->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM4);
	But_za_CHM_5->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM5);
	But_za_CHM_6->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM6);
	But_za_CHM_7->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM7);


	But_poezd_on_wayNadvig_1->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayNadvig_1);
	But_poezd_on_wayNadvig_2->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayNadvig_2);


	But_za_M_1->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M1);
	But_za_M_2->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M2);
	But_za_M_3->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M3);
	But_za_M_4->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M4);
	But_za_M_5->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M5);
	But_za_M_6->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M6);

	But_za_M_12->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M12);
	But_za_M_13->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M13);
	But_za_M_14->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M14);
	But_za_M_15->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M15);
	But_za_M_16->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M16);

	But_za_M_18->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M18);
	But_za_M_20->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M20);
	But_za_M_21->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M21);
	But_za_M_22->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M22);
	But_za_M_23->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M23);
	But_za_M_24->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M24);
	But_za_M_25->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M25);
	But_za_M_26->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M26);
	But_za_M_27->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M27);
	//But_za_M_29->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M29);
	//But_za_M_31->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M31);
	//But_za_M_33->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M33);
	//But_za_M_35->OnClicked.AddDynamic(this, &UKaragSortParent::Za_M35);

	But_za_NM1B->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM1B);
	But_za_NM2B->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM2B);
	But_za_NM3B->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM3B);
	But_za_NM4B->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM4B);




	But_za_CHM1A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM1A);
	But_za_CHM2A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM2A);
	But_za_CHM3A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM3A);
	But_za_CHM4A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM4A);
	But_za_CHM5A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_CHM5A);

	But_za_N1A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N1A);
	But_za_N2A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N2A);
	But_za_N3A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N3A);
	But_za_N4A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N4A);
	But_za_N5A->OnClicked.AddDynamic(this, &UKaragSortParent::Za_N5A);

	But_za_NM1->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM1);
	But_za_NM2->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM2);
	But_za_NM3->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM3);
	But_za_NM4->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM4);
	But_za_NM5->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM5);
	But_za_NM6->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM6);
	But_za_NM7->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM7);

	But_za_NM11->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM11);
	But_za_NM12->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM12);
	But_za_NM13->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM13);
	But_za_NM14->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM14);
	But_za_NM15->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM15);
	But_za_NM16->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM16);
	But_za_NM17->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM17);
	But_za_NM18->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM18);
	But_za_NM19->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM19);
	But_za_NM20->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM20);
	But_za_NM21->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM21);
	But_za_NM22->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM22);
	But_za_NM23->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM23);
	But_za_NM24->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM24);
	But_za_NM25->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM25);
	But_za_NM26->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM26);
	But_za_NM27->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM27);
	But_za_NM28->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM28);
	But_za_NM29->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM29);
	But_za_NM30->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM30);
	But_za_NM31->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM31);
	But_za_NM32->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM32);
	But_za_NM33->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM33);
	But_za_NM34->OnClicked.AddDynamic(this, &UKaragSortParent::Za_NM34);




	But_poezd_on_wayAP_1->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayAP_1);
	But_poezd_on_wayAP_2->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayAP_2);
	But_poezd_on_wayAP_3->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayAP_3);
	But_poezd_on_wayAP_4->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayAP_4);
	But_poezd_on_wayAP_5->OnClicked.AddDynamic(this, &UKaragSortParent::On_wayAP_5);
	return true;
}

#pragma endregion

void UKaragSortParent::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Karaganda_1, comm);
}

void UKaragSortParent::OtmenaOneRouter()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();
	Commd com = Disp->GetCommFromDopStat(dopstat);
	if (com != Commd::NotDef) SendCommToServer(com);

	ExitMenu();
}
void UKaragSortParent::CreateMenuRouter(FVector2D pos)
{
		VerticalBoxMenu->ClearChildren();
		EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();
		bool ImIRedactable = false;
		ImIRedactable = IsRedactSvetoforFree();
		if (ImIRedactable)
		{
			switch (dopstat)
			{
	#pragma region Enter Poezd Svetofor		
	
			case EdopStat::N:
	
				if (Disp->kg1_N_1P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
				if (Disp->kg1_N_2P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
				if (Disp->kg1_N_3P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
				if (Disp->kg1_N_4P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
				if (Disp->kg1_N_5P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
				if (Disp->kg1_N_6P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
				if (Disp->kg1_N_7P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::ND:
	
				if (Disp->kg1_ND_1P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
				if (Disp->kg1_ND_2P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
				if (Disp->kg1_ND_3P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
				if (Disp->kg1_ND_4P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
				if (Disp->kg1_ND_5P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
				if (Disp->kg1_ND_6P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
				if (Disp->kg1_ND_7P.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
	#pragma endregion
	#pragma region Manevrovie Svetofor
	
	
			case EdopStat::M1:
	
				if (Disp->kg1_M1_CHM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_7);
				if (Disp->kg1_M1_CHM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_6);
				if (Disp->kg1_M1_CHM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_5);
				if (Disp->kg1_M1_CHM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_4);
				if (Disp->kg1_M1_CHM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_3);
				if (Disp->kg1_M1_CHM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_2);
				if (Disp->kg1_M1_CHM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_1);
				
				if (Disp->kg1_M1_M14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_14);
				if (Disp->kg1_M1_M16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_16);
				if (Disp->kg1_M1_M18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_18);
				if (Disp->kg1_M1_M20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_20);
	
				
				
				
				
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
			case EdopStat::M3:
	
	
				if (Disp->kg1_M3_CHM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_7);
				if (Disp->kg1_M3_CHM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_6);
				if (Disp->kg1_M3_CHM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_5);
				if (Disp->kg1_M3_CHM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_4);
				if (Disp->kg1_M3_CHM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_3);
				if (Disp->kg1_M3_CHM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_2);
				if (Disp->kg1_M3_CHM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_1);
	
				if (Disp->kg1_M3_M14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_14);
				if (Disp->kg1_M3_M16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_16);
				if (Disp->kg1_M3_M18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_18);
				if (Disp->kg1_M3_M20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_20);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::M14:
	
				//if (Disp->kg1_M14_N.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N);
				//if (Disp->kg1_M14_ND.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_M14_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_M14_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_M14_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::M16:
	
				//if (Disp->kg1_M16_N.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N);
				//if (Disp->kg1_M16_ND.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_M16_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_M16_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_M16_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M18:
	
				//if (Disp->kg1_M18_N.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N);
				//if (Disp->kg1_M18_ND.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_M18_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_M18_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_M18_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M20:
	
				//if (Disp->kg1_M20_N.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N);
				//if (Disp->kg1_M20_ND.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_M20_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_M20_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_M20_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M21:
	
				if (Disp->kg1_M21_CHM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_1);
				if (Disp->kg1_M21_CHM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_2);
				if (Disp->kg1_M21_CHM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_3);
				if (Disp->kg1_M21_CHM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_4);
				if (Disp->kg1_M21_CHM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_5);
				if (Disp->kg1_M21_CHM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_6);
				if (Disp->kg1_M21_CHM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_7);
	
				if (Disp->kg1_M21_M14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_14);
				if (Disp->kg1_M21_M16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_16);
				if (Disp->kg1_M21_M18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_18);
				if (Disp->kg1_M21_M20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_20);
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	#pragma region dop
	
	
	
			case EdopStat::M23:
	
				if (Disp->kg1_M23_CHM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_6);
				if (Disp->kg1_M23_CHM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_7);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M25:
	
				if (Disp->kg1_M25_CHM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_6);
				if (Disp->kg1_M25_CHM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM_7);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M24:
	
				if (Disp->kg1_M24_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);
			
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M26:
	
				if (Disp->kg1_M26_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
	
	#pragma endregion
	
			case EdopStat::M27:
	
				if (Disp->kg1_M27_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_M27_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				
				if (Disp->kg1_M27_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_M27_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_M27_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_M27_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				
				
				
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM1B:
	
				if (Disp->kg1_NM1B_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM1B_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
	
				if (Disp->kg1_NM1B_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_NM1B_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM1B_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM1B_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg1_NM1B_PG1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_1);
				if (Disp->kg1_NM1B_PG2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM2B:
	
				if (Disp->kg1_NM2B_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM2B_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
	
				if (Disp->kg1_NM2B_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_NM2B_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM2B_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM2B_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg1_NM2B_PG1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_1);
				if (Disp->kg1_NM2B_PG2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM3B:
	
				if (Disp->kg1_NM3B_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM3B_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
	
				if (Disp->kg1_NM3B_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_NM3B_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM3B_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM3B_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg1_NM3B_PG1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_1);
				if (Disp->kg1_NM3B_PG2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM4B:
	
				if (Disp->kg1_NM4B_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM4B_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
	
				if (Disp->kg1_NM4B_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_NM4B_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM4B_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM4B_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg1_NM4B_PG1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_1);
				if (Disp->kg1_NM4B_PG2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayNadvig_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	#pragma endregion		
	#pragma region Exit All Svetofor
	
			case EdopStat::CHM1:
	
				if (Disp->kg1_CHM1_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM1_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM1_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM1_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM1_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::CHM2:
	
				if (Disp->kg1_CHM2_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM2_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM2_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM2_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM2_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM3:
	
				if (Disp->kg1_CHM3_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM3_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM3_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM3_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM3_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM4:
	
				if (Disp->kg1_CHM4_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM4_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM4_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM4_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM4_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM5:
	
				if (Disp->kg1_CHM5_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM5_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM5_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM5_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM5_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM6:
	
				if (Disp->kg1_CHM6_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM6_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM6_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM6_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM6_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
				if (Disp->kg1_CHM6_M23.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_23);
				if (Disp->kg1_CHM6_M25.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_25);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM7:
	
				if (Disp->kg1_CHM7_N.IsFree() && Disp->kg1.GreenKey_N.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_N);
				if (Disp->kg1_CHM7_ND.IsFree() && Disp->kg1.GreenKey_ND.dopstat == EdopStat::Left) VerticalBoxMenu->AddChild(But_za_ND);
				if (Disp->kg1_CHM7_M1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_1);
				if (Disp->kg1_CHM7_M3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_3);
	
				if (Disp->kg1_CHM7_M21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_21);
	
				if (Disp->kg1_CHM7_M23.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_23);
				if (Disp->kg1_CHM7_M25.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_25);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
	
			case EdopStat::NM1:
	
				if (Disp->kg1_NM1_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM1_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM1_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg1_NM1_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM1_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM1_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				
				
				
	
				//if (Disp->kg1_NM1_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				//if (Disp->kg1_NM1_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				//if (Disp->kg1_NM1_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
				//if (Disp->kg1_NM1_5AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_5);
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM2:
	
				if (Disp->kg1_NM2_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM2_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM2_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM2_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM2_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM2_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
	
				
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM3:
	
				if (Disp->kg1_NM3_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM3_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM3_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM3_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM3_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM3_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
		
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM4:
	
				if (Disp->kg1_NM4_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM4_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM4_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM4_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM4_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM4_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
	
				
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM5:
	
				if (Disp->kg1_NM5_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM5_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM5_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM5_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM5_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM5_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
	
				
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM6:
	
				if (Disp->kg1_NM6_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM6_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM6_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM6_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM6_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM6_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
	
				
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM7:

				if (Disp->kg1_NM7_M26.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_26);
				if (Disp->kg1_NM7_M24.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_24);
	
				if (Disp->kg1_NM7_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
				if (Disp->kg1_NM7_M6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_6);
	
				if (Disp->kg1_NM7_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg1_NM7_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg1_NM7_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg1_NM7_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
	
			
	
				
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
	#pragma endregion	
	
	#pragma region Enter Poezd Svetofor		
	
			case EdopStat::CH:
	
				if (Disp->kg2_CH_N1A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				if (Disp->kg2_CH_N2A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				if (Disp->kg2_CH_N3A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				if (Disp->kg2_CH_N4A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
				if (Disp->kg2_CH_N5A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_5);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::CHD:
	
				if (Disp->kg2_CHD_N1A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				if (Disp->kg2_CHD_N2A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				if (Disp->kg2_CHD_N3A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				if (Disp->kg2_CHD_N4A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
				if (Disp->kg2_CHD_N5A.IsFree()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_5);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
	
	#pragma endregion
	#pragma region Manevrovie Svetofor
	
	
			case EdopStat::M2:
	
				if (Disp->kg2_M2_M15.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_15);
	
				if (Disp->kg2_M2_N1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N1A);
				if (Disp->kg2_M2_N2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N2A);
				if (Disp->kg2_M2_N3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N3A);
				if (Disp->kg2_M2_N4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N4A);
				if (Disp->kg2_M2_N5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N5A);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M4:
	
				if (Disp->kg2_M4_M15.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_15);
	
				if (Disp->kg2_M4_N1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N1A);
				if (Disp->kg2_M4_N2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N2A);
				if (Disp->kg2_M4_N3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N3A);
				if (Disp->kg2_M4_N4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N4A);
				if (Disp->kg2_M4_N5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_N5A);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;

			case EdopStat::M5:

				if (Disp->kg2_M5_M12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_12);
		
				if (Disp->kg2_M5_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg2_M5_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg2_M5_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);


				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M6:
	
				
				if (Disp->kg2_M6_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);
				if (Disp->kg2_M6_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_M6_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_M6_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_M6_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_M6_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_M6_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);

				if (Disp->kg2_M6_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);

				if (Disp->kg2_M6_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg2_M6_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg2_M6_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg2_M6_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);

	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M12:
	
				if (Disp->kg2_M12_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);

				if (Disp->kg2_M12_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);
				if (Disp->kg2_M12_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_M12_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_M12_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_M12_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_M12_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_M12_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);

				if (Disp->kg2_M12_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);

				if (Disp->kg2_M12_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg2_M12_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg2_M12_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg2_M12_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);


				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(FVector2D(GetMenuCoordinates(pos).X, GetMenuCoordinates(pos).Y + 300));
				break;
	
	
				//if (Disp->kg2_M12_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				//if (Disp->kg2_M12_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				//if (Disp->kg2_M12_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				//if (Disp->kg2_M12_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M13:
	
				if (Disp->kg2_M13_CHM5A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM5A);
				if (Disp->kg2_M13_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
				if (Disp->kg2_M13_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M15:
	
				if (Disp->kg2_M15_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_M15_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::M22:
	
				if (Disp->kg2_M22_NM23.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM23);
				if (Disp->kg2_M22_NM24.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM24);
				if (Disp->kg2_M22_NM25.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM25);
				if (Disp->kg2_M22_NM26.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM26);
				if (Disp->kg2_M22_NM27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM27);
				if (Disp->kg2_M22_NM28.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM28);
				if (Disp->kg2_M22_NM29.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM29);
				if (Disp->kg2_M22_NM30.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM30);
				if (Disp->kg2_M22_NM31.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM31);
				if (Disp->kg2_M22_NM32.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM32);
				if (Disp->kg2_M22_NM33.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM33);
				if (Disp->kg2_M22_NM34.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM34);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::CHM1A:
	
	
				if (Disp->kg2_CHM1A_NM20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM20);
				if (Disp->kg2_CHM1A_NM21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM21);
				if (Disp->kg2_CHM1A_NM22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM22);
	
				if (Disp->kg2_CHM1A_NM23.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM23);
				if (Disp->kg2_CHM1A_NM24.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM24);
				if (Disp->kg2_CHM1A_NM25.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM25);
				if (Disp->kg2_CHM1A_NM26.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM26);
				if (Disp->kg2_CHM1A_NM27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM27);
				if (Disp->kg2_CHM1A_NM28.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM28);
				if (Disp->kg2_CHM1A_NM29.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM29);
				if (Disp->kg2_CHM1A_NM30.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM30);
				if (Disp->kg2_CHM1A_NM31.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM31);
				if (Disp->kg2_CHM1A_NM32.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM32);
				if (Disp->kg2_CHM1A_NM33.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM33);
				if (Disp->kg2_CHM1A_NM34.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM34);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::CHM2A:
	
				if (Disp->kg2_CHM2A_NM11.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM11);
				if (Disp->kg2_CHM2A_NM12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM12);
				if (Disp->kg2_CHM2A_NM13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM13);
				if (Disp->kg2_CHM2A_NM14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM14);
				if (Disp->kg2_CHM2A_NM15.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM15);
				if (Disp->kg2_CHM2A_NM16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM16);
				if (Disp->kg2_CHM2A_NM17.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM17);
				if (Disp->kg2_CHM2A_NM18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM18);
				if (Disp->kg2_CHM2A_NM19.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM19);
	
				if (Disp->kg2_CHM2A_NM20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM20);
				if (Disp->kg2_CHM2A_NM21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM21);
				if (Disp->kg2_CHM2A_NM22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM22);
	
				if (Disp->kg2_CHM2A_NM23.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM23);
				if (Disp->kg2_CHM2A_NM24.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM24);
				if (Disp->kg2_CHM2A_NM25.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM25);
				if (Disp->kg2_CHM2A_NM26.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM26);
				if (Disp->kg2_CHM2A_NM27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM27);
				if (Disp->kg2_CHM2A_NM28.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM28);
				if (Disp->kg2_CHM2A_NM29.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM29);
				if (Disp->kg2_CHM2A_NM30.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM30);
				if (Disp->kg2_CHM2A_NM31.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM31);
				if (Disp->kg2_CHM2A_NM32.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM32);
				if (Disp->kg2_CHM2A_NM33.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM33);
				if (Disp->kg2_CHM2A_NM34.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM34);

		

				if (Disp->kg2_CHM2A_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);
				if (Disp->kg2_CHM2A_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_CHM2A_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_CHM2A_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_CHM2A_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_CHM2A_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_CHM2A_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);

				if (Disp->kg2_CHM2A_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);

				//if (Disp->kg2_CHM2A_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				//if (Disp->kg2_CHM2A_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				//if (Disp->kg2_CHM2A_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				//if (Disp->kg2_CHM2A_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
	
				VerticalBoxMenu->SetRenderTranslation(FVector2D(GetMenuCoordinates(pos).X, GetMenuCoordinates(pos).Y + 530));
				break;
	
			case EdopStat::CHM3A:

				if (Disp->kg2_CHM3A_M13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_13);
				if (Disp->kg2_CHM3A_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
	
				if (Disp->kg2_CHM3A_NM11.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM11);
				if (Disp->kg2_CHM3A_NM12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM12);
				if (Disp->kg2_CHM3A_NM13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM13);
				if (Disp->kg2_CHM3A_NM14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM14);
				if (Disp->kg2_CHM3A_NM15.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM15);
				if (Disp->kg2_CHM3A_NM16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM16);
				if (Disp->kg2_CHM3A_NM17.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM17);
				if (Disp->kg2_CHM3A_NM18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM18);
				if (Disp->kg2_CHM3A_NM19.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM19);
	
				if (Disp->kg2_CHM3A_NM20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM20);
				if (Disp->kg2_CHM3A_NM21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM21);
				if (Disp->kg2_CHM3A_NM22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM22);
	

	
				if (Disp->kg2_CHM3A_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);
				if (Disp->kg2_CHM3A_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_CHM3A_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_CHM3A_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_CHM3A_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_CHM3A_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_CHM3A_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);

				if (Disp->kg2_CHM3A_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);
	
				if (Disp->kg2_CHM3A_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg2_CHM3A_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg2_CHM3A_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg2_CHM3A_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(FVector2D(GetMenuCoordinates(pos).X, GetMenuCoordinates(pos).Y + 500));
				break;
	
			case EdopStat::CHM4A:

				if (Disp->kg2_CHM4A_M13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_13);
				if (Disp->kg2_CHM4A_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
	
				if (Disp->kg2_CHM4A_NM11.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM11);
				if (Disp->kg2_CHM4A_NM12.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM12);
				if (Disp->kg2_CHM4A_NM13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM13);
				if (Disp->kg2_CHM4A_NM14.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM14);
				if (Disp->kg2_CHM4A_NM15.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM15);
				if (Disp->kg2_CHM4A_NM16.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM16);
				if (Disp->kg2_CHM4A_NM17.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM17);
				if (Disp->kg2_CHM4A_NM18.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM18);
				if (Disp->kg2_CHM4A_NM19.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM19);
	
				if (Disp->kg2_CHM4A_NM20.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM20);
				if (Disp->kg2_CHM4A_NM21.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM21);
				if (Disp->kg2_CHM4A_NM22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM22);
	
				
			
	
				if (Disp->kg2_CHM4A_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);
				if (Disp->kg2_CHM4A_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_CHM4A_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_CHM4A_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_CHM4A_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_CHM4A_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_CHM4A_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);

				if (Disp->kg2_CHM4A_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);
	
				if (Disp->kg2_CHM4A_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg2_CHM4A_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg2_CHM4A_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg2_CHM4A_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(FVector2D(GetMenuCoordinates(pos).X, GetMenuCoordinates(pos).Y + 500));
				break;
	
			case EdopStat::CHM5A:
	
				if (Disp->kg2_CHM5A_M13.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_13);
				if (Disp->kg2_CHM5A_M5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_5);
	
				if (Disp->kg2_CHM5A_NM1.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1);
				if (Disp->kg2_CHM5A_NM2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2);
				if (Disp->kg2_CHM5A_NM3.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3);
				if (Disp->kg2_CHM5A_NM4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4);
				if (Disp->kg2_CHM5A_NM5.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM5);
				if (Disp->kg2_CHM5A_NM6.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM6);
				if (Disp->kg2_CHM5A_NM7.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM7);

				
				if (Disp->kg2_CHM5A_M27.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_27);

				if (Disp->kg2_CHM5A_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg2_CHM5A_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg2_CHM5A_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg2_CHM5A_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(FVector2D(GetMenuCoordinates(pos).X, GetMenuCoordinates(pos).Y + 300));
				break;
	
	#pragma endregion		
	#pragma region Exit All Svetofor
	
	
	
			case EdopStat::N1A:
	
				if (Disp->kg2_N1A_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_N1A_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
				if (Disp->kg2_N1A_CH.IsFree() && Disp->kg2.GreenKey_CH.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CH);
				if (Disp->kg2_N1A_CHD.IsFree() && Disp->kg2.GreenKey_CHD.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CHD);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::N2A:
	
				if (Disp->kg2_N2A_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_N2A_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
				if (Disp->kg2_N2A_CH.IsFree() && Disp->kg2.GreenKey_CH.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CH);
				if (Disp->kg2_N2A_CHD.IsFree() && Disp->kg2.GreenKey_CHD.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CHD);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::N3A:
	
				if (Disp->kg2_N3A_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_N3A_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
				if (Disp->kg2_N3A_CH.IsFree() && Disp->kg2.GreenKey_CH.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CH);
				if (Disp->kg2_N3A_CHD.IsFree() && Disp->kg2.GreenKey_CHD.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CHD);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::N4A:
	
				if (Disp->kg2_N4A_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_N4A_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
				if (Disp->kg2_N4A_CH.IsFree() && Disp->kg2.GreenKey_CH.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CH);
				if (Disp->kg2_N4A_CHD.IsFree() && Disp->kg2.GreenKey_CHD.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CHD);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	
			case EdopStat::N5A:
	
				if (Disp->kg2_N5A_M2.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_2);
				if (Disp->kg2_N5A_M4.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_4);
				if (Disp->kg2_N5A_CH.IsFree() && Disp->kg2.GreenKey_CH.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CH);
				if (Disp->kg2_N5A_CHD.IsFree() && Disp->kg2.GreenKey_CHD.dopstat == EdopStat::Right) VerticalBoxMenu->AddChild(But_za_CHD);
	
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	#pragma endregion		
#pragma region BackFromHill

			case EdopStat::M33:

				if (Disp->kg1_M33_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg1_M33_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg1_M33_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg1_M33_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);

				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;

			case EdopStat::M35:

				if (Disp->kg1_M35_NM1B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM1B);
				if (Disp->kg1_M35_NM2B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM2B);
				if (Disp->kg1_M35_NM3B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM3B);
				if (Disp->kg1_M35_NM4B.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_NM4B);

				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;


#pragma endregion

	#pragma region from GP
	
	#pragma region 11-19
	
			case EdopStat::NM11:
	
				if (Disp->kg2_NM11_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM11_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM11_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*	if (Disp->kg2_NM11_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
					if (Disp->kg2_NM11_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
					if (Disp->kg2_NM11_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM12:
	
				if (Disp->kg2_NM12_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM12_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM12_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*	if (Disp->kg2_NM12_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
					if (Disp->kg2_NM12_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
					if (Disp->kg2_NM12_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM13:
	
				if (Disp->kg2_NM13_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM13_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM13_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*	if (Disp->kg2_NM13_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
					if (Disp->kg2_NM13_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
					if (Disp->kg2_NM13_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM14:
	
				if (Disp->kg2_NM14_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM14_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM14_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*	if (Disp->kg2_NM14_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
					if (Disp->kg2_NM14_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
					if (Disp->kg2_NM14_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM15:
	
				if (Disp->kg2_NM15_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM15_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM15_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*		if (Disp->kg2_NM15_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
						if (Disp->kg2_NM15_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
						if (Disp->kg2_NM15_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM16:
	
				if (Disp->kg2_NM16_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM16_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM16_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*		if (Disp->kg2_NM16_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
						if (Disp->kg2_NM16_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
						if (Disp->kg2_NM16_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM17:
	
				if (Disp->kg2_NM17_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM17_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM17_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*	if (Disp->kg2_NM17_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
					if (Disp->kg2_NM17_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
					if (Disp->kg2_NM17_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM18:
	
				if (Disp->kg2_NM18_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM18_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM18_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				/*		if (Disp->kg2_NM18_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
						if (Disp->kg2_NM18_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
						if (Disp->kg2_NM18_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);*/
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM19:
	
				if (Disp->kg2_NM19_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM19_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM19_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				//if (Disp->kg2_NM19_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				//if (Disp->kg2_NM19_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				//if (Disp->kg2_NM19_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	#pragma endregion
	#pragma region 20-22
	
			case EdopStat::NM20:
	
				if (Disp->kg2_NM20_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM20_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM20_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM20_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				//if (Disp->kg2_NM20_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM20_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				//if (Disp->kg2_NM20_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				//if (Disp->kg2_NM20_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM21:
	
				if (Disp->kg2_NM21_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM21_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM21_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM21_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				//if (Disp->kg2_NM21_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM21_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				//if (Disp->kg2_NM21_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				//if (Disp->kg2_NM21_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM22:
	
				if (Disp->kg2_NM22_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM22_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
				if (Disp->kg2_NM22_CHM3A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM3A);
				if (Disp->kg2_NM22_CHM4A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM4A);
	
				//if (Disp->kg2_NM22_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM22_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
				//if (Disp->kg2_NM22_3AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_3);
				//if (Disp->kg2_NM22_4AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_4);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
	#pragma endregion
	#pragma region 23-34
			case EdopStat::NM23:
	
				if (Disp->kg2_NM23_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM23_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM23_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM23_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				/*		if (Disp->kg2_NM23_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
						if (Disp->kg2_NM23_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);*/
	
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
	
			case EdopStat::NM24:
	
				if (Disp->kg2_NM24_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM24_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM24_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM24_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM24_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM24_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM25:
	
				if (Disp->kg2_NM25_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM25_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM25_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM25_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM25_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM25_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM26:
	
				if (Disp->kg2_NM26_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM26_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM26_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM26_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM26_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM26_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM27:
	
				if (Disp->kg2_NM27_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM27_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM27_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM27_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM27_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM27_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM28:
	
				if (Disp->kg2_NM28_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM28_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM28_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM28_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM28_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM28_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM29:
	
				if (Disp->kg2_NM29_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM29_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM29_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM29_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM29_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM29_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM30:
	
				if (Disp->kg2_NM30_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM30_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM30_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM30_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM30_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM30_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
				break;
			case EdopStat::NM31:
	
				if (Disp->kg2_NM31_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM31_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM31_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM31_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM31_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM31_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				pos = GetMenuCoordinates(pos);
				pos.Y = pos.Y - 100;
				VerticalBoxMenu->SetRenderTranslation(pos);
				break;
			case EdopStat::NM32:
	
				if (Disp->kg2_NM32_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM32_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM32_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM32_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM32_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM32_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				pos = GetMenuCoordinates(pos);
				pos.Y = pos.Y - 100;
				VerticalBoxMenu->SetRenderTranslation(pos);
				break;
			case EdopStat::NM33:
	
				if (Disp->kg2_NM33_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM33_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM33_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM33_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM33_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM33_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
				pos = GetMenuCoordinates(pos);
				pos.Y = pos.Y - 100;
				VerticalBoxMenu->SetRenderTranslation(pos);
				break;
			case EdopStat::NM34:
	
				if (Disp->kg2_NM34_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
				if (Disp->kg2_NM34_CHM1A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM1A);
				if (Disp->kg2_NM34_CHM2A.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_CHM2A);
	
				if (Disp->kg2_NM34_M22.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_za_M_22);
	
				//if (Disp->kg2_NM34_1AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_1);
				//if (Disp->kg2_NM34_2AP.IsManevrFreeToBusyWay()) VerticalBoxMenu->AddChild(But_poezd_on_wayAP_2);
	
				VerticalBoxMenu->AddChild(But_Exit_Menu);
	
				pos = GetMenuCoordinates(pos);
				pos.Y = pos.Y - 100;
				VerticalBoxMenu->SetRenderTranslation(pos);
	
				break;
	
	
	#pragma endregion
	
	
	
	#pragma endregion
	#pragma region Other
			case EdopStat::CH8:
				break;
			case EdopStat::CH9:
				break;
			case EdopStat::CH10:
				break;
	
	
			case EdopStat::M28:
				break;
			case EdopStat::M29:
				break;
			case EdopStat::M30:
				break;
			case EdopStat::M31:
				break;
			case EdopStat::N8:
				break;
			case EdopStat::N9:
				break;
			case EdopStat::N10:
				break;
	
	
			case EdopStat::CHM8:
				break;
			case EdopStat::CHM9:
				break;
			case EdopStat::CHM10:
				break;
	
	
	
			case EdopStat::NM8:
				break;
			case EdopStat::NM9:
				break;
			case EdopStat::NM10:
				break;
	
			case EdopStat::PG1:
				break;
			case EdopStat::PG2:
				break;
			case EdopStat::Left:
				break;
			case EdopStat::Right:
				break;
	
			case EdopStat::MX4:
				break;
			default:
				break;
	#pragma endregion
			}
		}
		else
		{
			if (Disp->kg1_GetReadyRouter(dopstat) != nullptr)
			{
				VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
			}
	/*		else if (Disp->kg2_GetReadyRouter(dopstat) != nullptr)
			{
				VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
			}*/
			//VerticalBoxMenu->AddChild(OtmenaAllRouter);
			VerticalBoxMenu->AddChild(But_Exit_Menu);
			VerticalBoxMenu->SetRenderTranslation(pos);
			if (GetCurrentWidget() == Station::Karaganda_DSC || GetCurrentWidget() == Station::Karaganda_DSP)
			{
				if (dopstat == EdopStat::NM34) VerticalBoxMenu->SetRenderTranslation(FVector2D(pos.X, pos.Y - 100));
				if (dopstat == EdopStat::NM33) VerticalBoxMenu->SetRenderTranslation(FVector2D(pos.X, pos.Y - 80));
				if (dopstat == EdopStat::NM32) VerticalBoxMenu->SetRenderTranslation(FVector2D(pos.X, pos.Y - 40));
				if (dopstat == EdopStat::NM4B) VerticalBoxMenu->SetRenderTranslation(FVector2D(pos.X, pos.Y - 80));
			}
			else
			{
				pos = FVector2D(pos.X - 40, pos.Y - 100);
				
				
				if (dopstat == EdopStat::NM34)  pos = FVector2D(pos.X, pos.Y - 120);
				if (dopstat == EdopStat::NM33)  pos = FVector2D(pos.X , pos.Y - 80);
				if (dopstat == EdopStat::NM32)  pos = FVector2D(pos.X, pos.Y - 40);

				VerticalBoxMenu->SetRenderTranslation(pos);
			}
		}
		 
}

#pragma region Foo of router s buttons



void UKaragSortParent::Za_CH()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N1A)  SendCommToServer(Commd::N1A_CH_Create);
	if (dopstat == EdopStat::N2A)  SendCommToServer(Commd::N2A_CH_Create);
	if (dopstat == EdopStat::N3A)  SendCommToServer(Commd::N3A_CH_Create);
	if (dopstat == EdopStat::N4A)  SendCommToServer(Commd::N4A_CH_Create);
	if (dopstat == EdopStat::N5A)  SendCommToServer(Commd::N5A_CH_Create);


	ExitMenu();
}
void UKaragSortParent::Za_CHD()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganda_2, Direction::ODD)) return;

	if (dopstat == EdopStat::N1A)  SendCommToServer(Commd::N1A_CHD_Create);
	if (dopstat == EdopStat::N2A)  SendCommToServer(Commd::N2A_CHD_Create);
	if (dopstat == EdopStat::N3A)  SendCommToServer(Commd::N3A_CHD_Create);
	if (dopstat == EdopStat::N4A)  SendCommToServer(Commd::N4A_CHD_Create);
	if (dopstat == EdopStat::N5A)  SendCommToServer(Commd::N5A_CHD_Create);


	ExitMenu();
}



void UKaragSortParent::Za_CHM1A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_CHM1A_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_CHM1A_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_CHM1A_Create);

	if (dopstat == EdopStat::NM23)  SendCommToServer(Commd::NM23_CHM1A_Create);
	if (dopstat == EdopStat::NM24)  SendCommToServer(Commd::NM24_CHM1A_Create);
	if (dopstat == EdopStat::NM25)  SendCommToServer(Commd::NM25_CHM1A_Create);
	if (dopstat == EdopStat::NM26)  SendCommToServer(Commd::NM26_CHM1A_Create);
	if (dopstat == EdopStat::NM27)  SendCommToServer(Commd::NM27_CHM1A_Create);
	if (dopstat == EdopStat::NM28)  SendCommToServer(Commd::NM28_CHM1A_Create);
	if (dopstat == EdopStat::NM29)  SendCommToServer(Commd::NM29_CHM1A_Create);
	if (dopstat == EdopStat::NM30)  SendCommToServer(Commd::NM30_CHM1A_Create);
	if (dopstat == EdopStat::NM31)  SendCommToServer(Commd::NM31_CHM1A_Create);
	if (dopstat == EdopStat::NM32)  SendCommToServer(Commd::NM32_CHM1A_Create);
	if (dopstat == EdopStat::NM33)  SendCommToServer(Commd::NM33_CHM1A_Create);
	if (dopstat == EdopStat::NM34)  SendCommToServer(Commd::NM34_CHM1A_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM2A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_CHM2A_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_CHM2A_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_CHM2A_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_CHM2A_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_CHM2A_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_CHM2A_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_CHM2A_Create);
	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM2A_Create);

	if (dopstat == EdopStat::NM11)  SendCommToServer(Commd::NM11_CHM2A_Create);
	if (dopstat == EdopStat::NM12)  SendCommToServer(Commd::NM12_CHM2A_Create);
	if (dopstat == EdopStat::NM13)  SendCommToServer(Commd::NM13_CHM2A_Create);
	if (dopstat == EdopStat::NM14)  SendCommToServer(Commd::NM14_CHM2A_Create);
	if (dopstat == EdopStat::NM15)  SendCommToServer(Commd::NM15_CHM2A_Create);
	if (dopstat == EdopStat::NM16)  SendCommToServer(Commd::NM16_CHM2A_Create);
	if (dopstat == EdopStat::NM17)  SendCommToServer(Commd::NM17_CHM2A_Create);
	if (dopstat == EdopStat::NM18)  SendCommToServer(Commd::NM18_CHM2A_Create);
	if (dopstat == EdopStat::NM19)  SendCommToServer(Commd::NM19_CHM2A_Create);


	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_CHM2A_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_CHM2A_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_CHM2A_Create);

	if (dopstat == EdopStat::NM23)  SendCommToServer(Commd::NM23_CHM2A_Create);
	if (dopstat == EdopStat::NM24)  SendCommToServer(Commd::NM24_CHM2A_Create);
	if (dopstat == EdopStat::NM25)  SendCommToServer(Commd::NM25_CHM2A_Create);
	if (dopstat == EdopStat::NM26)  SendCommToServer(Commd::NM26_CHM2A_Create);
	if (dopstat == EdopStat::NM27)  SendCommToServer(Commd::NM27_CHM2A_Create);
	if (dopstat == EdopStat::NM28)  SendCommToServer(Commd::NM28_CHM2A_Create);
	if (dopstat == EdopStat::NM29)  SendCommToServer(Commd::NM29_CHM2A_Create);
	if (dopstat == EdopStat::NM30)  SendCommToServer(Commd::NM30_CHM2A_Create);
	if (dopstat == EdopStat::NM31)  SendCommToServer(Commd::NM31_CHM2A_Create);
	if (dopstat == EdopStat::NM32)  SendCommToServer(Commd::NM32_CHM2A_Create);
	if (dopstat == EdopStat::NM33)  SendCommToServer(Commd::NM33_CHM2A_Create);
	if (dopstat == EdopStat::NM34)  SendCommToServer(Commd::NM34_CHM2A_Create);



	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM2A_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_CHM2A_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_CHM2A_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_CHM2A_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_CHM2A_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM3A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();
	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_CHM3A_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_CHM3A_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_CHM3A_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_CHM3A_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_CHM3A_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_CHM3A_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_CHM3A_Create);
	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM3A_Create);

	if (dopstat == EdopStat::NM11)  SendCommToServer(Commd::NM11_CHM3A_Create);
	if (dopstat == EdopStat::NM12)  SendCommToServer(Commd::NM12_CHM3A_Create);
	if (dopstat == EdopStat::NM13)  SendCommToServer(Commd::NM13_CHM3A_Create);
	if (dopstat == EdopStat::NM14)  SendCommToServer(Commd::NM14_CHM3A_Create);
	if (dopstat == EdopStat::NM15)  SendCommToServer(Commd::NM15_CHM3A_Create);
	if (dopstat == EdopStat::NM16)  SendCommToServer(Commd::NM16_CHM3A_Create);
	if (dopstat == EdopStat::NM17)  SendCommToServer(Commd::NM17_CHM3A_Create);
	if (dopstat == EdopStat::NM18)  SendCommToServer(Commd::NM18_CHM3A_Create);
	if (dopstat == EdopStat::NM19)  SendCommToServer(Commd::NM19_CHM3A_Create);


	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_CHM3A_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_CHM3A_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_CHM3A_Create);


	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM3A_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_CHM3A_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_CHM3A_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_CHM3A_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_CHM3A_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM4A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_CHM4A_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_CHM4A_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_CHM4A_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_CHM4A_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_CHM4A_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_CHM4A_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_CHM4A_Create);

	if (dopstat == EdopStat::NM11)  SendCommToServer(Commd::NM11_CHM4A_Create);
	if (dopstat == EdopStat::NM12)  SendCommToServer(Commd::NM12_CHM4A_Create);
	if (dopstat == EdopStat::NM13)  SendCommToServer(Commd::NM13_CHM4A_Create);
	if (dopstat == EdopStat::NM14)  SendCommToServer(Commd::NM14_CHM4A_Create);
	if (dopstat == EdopStat::NM15)  SendCommToServer(Commd::NM15_CHM4A_Create);
	if (dopstat == EdopStat::NM16)  SendCommToServer(Commd::NM16_CHM4A_Create);
	if (dopstat == EdopStat::NM17)  SendCommToServer(Commd::NM17_CHM4A_Create);
	if (dopstat == EdopStat::NM18)  SendCommToServer(Commd::NM18_CHM4A_Create);
	if (dopstat == EdopStat::NM19)  SendCommToServer(Commd::NM19_CHM4A_Create);
	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM4A_Create);

	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_CHM4A_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_CHM4A_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_CHM4A_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_CHM4A_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_CHM4A_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_CHM4A_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_CHM4A_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM5A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_CHM5A_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_CHM5A_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_CHM5A_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_CHM5A_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_CHM5A_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_CHM5A_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_CHM5A_Create);
	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_CHM5A_Create);
	if (dopstat == EdopStat::M13)  SendCommToServer(Commd::M13_CHM5A_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_CHM5A_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_CHM5A_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_CHM5A_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_CHM5A_Create);


	ExitMenu();
}

void UKaragSortParent::Za_N1A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N1A_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N1A_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N1A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N1A_Create);

	ExitMenu();
}

void UKaragSortParent::Za_N2A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N2A_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N2A_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N2A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N2A_Create);

	ExitMenu();
}

void UKaragSortParent::Za_N3A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N3A_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N3A_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N3A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N3A_Create);

	ExitMenu();
}

void UKaragSortParent::Za_N4A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N4A_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N4A_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N4A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N4A_Create);

	ExitMenu();
}

void UKaragSortParent::Za_N5A()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_N5A_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_N5A_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N5A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N5A_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM1_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM1_Create);

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM1_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM1_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM1_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM1_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM2_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM2_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM2_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM2_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM2_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM2_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM3()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM3_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM3_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM3_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM3_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM3_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM3_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM4()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM4_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM4_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM4_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM4_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM4_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM4_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM5()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM5_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM5_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM5_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM5_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM5_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM5_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM6()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM6_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM6_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM6_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM6_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM6_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM6_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM7()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();


	if (dopstat == EdopStat::M24)  SendCommToServer(Commd::M24_NM7_Create);
	if (dopstat == EdopStat::M26)  SendCommToServer(Commd::M26_NM7_Create);

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM7_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM7_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM7_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM7_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM7_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM7_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M15)  SendCommToServer(Commd::M15_M2_Create);

	if (dopstat == EdopStat::N1A)  SendCommToServer(Commd::N1A_M2_Create);
	if (dopstat == EdopStat::N2A)  SendCommToServer(Commd::N2A_M2_Create);
	if (dopstat == EdopStat::N3A)  SendCommToServer(Commd::N3A_M2_Create);
	if (dopstat == EdopStat::N4A)  SendCommToServer(Commd::N4A_M2_Create);
	if (dopstat == EdopStat::N5A)  SendCommToServer(Commd::N5A_M2_Create);

	ExitMenu();
}
void UKaragSortParent::Za_M4()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M15)  SendCommToServer(Commd::M15_M4_Create);

	if (dopstat == EdopStat::N1A)  SendCommToServer(Commd::N1A_M4_Create);
	if (dopstat == EdopStat::N2A)  SendCommToServer(Commd::N2A_M4_Create);
	if (dopstat == EdopStat::N3A)  SendCommToServer(Commd::N3A_M4_Create);
	if (dopstat == EdopStat::N4A)  SendCommToServer(Commd::N4A_M4_Create);
	if (dopstat == EdopStat::N5A)  SendCommToServer(Commd::N5A_M4_Create);

	ExitMenu();
}
void UKaragSortParent::Za_M5()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_M5_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_M5_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_M5_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_M5_Create);

	ExitMenu();
}
void UKaragSortParent::Za_M12()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M5)  SendCommToServer(Commd::M5_M12_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_M12_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_M12_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_M12_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_M12_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_M12_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_M12_Create);
	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_M12_Create);

	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_M12_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_M12_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_M12_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_M12_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_M12_Create);

	ExitMenu();
}


void UKaragSortParent::Za_M13()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_M13_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_M13_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_M13_Create);

	ExitMenu();
}
void UKaragSortParent::Za_M15()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M2)  SendCommToServer(Commd::M2_M15_Create);
	if (dopstat == EdopStat::M4)  SendCommToServer(Commd::M4_M15_Create);

	ExitMenu();
}
void UKaragSortParent::Za_M22()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM23)  SendCommToServer(Commd::NM23_M22_Create);
	if (dopstat == EdopStat::NM24)  SendCommToServer(Commd::NM24_M22_Create);
	if (dopstat == EdopStat::NM25)  SendCommToServer(Commd::NM25_M22_Create);
	if (dopstat == EdopStat::NM26)  SendCommToServer(Commd::NM26_M22_Create);
	if (dopstat == EdopStat::NM27)  SendCommToServer(Commd::NM27_M22_Create);
	if (dopstat == EdopStat::NM28)  SendCommToServer(Commd::NM28_M22_Create);
	if (dopstat == EdopStat::NM29)  SendCommToServer(Commd::NM29_M22_Create);
	if (dopstat == EdopStat::NM30)  SendCommToServer(Commd::NM30_M22_Create);
	if (dopstat == EdopStat::NM31)  SendCommToServer(Commd::NM31_M22_Create);
	if (dopstat == EdopStat::NM32)  SendCommToServer(Commd::NM32_M22_Create);
	if (dopstat == EdopStat::NM33)  SendCommToServer(Commd::NM33_M22_Create);
	if (dopstat == EdopStat::NM34)  SendCommToServer(Commd::NM34_M22_Create);


	ExitMenu();
}

void UKaragSortParent::Za_M27()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_M27_Create);
	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_M27_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_M27_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_M27_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_M27_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_M27_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM11()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM11_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM11_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM11_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM12()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM12_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM12_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM12_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM13()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM13_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM13_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM13_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM14()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM14_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM14_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM14_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM15()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM15_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM15_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM15_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM16()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM16_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM16_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM16_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM17()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM17_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM17_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM17_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM18()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM18_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM18_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM18_Create);


	ExitMenu();
}

void UKaragSortParent::Za_NM19()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM19_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM19_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM19_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM20()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM20_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM20_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM20_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM20_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM21()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM21_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM21_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM21_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM21_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM22()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM22_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM22_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM22_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM22_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM23()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM23_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM23_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM23_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM24()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM24_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM24_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM24_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM25()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM25_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM25_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM25_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM26()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM26_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM26_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM26_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM27()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM27_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM27_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM27_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM28()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM28_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM28_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM28_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM29()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM29_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM29_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM29_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM30()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM30_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM30_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM30_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM31()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM31_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM31_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM31_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM32()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM32_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM32_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM32_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM33()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM33_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM33_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM33_Create);

	ExitMenu();
}

void UKaragSortParent::Za_NM34()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M22)  SendCommToServer(Commd::M22_NM34_Create);
	if (dopstat == EdopStat::CHM1A)  SendCommToServer(Commd::CHM1A_NM34_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM34_Create);

	ExitMenu();
}

void UKaragSortParent::Za_N()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1)  SendCommToServer(Commd::CHM1_N_Create);
	if (dopstat == EdopStat::CHM2)  SendCommToServer(Commd::CHM2_N_Create);
	if (dopstat == EdopStat::CHM3)  SendCommToServer(Commd::CHM3_N_Create);
	if (dopstat == EdopStat::CHM4)  SendCommToServer(Commd::CHM4_N_Create);
	if (dopstat == EdopStat::CHM5)  SendCommToServer(Commd::CHM5_N_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_N_Create);
	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_N_Create);


	ExitMenu();
}
void UKaragSortParent::Za_ND()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (!Disp->IsConturKeyReady(Station::Karaganda_1, Direction::EVEN)) return;


	if (dopstat == EdopStat::CHM1)  SendCommToServer(Commd::CHM1_ND_Create);
	if (dopstat == EdopStat::CHM2)  SendCommToServer(Commd::CHM2_ND_Create);
	if (dopstat == EdopStat::CHM3)  SendCommToServer(Commd::CHM3_ND_Create);
	if (dopstat == EdopStat::CHM4)  SendCommToServer(Commd::CHM4_ND_Create);
	if (dopstat == EdopStat::CHM5)  SendCommToServer(Commd::CHM5_ND_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_ND_Create);
	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_ND_Create);

	ExitMenu();
}


void UKaragSortParent::On_way_1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_1P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_1P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_2P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_2P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_3()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_3P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_3P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_4()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_4P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_4P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_5()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_5P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_5P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_6()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_6P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_6P_Create);


	ExitMenu();
}
void UKaragSortParent::On_way_7()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::N)  SendCommToServer(Commd::N_7P_Create);
	if (dopstat == EdopStat::ND)  SendCommToServer(Commd::ND_7P_Create);


	ExitMenu();
}


void UKaragSortParent::Za_CHM1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM1_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM1_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM1_Create);

	ExitMenu();

}
void UKaragSortParent::Za_CHM2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM2_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM2_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM2_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM3()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM3_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM3_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM3_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM4()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM4_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM4_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM4_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM5()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM5_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM5_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM5_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM6()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM6_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM6_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM6_Create);
	if (dopstat == EdopStat::M23)  SendCommToServer(Commd::M23_CHM6_Create);
	if (dopstat == EdopStat::M25)  SendCommToServer(Commd::M25_CHM6_Create);

	ExitMenu();
}
void UKaragSortParent::Za_CHM7()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_CHM7_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_CHM7_Create);
	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_CHM7_Create);
	if (dopstat == EdopStat::M23)  SendCommToServer(Commd::M23_CHM7_Create);
	if (dopstat == EdopStat::M25)  SendCommToServer(Commd::M25_CHM7_Create);

	ExitMenu();
}


void UKaragSortParent::On_wayAP_1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();



	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N1A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N1A_Create);



	ExitMenu();
}

void UKaragSortParent::On_wayAP_2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_2AP_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_2AP_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_2AP_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_2AP_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_2AP_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_2AP_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_2AP_Create);
	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N2A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N2A_Create);

	if (dopstat == EdopStat::NM11)  SendCommToServer(Commd::NM11_2AP_Create);
	if (dopstat == EdopStat::NM12)  SendCommToServer(Commd::NM12_2AP_Create);
	if (dopstat == EdopStat::NM13)  SendCommToServer(Commd::NM13_2AP_Create);
	if (dopstat == EdopStat::NM14)  SendCommToServer(Commd::NM14_2AP_Create);
	if (dopstat == EdopStat::NM15)  SendCommToServer(Commd::NM15_2AP_Create);
	if (dopstat == EdopStat::NM16)  SendCommToServer(Commd::NM16_2AP_Create);
	if (dopstat == EdopStat::NM17)  SendCommToServer(Commd::NM17_2AP_Create);
	if (dopstat == EdopStat::NM18)  SendCommToServer(Commd::NM18_2AP_Create);
	if (dopstat == EdopStat::NM19)  SendCommToServer(Commd::NM19_2AP_Create);

	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_2AP_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_2AP_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_2AP_Create);

	if (dopstat == EdopStat::NM23)  SendCommToServer(Commd::NM23_2AP_Create);
	if (dopstat == EdopStat::NM24)  SendCommToServer(Commd::NM24_2AP_Create);
	if (dopstat == EdopStat::NM25)  SendCommToServer(Commd::NM25_2AP_Create);
	if (dopstat == EdopStat::NM26)  SendCommToServer(Commd::NM26_2AP_Create);
	if (dopstat == EdopStat::NM27)  SendCommToServer(Commd::NM27_2AP_Create);
	if (dopstat == EdopStat::NM28)  SendCommToServer(Commd::NM28_2AP_Create);
	if (dopstat == EdopStat::NM29)  SendCommToServer(Commd::NM29_2AP_Create);
	if (dopstat == EdopStat::NM30)  SendCommToServer(Commd::NM30_2AP_Create);
	if (dopstat == EdopStat::NM31)  SendCommToServer(Commd::NM31_2AP_Create);
	if (dopstat == EdopStat::NM32)  SendCommToServer(Commd::NM32_2AP_Create);
	if (dopstat == EdopStat::NM33)  SendCommToServer(Commd::NM33_2AP_Create);
	if (dopstat == EdopStat::NM34)  SendCommToServer(Commd::NM34_2AP_Create);

	ExitMenu();
}
void UKaragSortParent::On_wayAP_3()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();



	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N3A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N3A_Create);



	ExitMenu();
}
void UKaragSortParent::On_wayAP_4()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_4AP_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_4AP_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_4AP_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_4AP_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_4AP_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_4AP_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_4AP_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N4A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N4A_Create);

	if (dopstat == EdopStat::NM11)  SendCommToServer(Commd::NM11_4AP_Create);
	if (dopstat == EdopStat::NM12)  SendCommToServer(Commd::NM12_4AP_Create);
	if (dopstat == EdopStat::NM13)  SendCommToServer(Commd::NM13_4AP_Create);
	if (dopstat == EdopStat::NM14)  SendCommToServer(Commd::NM14_4AP_Create);
	if (dopstat == EdopStat::NM15)  SendCommToServer(Commd::NM15_4AP_Create);
	if (dopstat == EdopStat::NM16)  SendCommToServer(Commd::NM16_4AP_Create);
	if (dopstat == EdopStat::NM17)  SendCommToServer(Commd::NM17_4AP_Create);
	if (dopstat == EdopStat::NM18)  SendCommToServer(Commd::NM18_4AP_Create);
	if (dopstat == EdopStat::NM19)  SendCommToServer(Commd::NM19_4AP_Create);

	if (dopstat == EdopStat::NM20)  SendCommToServer(Commd::NM20_4AP_Create);
	if (dopstat == EdopStat::NM21)  SendCommToServer(Commd::NM21_4AP_Create);
	if (dopstat == EdopStat::NM22)  SendCommToServer(Commd::NM22_4AP_Create);

	ExitMenu();
}
void UKaragSortParent::On_wayAP_5()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_5AP_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_5AP_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_5AP_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_5AP_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_5AP_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_5AP_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_5AP_Create);

	if (dopstat == EdopStat::CH)  SendCommToServer(Commd::CH_N5A_Create);
	if (dopstat == EdopStat::CHD)  SendCommToServer(Commd::CHD_N5A_Create);

	ExitMenu();
}


void UKaragSortParent::Za_M1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1)  SendCommToServer(Commd::CHM1_M1_Create);
	if (dopstat == EdopStat::CHM2)  SendCommToServer(Commd::CHM2_M1_Create);
	if (dopstat == EdopStat::CHM3)  SendCommToServer(Commd::CHM3_M1_Create);
	if (dopstat == EdopStat::CHM4)  SendCommToServer(Commd::CHM4_M1_Create);
	if (dopstat == EdopStat::CHM5)  SendCommToServer(Commd::CHM5_M1_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_M1_Create);
	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_M1_Create);

	if (dopstat == EdopStat::M14)  SendCommToServer(Commd::M14_M1_Create);
	if (dopstat == EdopStat::M16)  SendCommToServer(Commd::M16_M1_Create);
	if (dopstat == EdopStat::M18)  SendCommToServer(Commd::M18_M1_Create);
	if (dopstat == EdopStat::M20)  SendCommToServer(Commd::M20_M1_Create);


	ExitMenu();
}

void UKaragSortParent::Za_M3()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1)  SendCommToServer(Commd::CHM1_M3_Create);
	if (dopstat == EdopStat::CHM2)  SendCommToServer(Commd::CHM2_M3_Create);
	if (dopstat == EdopStat::CHM3)  SendCommToServer(Commd::CHM3_M3_Create);
	if (dopstat == EdopStat::CHM4)  SendCommToServer(Commd::CHM4_M3_Create);
	if (dopstat == EdopStat::CHM5)  SendCommToServer(Commd::CHM5_M3_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_M3_Create);
	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_M3_Create);

	if (dopstat == EdopStat::M14)  SendCommToServer(Commd::M14_M3_Create);
	if (dopstat == EdopStat::M16)  SendCommToServer(Commd::M16_M3_Create);
	if (dopstat == EdopStat::M18)  SendCommToServer(Commd::M18_M3_Create);
	if (dopstat == EdopStat::M20)  SendCommToServer(Commd::M20_M3_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M6()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1)  SendCommToServer(Commd::NM1_M6_Create);
	if (dopstat == EdopStat::NM2)  SendCommToServer(Commd::NM2_M6_Create);
	if (dopstat == EdopStat::NM3)  SendCommToServer(Commd::NM3_M6_Create);
	if (dopstat == EdopStat::NM4)  SendCommToServer(Commd::NM4_M6_Create);
	if (dopstat == EdopStat::NM5)  SendCommToServer(Commd::NM5_M6_Create);
	if (dopstat == EdopStat::NM6)  SendCommToServer(Commd::NM6_M6_Create);
	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_M6_Create);

	if (dopstat == EdopStat::M27)  SendCommToServer(Commd::M27_M6_Create);

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_M6_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_M6_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_M6_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_M6_Create);


	ExitMenu();

}

void UKaragSortParent::Za_M14()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M14_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_M14_Create);

	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_M14_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M16()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M16_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_M16_Create);

	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_M16_Create);


	ExitMenu();
}

void UKaragSortParent::Za_M18()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M18_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_M18_Create);

	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_M18_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M20()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M1)  SendCommToServer(Commd::M1_M20_Create);
	if (dopstat == EdopStat::M3)  SendCommToServer(Commd::M3_M20_Create);

	if (dopstat == EdopStat::M21)  SendCommToServer(Commd::M21_M20_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M21()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM1)  SendCommToServer(Commd::CHM1_M21_Create);
	if (dopstat == EdopStat::CHM2)  SendCommToServer(Commd::CHM2_M21_Create);
	if (dopstat == EdopStat::CHM3)  SendCommToServer(Commd::CHM3_M21_Create);
	if (dopstat == EdopStat::CHM4)  SendCommToServer(Commd::CHM4_M21_Create);
	if (dopstat == EdopStat::CHM5)  SendCommToServer(Commd::CHM5_M21_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_M21_Create);
	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_M21_Create);

	if (dopstat == EdopStat::M14)  SendCommToServer(Commd::M14_M21_Create);
	if (dopstat == EdopStat::M16)  SendCommToServer(Commd::M16_M21_Create);
	if (dopstat == EdopStat::M18)  SendCommToServer(Commd::M18_M21_Create);
	if (dopstat == EdopStat::M20)  SendCommToServer(Commd::M20_M21_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M23()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_M23_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_M23_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M24()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_M24_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M25()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::CHM7)  SendCommToServer(Commd::CHM7_M25_Create);
	if (dopstat == EdopStat::CHM6)  SendCommToServer(Commd::CHM6_M25_Create);

	ExitMenu();
}

void UKaragSortParent::Za_M26()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM7)  SendCommToServer(Commd::NM7_M26_Create);

	ExitMenu();
}




void UKaragSortParent::On_wayNadvig_1()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_PG1_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_PG1_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_PG1_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_PG1_Create);

	ExitMenu();
}

void UKaragSortParent::On_wayNadvig_2()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::NM1B)  SendCommToServer(Commd::NM1B_PG2_Create);
	if (dopstat == EdopStat::NM2B)  SendCommToServer(Commd::NM2B_PG2_Create);
	if (dopstat == EdopStat::NM3B)  SendCommToServer(Commd::NM3B_PG2_Create);
	if (dopstat == EdopStat::NM4B)  SendCommToServer(Commd::NM4B_PG2_Create);

	ExitMenu();
}
void UKaragSortParent::Za_NM1B()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM1B_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM1B_Create);
	if (dopstat == EdopStat::M33)  SendCommToServer(Commd::M33_NM1B_Create);
	if (dopstat == EdopStat::M35)  SendCommToServer(Commd::M35_NM1B_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM1B_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM1B_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM1B_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM1B_Create);




	ExitMenu();
}
void UKaragSortParent::Za_NM2B()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM2B_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM2B_Create);
	if (dopstat == EdopStat::M33)  SendCommToServer(Commd::M33_NM2B_Create);
	if (dopstat == EdopStat::M35)  SendCommToServer(Commd::M35_NM2B_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM1B_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM2B_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM2B_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM2B_Create);

	ExitMenu();
}
void UKaragSortParent::Za_NM3B()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM3B_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM3B_Create);
	if (dopstat == EdopStat::M33)  SendCommToServer(Commd::M33_NM3B_Create);
	if (dopstat == EdopStat::M35)  SendCommToServer(Commd::M35_NM3B_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM1B_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM3B_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM3B_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM3B_Create);

	ExitMenu();
}
void UKaragSortParent::Za_NM4B()
{
	EdopStat dopstat = kg1_Get_Name_Redact_Svetofor();

	if (dopstat == EdopStat::M12)  SendCommToServer(Commd::M12_NM4B_Create);
	if (dopstat == EdopStat::M6)  SendCommToServer(Commd::M6_NM4B_Create);
	if (dopstat == EdopStat::M33)  SendCommToServer(Commd::M33_NM4B_Create);
	if (dopstat == EdopStat::M35)  SendCommToServer(Commd::M35_NM4B_Create);
	if (dopstat == EdopStat::CHM2A)  SendCommToServer(Commd::CHM2A_NM4B_Create);
	if (dopstat == EdopStat::CHM3A)  SendCommToServer(Commd::CHM3A_NM4B_Create);
	if (dopstat == EdopStat::CHM4A)  SendCommToServer(Commd::CHM4A_NM4B_Create);
	if (dopstat == EdopStat::CHM5A)  SendCommToServer(Commd::CHM5A_NM4B_Create);

	ExitMenu();
}
#pragma endregion
#pragma region Strelki
int UKaragSortParent::kg1_Make_Strelka_Redact(int number)
{
	if (number == 1) RedactStrelka = &Disp->kg1._str1;
	else if (number == 2) RedactStrelka = &Disp->kg2._str2;
	else if (number == 3) RedactStrelka = &Disp->kg1._str3;
	else if (number == 4) RedactStrelka = &Disp->kg2._str4;
	else if (number == 5) RedactStrelka = &Disp->kg1._str5;
	else if (number == 6) RedactStrelka = &Disp->kg2._str6;
	else if (number == 7) RedactStrelka = &Disp->kg1._str7;
	else if (number == 8) RedactStrelka = &Disp->kg2._str8;
	else if (number == 9) RedactStrelka = &Disp->kg1._str9;
	else if (number == 10) RedactStrelka = &Disp->kg2._str10;
	else if (number == 11) RedactStrelka = &Disp->kg1._str11;
	else if (number == 12) RedactStrelka = &Disp->kg2._str12;
	else if (number == 13) RedactStrelka = &Disp->kg1._str13;
	else if (number == 14) RedactStrelka = &Disp->kg2._str14;
	else if (number == 15) RedactStrelka = &Disp->kg1._str15;
	else if (number == 16) RedactStrelka = &Disp->kg2._str16;
	else if (number == 17) RedactStrelka = &Disp->kg1._str17;
	else if (number == 18) RedactStrelka = &Disp->kg2._str18;
	else if (number == 19) RedactStrelka = &Disp->kg1._str19;
	else if (number == 20) RedactStrelka = &Disp->kg2._str20;
	else if (number == 21) RedactStrelka = &Disp->kg1._str21;
	else if (number == 22) RedactStrelka = &Disp->kg2._str22;
	else if (number == 23) RedactStrelka = &Disp->kg1._str23;
	else if (number == 24) RedactStrelka = &Disp->kg2._str24;
	else if (number == 25) RedactStrelka = &Disp->kg1._str25;
	else if (number == 26) RedactStrelka = &Disp->kg2._str26;
	else if (number == 27) RedactStrelka = &Disp->kg1._str27;
	else if (number == 28) RedactStrelka = &Disp->kg2._str28;
	else if (number == 29) RedactStrelka = &Disp->kg1._str29;
	else if (number == 30) RedactStrelka = &Disp->kg2._str30;
	else if (number == 31) RedactStrelka = &Disp->kg1._str31;
	else if (number == 32) RedactStrelka = &Disp->kg2._str32;
	else if (number == 33) RedactStrelka = &Disp->kg1._str33;
	else if (number == 34) RedactStrelka = &Disp->kg2._str34;
	else if (number == 35) RedactStrelka = &Disp->kg1._str35;
	else if (number == 36) RedactStrelka = &Disp->kg2._str36;
	else if (number == 37) RedactStrelka = &Disp->kg1._str37;
	else if (number == 38) RedactStrelka = &Disp->kg2._str38;
	else if (number == 39) RedactStrelka = &Disp->kg1._str39;
	else if (number == 40) RedactStrelka = &Disp->kg2._str40;
	else if (number == 41) RedactStrelka = &Disp->kg1._str41;
	else if (number == 42) RedactStrelka = &Disp->kg2._str42;
	else if (number == 43) RedactStrelka = &Disp->kg1._str43;
	else if (number == 44) RedactStrelka = &Disp->kg2._str44;
	else if (number == 45) RedactStrelka = &Disp->kg1._str45;
	else if (number == 46) RedactStrelka = &Disp->kg2._str46;
	else if (number == 47) RedactStrelka = &Disp->kg1._str47;
	else if (number == 48) RedactStrelka = &Disp->kg2._str48;
	else if (number == 50) RedactStrelka = &Disp->kg2._str50;
	else if (number == 51) RedactStrelka = &Disp->kg1._str51;
	else if (number == 52) RedactStrelka = &Disp->kg2._str52;
	else if (number == 53) RedactStrelka = &Disp->kg1._str53;
	else if (number == 54) RedactStrelka = &Disp->kg2._str54;
	else if (number == 55) RedactStrelka = &Disp->kg1._str55;
	else if (number == 56) RedactStrelka = &Disp->kg2._str56;
	else if (number == 57) RedactStrelka = &Disp->kg1._str57;
	else if (number == 58) RedactStrelka = &Disp->kg2._str58;
	else if (number == 59) RedactStrelka = &Disp->kg1._str59;
	else if (number == 60) RedactStrelka = &Disp->kg2._str60;
	else if (number == 61) RedactStrelka = &Disp->kg1._str61;
	else if (number == 62) RedactStrelka = &Disp->kg2._str62;
	else if (number == 63) RedactStrelka = &Disp->kg1._str63;
	else if (number == 64) RedactStrelka = &Disp->kg2._str64;
	else if (number == 65) RedactStrelka = &Disp->kg1._str65;
	else if (number == 66) RedactStrelka = &Disp->kg2._str66;
	else if (number == 67) RedactStrelka = &Disp->kg1._str67;
	else if (number == 68) RedactStrelka = &Disp->kg2._str68;
	else if (number == 69) RedactStrelka = &Disp->kg1._str69;
	else if (number == 70) RedactStrelka = &Disp->kg2._str70;
	else if (number == 71) RedactStrelka = &Disp->kg1._str71;
	else if (number == 72) RedactStrelka = &Disp->kg2._str72;
	else if (number == 73) RedactStrelka = &Disp->kg1._str73;
	else if (number == 74) RedactStrelka = &Disp->kg2._str74;
	else if (number == 75) RedactStrelka = &Disp->kg1._str75;
	else if (number == 76) RedactStrelka = &Disp->kg2._str76;
	else if (number == 77) RedactStrelka = &Disp->kg1._str77;
	else if (number == 78) RedactStrelka = &Disp->kg2._str78;
	else if (number == 79) RedactStrelka = &Disp->kg1._str79;
	else if (number == 80) RedactStrelka = &Disp->kg2._str80;
	else if (number == 81) RedactStrelka = &Disp->kg1._str81;
	else if (number == 82) RedactStrelka = &Disp->kg2._str82;
	else if (number == 83) RedactStrelka = &Disp->kg1._str83;
	else if (number == 84) RedactStrelka = &Disp->kg2._str84;
	else if (number == 85) RedactStrelka = &Disp->kg1._str85;
	else if (number == 86) RedactStrelka = &Disp->kg2._str86;
	else if (number == 88) RedactStrelka = &Disp->kg2._str88;
	else if (number == 90) RedactStrelka = &Disp->kg2._str90;
	else if (number == 92) RedactStrelka = &Disp->kg2._str92;
	else if (number == 94) RedactStrelka = &Disp->kg2._str94;
	else if (number == 96) RedactStrelka = &Disp->kg2._str96;
	else if (number == 98) RedactStrelka = &Disp->kg2._str98;
	else if (number == 100) RedactStrelka = &Disp->kg2._str100;

#pragma region dop

	else if (number == 87) RedactStrelka = &Disp->kg3._str87;
	else if (number == 89) RedactStrelka = &Disp->kg3._str89;
	else if (number == 91) RedactStrelka = &Disp->kg3._str91;
	else if (number == 93) RedactStrelka = &Disp->kg3._str93;
	else if (number == 95) RedactStrelka = &Disp->kg3._str95;
	else if (number == 97) RedactStrelka = &Disp->kg3._str97;
	else if (number == 99) RedactStrelka = &Disp->kg3._str99;
	else if (number == 101) RedactStrelka = &Disp->kg3._str101;
	else if (number == 103) RedactStrelka = &Disp->kg3._str103;
	else if (number == 105) RedactStrelka = &Disp->kg3._str105;
	else if (number == 107) RedactStrelka = &Disp->kg3._str107;
	else if (number == 109) RedactStrelka = &Disp->kg3._str109;
	else if (number == 111) RedactStrelka = &Disp->kg3._str111;
	else if (number == 113) RedactStrelka = &Disp->kg3._str113;
	else if (number == 115) RedactStrelka = &Disp->kg3._str115;
	else if (number == 117) RedactStrelka = &Disp->kg3._str117;
	else if (number == 119) RedactStrelka = &Disp->kg3._str119;
	else if (number == 121) RedactStrelka = &Disp->kg3._str121;
	else if (number == 123) RedactStrelka = &Disp->kg3._str123;
	else if (number == 125) RedactStrelka = &Disp->kg3._str125;
	else if (number == 127) RedactStrelka = &Disp->kg3._str127;
	else if (number == 129) RedactStrelka = &Disp->kg3._str129;
	else if (number == 131) RedactStrelka = &Disp->kg1._str131;
	else if (number == 133) RedactStrelka = &Disp->kg1._str133;
	else if (number == 135) RedactStrelka = &Disp->kg1._str135;
	else if (number == 137) RedactStrelka = &Disp->kg1._str137;
	else if (number == 301) RedactStrelka = &Disp->kg3._str301;
	else if (number == 303) RedactStrelka = &Disp->kg3._str303;
	else if (number == 305) RedactStrelka = &Disp->kg3._str305;
	else if (number == 307) RedactStrelka = &Disp->kg3._str307;



#pragma endregion


	else {
		//Disp->BeeperBad(1);
		return 0;
	}
	for (size_t i = 0; i < Disp->kg1_arrStr.size(); i++)
	{
		if (Disp->kg1_arrStr[i]->num == number) return number;
	}
	for (size_t i = 0; i < Disp->kg2_arrStr.size(); i++)
	{
		if (Disp->kg2_arrStr[i]->num == number) return number;
	}
	return 0;
}

void UKaragSortParent::kg1_RedactStrelkaToMinus()
{
	if (RedactStrelka == &Disp->kg1._str1) SendCommToServer(Commd::s1_Minus);
	if (RedactStrelka == &Disp->kg2._str2) SendCommToServer(Commd::s2_Minus);
	if (RedactStrelka == &Disp->kg1._str3) SendCommToServer(Commd::s3_Minus);
	if (RedactStrelka == &Disp->kg2._str4) SendCommToServer(Commd::s4_Minus);
	if (RedactStrelka == &Disp->kg1._str5) SendCommToServer(Commd::s5_Minus);
	if (RedactStrelka == &Disp->kg2._str6) SendCommToServer(Commd::s6_Minus);
	if (RedactStrelka == &Disp->kg1._str7) SendCommToServer(Commd::s7_Minus);
	if (RedactStrelka == &Disp->kg2._str8) SendCommToServer(Commd::s8_Minus);
	if (RedactStrelka == &Disp->kg1._str9) SendCommToServer(Commd::s9_Minus);
	if (RedactStrelka == &Disp->kg2._str10) SendCommToServer(Commd::s10_Minus);
	if (RedactStrelka == &Disp->kg1._str11) SendCommToServer(Commd::s11_Minus);
	if (RedactStrelka == &Disp->kg2._str12) SendCommToServer(Commd::s12_Minus);
	if (RedactStrelka == &Disp->kg1._str13) SendCommToServer(Commd::s13_Minus);
	if (RedactStrelka == &Disp->kg2._str14) SendCommToServer(Commd::s14_Minus);
	if (RedactStrelka == &Disp->kg1._str15) SendCommToServer(Commd::s15_Minus);
	if (RedactStrelka == &Disp->kg2._str16) SendCommToServer(Commd::s16_Minus);
	if (RedactStrelka == &Disp->kg1._str17) SendCommToServer(Commd::s17_Minus);
	if (RedactStrelka == &Disp->kg2._str18) SendCommToServer(Commd::s18_Minus);
	if (RedactStrelka == &Disp->kg1._str19) SendCommToServer(Commd::s19_Minus);
	if (RedactStrelka == &Disp->kg2._str20) SendCommToServer(Commd::s20_Minus);
	if (RedactStrelka == &Disp->kg1._str21) SendCommToServer(Commd::s21_Minus);
	if (RedactStrelka == &Disp->kg2._str22) SendCommToServer(Commd::s22_Minus);
	if (RedactStrelka == &Disp->kg1._str23) SendCommToServer(Commd::s23_Minus);
	if (RedactStrelka == &Disp->kg2._str24) SendCommToServer(Commd::s24_Minus);
	if (RedactStrelka == &Disp->kg1._str25) SendCommToServer(Commd::s25_Minus);
	if (RedactStrelka == &Disp->kg2._str26) SendCommToServer(Commd::s26_Minus);
	if (RedactStrelka == &Disp->kg1._str27) SendCommToServer(Commd::s27_Minus);
	if (RedactStrelka == &Disp->kg2._str28) SendCommToServer(Commd::s28_Minus);
	if (RedactStrelka == &Disp->kg1._str29) SendCommToServer(Commd::s29_Minus);
	if (RedactStrelka == &Disp->kg2._str30) SendCommToServer(Commd::s30_Minus);
	if (RedactStrelka == &Disp->kg1._str31) SendCommToServer(Commd::s31_Minus);
	if (RedactStrelka == &Disp->kg2._str32) SendCommToServer(Commd::s32_Minus);
	if (RedactStrelka == &Disp->kg1._str33) SendCommToServer(Commd::s33_Minus);
	if (RedactStrelka == &Disp->kg2._str34) SendCommToServer(Commd::s34_Minus);
	if (RedactStrelka == &Disp->kg1._str35) SendCommToServer(Commd::s35_Minus);
	if (RedactStrelka == &Disp->kg2._str36) SendCommToServer(Commd::s36_Minus);
	if (RedactStrelka == &Disp->kg1._str37) SendCommToServer(Commd::s37_Minus);
	if (RedactStrelka == &Disp->kg2._str38) SendCommToServer(Commd::s38_Minus);
	if (RedactStrelka == &Disp->kg1._str39) SendCommToServer(Commd::s39_Minus);
	if (RedactStrelka == &Disp->kg2._str40) SendCommToServer(Commd::s40_Minus);
	if (RedactStrelka == &Disp->kg1._str41) SendCommToServer(Commd::s41_Minus);
	if (RedactStrelka == &Disp->kg2._str42) SendCommToServer(Commd::s42_Minus);
	if (RedactStrelka == &Disp->kg1._str43) SendCommToServer(Commd::s43_Minus);
	if (RedactStrelka == &Disp->kg2._str44) SendCommToServer(Commd::s44_Minus);
	if (RedactStrelka == &Disp->kg1._str45) SendCommToServer(Commd::s45_Minus);
	if (RedactStrelka == &Disp->kg2._str46) SendCommToServer(Commd::s46_Minus);
	if (RedactStrelka == &Disp->kg1._str47) SendCommToServer(Commd::s47_Minus);
	if (RedactStrelka == &Disp->kg2._str48) SendCommToServer(Commd::s48_Minus);

	if (RedactStrelka == &Disp->kg2._str50) SendCommToServer(Commd::s50_Minus);
	if (RedactStrelka == &Disp->kg1._str51) SendCommToServer(Commd::s51_Minus);
	if (RedactStrelka == &Disp->kg2._str52) SendCommToServer(Commd::s52_Minus);
	if (RedactStrelka == &Disp->kg1._str53) SendCommToServer(Commd::s53_Minus);
	if (RedactStrelka == &Disp->kg2._str54) SendCommToServer(Commd::s54_Minus);
	if (RedactStrelka == &Disp->kg1._str55) SendCommToServer(Commd::s55_Minus);
	if (RedactStrelka == &Disp->kg2._str56) SendCommToServer(Commd::s56_Minus);
	if (RedactStrelka == &Disp->kg1._str57) SendCommToServer(Commd::s57_Minus);
	if (RedactStrelka == &Disp->kg2._str58) SendCommToServer(Commd::s58_Minus);
	if (RedactStrelka == &Disp->kg1._str59) SendCommToServer(Commd::s59_Minus);

	if (RedactStrelka == &Disp->kg2._str60) SendCommToServer(Commd::s60_Minus);
	if (RedactStrelka == &Disp->kg1._str61) SendCommToServer(Commd::s61_Minus);
	if (RedactStrelka == &Disp->kg2._str62) SendCommToServer(Commd::s62_Minus);
	if (RedactStrelka == &Disp->kg1._str63) SendCommToServer(Commd::s63_Minus);
	if (RedactStrelka == &Disp->kg2._str64) SendCommToServer(Commd::s64_Minus);
	if (RedactStrelka == &Disp->kg1._str65) SendCommToServer(Commd::s65_Minus);
	if (RedactStrelka == &Disp->kg2._str66) SendCommToServer(Commd::s66_Minus);
	if (RedactStrelka == &Disp->kg1._str67) SendCommToServer(Commd::s67_Minus);
	if (RedactStrelka == &Disp->kg2._str68) SendCommToServer(Commd::s68_Minus);
	if (RedactStrelka == &Disp->kg1._str69) SendCommToServer(Commd::s69_Minus);

	if (RedactStrelka == &Disp->kg2._str70) SendCommToServer(Commd::s70_Minus);
	if (RedactStrelka == &Disp->kg1._str71) SendCommToServer(Commd::s71_Minus);
	if (RedactStrelka == &Disp->kg2._str72) SendCommToServer(Commd::s72_Minus);
	if (RedactStrelka == &Disp->kg1._str73) SendCommToServer(Commd::s73_Minus);
	if (RedactStrelka == &Disp->kg2._str74) SendCommToServer(Commd::s74_Minus);
	if (RedactStrelka == &Disp->kg1._str75) SendCommToServer(Commd::s75_Minus);
	if (RedactStrelka == &Disp->kg2._str76) SendCommToServer(Commd::s76_Minus);
	if (RedactStrelka == &Disp->kg1._str77) SendCommToServer(Commd::s77_Minus);
	if (RedactStrelka == &Disp->kg2._str78) SendCommToServer(Commd::s78_Minus);
	if (RedactStrelka == &Disp->kg1._str79) SendCommToServer(Commd::s79_Minus);

	if (RedactStrelka == &Disp->kg2._str80) SendCommToServer(Commd::s80_Minus);
	if (RedactStrelka == &Disp->kg1._str81) SendCommToServer(Commd::s81_Minus);
	if (RedactStrelka == &Disp->kg2._str82) SendCommToServer(Commd::s82_Minus);
	if (RedactStrelka == &Disp->kg1._str83) SendCommToServer(Commd::s83_Minus);
	if (RedactStrelka == &Disp->kg2._str84) SendCommToServer(Commd::s84_Minus);
	if (RedactStrelka == &Disp->kg1._str85) SendCommToServer(Commd::s85_Minus);
	//if (RedactStrelka == &Disp->kg1._str86) SendCommToServer(Commd::s86_Minus);
	//if (RedactStrelka == &Disp->kg1._str87) SendCommToServer(Commd::s87_Minus);
	//if (RedactStrelka == &Disp->kg1._str88) SendCommToServer(Commd::s88_Minus);
	//if (RedactStrelka == &Disp->kg1._str89) SendCommToServer(Commd::s89_Minus);

	//if (RedactStrelka == &Disp->kg1._str90) SendCommToServer(Commd::s10_Minus);
	//if (RedactStrelka == &Disp->kg1._str91) SendCommToServer(Commd::s11_Minus);
	//if (RedactStrelka == &Disp->kg1._str92) SendCommToServer(Commd::s12_Minus);
	//if (RedactStrelka == &Disp->kg1._str93) SendCommToServer(Commd::s13_Minus);
	//if (RedactStrelka == &Disp->kg1._str94) SendCommToServer(Commd::s14_Minus);
	//if (RedactStrelka == &Disp->kg1._str95) SendCommToServer(Commd::s15_Minus);
	//if (RedactStrelka == &Disp->kg1._str96) SendCommToServer(Commd::s16_Minus);
	//if (RedactStrelka == &Disp->kg1._str97) SendCommToServer(Commd::s17_Minus);
	//if (RedactStrelka == &Disp->kg1._str98) SendCommToServer(Commd::s18_Minus);
	//if (RedactStrelka == &Disp->kg1._str99) SendCommToServer(Commd::s19_Minus);

#pragma region dop

	if (RedactStrelka == &Disp->kg3._str87) SendCommToServer(Commd::s87_Minus);
	if (RedactStrelka == &Disp->kg3._str89) SendCommToServer(Commd::s89_Minus);
	if (RedactStrelka == &Disp->kg3._str91) SendCommToServer(Commd::s91_Minus);
	if (RedactStrelka == &Disp->kg3._str93) SendCommToServer(Commd::s93_Minus);
	if (RedactStrelka == &Disp->kg3._str95) SendCommToServer(Commd::s95_Minus);
	if (RedactStrelka == &Disp->kg3._str97) SendCommToServer(Commd::s97_Minus);
	if (RedactStrelka == &Disp->kg3._str99) SendCommToServer(Commd::s99_Minus);
	if (RedactStrelka == &Disp->kg3._str101) SendCommToServer(Commd::s101_Minus);
	if (RedactStrelka == &Disp->kg3._str103) SendCommToServer(Commd::s103_Minus);
	if (RedactStrelka == &Disp->kg3._str105) SendCommToServer(Commd::s105_Minus);
	if (RedactStrelka == &Disp->kg3._str107) SendCommToServer(Commd::s107_Minus);
	if (RedactStrelka == &Disp->kg3._str109) SendCommToServer(Commd::s109_Minus);
	if (RedactStrelka == &Disp->kg3._str111) SendCommToServer(Commd::s111_Minus);
	if (RedactStrelka == &Disp->kg3._str113) SendCommToServer(Commd::s113_Minus);
	if (RedactStrelka == &Disp->kg3._str115) SendCommToServer(Commd::s115_Minus);
	if (RedactStrelka == &Disp->kg3._str117) SendCommToServer(Commd::s117_Minus);
	if (RedactStrelka == &Disp->kg3._str119) SendCommToServer(Commd::s119_Minus);
	if (RedactStrelka == &Disp->kg3._str121) SendCommToServer(Commd::s121_Minus);
	if (RedactStrelka == &Disp->kg3._str123) SendCommToServer(Commd::s123_Minus);
	if (RedactStrelka == &Disp->kg3._str125) SendCommToServer(Commd::s125_Minus);
	if (RedactStrelka == &Disp->kg3._str127) SendCommToServer(Commd::s127_Minus);
	if (RedactStrelka == &Disp->kg3._str129) SendCommToServer(Commd::s129_Minus);
	if (RedactStrelka == &Disp->kg1._str131) SendCommToServer(Commd::s131_Minus);
	if (RedactStrelka == &Disp->kg1._str133) SendCommToServer(Commd::s133_Minus);
	if (RedactStrelka == &Disp->kg1._str135) SendCommToServer(Commd::s135_Minus);
	if (RedactStrelka == &Disp->kg1._str137) SendCommToServer(Commd::s137_Minus);
	if (RedactStrelka == &Disp->kg3._str301) SendCommToServer(Commd::s301_Minus);
	if (RedactStrelka == &Disp->kg3._str303) SendCommToServer(Commd::s303_Minus);
	if (RedactStrelka == &Disp->kg3._str305) SendCommToServer(Commd::s305_Minus);
	if (RedactStrelka == &Disp->kg3._str307) SendCommToServer(Commd::s307_Minus);

#pragma endregion

}
void UKaragSortParent::kg1_RedactStrelkaToPlus()
{
	if (RedactStrelka == &Disp->kg1._str1) SendCommToServer(Commd::s1_Plus);
	if (RedactStrelka == &Disp->kg2._str2) SendCommToServer(Commd::s2_Plus);
	if (RedactStrelka == &Disp->kg1._str3) SendCommToServer(Commd::s3_Plus);
	if (RedactStrelka == &Disp->kg2._str4) SendCommToServer(Commd::s4_Plus);
	if (RedactStrelka == &Disp->kg1._str5) SendCommToServer(Commd::s5_Plus);
	if (RedactStrelka == &Disp->kg2._str6) SendCommToServer(Commd::s6_Plus);
	if (RedactStrelka == &Disp->kg1._str7) SendCommToServer(Commd::s7_Plus);
	if (RedactStrelka == &Disp->kg2._str8) SendCommToServer(Commd::s8_Plus);
	if (RedactStrelka == &Disp->kg1._str9) SendCommToServer(Commd::s9_Plus);
	if (RedactStrelka == &Disp->kg2._str10) SendCommToServer(Commd::s10_Plus);
	if (RedactStrelka == &Disp->kg1._str11) SendCommToServer(Commd::s11_Plus);
	if (RedactStrelka == &Disp->kg2._str12) SendCommToServer(Commd::s12_Plus);
	if (RedactStrelka == &Disp->kg1._str13) SendCommToServer(Commd::s13_Plus);
	if (RedactStrelka == &Disp->kg2._str14) SendCommToServer(Commd::s14_Plus);
	if (RedactStrelka == &Disp->kg1._str15) SendCommToServer(Commd::s15_Plus);
	if (RedactStrelka == &Disp->kg2._str16) SendCommToServer(Commd::s16_Plus);
	if (RedactStrelka == &Disp->kg1._str17) SendCommToServer(Commd::s17_Plus);
	if (RedactStrelka == &Disp->kg2._str18) SendCommToServer(Commd::s18_Plus);
	if (RedactStrelka == &Disp->kg1._str19) SendCommToServer(Commd::s19_Plus);
	if (RedactStrelka == &Disp->kg2._str20) SendCommToServer(Commd::s20_Plus);
	if (RedactStrelka == &Disp->kg1._str21) SendCommToServer(Commd::s21_Plus);
	if (RedactStrelka == &Disp->kg2._str22) SendCommToServer(Commd::s22_Plus);
	if (RedactStrelka == &Disp->kg1._str23) SendCommToServer(Commd::s23_Plus);
	if (RedactStrelka == &Disp->kg2._str24) SendCommToServer(Commd::s24_Plus);
	if (RedactStrelka == &Disp->kg1._str25) SendCommToServer(Commd::s25_Plus);
	if (RedactStrelka == &Disp->kg2._str26) SendCommToServer(Commd::s26_Plus);
	if (RedactStrelka == &Disp->kg1._str27) SendCommToServer(Commd::s27_Plus);
	if (RedactStrelka == &Disp->kg2._str28) SendCommToServer(Commd::s28_Plus);
	if (RedactStrelka == &Disp->kg1._str29) SendCommToServer(Commd::s29_Plus);
	if (RedactStrelka == &Disp->kg2._str30) SendCommToServer(Commd::s30_Plus);
	if (RedactStrelka == &Disp->kg1._str31) SendCommToServer(Commd::s31_Plus);
	if (RedactStrelka == &Disp->kg2._str32) SendCommToServer(Commd::s32_Plus);
	if (RedactStrelka == &Disp->kg1._str33) SendCommToServer(Commd::s33_Plus);
	if (RedactStrelka == &Disp->kg2._str34) SendCommToServer(Commd::s34_Plus);
	if (RedactStrelka == &Disp->kg1._str35) SendCommToServer(Commd::s35_Plus);
	if (RedactStrelka == &Disp->kg2._str36) SendCommToServer(Commd::s36_Plus);
	if (RedactStrelka == &Disp->kg1._str37) SendCommToServer(Commd::s37_Plus);
	if (RedactStrelka == &Disp->kg2._str38) SendCommToServer(Commd::s38_Plus);
	if (RedactStrelka == &Disp->kg1._str39) SendCommToServer(Commd::s39_Plus);
	if (RedactStrelka == &Disp->kg2._str40) SendCommToServer(Commd::s40_Plus);
	if (RedactStrelka == &Disp->kg1._str41) SendCommToServer(Commd::s41_Plus);
	if (RedactStrelka == &Disp->kg2._str42) SendCommToServer(Commd::s42_Plus);
	if (RedactStrelka == &Disp->kg1._str43) SendCommToServer(Commd::s43_Plus);
	if (RedactStrelka == &Disp->kg2._str44) SendCommToServer(Commd::s44_Plus);
	if (RedactStrelka == &Disp->kg1._str45) SendCommToServer(Commd::s45_Plus);
	if (RedactStrelka == &Disp->kg2._str46) SendCommToServer(Commd::s46_Plus);
	if (RedactStrelka == &Disp->kg1._str47) SendCommToServer(Commd::s47_Plus);
	if (RedactStrelka == &Disp->kg2._str48) SendCommToServer(Commd::s48_Plus);

	if (RedactStrelka == &Disp->kg2._str50) SendCommToServer(Commd::s50_Plus);
	if (RedactStrelka == &Disp->kg1._str51) SendCommToServer(Commd::s51_Plus);
	if (RedactStrelka == &Disp->kg2._str52) SendCommToServer(Commd::s52_Plus);
	if (RedactStrelka == &Disp->kg1._str53) SendCommToServer(Commd::s53_Plus);
	if (RedactStrelka == &Disp->kg2._str54) SendCommToServer(Commd::s54_Plus);
	if (RedactStrelka == &Disp->kg1._str55) SendCommToServer(Commd::s55_Plus);
	if (RedactStrelka == &Disp->kg2._str56) SendCommToServer(Commd::s56_Plus);
	if (RedactStrelka == &Disp->kg1._str57) SendCommToServer(Commd::s57_Plus);
	if (RedactStrelka == &Disp->kg2._str58) SendCommToServer(Commd::s58_Plus);
	if (RedactStrelka == &Disp->kg1._str59) SendCommToServer(Commd::s59_Plus);

	if (RedactStrelka == &Disp->kg2._str60) SendCommToServer(Commd::s60_Plus);
	if (RedactStrelka == &Disp->kg1._str61) SendCommToServer(Commd::s61_Plus);
	if (RedactStrelka == &Disp->kg2._str62) SendCommToServer(Commd::s62_Plus);
	if (RedactStrelka == &Disp->kg1._str63) SendCommToServer(Commd::s63_Plus);
	if (RedactStrelka == &Disp->kg2._str64) SendCommToServer(Commd::s64_Plus);
	if (RedactStrelka == &Disp->kg1._str65) SendCommToServer(Commd::s65_Plus);
	if (RedactStrelka == &Disp->kg2._str66) SendCommToServer(Commd::s66_Plus);
	if (RedactStrelka == &Disp->kg1._str67) SendCommToServer(Commd::s67_Plus);
	if (RedactStrelka == &Disp->kg2._str68) SendCommToServer(Commd::s68_Plus);
	if (RedactStrelka == &Disp->kg1._str69) SendCommToServer(Commd::s69_Plus);

	if (RedactStrelka == &Disp->kg2._str70) SendCommToServer(Commd::s70_Plus);
	if (RedactStrelka == &Disp->kg1._str71) SendCommToServer(Commd::s71_Plus);
	if (RedactStrelka == &Disp->kg2._str72) SendCommToServer(Commd::s72_Plus);
	if (RedactStrelka == &Disp->kg1._str73) SendCommToServer(Commd::s73_Plus);
	if (RedactStrelka == &Disp->kg2._str74) SendCommToServer(Commd::s74_Plus);
	if (RedactStrelka == &Disp->kg1._str75) SendCommToServer(Commd::s75_Plus);
	if (RedactStrelka == &Disp->kg2._str76) SendCommToServer(Commd::s76_Plus);
	if (RedactStrelka == &Disp->kg1._str77) SendCommToServer(Commd::s77_Plus);
	if (RedactStrelka == &Disp->kg2._str78) SendCommToServer(Commd::s78_Plus);
	if (RedactStrelka == &Disp->kg1._str79) SendCommToServer(Commd::s79_Plus);

	if (RedactStrelka == &Disp->kg2._str80) SendCommToServer(Commd::s80_Plus);
	if (RedactStrelka == &Disp->kg1._str81) SendCommToServer(Commd::s81_Plus);
	if (RedactStrelka == &Disp->kg2._str82) SendCommToServer(Commd::s82_Plus);
	if (RedactStrelka == &Disp->kg1._str83) SendCommToServer(Commd::s83_Plus);
	if (RedactStrelka == &Disp->kg2._str84) SendCommToServer(Commd::s84_Plus);
	if (RedactStrelka == &Disp->kg1._str85) SendCommToServer(Commd::s85_Plus);
	//if (RedactStrelka == &Disp->kg2._str86) SendCommToServer(Commd::s86_Plus);
	//if (RedactStrelka == &Disp->kg2._str87) SendCommToServer(Commd::s87_Plus);
	//if (RedactStrelka == &Disp->kg2._str88) SendCommToServer(Commd::s88_Plus);
	//if (RedactStrelka == &Disp->kg2._str89) SendCommToServer(Commd::s89_Plus);

	//if (RedactStrelka == &Disp->kg2._str90) SendCommToServer(Commd::s10_Plus);
	//if (RedactStrelka == &Disp->kg2._str91) SendCommToServer(Commd::s11_Plus);
	//if (RedactStrelka == &Disp->kg2._str92) SendCommToServer(Commd::s12_Plus);
	//if (RedactStrelka == &Disp->kg2._str93) SendCommToServer(Commd::s13_Plus);
	//if (RedactStrelka == &Disp->kg2._str94) SendCommToServer(Commd::s14_Plus);
	//if (RedactStrelka == &Disp->kg2._str95) SendCommToServer(Commd::s15_Plus);
	//if (RedactStrelka == &Disp->kg2._str96) SendCommToServer(Commd::s16_Plus);
	//if (RedactStrelka == &Disp->kg2._str97) SendCommToServer(Commd::s17_Plus);
	//if (RedactStrelka == &Disp->kg2._str98) SendCommToServer(Commd::s18_Plus);
	//if (RedactStrelka == &Disp->kg2._str99) SendCommToServer(Commd::s19_Plus);

#pragma region dop

	if (RedactStrelka == &Disp->kg3._str87) SendCommToServer(Commd::s87_Plus);
	if (RedactStrelka == &Disp->kg3._str89) SendCommToServer(Commd::s89_Plus);
	if (RedactStrelka == &Disp->kg3._str91) SendCommToServer(Commd::s91_Plus);
	if (RedactStrelka == &Disp->kg3._str93) SendCommToServer(Commd::s93_Plus);
	if (RedactStrelka == &Disp->kg3._str95) SendCommToServer(Commd::s95_Plus);
	if (RedactStrelka == &Disp->kg3._str97) SendCommToServer(Commd::s97_Plus);
	if (RedactStrelka == &Disp->kg3._str99) SendCommToServer(Commd::s99_Plus);
	if (RedactStrelka == &Disp->kg3._str101) SendCommToServer(Commd::s101_Plus);
	if (RedactStrelka == &Disp->kg3._str103) SendCommToServer(Commd::s103_Plus);
	if (RedactStrelka == &Disp->kg3._str105) SendCommToServer(Commd::s105_Plus);
	if (RedactStrelka == &Disp->kg3._str107) SendCommToServer(Commd::s107_Plus);
	if (RedactStrelka == &Disp->kg3._str109) SendCommToServer(Commd::s109_Plus);
	if (RedactStrelka == &Disp->kg3._str111) SendCommToServer(Commd::s111_Plus);
	if (RedactStrelka == &Disp->kg3._str113) SendCommToServer(Commd::s113_Plus);
	if (RedactStrelka == &Disp->kg3._str115) SendCommToServer(Commd::s115_Plus);
	if (RedactStrelka == &Disp->kg3._str117) SendCommToServer(Commd::s117_Plus);
	if (RedactStrelka == &Disp->kg3._str119) SendCommToServer(Commd::s119_Plus);
	if (RedactStrelka == &Disp->kg3._str121) SendCommToServer(Commd::s121_Plus);
	if (RedactStrelka == &Disp->kg3._str123) SendCommToServer(Commd::s123_Plus);
	if (RedactStrelka == &Disp->kg3._str125) SendCommToServer(Commd::s125_Plus);
	if (RedactStrelka == &Disp->kg3._str127) SendCommToServer(Commd::s127_Plus);
	if (RedactStrelka == &Disp->kg3._str129) SendCommToServer(Commd::s129_Plus);
	if (RedactStrelka == &Disp->kg1._str131) SendCommToServer(Commd::s131_Plus);
	if (RedactStrelka == &Disp->kg1._str133) SendCommToServer(Commd::s133_Plus);
	if (RedactStrelka == &Disp->kg1._str135) SendCommToServer(Commd::s135_Plus);
	if (RedactStrelka == &Disp->kg1._str137) SendCommToServer(Commd::s137_Plus);
	if (RedactStrelka == &Disp->kg3._str301) SendCommToServer(Commd::s301_Plus);
	if (RedactStrelka == &Disp->kg3._str303) SendCommToServer(Commd::s303_Plus);
	if (RedactStrelka == &Disp->kg3._str305) SendCommToServer(Commd::s305_Plus);
	if (RedactStrelka == &Disp->kg3._str307) SendCommToServer(Commd::s307_Plus);

#pragma endregion

	Make_Strelka_UnRedact();
}
void UKaragSortParent::kg1_RedactStrelkaToBreak()
{

	RedactStrelka->cur = ExCurator::NotControl;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
void UKaragSortParent::kg1_RedactStrelkaMakeWaitingAvaria()
{
	RedactStrelka->cur = ExCurator::WaitingAvaria;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
void UKaragSortParent::kg1_RedactStrelkaRemont()
{
	RedactStrelka->cur = ExCurator::Norm;
	RedactStrelka = nullptr;
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
void UKaragSortParent::kg1_RemontAllStrelka()
{
	for (size_t i = 0; i < Disp->kg1_arrStr.size(); i++)
	{
		Disp->kg1_arrStr[i]->cur = ExCurator::Norm;
		Disp->kg2_arrStr[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
#pragma endregion
#pragma region Svetofori

void UKaragSortParent::kg1_Make_Svetofor_Redact(EdopStat dopstat)
{
	if (dopstat == EdopStat::N) RedactSvetofor = &Disp->kg1._N;
	else if (dopstat == EdopStat::ND) RedactSvetofor = &Disp->kg1._ND;
	else if (dopstat == EdopStat::CH) RedactSvetofor = &Disp->kg2._CH;
	else if (dopstat == EdopStat::CHD) RedactSvetofor = &Disp->kg2._CHD;

	else if (dopstat == EdopStat::M1) RedactSvetofor = &Disp->kg1._M1;
	else if (dopstat == EdopStat::M2) RedactSvetofor = &Disp->kg2._M2;
	else if (dopstat == EdopStat::M3) RedactSvetofor = &Disp->kg1._M3;
	else if (dopstat == EdopStat::M4) RedactSvetofor = &Disp->kg2._M4;
	else if (dopstat == EdopStat::M5) RedactSvetofor = &Disp->kg2._M5;
	else if (dopstat == EdopStat::M6) RedactSvetofor = &Disp->kg2._M6;
	else if (dopstat == EdopStat::M7) RedactSvetofor = &Disp->kg1._M7;
	else if (dopstat == EdopStat::M8) RedactSvetofor = &Disp->kg1._M8;
	else if (dopstat == EdopStat::M9) RedactSvetofor = &Disp->kg1._M9;
	else if (dopstat == EdopStat::M11) RedactSvetofor = &Disp->kg1._M11;
	else if (dopstat == EdopStat::M10) RedactSvetofor = &Disp->kg2._M10;
	else if (dopstat == EdopStat::M12) RedactSvetofor = &Disp->kg2._M12;
	else if (dopstat == EdopStat::M13) RedactSvetofor = &Disp->kg2._M13;
	else if (dopstat == EdopStat::M14) RedactSvetofor = &Disp->kg1._M14;
	else if (dopstat == EdopStat::M15) RedactSvetofor = &Disp->kg2._M15;
	else if (dopstat == EdopStat::M16) RedactSvetofor = &Disp->kg1._M16;
	else if (dopstat == EdopStat::M18) RedactSvetofor = &Disp->kg1._M18;
	else if (dopstat == EdopStat::M20) RedactSvetofor = &Disp->kg1._M20;
	else if (dopstat == EdopStat::M21) RedactSvetofor = &Disp->kg1._M21;
	else if (dopstat == EdopStat::M22) RedactSvetofor = &Disp->kg2._M22;
	else if (dopstat == EdopStat::M27) RedactSvetofor = &Disp->kg1._M27;
	else if (dopstat == EdopStat::M29) RedactSvetofor = &Disp->kg1._M29;
	else if (dopstat == EdopStat::M31) RedactSvetofor = &Disp->kg1._M31;

	else if (dopstat == EdopStat::M33) RedactSvetofor = &Disp->kg1._M33;
	else if (dopstat == EdopStat::M35) RedactSvetofor = &Disp->kg1._M35;


	else if (dopstat == EdopStat::M23) RedactSvetofor = &Disp->kg1._M23;
	else if (dopstat == EdopStat::M24) RedactSvetofor = &Disp->kg1._M24;
	else if (dopstat == EdopStat::M25) RedactSvetofor = &Disp->kg1._M25;
	else if (dopstat == EdopStat::M26) RedactSvetofor = &Disp->kg1._M26;

	else if (dopstat == EdopStat::MG1) RedactSvetofor = &Disp->kg3._MG1;
	else if (dopstat == EdopStat::MG3) RedactSvetofor = &Disp->kg3._MG3;
	else if (dopstat == EdopStat::MG5) RedactSvetofor = &Disp->kg3._MG5;
	else if (dopstat == EdopStat::MG7) RedactSvetofor = &Disp->kg3._MG7;
	else if (dopstat == EdopStat::MG9) RedactSvetofor = &Disp->kg3._MG9;



	else if (dopstat == EdopStat::PG1) RedactSvetofor = &Disp->kg1._PG1;
	else if (dopstat == EdopStat::PG2) RedactSvetofor = &Disp->kg1._PG2;

	else if (dopstat == EdopStat::CHM1) RedactSvetofor = &Disp->kg1._CHM1;
	else if (dopstat == EdopStat::CHM2) RedactSvetofor = &Disp->kg1._CHM2;
	else if (dopstat == EdopStat::CHM3) RedactSvetofor = &Disp->kg1._CHM3;
	else if (dopstat == EdopStat::CHM4) RedactSvetofor = &Disp->kg1._CHM4;
	else if (dopstat == EdopStat::CHM5) RedactSvetofor = &Disp->kg1._CHM5;
	else if (dopstat == EdopStat::CHM6) RedactSvetofor = &Disp->kg1._CHM6;
	else if (dopstat == EdopStat::CHM7) RedactSvetofor = &Disp->kg1._CHM7;

	else if (dopstat == EdopStat::NM1) RedactSvetofor = &Disp->kg1._NM1;
	else if (dopstat == EdopStat::NM2) RedactSvetofor = &Disp->kg1._NM2;
	else if (dopstat == EdopStat::NM3) RedactSvetofor = &Disp->kg1._NM3;
	else if (dopstat == EdopStat::NM4) RedactSvetofor = &Disp->kg1._NM4;
	else if (dopstat == EdopStat::NM5) RedactSvetofor = &Disp->kg1._NM5;
	else if (dopstat == EdopStat::NM6) RedactSvetofor = &Disp->kg1._NM6;
	else if (dopstat == EdopStat::NM7) RedactSvetofor = &Disp->kg1._NM7;

	else if (dopstat == EdopStat::NM1B) RedactSvetofor = &Disp->kg1._NM1B;
	else if (dopstat == EdopStat::NM2B) RedactSvetofor = &Disp->kg1._NM2B;
	else if (dopstat == EdopStat::NM3B) RedactSvetofor = &Disp->kg1._NM3B;
	else if (dopstat == EdopStat::NM4B) RedactSvetofor = &Disp->kg1._NM4B;

	else if (dopstat == EdopStat::CHM1A) RedactSvetofor = &Disp->kg2._CHM1A;
	else if (dopstat == EdopStat::CHM2A) RedactSvetofor = &Disp->kg2._CHM2A;
	else if (dopstat == EdopStat::CHM3A) RedactSvetofor = &Disp->kg2._CHM3A;
	else if (dopstat == EdopStat::CHM4A) RedactSvetofor = &Disp->kg2._CHM4A;
	else if (dopstat == EdopStat::CHM5A) RedactSvetofor = &Disp->kg2._CHM5A;

	else if (dopstat == EdopStat::N1A) RedactSvetofor = &Disp->kg2._N1A;
	else if (dopstat == EdopStat::N2A) RedactSvetofor = &Disp->kg2._N2A;
	else if (dopstat == EdopStat::N3A) RedactSvetofor = &Disp->kg2._N3A;
	else if (dopstat == EdopStat::N4A) RedactSvetofor = &Disp->kg2._N4A;
	else if (dopstat == EdopStat::N5A) RedactSvetofor = &Disp->kg2._N5A;

	else if (dopstat == EdopStat::NM11) RedactSvetofor = &Disp->kg2._NM11;
	else if (dopstat == EdopStat::NM12) RedactSvetofor = &Disp->kg2._NM12;
	else if (dopstat == EdopStat::NM13) RedactSvetofor = &Disp->kg2._NM13;
	else if (dopstat == EdopStat::NM14) RedactSvetofor = &Disp->kg2._NM14;
	else if (dopstat == EdopStat::NM15) RedactSvetofor = &Disp->kg2._NM15;
	else if (dopstat == EdopStat::NM16) RedactSvetofor = &Disp->kg2._NM16;
	else if (dopstat == EdopStat::NM17) RedactSvetofor = &Disp->kg2._NM17;
	else if (dopstat == EdopStat::NM18) RedactSvetofor = &Disp->kg2._NM18;
	else if (dopstat == EdopStat::NM19) RedactSvetofor = &Disp->kg2._NM19;
	else if (dopstat == EdopStat::NM20) RedactSvetofor = &Disp->kg2._NM20;

	else if (dopstat == EdopStat::NM21) RedactSvetofor = &Disp->kg2._NM21;
	else if (dopstat == EdopStat::NM22) RedactSvetofor = &Disp->kg2._NM22;
	else if (dopstat == EdopStat::NM23) RedactSvetofor = &Disp->kg2._NM23;
	else if (dopstat == EdopStat::NM24) RedactSvetofor = &Disp->kg2._NM24;
	else if (dopstat == EdopStat::NM25) RedactSvetofor = &Disp->kg2._NM25;
	else if (dopstat == EdopStat::NM26) RedactSvetofor = &Disp->kg2._NM26;
	else if (dopstat == EdopStat::NM27) RedactSvetofor = &Disp->kg2._NM27;
	else if (dopstat == EdopStat::NM28) RedactSvetofor = &Disp->kg2._NM28;
	else if (dopstat == EdopStat::NM29) RedactSvetofor = &Disp->kg2._NM29;
	else if (dopstat == EdopStat::NM30) RedactSvetofor = &Disp->kg2._NM30;

	else if (dopstat == EdopStat::NM31) RedactSvetofor = &Disp->kg2._NM31;
	else if (dopstat == EdopStat::NM32) RedactSvetofor = &Disp->kg2._NM32;
	else if (dopstat == EdopStat::NM33) RedactSvetofor = &Disp->kg2._NM33;
	else if (dopstat == EdopStat::NM34) RedactSvetofor = &Disp->kg2._NM34;
}
EdopStat UKaragSortParent::kg1_Get_Name_Redact_Svetofor()
{

	if (RedactSvetofor == &Disp->kg1._N) return EdopStat::N;
	else if (RedactSvetofor == &Disp->kg1._ND) return EdopStat::ND;
	else if (RedactSvetofor == &Disp->kg2._CH) return EdopStat::CH;
	else if (RedactSvetofor == &Disp->kg2._CHD) return EdopStat::CHD;

	else if (RedactSvetofor == &Disp->kg1._M1) return EdopStat::M1;
	else if (RedactSvetofor == &Disp->kg2._M2) return EdopStat::M2;
	else if (RedactSvetofor == &Disp->kg1._M3) return EdopStat::M3;
	else if (RedactSvetofor == &Disp->kg2._M4) return EdopStat::M4;
	else if (RedactSvetofor == &Disp->kg2._M5) return EdopStat::M5;
	else if (RedactSvetofor == &Disp->kg2._M6) return EdopStat::M6;
	else if (RedactSvetofor == &Disp->kg1._M7) return EdopStat::M7;
	else if (RedactSvetofor == &Disp->kg1._M8) return EdopStat::M8;
	else if (RedactSvetofor == &Disp->kg1._M9) return EdopStat::M9;
	else if (RedactSvetofor == &Disp->kg1._M11) return EdopStat::M11;
	else if (RedactSvetofor == &Disp->kg2._M10) return EdopStat::M10;
	else if (RedactSvetofor == &Disp->kg2._M12) return EdopStat::M12;
	else if (RedactSvetofor == &Disp->kg2._M13) return EdopStat::M13;
	else if (RedactSvetofor == &Disp->kg1._M14) return EdopStat::M14;
	else if (RedactSvetofor == &Disp->kg2._M15) return EdopStat::M15;
	else if (RedactSvetofor == &Disp->kg1._M16) return EdopStat::M16;
	else if (RedactSvetofor == &Disp->kg1._M18) return EdopStat::M18;
	else if (RedactSvetofor == &Disp->kg1._M20) return EdopStat::M20;
	else if (RedactSvetofor == &Disp->kg1._M21) return EdopStat::M21;
	else if (RedactSvetofor == &Disp->kg2._M22) return EdopStat::M22;

	else if (RedactSvetofor == &Disp->kg1._M23) return EdopStat::M23;
	else if (RedactSvetofor == &Disp->kg1._M24) return EdopStat::M24;
	else if (RedactSvetofor == &Disp->kg1._M25) return EdopStat::M25;
	else if (RedactSvetofor == &Disp->kg1._M26) return EdopStat::M26;



	else if (RedactSvetofor == &Disp->kg1._M27) return EdopStat::M27;
	else if (RedactSvetofor == &Disp->kg1._M29) return EdopStat::M29;
	else if (RedactSvetofor == &Disp->kg1._M31) return EdopStat::M31;

	else if (RedactSvetofor == &Disp->kg1._M33) return EdopStat::M33;
	else if (RedactSvetofor == &Disp->kg1._M35) return EdopStat::M35;


	else if (RedactSvetofor == &Disp->kg3._MG1) return EdopStat::MG1;
	else if (RedactSvetofor == &Disp->kg3._MG3) return EdopStat::MG3;
	else if (RedactSvetofor == &Disp->kg3._MG5) return EdopStat::MG5;
	else if (RedactSvetofor == &Disp->kg3._MG7) return EdopStat::MG7;
	else if (RedactSvetofor == &Disp->kg3._MG9) return EdopStat::MG9;


	else if (RedactSvetofor == &Disp->kg1._PG1) return EdopStat::PG1;
	else if (RedactSvetofor == &Disp->kg1._PG2) return EdopStat::PG2;

	else if (RedactSvetofor == &Disp->kg1._CHM1) return EdopStat::CHM1;
	else if (RedactSvetofor == &Disp->kg1._CHM2) return EdopStat::CHM2;
	else if (RedactSvetofor == &Disp->kg1._CHM3) return EdopStat::CHM3;
	else if (RedactSvetofor == &Disp->kg1._CHM4) return EdopStat::CHM4;
	else if (RedactSvetofor == &Disp->kg1._CHM5) return EdopStat::CHM5;
	else if (RedactSvetofor == &Disp->kg1._CHM6) return EdopStat::CHM6;
	else if (RedactSvetofor == &Disp->kg1._CHM7) return EdopStat::CHM7;

	else if (RedactSvetofor == &Disp->kg1._NM1) return EdopStat::NM1;
	else if (RedactSvetofor == &Disp->kg1._NM2) return EdopStat::NM2;
	else if (RedactSvetofor == &Disp->kg1._NM3) return EdopStat::NM3;
	else if (RedactSvetofor == &Disp->kg1._NM4) return EdopStat::NM4;
	else if (RedactSvetofor == &Disp->kg1._NM5) return EdopStat::NM5;
	else if (RedactSvetofor == &Disp->kg1._NM6) return EdopStat::NM6;
	else if (RedactSvetofor == &Disp->kg1._NM7) return EdopStat::NM7;

	else if (RedactSvetofor == &Disp->kg1._NM1B) return EdopStat::NM1B;
	else if (RedactSvetofor == &Disp->kg1._NM2B) return EdopStat::NM2B;
	else if (RedactSvetofor == &Disp->kg1._NM3B) return EdopStat::NM3B;
	else if (RedactSvetofor == &Disp->kg1._NM4B) return EdopStat::NM4B;

	else if (RedactSvetofor == &Disp->kg2._CHM1A) return EdopStat::CHM1A;
	else if (RedactSvetofor == &Disp->kg2._CHM2A) return EdopStat::CHM2A;
	else if (RedactSvetofor == &Disp->kg2._CHM3A) return EdopStat::CHM3A;
	else if (RedactSvetofor == &Disp->kg2._CHM4A) return EdopStat::CHM4A;
	else if (RedactSvetofor == &Disp->kg2._CHM5A) return EdopStat::CHM5A;

	else if (RedactSvetofor == &Disp->kg2._N1A) return EdopStat::N1A;
	else if (RedactSvetofor == &Disp->kg2._N2A) return EdopStat::N2A;
	else if (RedactSvetofor == &Disp->kg2._N3A) return EdopStat::N3A;
	else if (RedactSvetofor == &Disp->kg2._N4A) return EdopStat::N4A;
	else if (RedactSvetofor == &Disp->kg2._N5A) return EdopStat::N5A;

	else if (RedactSvetofor == &Disp->kg2._NM11) return EdopStat::NM11;
	else if (RedactSvetofor == &Disp->kg2._NM12) return EdopStat::NM12;
	else if (RedactSvetofor == &Disp->kg2._NM13) return EdopStat::NM13;
	else if (RedactSvetofor == &Disp->kg2._NM14) return EdopStat::NM14;
	else if (RedactSvetofor == &Disp->kg2._NM15) return EdopStat::NM15;
	else if (RedactSvetofor == &Disp->kg2._NM16) return EdopStat::NM16;
	else if (RedactSvetofor == &Disp->kg2._NM17) return EdopStat::NM17;
	else if (RedactSvetofor == &Disp->kg2._NM18) return EdopStat::NM18;
	else if (RedactSvetofor == &Disp->kg2._NM19) return EdopStat::NM19;
	else if (RedactSvetofor == &Disp->kg2._NM20) return EdopStat::NM20;

	else if (RedactSvetofor == &Disp->kg2._NM21) return EdopStat::NM21;
	else if (RedactSvetofor == &Disp->kg2._NM22) return EdopStat::NM22;
	else if (RedactSvetofor == &Disp->kg2._NM23) return EdopStat::NM23;
	else if (RedactSvetofor == &Disp->kg2._NM24) return EdopStat::NM24;
	else if (RedactSvetofor == &Disp->kg2._NM25) return EdopStat::NM25;
	else if (RedactSvetofor == &Disp->kg2._NM26) return EdopStat::NM26;
	else if (RedactSvetofor == &Disp->kg2._NM27) return EdopStat::NM27;
	else if (RedactSvetofor == &Disp->kg2._NM28) return EdopStat::NM28;
	else if (RedactSvetofor == &Disp->kg2._NM29) return EdopStat::NM29;
	else if (RedactSvetofor == &Disp->kg2._NM30) return EdopStat::NM30;

	else if (RedactSvetofor == &Disp->kg2._NM31) return EdopStat::NM31;
	else if (RedactSvetofor == &Disp->kg2._NM32) return EdopStat::NM32;
	else if (RedactSvetofor == &Disp->kg2._NM33) return EdopStat::NM33;
	else if (RedactSvetofor == &Disp->kg2._NM34) return EdopStat::NM34;
	return EdopStat::Norm;

}



void UKaragSortParent::kg1_BrokenSvetoforMake(ExCurator cur)
{

	if (cur == ExCurator::BrokenRed)
	{
		RedactSvetofor->cur = ExCurator::BrokenRed;
	}
	if (cur == ExCurator::BrokenBlue)
	{
		RedactSvetofor->cur = ExCurator::BrokenBlue;
	}
	if (cur == ExCurator::BrokenGreen)
	{
		RedactSvetofor->cur = ExCurator::BrokenGreen;
	}
	if (cur == ExCurator::BrokenWhite)
	{
		RedactSvetofor->cur = ExCurator::BrokenWhite;
	}
	if (cur == ExCurator::BrokenYellow)
	{
		RedactSvetofor->cur = ExCurator::BrokenYellow;
	}
	Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
void UKaragSortParent::kg1_RedactSvetofor_Remont()
{
	RedactSvetofor->cur = ExCurator::Norm;
	Make_Svetofor_UnRedact();
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}
void UKaragSortParent::kg1_AllSvetofor_Remont()
{
	for (size_t i = 0; i < Disp->kg1_arrSvetofor.size(); i++)
	{
		Disp->kg1_arrSvetofor[i]->cur = ExCurator::Norm;
		Disp->kg2_arrSvetofor[i]->cur = ExCurator::Norm;
	}
	Disp->SendDataStationToAll(Station::Karaganda_1);
	Disp->SendDataStationToAll(Station::Karaganda_2);
	Disp->SendDataStationToAll(Station::Karaganda_DSP);
}


#pragma endregion