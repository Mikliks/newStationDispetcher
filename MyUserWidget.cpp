
#include "MyUserWidget.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"



//#pragma region General Foo
//
//bool UMyUserWidget::Initialize()
//{
//	Super::Initialize();
//
//	But_OtmenaOneRouter->OnClicked.AddDynamic(this, &UMyUserWidget::OtmenaOneRouter);
//
//	But_za_N->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N);
//	But_za_ND->OnClicked.AddDynamic(this, &UMyUserWidget::Za_ND);
//	But_za_CH->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH);
//	But_za_CHD->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CHD);
//	But_za_CHR->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CHR);
//
//	But_poezd_on_way_1->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_1);
//	But_poezd_on_way_2->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_2);
//	But_poezd_on_way_3->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_3);
//	But_poezd_on_way_4->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_4);
//	But_poezd_on_way_5->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_5);
//	But_poezd_on_way_6->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_6);
//	But_poezd_on_way_7->OnClicked.AddDynamic(this, &UMyUserWidget::On_way_7);
//	
//	But_za_CH_1->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH1);
//	But_za_CH_2->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH2);
//	But_za_CH_3->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH3);
//	But_za_CH_4->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH4);
//	But_za_CH_5->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH5);
//	But_za_CH_6->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH6);
//	But_za_CH_7->OnClicked.AddDynamic(this, &UMyUserWidget::Za_CH7);
//
//	But_za_N_1->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N1);
//	But_za_N_2->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N2);
//	But_za_N_3->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N3);
//	But_za_N_4->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N4);
//	But_za_N_5->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N5);
//	But_za_N_6->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N6);
//	But_za_N_7->OnClicked.AddDynamic(this, &UMyUserWidget::Za_N7);
//
//	But_za_M_1->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M1);
//	But_za_M_2->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M2);
//	But_za_M_3->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M3);
//	But_za_M_4->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M4);
//	But_za_M_5->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M5);
//	But_za_M_6->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M6);
//	But_za_M_7->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M7);
//	But_za_M_8->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M8);
//	But_za_M_9->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M9);
//	But_za_M_10->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M10);
//	But_za_M_11->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M11);
//	But_za_M_12->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M12);
//	But_za_M_13->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M13);
//	But_za_M_14->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M14);
//	But_za_M_15->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M15);
//	But_za_M_16->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M16);
//	But_za_M_17->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M17);
//	But_za_M_18->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M18);
//	But_za_M_19->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M19);
//	But_za_M_20->OnClicked.AddDynamic(this, &UMyUserWidget::Za_M20);
//
//	But_Exit_Menu->OnClicked.AddDynamic(this, &UMyUserWidget::ExitMenu);
//
//	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
//	Disp = Cast<ADisPawn>(FoundDisFawn);
//
//	return true;
//}
//void UMyUserWidget::ExitMenu()
//{
//#pragma region Get Ref (manager) on the DisPawn
//	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
//	ADisPawn* manager = Cast<ADisPawn>(FoundDisFawn);
//	if (manager == nullptr)
//	{
//		Beep(500, 500);
//	}
//#pragma endregion
//	else
//	{
//		 krz_Make_All_Strelka_UnRedact();
//		 krz_Make_All_Svetofor_UnRedact();
//		FVector2D pointSleepMenu(1000, -300);
//		VerticalBoxMenu->SetRenderTranslation(pointSleepMenu);
//		VerticalBoxMenu->ClearChildren();
//	}
//}
//
//FVector2D UMyUserWidget::GetMenuCoordinates(FVector2D pos)
//{
//	
//	//pos.Y += 65;
//	pos.Y -= (VerticalBoxMenu->GetChildrenCount()) * 30;
//	return pos;
//}
//void UMyUserWidget::CreateMenuRouter(FVector2D pos)
//{
//	FString str;	
//	//VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//
//		EdopStat dopstat =  krz_Get_Svetofor_Redact();
//		if ( krz_IsRedactSvetoforFree())
//		{
//			switch (dopstat)
//			{
//#pragma region Enter Poezd Svetofor		
//
//			case EdopStat::N:
//
//				if ( krz_N_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
//				if ( krz_N_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
//				if ( krz_N_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
//				if ( krz_N_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
//				if ( krz_N_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
//				if ( krz_N_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
//				if ( krz_N_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::ND:
//
//				if ( krz_ND_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
//				if ( krz_ND_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
//				if ( krz_ND_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
//				if ( krz_ND_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
//				if ( krz_ND_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
//				if ( krz_ND_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
//				if ( krz_ND_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH:
//
//				if ( krz_CH_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
//				if ( krz_CH_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
//				if ( krz_CH_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
//				if ( krz_CH_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
//				if ( krz_CH_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
//				if ( krz_CH_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
//				if ( krz_CH_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CHD:
//
//				if ( krz_CHD_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
//				if ( krz_CHD_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
//				if ( krz_CHD_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
//				if ( krz_CHD_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
//				if ( krz_CHD_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
//				if ( krz_CHD_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
//				if ( krz_CHD_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CHR:
//
//				if ( krz_CHR_1P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_1);
//				if ( krz_CHR_2P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_2);
//				if ( krz_CHR_3P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_3);
//				if ( krz_CHR_4P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_4);
//				if ( krz_CHR_5P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_5);
//				if ( krz_CHR_6P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_6);
//				if ( krz_CHR_7P_CheckPossCreate()) VerticalBoxMenu->AddChild(But_poezd_on_way_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//#pragma endregion
//#pragma region Manevrovie Svetofor
//			case EdopStat::M1:
//
//				if ( krz_M1_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
//				if ( krz_M1_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
//				if ( krz_M1_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
//				if ( krz_M1_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
//				if ( krz_M1_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
//				if ( krz_M1_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);
//				if ( krz_M1_CH7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M2:
//
//
//				if ( krz_M2_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M2_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M2_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M2_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M2_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M2_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M2_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M2_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M3:
//
//
//				if ( krz_M3_CH1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_1);
//				if ( krz_M3_CH2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_2);
//				if ( krz_M3_CH3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_3);
//				if ( krz_M3_CH4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_4);
//				if ( krz_M3_CH5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_5);
//				if ( krz_M3_CH6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_6);
//				if ( krz_M3_CH7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M4:
//
//				if ( krz_M4_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M4_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M4_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M4_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M4_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M4_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M4_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M4_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M5:
//
//				if ( krz_M5_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_M5_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_M5_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_M5_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_M5_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_M5_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_M5_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				if ( krz_M5_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
//				if ( krz_M5_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
//				if ( krz_M5_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M6:
//
//				if ( krz_M6_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M6_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M6_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M6_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M6_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M6_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M6_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M6_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M8:
//
//				if ( krz_M8_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M8_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M8_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M8_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M8_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M8_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M8_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M8_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M10:
//
//				if ( krz_M10_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M10_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M10_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M10_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M10_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M10_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M10_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M10_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M12:
//
//				if ( krz_M12_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M12_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M12_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M12_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M12_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M12_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M12_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M12_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M14:
//
//				if ( krz_M14_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M14_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M14_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				if ( krz_M14_N3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_3);
//				if ( krz_M14_N4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_4);
//				if ( krz_M14_N5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_5);
//				if ( krz_M14_N6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_6);
//				if ( krz_M14_N7_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_7);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//
//			case EdopStat::M16:
//
//				if ( krz_M16_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M16_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M16_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M18:
//
//				if ( krz_M18_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M18_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M18_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::M20:
//
//				if ( krz_M20_M5_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_5);
//				if ( krz_M20_N1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_1);
//				if ( krz_M20_N2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N_2);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//#pragma endregion		
//#pragma region Exit All Svetofor
//			case EdopStat::CH1:
//
//				if ( krz_CH1_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH1_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH1_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH1_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH2:
//
//				if ( krz_CH2_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH2_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH2_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH2_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH3:
//
//				if ( krz_CH3_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH3_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH3_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH3_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH4:
//
//				if ( krz_CH4_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH4_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH4_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH4_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH5:
//
//				if ( krz_CH5_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH5_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH5_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH5_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH6:
//
//				if ( krz_CH6_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH6_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH6_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH6_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::CH7:
//
//				if ( krz_CH7_N_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_N);
//				if ( krz_CH7_ND_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_ND);
//				if ( krz_CH7_M1_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_1);
//				if ( krz_CH7_M3_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_3);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N1:
//
//				if ( krz_N1_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N1_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N1_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N1_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N1_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N1_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N1_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N1_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N1_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N1_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				if ( krz_N1_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
//				if ( krz_N1_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
//				if ( krz_N1_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N2:
//
//				if ( krz_N2_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N2_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N2_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N2_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N2_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N2_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N2_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N2_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N2_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N2_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				if ( krz_N2_M16_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_16);
//				if ( krz_N2_M18_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_18);
//				if ( krz_N2_M20_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_20);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N3:
//
//				if ( krz_N3_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N3_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N3_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N3_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N3_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N3_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N3_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N3_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N3_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N3_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N4:
//
//				if ( krz_N4_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N4_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N4_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N4_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N4_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N4_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N4_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N4_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N4_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N4_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N5:
//
//				if ( krz_N5_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N5_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N5_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N5_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N5_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N5_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N5_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N5_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N5_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N5_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N6:
//
//				if ( krz_N6_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N6_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N6_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N6_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N6_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N6_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N6_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N6_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N6_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N6_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//
//			case EdopStat::N7:
//
//				if ( krz_N7_CH_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CH);
//				if ( krz_N7_CHD_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHD);
//				if ( krz_N7_CHR_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_CHR);
//				if ( krz_N7_M2_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_2);
//				if ( krz_N7_M4_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_4);
//				if ( krz_N7_M6_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_6);
//				if ( krz_N7_M8_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_8);
//				if ( krz_N7_M10_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_10);
//				if ( krz_N7_M12_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_12);
//				if ( krz_N7_M14_CheckPossCreate()) VerticalBoxMenu->AddChild(But_za_M_14);
//				VerticalBoxMenu->AddChild(But_Exit_Menu);
//				VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//				break;
//#pragma endregion		
//#pragma region Other
//			case EdopStat::CH8:
//				break;
//			case EdopStat::CH9:
//				break;
//			case EdopStat::CH10:
//				break;
//			case EdopStat::M21:
//				break;
//			case EdopStat::M22:
//				break;
//			case EdopStat::M23:
//				break;
//			case EdopStat::M24:
//				break;
//			case EdopStat::M25:
//				break;
//			case EdopStat::M26:
//				break;
//			case EdopStat::M27:
//				break;
//			case EdopStat::M28:
//				break;
//			case EdopStat::M29:
//				break;
//			case EdopStat::M30:
//				break;
//			case EdopStat::M31:
//				break;
//			case EdopStat::N8:
//				break;
//			case EdopStat::N9:
//				break;
//			case EdopStat::N10:
//				break;
//			case EdopStat::N1A:
//				break;
//			case EdopStat::N2A:
//				break;
//			case EdopStat::N3A:
//				break;
//			case EdopStat::N4A:
//				break;
//			case EdopStat::N5A:
//				break;
//			case EdopStat::CHM1:
//				break;
//			case EdopStat::CHM2:
//				break;
//			case EdopStat::CHM3:
//				break;
//			case EdopStat::CHM4:
//				break;
//			case EdopStat::CHM5:
//				break;
//			case EdopStat::CHM6:
//				break;
//			case EdopStat::CHM7:
//				break;
//			case EdopStat::CHM8:
//				break;
//			case EdopStat::CHM9:
//				break;
//			case EdopStat::CHM10:
//				break;
//			case EdopStat::CHM1A:
//				break;
//			case EdopStat::CHM2A:
//				break;
//			case EdopStat::CHM3A:
//				break;
//			case EdopStat::CHM4A:
//				break;
//			case EdopStat::CHM5A:
//				break;
//			case EdopStat::NM1B:
//				break;
//			case EdopStat::NM2B:
//				break;
//			case EdopStat::NM3B:
//				break;
//			case EdopStat::NM4B:
//				break;
//			case EdopStat::NM1:
//				break;
//			case EdopStat::NM2:
//				break;
//			case EdopStat::NM3:
//				break;
//			case EdopStat::NM4:
//				break;
//			case EdopStat::NM5:
//				break;
//			case EdopStat::NM6:
//				break;
//			case EdopStat::NM7:
//				break;
//			case EdopStat::NM8:
//				break;
//			case EdopStat::NM9:
//				break;
//			case EdopStat::NM10:
//				break;
//			case EdopStat::NM11:
//				break;
//			case EdopStat::NM12:
//				break;
//			case EdopStat::NM13:
//				break;
//			case EdopStat::NM14:
//				break;
//			case EdopStat::NM15:
//				break;
//			case EdopStat::NM16:
//				break;
//			case EdopStat::NM17:
//				break;
//			case EdopStat::NM18:
//				break;
//			case EdopStat::NM19:
//				break;
//			case EdopStat::NM20:
//				break;
//			case EdopStat::NM21:
//				break;
//			case EdopStat::NM22:
//				break;
//			case EdopStat::NM23:
//				break;
//			case EdopStat::NM24:
//				break;
//			case EdopStat::NM25:
//				break;
//			case EdopStat::NM26:
//				break;
//			case EdopStat::NM27:
//				break;
//			case EdopStat::NM28:
//				break;
//			case EdopStat::NM29:
//				break;
//			case EdopStat::NM30:
//				break;
//			case EdopStat::NM31:
//				break;
//			case EdopStat::NM32:
//				break;
//			case EdopStat::NM33:
//				break;
//			case EdopStat::NM34:
//				break;
//			case EdopStat::PG1:
//				break;
//			case EdopStat::PG2:
//				break;
//			case EdopStat::Left:
//				break;
//			case EdopStat::Right:
//				break;
//
//			case EdopStat::MX4:
//				break;
//			default:
//				break;
//#pragma endregion
//			}
//		}
//		else
//		{
//			VerticalBoxMenu->AddChild(But_OtmenaOneRouter);
//			//VerticalBoxMenu->AddChild(OtmenaAllRouter);
//			VerticalBoxMenu->AddChild(But_Exit_Menu);
//			VerticalBoxMenu->SetRenderTranslation(GetMenuCoordinates(pos));
//		}
//
//	
//	
//}
//
//#pragma endregion
//#pragma region Foo of router s buttons
//
//void UMyUserWidget::OtmenaOneRouter()
//{
//	 krz_DestroyOneRouter();
//
//	ExitMenu();
//}
//
//void UMyUserWidget::Za_N()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::CH1)  krz_CH1_N_Create();
//	if (dopstat == EdopStat::CH2)  krz_CH2_N_Create();
//	if (dopstat == EdopStat::CH3)  krz_CH3_N_Create();
//	if (dopstat == EdopStat::CH4)  krz_CH4_N_Create();
//	if (dopstat == EdopStat::CH5)  krz_CH5_N_Create();
//	if (dopstat == EdopStat::CH6)  krz_CH6_N_Create();
//	if (dopstat == EdopStat::CH7)  krz_CH7_N_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_ND()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::CH1)  krz_CH1_ND_Create();
//	if (dopstat == EdopStat::CH2)  krz_CH2_ND_Create();
//	if (dopstat == EdopStat::CH3)  krz_CH3_ND_Create();
//	if (dopstat == EdopStat::CH4)  krz_CH4_ND_Create();
//	if (dopstat == EdopStat::CH5)  krz_CH5_ND_Create();
//	if (dopstat == EdopStat::CH6)  krz_CH6_ND_Create();
//	if (dopstat == EdopStat::CH7)  krz_CH7_ND_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N1)  krz_N1_CH_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_CH_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_CH_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_CH_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_CH_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_CH_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_CH_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CHD()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N1)  krz_N1_CHD_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_CHD_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_CHD_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_CHD_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_CHD_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_CHD_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_CHD_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CHR()
//{
//
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N1)  krz_N1_CHR_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_CHR_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_CHR_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_CHR_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_CHR_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_CHR_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_CHR_Create();
//
//	ExitMenu();
//}
//
//void UMyUserWidget::On_way_1()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_1P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_1P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_1P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_1P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_1P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_2()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_2P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_2P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_2P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_2P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_2P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_3()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_3P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_3P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_3P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_3P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_3P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_4()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_4P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_4P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_4P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_4P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_4P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_5()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_5P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_5P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_5P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_5P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_5P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_6()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_6P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_6P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_6P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_6P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_6P_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::On_way_7()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::N)  krz_N_7P_Create();
//	if (dopstat == EdopStat::ND)  krz_ND_7P_Create();
//	if (dopstat == EdopStat::CH)  krz_CH_7P_Create();
//	if (dopstat == EdopStat::CHD)  krz_CHD_7P_Create();
//	if (dopstat == EdopStat::CHR)  krz_CHR_7P_Create();
//
//	ExitMenu();
//}
//
//
//void UMyUserWidget::Za_CH1()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH1_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH1_Create();
//
//	ExitMenu();
//	
//}
//void UMyUserWidget::Za_CH2()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH2_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH2_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH3()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH3_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH3_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH4()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH4_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH4_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH5()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH5_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH5_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH6()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH6_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH6_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_CH7()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M1)  krz_M1_CH7_Create();
//	if (dopstat == EdopStat::M3)  krz_M3_CH7_Create();
//
//	ExitMenu();
//}
//
//
//void UMyUserWidget::Za_N1()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N1_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N1_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N1_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N1_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N1_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N1_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N1_Create();
//	if (dopstat == EdopStat::M16)  krz_M16_N1_Create();
//	if (dopstat == EdopStat::M18)  krz_M18_N1_Create();
//	if (dopstat == EdopStat::M20)  krz_M20_N1_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N2()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N2_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N2_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N2_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N2_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N2_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N2_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N2_Create();
//	if (dopstat == EdopStat::M16)  krz_M16_N2_Create();
//	if (dopstat == EdopStat::M18)  krz_M18_N2_Create();
//	if (dopstat == EdopStat::M20)  krz_M20_N2_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N3()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N3_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N3_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N3_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N3_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N3_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N3_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N3_Create();
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N4()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N4_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N4_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N4_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N4_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N4_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N4_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N4_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N5()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N5_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N5_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N5_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N5_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N5_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N5_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N5_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N6()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N6_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N6_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N6_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N6_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N6_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N6_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N6_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_N7()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_N7_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_N7_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_N7_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_N7_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_N7_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_N7_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_N7_Create();
//
//	ExitMenu();
//}
//
//
//
//void UMyUserWidget::Za_M1()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::CH1)  krz_CH1_M1_Create();
//	if (dopstat == EdopStat::CH2)  krz_CH2_M1_Create();
//	if (dopstat == EdopStat::CH3)  krz_CH3_M1_Create();
//	if (dopstat == EdopStat::CH4)  krz_CH4_M1_Create();
//	if (dopstat == EdopStat::CH5)  krz_CH5_M1_Create();
//	if (dopstat == EdopStat::CH6)  krz_CH6_M1_Create();
//	if (dopstat == EdopStat::CH7)  krz_CH7_M1_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M2()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M2_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M2_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M2_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M2_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M2_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M2_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M2_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M2_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M3()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::CH1)  krz_CH1_M3_Create();
//	if (dopstat == EdopStat::CH2)  krz_CH2_M3_Create();
//	if (dopstat == EdopStat::CH3)  krz_CH3_M3_Create();
//	if (dopstat == EdopStat::CH4)  krz_CH4_M3_Create();
//	if (dopstat == EdopStat::CH5)  krz_CH5_M3_Create();
//	if (dopstat == EdopStat::CH6)  krz_CH6_M3_Create();
//	if (dopstat == EdopStat::CH7)  krz_CH7_M3_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M4()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M4_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M4_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M4_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M4_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M4_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M4_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M4_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M4_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M5()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M2)  krz_M2_M5_Create();
//	if (dopstat == EdopStat::M4)  krz_M4_M5_Create();
//	if (dopstat == EdopStat::M6)  krz_M6_M5_Create();
//	if (dopstat == EdopStat::M8)  krz_M8_M5_Create();
//	if (dopstat == EdopStat::M10)  krz_M10_M5_Create();
//	if (dopstat == EdopStat::M12)  krz_M12_M5_Create();
//	if (dopstat == EdopStat::M14)  krz_M14_M5_Create();
//	if (dopstat == EdopStat::M16)  krz_M16_M5_Create();
//	if (dopstat == EdopStat::M18)  krz_M18_M5_Create();
//	if (dopstat == EdopStat::M20)  krz_M20_M5_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M6()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M6_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M6_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M6_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M6_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M6_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M6_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M6_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M6_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M7()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M8()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M8_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M8_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M8_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M8_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M8_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M8_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M8_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M8_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M9()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M10()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M10_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M10_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M10_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M10_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M10_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M10_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M10_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M10_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M11()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M12()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M12_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M12_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M12_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M12_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M12_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M12_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M12_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M12_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M13()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M14()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M14_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M14_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M14_Create();
//	if (dopstat == EdopStat::N3)  krz_N3_M14_Create();
//	if (dopstat == EdopStat::N4)  krz_N4_M14_Create();
//	if (dopstat == EdopStat::N5)  krz_N5_M14_Create();
//	if (dopstat == EdopStat::N6)  krz_N6_M14_Create();
//	if (dopstat == EdopStat::N7)  krz_N7_M14_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M15()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M16()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M16_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M16_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M16_Create();
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M17()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M18()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M18_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M18_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M18_Create();
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M19()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//
//
//	ExitMenu();
//}
//void UMyUserWidget::Za_M20()
//{
//	EdopStat dopstat =  krz_Get_Svetofor_Redact();
//
//	if (dopstat == EdopStat::M5)  krz_M5_M20_Create();
//	if (dopstat == EdopStat::N1)  krz_N1_M20_Create();
//	if (dopstat == EdopStat::N2)  krz_N2_M20_Create();
//
//	ExitMenu();
//}
//
//#pragma endregion
//
//
//
//#pragma region Start
//void UMyUserWidget::krz_CheckerOfStation()
//{
//
//#pragma region Twice Strelki
//
//	if (Disp->krz._str1.stat == EAStat::Plus && Disp->krz._str3.stat == EAStat::Minus) ToMinus(Disp->krz._str1);
//	if (Disp->krz._str1.stat == EAStat::Minus && Disp->krz._str3.stat == EAStat::Plus) ToPlus(Disp->krz._str1);
//
//	if (Disp->krz._str5.stat == EAStat::Plus && Disp->krz._str7.stat == EAStat::Minus) ToMinus(Disp->krz._str5);
//	if (Disp->krz._str5.stat == EAStat::Minus && Disp->krz._str7.stat == EAStat::Plus) ToPlus(Disp->krz._str5);
//
//	if (Disp->krz._str12.stat == EAStat::Plus && Disp->krz._str14.stat == EAStat::Minus) ToMinus(Disp->krz._str12);
//	if (Disp->krz._str12.stat == EAStat::Minus && Disp->krz._str14.stat == EAStat::Plus) ToPlus(Disp->krz._str12);
//
//	if (Disp->krz._str16.stat == EAStat::Plus && Disp->krz._str18.stat == EAStat::Minus) ToMinus(Disp->krz._str16);
//	if (Disp->krz._str16.stat == EAStat::Minus && Disp->krz._str18.stat == EAStat::Plus) ToPlus(Disp->krz._str16);
//
//	if (Disp->krz._str26.stat == EAStat::Plus && Disp->krz._str28.stat == EAStat::Minus) ToMinus(Disp->krz._str26);
//	if (Disp->krz._str26.stat == EAStat::Minus && Disp->krz._str28.stat == EAStat::Plus) ToPlus(Disp->krz._str26);
//
//#pragma endregion
//#pragma region Green  Keys
//#pragma region N
//
//	if (Disp->krz.GreenKey_N.stat == EAStat::Red
//		&& Disp->krz_N_KARABAS.IsFree()
//		&& Disp->krz_KARABAS_N.IsFree()
//		&& Disp->krb_CHD_KARAGANOZEK.IsFree()
//		&& Disp->krb_KARAGANOZEK_CHD.IsFree()
//		)
//	{
//		Disp->krz.GreenKey_N.stat = EAStat::Green;
//		Disp->SendToServer();
//	}
//	if (Disp->krz.GreenKey_N.stat == EAStat::Green
//		&& (!Disp->krz_N_KARABAS.IsFree()
//			|| !Disp->krz_KARABAS_N.IsFree()
//			|| !Disp->krb_CHD_KARAGANOZEK.IsFree()
//			|| !Disp->krb_KARAGANOZEK_CHD.IsFree()
//			))
//	{
//		Disp->krz.GreenKey_N.stat = EAStat::Red;
//		Disp->SendToServer();
//	}
//
//#pragma endregion
//#pragma region ND
//	if (Disp->krz.GreenKey_ND.stat == EAStat::Red
//		&& Disp->krz_ND_KARABAS.IsFree()
//		&& Disp->krz_KARABAS_ND.IsFree()
//		&& Disp->krb_CH_KARAGANOZEK.IsFree()
//		&& Disp->krb_KARAGANOZEK_CH.IsFree()
//		)
//	{
//		Disp->krz.GreenKey_ND.stat = EAStat::Green;
//		Disp->SendToServer();
//	}
//	if (Disp->krz.GreenKey_ND.stat == EAStat::Green
//		&& (!Disp->krz_ND_KARABAS.IsFree()
//			|| !Disp->krz_KARABAS_ND.IsFree()
//			|| !Disp->krb_CH_KARAGANOZEK.IsFree()
//			|| !Disp->krb_KARAGANOZEK_CH.IsFree()
//			))
//	{
//		Disp->krz.GreenKey_ND.stat = EAStat::Red;
//		Disp->SendToServer();
//	}
//#pragma endregion
//#pragma region CH
//	if (Disp->krz.GreenKey_CH.stat == EAStat::Red
//		&& Disp->krz_CH_KARAGANDA.IsFree()
//		&& Disp->krz_KARAGANDA_CH.IsFree()
//		&& Disp->kg_ND_KARAGANOZEK.IsFree()
//		&& Disp->kg_KARAGANOZEK_ND.IsFree()
//		)
//	{
//		Disp->krz.GreenKey_CH.stat = EAStat::Green;
//		Disp->SendToServer();
//	}
//	if (Disp->krz.GreenKey_CH.stat == EAStat::Green
//		&& (!Disp->krz_CH_KARAGANDA.IsFree()
//			|| !Disp->krz_KARAGANDA_CH.IsFree()
//			|| !Disp->kg_ND_KARAGANOZEK.IsFree()
//			|| !Disp->kg_KARAGANOZEK_ND.IsFree()
//			))
//	{
//		Disp->krz.GreenKey_CH.stat = EAStat::Red;
//		Disp->SendToServer();
//	}
//#pragma endregion
//#pragma region CHD
//	if (Disp->krz.GreenKey_CHD.stat == EAStat::Red
//		&& Disp->krz_CHD_KARAGANDA.IsFree()
//		&& Disp->krz_KARAGANDA_CHD.IsFree()
//		&& Disp->kg_N_KARAGANOZEK.IsFree()
//		&& Disp->kg_KARAGANOZEK_N.IsFree()
//		)
//	{
//		Disp->krz.GreenKey_CHD.stat = EAStat::Green;
//		Disp->SendToServer();
//	}
//	if (Disp->krz.GreenKey_CHD.stat == EAStat::Green
//		&& (!Disp->krz_CHD_KARAGANDA.IsFree()
//			|| !Disp->krz_KARAGANDA_CHD.IsFree()
//			|| !Disp->kg_N_KARAGANOZEK.IsFree()
//			|| !Disp->kg_KARAGANOZEK_N.IsFree()
//			))
//	{
//		Disp->krz.GreenKey_CHD.stat = EAStat::Red;
//		Disp->SendToServer();
//	}
//#pragma endregion
//#pragma region CHR
//	if (Disp->krz.GreenKey_CHR.stat == EAStat::Red
//		&& Disp->krz_CHR_OUT.IsFree()
//		&& Disp->krz_OUT_CHR.IsFree()
//		)
//	{
//		Disp->krz.GreenKey_CHR.stat = EAStat::Green;
//		Disp->SendToServer();
//	}
//	if (Disp->krz.GreenKey_CHR.stat == EAStat::Green
//		&& (!Disp->krz_CHR_OUT.IsFree()
//			|| !Disp->krz_OUT_CHR.IsFree()
//			))
//	{
//		Disp->krz.GreenKey_CHR.stat = EAStat::Red;
//		Disp->SendToServer();
//	}
//#pragma endregion
//#pragma endregion
//
//
//}
//void UMyUserWidget::krz_Hand_Direct()
//{
//	Disp->krz.DU.stat = EAStat::Hand_direct;
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_Distans_Direct()
//{
//	Disp->krz.DU.stat = EAStat::Distans_direct;
//	Disp->SendToServer();
//}
//
//
//
//
//#pragma endregion
//
//#pragma region Routers
//
//
//
//#pragma region Routers: Impl: CheckPossCreate
//#pragma region from N
//bool UMyUserWidget::krz_N_1P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_1P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_2P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_2P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_3P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_3P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_4P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_4P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_5P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_5P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_6P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_6P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N_7P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N_7P.IsFree()) return  false;
//	return true;
//}
//
//#pragma endregion
//#pragma region from ND
//bool UMyUserWidget::krz_ND_1P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_1P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_2P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_2P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_3P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_3P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_4P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_4P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_5P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_5P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_6P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_6P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_ND_7P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_ND_7P.IsFree()) return  false;
//	return true;
//}
//
//#pragma endregion
//#pragma region from CH
//bool UMyUserWidget::krz_CH_1P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_1P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_2P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_2P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_3P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_3P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_4P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_4P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_5P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_5P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_6P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_6P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH_7P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH_7P.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CHD
//bool UMyUserWidget::krz_CHD_1P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_1P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_2P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_2P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_3P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_3P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_4P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_4P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_5P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_5P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_6P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_6P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHD_7P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHD_7P.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CHR
//bool UMyUserWidget::krz_CHR_1P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_1P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_2P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_2P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_3P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_3P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_4P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_4P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_5P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_5P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_6P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_6P.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CHR_7P_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CHR_7P.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from M1
//bool UMyUserWidget::krz_M1_CH1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M1_CH7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M1_CH7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M1_CH7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M2
//bool UMyUserWidget::krz_M2_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M2_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M2_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M2_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M3
//bool UMyUserWidget::krz_M3_CH1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M3_CH7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M3_CH7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M3_CH7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M4
//bool UMyUserWidget::krz_M4_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M4_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M4_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M4_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M5
//bool UMyUserWidget::krz_M5_M2_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M4_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M6_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M8_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M10_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M12_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M14_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M16_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M16.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M18_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M18.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M5_M20_CheckPossCreate()
//{
//	if (!Disp->krz_M5_M20.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from M6
//bool UMyUserWidget::krz_M6_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M6_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M6_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M6_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M10
//bool UMyUserWidget::krz_M10_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M10_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M10_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M10_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M12
//bool UMyUserWidget::krz_M12_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M12_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M12_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M12_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M14
//bool UMyUserWidget::krz_M14_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M14_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M14_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M14_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M16
//bool UMyUserWidget::krz_M16_M5_CheckPossCreate()
//{
//	if (!Disp->krz_M16_M5.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M16_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M16_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M16_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M16_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M16_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M16_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M18
//bool UMyUserWidget::krz_M18_M5_CheckPossCreate()
//{
//	if (!Disp->krz_M18_M5.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M18_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M18_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M18_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M18_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M18_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M18_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M20
//
//bool UMyUserWidget::krz_M20_M5_CheckPossCreate()
//{
//	if (!Disp->krz_M20_M5.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_M20_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M20_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M20_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M20_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M20_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M20_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from M8
//bool UMyUserWidget::krz_M8_N1_CheckPossCreate()
//{
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N1.IsFree()) return  true;
//	}
//	else if (Disp->krz._w1.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N1.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N2_CheckPossCreate()
//{
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N2.IsFree()) return  true;
//	}
//	else if (Disp->krz._w2.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N2.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N3_CheckPossCreate()
//{
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N3.IsFree()) return  true;
//	}
//	else if (Disp->krz._w3.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N3.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N4_CheckPossCreate()
//{
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N4.IsFree()) return  true;
//	}
//	else if (Disp->krz._w4.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N4.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N5_CheckPossCreate()
//{
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N5.IsFree()) return  true;
//	}
//	else if (Disp->krz._w5.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N6_CheckPossCreate()
//{
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N6.IsFree()) return  true;
//	}
//	else if (Disp->krz._w6.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N6.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_N7_CheckPossCreate()
//{
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_N7.IsFree()) return  true;
//	}
//	else if (Disp->krz._w7.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_N7.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//bool UMyUserWidget::krz_M8_M5_CheckPossCreate()
//{
//	if (Disp->krz._M5_tupic.stat == EAStat::Free)
//	{
//		if (Disp->krz_M8_M5.IsFree()) return  true;
//	}
//	else if (Disp->krz._M5_tupic.stat == EAStat::Busy)
//	{
//		if (Disp->krz_M8_M5.IsManevrFreeToBusyWay()) return  true;
//	}
//	return false;
//}
//#pragma endregion
//#pragma region from CH1
//bool UMyUserWidget::krz_CH1_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH1_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH1_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH1_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH1_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH1_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH1_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH1_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH2
//bool UMyUserWidget::krz_CH2_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH2_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH2_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH2_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH2_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH2_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH2_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH2_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH3
//bool UMyUserWidget::krz_CH3_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH3_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH3_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH3_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH3_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH3_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH3_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH3_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH4
//bool UMyUserWidget::krz_CH4_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH4_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH4_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH4_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH4_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH4_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH4_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH4_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH5
//bool UMyUserWidget::krz_CH5_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH5_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH5_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH5_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH5_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH5_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH5_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH5_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH6
//bool UMyUserWidget::krz_CH6_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH6_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH6_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH6_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH6_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH6_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH6_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH6_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from CH7
//bool UMyUserWidget::krz_CH7_M1_CheckPossCreate()
//{
//	if (!Disp->krz_CH7_M1.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH7_M3_CheckPossCreate()
//{
//	if (!Disp->krz_CH7_M3.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH7_N_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_N.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH7_N.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_CH7_ND_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Right) return false;
//	if (!Disp->krz_CH7_ND.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N1
//bool UMyUserWidget::krz_N1_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M16_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M16.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M18_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M18.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_M20_CheckPossCreate()
//{
//	if (!Disp->krz_N1_M20.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N1_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N1_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N1_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N1_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N2
//bool UMyUserWidget::krz_N2_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M16_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M16.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M18_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M18.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_M20_CheckPossCreate()
//{
//	if (!Disp->krz_N2_M20.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N2_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N2_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N2_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N2_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N3
//bool UMyUserWidget::krz_N3_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N3_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N3_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N3_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N3_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N3_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N4
//bool UMyUserWidget::krz_N4_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N4_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N4_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N4_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N4_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N4_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N5
//bool UMyUserWidget::krz_N5_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N5_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N5_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N5_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N5_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N5_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N6
//bool UMyUserWidget::krz_N6_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N6_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N6_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N6_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N6_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N6_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region from N7
//bool UMyUserWidget::krz_N7_M2_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M2.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M4_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M4.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M6_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M6.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M8_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M8.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M10_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M10.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M12_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M12.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_M14_CheckPossCreate()
//{
//	if (!Disp->krz_N7_M14.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_CH_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N7_CH.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_CHD_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N7_CHD.IsFree()) return  false;
//	return true;
//}
//bool UMyUserWidget::krz_N7_CHR_CheckPossCreate()
//{
//	if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left) return false;
//	if (!Disp->krz_N7_CHR.IsFree()) return  false;
//	return true;
//}
//#pragma endregion
//#pragma region OUT_s
//
//#pragma endregion
//#pragma endregion
//#pragma region Routers: Impl: Create
//#pragma region from N
//void UMyUserWidget::krz_N_1P_Create()
//{
//
//	Disp->krz_N_1P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_1P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_2P_Create()
//{
//
//	Disp->krz_N_2P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_2P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToPlus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_3P_Create()
//{
//
//	Disp->krz_N_3P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_3P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str11);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_4P_Create()
//{
//
//	Disp->krz_N_4P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_4P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str9);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_5P_Create()
//{
//
//	Disp->krz_N_5P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_5P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToPlus(Disp->krz._str15);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_6P_Create()
//{
//
//	Disp->krz_N_6P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_6P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_7P_Create()
//{
//
//	Disp->krz_N_7P.ToRouted(EdopStat::N);
//	std::thread t(&UMyUserWidget::krz_N_7P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//
//#pragma endregion
//#pragma region from ND
//void UMyUserWidget::krz_ND_1P_Create()
//{
//
//	Disp->krz_ND_1P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_1P_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_2P_Create()
//{
//
//	Disp->krz_ND_2P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_2P_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToPlus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_3P_Create()
//{
//
//	Disp->krz_ND_3P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_3P_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str11);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_4P_Create()
//{
//
//	Disp->krz_ND_4P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_4P_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str9);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_5P_Create()
//{
//
//	Disp->krz_ND_5P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_5P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str15);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_6P_Create()
//{
//
//	Disp->krz_ND_6P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_6P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_7P_Create()
//{
//
//	Disp->krz_ND_7P.ToRouted(EdopStat::ND);
//	std::thread t(&UMyUserWidget::krz_ND_7P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//
//#pragma endregion
//#pragma region from CH
//void UMyUserWidget::krz_CH_1P_Create()
//{
//
//	Disp->krz_CH_1P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_1P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_2P_Create()
//{
//
//	Disp->krz_CH_2P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_2P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_3P_Create()
//{
//
//	Disp->krz_CH_3P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_3P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_4P_Create()
//{
//
//	Disp->krz_CH_4P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_4P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_5P_Create()
//{
//
//	Disp->krz_CH_5P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_5P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_6P_Create()
//{
//
//	Disp->krz_CH_6P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_6P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_7P_Create()
//{
//
//	Disp->krz_CH_7P.ToRouted(EdopStat::CH);
//	std::thread t(&UMyUserWidget::krz_CH_7P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CHD
//void UMyUserWidget::krz_CHD_1P_Create()
//{
//
//	Disp->krz_CHD_1P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_1P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_2P_Create()
//{
//
//	Disp->krz_CHD_2P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_2P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_3P_Create()
//{
//
//	Disp->krz_CHD_3P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_3P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_4P_Create()
//{
//
//	Disp->krz_CHD_4P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_4P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_5P_Create()
//{
//
//	Disp->krz_CHD_5P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_5P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_6P_Create()
//{
//
//	Disp->krz_CHD_6P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_6P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_7P_Create()
//{
//
//	Disp->krz_CHD_7P.ToRouted(EdopStat::CHD);
//	std::thread t(&UMyUserWidget::krz_CHD_7P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CHR
//void UMyUserWidget::krz_CHR_1P_Create()
//{
//
//	Disp->krz_CHR_1P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_1P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_2P_Create()
//{
//
//	Disp->krz_CHR_2P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_2P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_3P_Create()
//{
//
//	Disp->krz_CHR_3P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_3P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_4P_Create()
//{
//
//	Disp->krz_CHR_4P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_4P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_5P_Create()
//{
//
//	Disp->krz_CHR_5P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_5P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_6P_Create()
//{
//
//	Disp->krz_CHR_6P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_6P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_7P_Create()
//{
//
//	Disp->krz_CHR_7P.ToRouted(EdopStat::CHR);
//	std::thread t(&UMyUserWidget::krz_CHR_7P_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M1
//void UMyUserWidget::krz_M1_CH1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH1.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH1.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH2.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH2.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToPlus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH3.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH3.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str11);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH4.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH4.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str9);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH5.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH5.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToPlus(Disp->krz._str15);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH6.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH6.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M1_CH7.ToRouted(EdopStat::M1);
//	}
//	else
//	{
//		Disp->krz_M1_CH7.ToRoutedToWayBusy(EdopStat::M1);
//	}
//	std::thread t(&UMyUserWidget::krz_M1_CH7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str3);
//	ToMinus(Disp->krz._str5);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M2
//void UMyUserWidget::krz_M2_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N1.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N1.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N2.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N2.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N3.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N3.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N4.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N4.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N5.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N5.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N6.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N6.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M2_N7.ToRouted(EdopStat::M2);
//	}
//	else
//	{
//		Disp->krz_M2_N7.ToRoutedToWayBusy(EdopStat::M2);
//	}
//	std::thread t(&UMyUserWidget::krz_M2_N7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_M5_Create()
//{
//
//	Disp->krz_M2_M5.ToRouted(EdopStat::M2);
//	std::thread t(&UMyUserWidget::krz_M2_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M3
//void UMyUserWidget::krz_M3_CH1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH1.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH1.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH2.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH2.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToMinus(Disp->krz._str11);
//	ToPlus(Disp->krz._str13);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH3.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH3.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH3_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str11);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH4.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH4.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH4_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str1);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str9);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH5.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH5.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str15);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH6.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH6.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M3_CH7.ToRouted(EdopStat::M3);
//	}
//	else
//	{
//		Disp->krz_M3_CH7.ToRoutedToWayBusy(EdopStat::M3);
//	}
//	std::thread t(&UMyUserWidget::krz_M3_CH7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str1);
//	ToPlus(Disp->krz._str7);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str17);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M4
//void UMyUserWidget::krz_M4_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N1.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N1.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N2.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N2.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N3.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N3.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N4.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N4.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N5.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N5.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N6.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N6.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M4_N7.ToRouted(EdopStat::M4);
//	}
//	else
//	{
//		Disp->krz_M4_N7.ToRoutedToWayBusy(EdopStat::M4);
//	}
//	std::thread t(&UMyUserWidget::krz_M4_N7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_M5_Create()
//{
//
//	Disp->krz_M4_M5.ToRouted(EdopStat::M4);
//	std::thread t(&UMyUserWidget::krz_M4_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M5
//void UMyUserWidget::krz_M5_M2_Create()
//{
//
//	Disp->krz_M5_M2.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M4_Create()
//{
//
//	Disp->krz_M5_M4.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M4_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M6_Create()
//{
//
//	Disp->krz_M5_M6.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M6_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M8_Create()
//{
//
//	Disp->krz_M5_M8.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M8_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M10_Create()
//{
//
//	Disp->krz_M5_M10.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M10_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M12_Create()
//{
//
//	Disp->krz_M5_M12.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M12_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M14_Create()
//{
//
//	Disp->krz_M5_M14.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M14_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M16_Create()
//{
//
//	Disp->krz_M5_M16.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M16_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToMinus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M18_Create()
//{
//
//	Disp->krz_M5_M18.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M18_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M20_Create()
//{
//
//	Disp->krz_M5_M20.ToRouted(EdopStat::M5);
//	std::thread t(&UMyUserWidget::krz_M5_M20_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str30);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M6
//void UMyUserWidget::krz_M6_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N1.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N1.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N2.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N2.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N3.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N3.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N4.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N4.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N5.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N5.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N6.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N6.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M6_N7.ToRouted(EdopStat::M6);
//	}
//	else
//	{
//		Disp->krz_M6_N7.ToRoutedToWayBusy(EdopStat::M6);
//	}
//	std::thread t(&UMyUserWidget::krz_M6_N7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_M5_Create()
//{
//	Disp->krz._M4.oper = EOper::Norm;
//	Disp->krz_M6_M5.ToRouted(EdopStat::M6);
//	std::thread t(&UMyUserWidget::krz_M6_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M10
//void UMyUserWidget::krz_M10_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N1.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N1.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N2.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N2.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N3.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N3.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N3_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N4.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N4.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N4_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N5.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N5.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N6.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N6.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N6_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M10_N7.ToRouted(EdopStat::M10);
//	}
//	else
//	{
//		Disp->krz_M10_N7.ToRoutedToWayBusy(EdopStat::M10);
//	}
//	std::thread t(&UMyUserWidget::krz_M10_N7_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_M5_Create()
//{
//
//	Disp->krz_M10_M5.ToRouted(EdopStat::M10);
//	std::thread t(&UMyUserWidget::krz_M10_M5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M12
//void UMyUserWidget::krz_M12_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N1.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N1.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N2.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N2.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N3.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N3.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N4.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N4.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N5.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N5.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N6.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N6.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M12_N7.ToRouted(EdopStat::M12);
//	}
//	else
//	{
//		Disp->krz_M12_N7.ToRoutedToWayBusy(EdopStat::M12);
//	}
//	std::thread t(&UMyUserWidget::krz_M12_N7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_M5_Create()
//{
//
//	Disp->krz_M12_M5.ToRouted(EdopStat::M12);
//	std::thread t(&UMyUserWidget::krz_M12_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M14
//void UMyUserWidget::krz_M14_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N1.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N1.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N2.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N2.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N3_Create()
//{
//
//	if (Disp->krz._w3.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N3.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N3.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N3_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N4_Create()
//{
//
//	if (Disp->krz._w4.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N4.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N4.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N4_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N5_Create()
//{
//
//	if (Disp->krz._w5.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N5.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N5.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N6_Create()
//{
//
//	if (Disp->krz._w6.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N6.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N6.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N6_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N7_Create()
//{
//
//	if (Disp->krz._w7.stat == EAStat::Free)
//	{
//		Disp->krz_M14_N7.ToRouted(EdopStat::M14);
//	}
//	else
//	{
//		Disp->krz_M14_N7.ToRoutedToWayBusy(EdopStat::M14);
//	}
//	std::thread t(&UMyUserWidget::krz_M14_N7_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str18);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_M5_Create()
//{
//
//	Disp->krz_M14_M5.ToRouted(EdopStat::M14);
//	std::thread t(&UMyUserWidget::krz_M14_M5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str4);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str12);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M16
//
//void UMyUserWidget::krz_M16_M5_Create()
//{
//
//	Disp->krz_M16_M5.ToRouted(EdopStat::M16);
//	std::thread t(&UMyUserWidget::krz_M16_M5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M16_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M16_N1.ToRouted(EdopStat::M16);
//	}
//	else
//	{
//		Disp->krz_M16_N1.ToRoutedToWayBusy(EdopStat::M16);
//	}
//	std::thread t(&UMyUserWidget::krz_M16_N1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M16_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M16_N2.ToRouted(EdopStat::M16);
//	}
//	else
//	{
//		Disp->krz_M16_N2.ToRoutedToWayBusy(EdopStat::M16);
//	}
//	std::thread t(&UMyUserWidget::krz_M16_N2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M18
//
//void UMyUserWidget::krz_M18_M5_Create()
//{
//
//	Disp->krz_M18_M5.ToRouted(EdopStat::M18);
//	std::thread t(&UMyUserWidget::krz_M18_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M18_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M18_N1.ToRouted(EdopStat::M18);
//	}
//	else
//	{
//		Disp->krz_M18_N1.ToRoutedToWayBusy(EdopStat::M18);
//	}
//	std::thread t(&UMyUserWidget::krz_M18_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M18_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M18_N2.ToRouted(EdopStat::M18);
//	}
//	else
//	{
//		Disp->krz_M18_N2.ToRoutedToWayBusy(EdopStat::M18);
//	}
//	std::thread t(&UMyUserWidget::krz_M18_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str32);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M20
//
//void UMyUserWidget::krz_M20_M5_Create()
//{
//
//	Disp->krz_M20_M5.ToRouted(EdopStat::M20);
//	std::thread t(&UMyUserWidget::krz_M20_M5_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M20_N1_Create()
//{
//
//	if (Disp->krz._w1.stat == EAStat::Free)
//	{
//		Disp->krz_M20_N1.ToRouted(EdopStat::M20);
//	}
//	else
//	{
//		Disp->krz_M20_N1.ToRoutedToWayBusy(EdopStat::M20);
//	}
//	std::thread t(&UMyUserWidget::krz_M20_N1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M20_N2_Create()
//{
//
//	if (Disp->krz._w2.stat == EAStat::Free)
//	{
//		Disp->krz_M20_N2.ToRouted(EdopStat::M20);
//	}
//	else
//	{
//		Disp->krz_M20_N2.ToRoutedToWayBusy(EdopStat::M20);
//	}
//	std::thread t(&UMyUserWidget::krz_M20_N2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str30);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M8
//void UMyUserWidget::krz_M8_N1_Create()
//{
//
//	Disp->krz_M8_N1.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N2_Create()
//{
//
//	Disp->krz_M8_N2.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToPlus(Disp->krz._str34);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N3_Create()
//{
//
//	Disp->krz_M8_N3.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str26);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N4_Create()
//{
//
//	Disp->krz_M8_N4.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str24);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N5_Create()
//{
//
//	Disp->krz_M8_N5.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToPlus(Disp->krz._str20);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N6_Create()
//{
//
//	Disp->krz_M8_N6.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N7_Create()
//{
//
//	Disp->krz_M8_N7.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_N7_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str16);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str22);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_M5_Create()
//{
//
//	Disp->krz_M8_M5.ToRouted(EdopStat::M8);
//	std::thread t(&UMyUserWidget::krz_M8_M5_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str10);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str24);
//	ToMinus(Disp->krz._str26);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str36);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH1
//void UMyUserWidget::krz_CH1_M1_Create()
//{
//
//	Disp->krz_CH1_M1.ToRouted(EdopStat::CH1);
//	std::thread t(&UMyUserWidget::krz_CH1_M1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_M3_Create()
//{
//
//	Disp->krz_CH1_M3.ToRouted(EdopStat::CH1);
//	std::thread t(&UMyUserWidget::krz_CH1_M3_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_N_Create()
//{
//
//	Disp->krz_CH1_N.ToRouted(EdopStat::CH1);
//	std::thread t(&UMyUserWidget::krz_CH1_N_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_ND_Create()
//{
//
//	Disp->krz_CH1_ND.ToRouted(EdopStat::CH1);
//	std::thread t(&UMyUserWidget::krz_CH1_ND_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH2
//void UMyUserWidget::krz_CH2_M1_Create()
//{
//
//	Disp->krz_CH2_M1.ToRouted(EdopStat::CH2);
//	std::thread t(&UMyUserWidget::krz_CH2_M1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_M3_Create()
//{
//
//	Disp->krz_CH2_M3.ToRouted(EdopStat::CH2);
//	std::thread t(&UMyUserWidget::krz_CH2_M3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_N_Create()
//{
//
//	Disp->krz_CH2_N.ToRouted(EdopStat::CH2);
//	std::thread t(&UMyUserWidget::krz_CH2_N_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_ND_Create()
//{
//
//	Disp->krz_CH2_ND.ToRouted(EdopStat::CH2);
//	std::thread t(&UMyUserWidget::krz_CH2_ND_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str13);
//	ToMinus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH3
//void UMyUserWidget::krz_CH3_M1_Create()
//{
//
//	Disp->krz_CH3_M1.ToRouted(EdopStat::CH3);
//	std::thread t(&UMyUserWidget::krz_CH3_M1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_M3_Create()
//{
//
//	Disp->krz_CH3_M3.ToRouted(EdopStat::CH3);
//	std::thread t(&UMyUserWidget::krz_CH3_M3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_N_Create()
//{
//
//	Disp->krz_CH3_N.ToRouted(EdopStat::CH3);
//	std::thread t(&UMyUserWidget::krz_CH3_N_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_ND_Create()
//{
//
//	Disp->krz_CH3_ND.ToRouted(EdopStat::CH3);
//	std::thread t(&UMyUserWidget::krz_CH3_ND_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str11);
//	ToMinus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH4
//void UMyUserWidget::krz_CH4_M1_Create()
//{
//
//	Disp->krz_CH4_M1.ToRouted(EdopStat::CH4);
//	std::thread t(&UMyUserWidget::krz_CH4_M1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_M3_Create()
//{
//
//	Disp->krz_CH4_M3.ToRouted(EdopStat::CH4);
//	std::thread t(&UMyUserWidget::krz_CH4_M3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_N_Create()
//{
//
//	Disp->krz_CH4_N.ToRouted(EdopStat::CH4);
//	std::thread t(&UMyUserWidget::krz_CH4_N_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_ND_Create()
//{
//
//	Disp->krz_CH4_ND.ToRouted(EdopStat::CH4);
//	std::thread t(&UMyUserWidget::krz_CH4_ND_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str9);
//	ToPlus(Disp->krz._str5);
//	ToMinus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH5
//void UMyUserWidget::krz_CH5_M1_Create()
//{
//
//	Disp->krz_CH5_M1.ToRouted(EdopStat::CH5);
//	std::thread t(&UMyUserWidget::krz_CH5_M1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH5_M3_Create()
//{
//
//	Disp->krz_CH5_M3.ToRouted(EdopStat::CH5);
//	std::thread t(&UMyUserWidget::krz_CH5_M3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str15);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH5_N_Create()
//{
//
//	Disp->krz_CH5_N.ToRouted(EdopStat::CH5);
//	std::thread t(&UMyUserWidget::krz_CH5_N_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH5_ND_Create()
//{
//
//	Disp->krz_CH5_ND.ToRouted(EdopStat::CH5);
//	std::thread t(&UMyUserWidget::krz_CH5_ND_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str15);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH6
//void UMyUserWidget::krz_CH6_M1_Create()
//{
//
//	Disp->krz_CH6_M1.ToRouted(EdopStat::CH6);
//	std::thread t(&UMyUserWidget::krz_CH6_M1_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH6_M3_Create()
//{
//
//	Disp->krz_CH6_M3.ToRouted(EdopStat::CH6);
//	std::thread t(&UMyUserWidget::krz_CH6_M3_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH6_N_Create()
//{
//
//	Disp->krz_CH6_N.ToRouted(EdopStat::CH6);
//	std::thread t(&UMyUserWidget::krz_CH6_N_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH6_ND_Create()
//{
//
//	Disp->krz_CH6_ND.ToRouted(EdopStat::CH6);
//	std::thread t(&UMyUserWidget::krz_CH6_ND_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH7
//void UMyUserWidget::krz_CH7_M1_Create()
//{
//
//	Disp->krz_CH7_M1.ToRouted(EdopStat::CH7);
//	std::thread t(&UMyUserWidget::krz_CH7_M1_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH7_M3_Create()
//{
//
//	Disp->krz_CH7_M3.ToRouted(EdopStat::CH7);
//	std::thread t(&UMyUserWidget::krz_CH7_M3_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH7_N_Create()
//{
//
//	Disp->krz_CH7_N.ToRouted(EdopStat::CH7);
//	std::thread t(&UMyUserWidget::krz_CH7_N_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToMinus(Disp->krz._str7);
//	ToPlus(Disp->krz._str3);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH7_ND_Create()
//{
//
//	Disp->krz_CH7_ND.ToRouted(EdopStat::CH7);
//	std::thread t(&UMyUserWidget::krz_CH7_ND_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str17);
//	ToMinus(Disp->krz._str15);
//	ToPlus(Disp->krz._str7);
//	ToPlus(Disp->krz._str1);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N1
//void UMyUserWidget::krz_N1_M2_Create()
//{
//
//	Disp->krz_N1_M2.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M4_Create()
//{
//
//	Disp->krz_N1_M4.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M6_Create()
//{
//
//	Disp->krz_N1_M6.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M8_Create()
//{
//
//	Disp->krz_N1_M8.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M10_Create()
//{
//
//	Disp->krz_N1_M10.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M12_Create()
//{
//
//	Disp->krz_N1_M12.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M14_Create()
//{
//
//	Disp->krz_N1_M14.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M16_Create()
//{
//
//	Disp->krz_N1_M16.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M16_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToMinus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M18_Create()
//{
//
//	Disp->krz_N1_M18.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M18_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M20_Create()
//{
//
//	Disp->krz_N1_M20.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_M20_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str30);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CH_Create()
//{
//
//	Disp->krz_N1_CH.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CHD_Create()
//{
//
//	Disp->krz_N1_CHD.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CHR_Create()
//{
//
//	Disp->krz_N1_CHR.ToRouted(EdopStat::N1);
//	std::thread t(&UMyUserWidget::krz_N1_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str36);
//	ToMinus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N2
//void UMyUserWidget::krz_N2_M2_Create()
//{
//
//	Disp->krz_N2_M2.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M4_Create()
//{
//
//	Disp->krz_N2_M4.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M6_Create()
//{
//
//	Disp->krz_N2_M6.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M8_Create()
//{
//
//	Disp->krz_N2_M8.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M10_Create()
//{
//
//	Disp->krz_N2_M10.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M12_Create()
//{
//
//	Disp->krz_N2_M12.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M14_Create()
//{
//
//	Disp->krz_N2_M14.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M16_Create()
//{
//
//	Disp->krz_N2_M16.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M16_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToMinus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M18_Create()
//{
//
//	Disp->krz_N2_M18.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M18_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToPlus(Disp->krz._str30);
//	ToPlus(Disp->krz._str32);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M20_Create()
//{
//
//	Disp->krz_N2_M20.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_M20_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToPlus(Disp->krz._str28);
//	ToMinus(Disp->krz._str30);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CH_Create()
//{
//
//	Disp->krz_N2_CH.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CHD_Create()
//{
//
//	Disp->krz_N2_CHD.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CHR_Create()
//{
//
//	Disp->krz_N2_CHR.ToRouted(EdopStat::N2);
//	std::thread t(&UMyUserWidget::krz_N2_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str34);
//	ToMinus(Disp->krz._str28);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N3
//void UMyUserWidget::krz_N3_M2_Create()
//{
//
//	Disp->krz_N3_M2.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M4_Create()
//{
//
//	Disp->krz_N3_M4.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M6_Create()
//{
//
//	Disp->krz_N3_M6.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M8_Create()
//{
//
//	Disp->krz_N3_M8.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M10_Create()
//{
//
//	Disp->krz_N3_M10.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M12_Create()
//{
//
//	Disp->krz_N3_M12.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M14_Create()
//{
//
//	Disp->krz_N3_M14.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CH_Create()
//{
//
//	Disp->krz_N3_CH.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CHD_Create()
//{
//
//	Disp->krz_N3_CHD.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CHR_Create()
//{
//
//	Disp->krz_N3_CHR.ToRouted(EdopStat::N3);
//	std::thread t(&UMyUserWidget::krz_N3_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str26);
//	ToMinus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N4
//void UMyUserWidget::krz_N4_M2_Create()
//{
//
//	Disp->krz_N4_M2.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M4_Create()
//{
//
//	Disp->krz_N4_M4.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M6_Create()
//{
//
//	Disp->krz_N4_M6.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M8_Create()
//{
//
//	Disp->krz_N4_M8.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M10_Create()
//{
//
//	Disp->krz_N4_M10.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M12_Create()
//{
//
//	Disp->krz_N4_M12.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M14_Create()
//{
//
//	Disp->krz_N4_M14.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CH_Create()
//{
//
//	Disp->krz_N4_CH.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToMinus(Disp->krz._str14);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CHD_Create()
//{
//
//	Disp->krz_N4_CHD.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CHR_Create()
//{
//
//	Disp->krz_N4_CHR.ToRouted(EdopStat::N4);
//	std::thread t(&UMyUserWidget::krz_N4_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str24);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N5
//void UMyUserWidget::krz_N5_M2_Create()
//{
//
//	Disp->krz_N5_M2.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M4_Create()
//{
//
//	Disp->krz_N5_M4.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M6_Create()
//{
//
//	Disp->krz_N5_M6.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M8_Create()
//{
//
//	Disp->krz_N5_M8.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M10_Create()
//{
//
//	Disp->krz_N5_M10.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M12_Create()
//{
//
//	Disp->krz_N5_M12.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M14_Create()
//{
//
//	Disp->krz_N5_M14.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_CH_Create()
//{
//
//	Disp->krz_N5_CH.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_CHD_Create()
//{
//
//	Disp->krz_N5_CHD.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_CHR_Create()
//{
//
//	Disp->krz_N5_CHR.ToRouted(EdopStat::N5);
//	std::thread t(&UMyUserWidget::krz_N5_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N6
//void UMyUserWidget::krz_N6_M2_Create()
//{
//
//	Disp->krz_N6_M2.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M2_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M4_Create()
//{
//
//	Disp->krz_N6_M4.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M4_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M6_Create()
//{
//
//	Disp->krz_N6_M6.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M6_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M8_Create()
//{
//
//	Disp->krz_N6_M8.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M8_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M10_Create()
//{
//
//	Disp->krz_N6_M10.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M10_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M12_Create()
//{
//
//	Disp->krz_N6_M12.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M12_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M14_Create()
//{
//
//	Disp->krz_N6_M14.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_M14_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_CH_Create()
//{
//
//	Disp->krz_N6_CH.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_CH_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_CHD_Create()
//{
//
//	Disp->krz_N6_CHD.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_CHD_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_CHR_Create()
//{
//
//	Disp->krz_N6_CHR.ToRouted(EdopStat::N6);
//	std::thread t(&UMyUserWidget::krz_N6_CHR_CreateEnd, this);
//	t.detach();
//
//	ToPlus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N7
//void UMyUserWidget::krz_N7_M2_Create()
//{
//
//	Disp->krz_N7_M2.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M2_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M4_Create()
//{
//
//	Disp->krz_N7_M4.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M4_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M6_Create()
//{
//
//	Disp->krz_N7_M6.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M6_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToPlus(Disp->krz._str8);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M8_Create()
//{
//
//	Disp->krz_N7_M8.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M8_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M10_Create()
//{
//
//	Disp->krz_N7_M10.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M10_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToMinus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M12_Create()
//{
//
//	Disp->krz_N7_M12.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M12_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToMinus(Disp->krz._str2);
//	ToPlus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M14_Create()
//{
//
//	Disp->krz_N7_M14.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_M14_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str16);
//	ToPlus(Disp->krz._str12);
//	ToMinus(Disp->krz._str2);
//	ToMinus(Disp->krz._str4);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_CH_Create()
//{
//
//	Disp->krz_N7_CH.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_CH_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToPlus(Disp->krz._str18);
//	ToPlus(Disp->krz._str12);
//	ToPlus(Disp->krz._str2);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_CHD_Create()
//{
//
//	Disp->krz_N7_CHD.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_CHD_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToPlus(Disp->krz._str6);
//
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_CHR_Create()
//{
//
//	Disp->krz_N7_CHR.ToRouted(EdopStat::N7);
//	std::thread t(&UMyUserWidget::krz_N7_CHR_CreateEnd, this);
//	t.detach();
//
//	ToMinus(Disp->krz._str22);
//	ToMinus(Disp->krz._str20);
//	ToMinus(Disp->krz._str18);
//	ToPlus(Disp->krz._str14);
//	ToMinus(Disp->krz._str6);
//	ToMinus(Disp->krz._str8);
//	ToPlus(Disp->krz._str10);
//
//	Disp->SendToServer();
//}
//#pragma endregion
//
//#pragma endregion
//#pragma region Routers: Impl: CreateEnd
//#pragma region from N
//void UMyUserWidget::krz_N_1P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N_1P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_2P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N_2P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_3P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N_3P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_4P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N_4P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_5P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N_5P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_6P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N_6P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N_7P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N_7P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//
//#pragma endregion
//#pragma region from ND
//void UMyUserWidget::krz_ND_1P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Minus
//			)
//		{
//			Disp->krz._ND.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_2P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_ND_2P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_3P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_ND_3P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_4P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_ND_4P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_5P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_ND_5P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_6P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_ND_6P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_ND_7P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_ND_7P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//
//#pragma endregion
//#pragma region from CH
//void UMyUserWidget::krz_CH_1P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_1P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_2P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_2P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_3P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_3P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_4P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_4P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_5P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_5P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_6P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH_6P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH_7P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH_7P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CHD
//void UMyUserWidget::krz_CHD_1P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_1P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_2P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_2P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_3P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_3P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_4P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_4P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_5P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_5P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_6P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHD_6P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHD_7P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CHD_7P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CHR
//void UMyUserWidget::krz_CHR_1P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_1P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_2P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_2P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_3P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_3P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_4P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_4P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_5P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_5P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_6P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CHR_6P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CHR_7P_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CHR_7P.Routed();
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M1
//void UMyUserWidget::krz_M1_CH1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH1.ManRouted();
//			}
//			Disp->krz_M1_CH1.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH2.ManRouted();
//			}
//			Disp->krz_M1_CH2.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH3.ManRouted();
//			}
//			Disp->krz_M1_CH3.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH4.ManRouted();
//			}
//			Disp->krz_M1_CH4.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH5.ManRouted();
//			}
//			Disp->krz_M1_CH5.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH6.ManRouted();
//			}
//			Disp->krz_M1_CH6.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M1_CH7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str3.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M1_CH7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M1_CH7.ManRouted();
//			}
//			Disp->krz_M1_CH7.isReady = true;
//			Disp->krz._M1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M2
//void UMyUserWidget::krz_M2_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N1.ManRouted();
//			}
//			Disp->krz_M2_N1.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N2.ManRouted();
//			}
//			Disp->krz_M2_N2.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N3.ManRouted();
//			}
//			Disp->krz_M2_N3.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N4.ManRouted();
//			}
//			Disp->krz_M2_N4.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N5.ManRouted();
//			}
//			Disp->krz_M2_N5.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N6.ManRouted();
//			}
//			Disp->krz_M2_N6.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M2_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M2_N7.ManRouted();
//			}
//			Disp->krz_M2_N7.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M2_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str2.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M2_M5.ManRouted();
//			Disp->krz_M2_M5.isReady = true;
//			Disp->krz._M2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M3
//void UMyUserWidget::krz_M3_CH1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH1.ManRouted();
//			}
//			Disp->krz_M3_CH1.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str13.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH2.ManRouted();
//			}
//			Disp->krz_M3_CH2.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH3.ManRouted();
//			}
//			Disp->krz_M3_CH3.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH4.ManRouted();
//			}
//			Disp->krz_M3_CH4.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH5.ManRouted();
//			}
//			Disp->krz_M3_CH5.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH6.ManRouted();
//			}
//			Disp->krz_M3_CH6.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M3_CH7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str1.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str17.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M3_CH7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M3_CH7.ManRouted();
//			}
//			Disp->krz_M3_CH7.isReady = true;
//			Disp->krz._M3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M4
//void UMyUserWidget::krz_M4_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N1.ManRouted();
//			}
//			Disp->krz_M4_N1.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N2.ManRouted();
//			}
//			Disp->krz_M4_N2.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N3.ManRouted();
//			}
//			Disp->krz_M4_N3.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N4.ManRouted();
//			}
//			Disp->krz_M4_N4.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N5.ManRouted();
//			}
//			Disp->krz_M4_N5.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N6.ManRouted();
//			}
//			Disp->krz_M4_N6.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M4_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M4_N7.ManRouted();
//			}
//			Disp->krz_M4_N7.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M4_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M4_M5.ManRouted();
//			Disp->krz_M4_M5.isReady = true;
//			Disp->krz._M4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M5
//void UMyUserWidget::krz_M5_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M2.ManRouted();
//			Disp->krz_M5_M2.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M4.ManRouted();
//			Disp->krz_M5_M4.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M6.ManRouted();
//			Disp->krz_M5_M6.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M8.ManRouted();
//			Disp->krz_M5_M8.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M5_M10.ManRouted();
//			Disp->krz_M5_M10.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M12.ManRouted();
//			Disp->krz_M5_M12.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M5_M14.ManRouted();
//			Disp->krz_M5_M14.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M16_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M5_M16.ManRouted();
//			Disp->krz_M5_M16.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M18_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_M5_M18.ManRouted();
//			Disp->krz_M5_M18.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M5_M20_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M5_M20.ManRouted();
//			Disp->krz_M5_M20.isReady = true;
//			Disp->krz._M5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M6
//void UMyUserWidget::krz_M6_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N1.ManRouted();
//			}
//			Disp->krz_M6_N1.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N2.ManRouted();
//			}
//			Disp->krz_M6_N2.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N3.ManRouted();
//			}
//			Disp->krz_M6_N3.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N4.ManRouted();
//			}
//			Disp->krz_M6_N4.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N5.ManRouted();
//			}
//			Disp->krz_M6_N5.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N6.ManRouted();
//			}
//			Disp->krz_M6_N6.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M6_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M6_N7.ManRouted();
//			}
//			Disp->krz_M6_N7.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M6_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M6_M5.ManRouted();
//			Disp->krz_M6_M5.isReady = true;
//			Disp->krz._M6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M10
//void UMyUserWidget::krz_M10_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N1.ManRouted();
//			}
//			Disp->krz_M10_N1.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N2.ManRouted();
//			}
//			Disp->krz_M10_N2.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N3.ManRouted();
//			}
//			Disp->krz_M10_N3.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N4.ManRouted();
//			}
//			Disp->krz_M10_N4.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N5.ManRouted();
//			}
//			Disp->krz_M10_N5.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N6.ManRouted();
//			}
//			Disp->krz_M10_N6.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M10_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M10_N7.ManRouted();
//			}
//			Disp->krz_M10_N7.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M10_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M10_M5.ManRouted();
//			Disp->krz_M10_M5.isReady = true;
//			Disp->krz._M10.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M12
//void UMyUserWidget::krz_M12_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N1.ManRouted();
//			}
//			Disp->krz_M12_N1.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N2.ManRouted();
//			}
//			Disp->krz_M12_N2.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N3.ManRouted();
//			}
//			Disp->krz_M12_N3.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N4.ManRouted();
//			}
//			Disp->krz_M12_N4.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N5.ManRouted();
//			}
//			Disp->krz_M12_N5.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N6.ManRouted();
//			}
//			Disp->krz_M12_N6.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M12_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M12_N7.ManRouted();
//			}
//			Disp->krz_M12_N7.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M12_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M12_M5.ManRouted();
//			Disp->krz_M12_M5.isReady = true;
//			Disp->krz._M12.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M14
//void UMyUserWidget::krz_M14_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N1.ManRouted();
//			}
//			Disp->krz_M14_N1.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N2.ManRouted();
//			}
//			Disp->krz_M14_N2.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N3.ManRouted();
//			}
//			Disp->krz_M14_N3.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N4.ManRouted();
//			}
//			Disp->krz_M14_N4.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N5.ManRouted();
//			}
//			Disp->krz_M14_N5.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N6.ManRouted();
//			}
//			Disp->krz_M14_N6.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M14_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M14_N7.ManRouted();
//			}
//			Disp->krz_M14_N7.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M14_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str4.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M14_M5.ManRouted();
//			Disp->krz_M14_M5.isReady = true;
//			Disp->krz._M14.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M16
//
//void UMyUserWidget::krz_M16_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Minus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M16_M5.ManRouted();
//			Disp->krz_M16_M5.isReady = true;
//			Disp->krz._M16.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M16_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Minus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M16_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M16_N1.ManRouted();
//			}
//			Disp->krz_M16_N1.isReady = true;
//			Disp->krz._M16.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M16_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Minus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M16_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M16_N2.ManRouted();
//			}
//			Disp->krz_M16_N2.isReady = true;
//			Disp->krz._M16.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M18
//
//void UMyUserWidget::krz_M18_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M18_M5.ManRouted();
//			Disp->krz_M18_M5.isReady = true;
//			Disp->krz._M18.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M18_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M18_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M18_N1.ManRouted();
//			}
//			Disp->krz_M18_N1.isReady = true;
//			Disp->krz._M18.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M18_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str32.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M18_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M18_N2.ManRouted();
//			}
//			Disp->krz_M18_N2.isReady = true;
//			Disp->krz._M18.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M20
//
//void UMyUserWidget::krz_M20_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str30.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M20_M5.ManRouted();
//			Disp->krz_M20_M5.isReady = true;
//			Disp->krz._M20.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M20_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str30.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M20_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M20_N1.ManRouted();
//			}
//			Disp->krz_M20_N1.isReady = true;
//			Disp->krz._M20.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M20_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str30.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M20_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M20_N2.ManRouted();
//			}
//			Disp->krz_M20_N2.isReady = true;
//			Disp->krz._M20.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from M8
//void UMyUserWidget::krz_M8_N1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w1.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N1.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N1.ManRouted();
//			}
//			Disp->krz_M8_N1.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w2.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N2.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N2.ManRouted();
//			}
//			Disp->krz_M8_N2.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w3.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N3.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N3.ManRouted();
//			}
//			Disp->krz_M8_N3.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w4.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N4.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N4.ManRouted();
//			}
//			Disp->krz_M8_N4.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w5.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N5.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N5.ManRouted();
//			}
//			Disp->krz_M8_N5.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Plus
//			)
//		{
//			if (Disp->krz._w6.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N6.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N6.ManRouted();
//			}
//			Disp->krz_M8_N6.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_N7_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str22.stat == EAStat::Minus
//			)
//		{
//			if (Disp->krz._w7.stat == EAStat::Busy)
//			{
//				Disp->krz_M8_N7.ManRoutedToWayBusy();
//			}
//			else
//			{
//				Disp->krz_M8_N7.ManRouted();
//			}
//			Disp->krz_M8_N7.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_M8_M5_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str36.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_M8_M5.ManRouted();
//			Disp->krz_M8_M5.isReady = true;
//			Disp->krz._M8.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH1
//void UMyUserWidget::krz_CH1_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH1_M1.ManRouted();
//			Disp->krz_CH1_M1.isReady = true;
//			Disp->krz._CH1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH1_M3.ManRouted();
//			Disp->krz_CH1_M3.isReady = true;
//			Disp->krz._CH1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH1_N.Routed();
//			Disp->krz_CH1_N.isReady = true;
//			Disp->krz._CH1.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH1_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Minus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH1_ND.Routed();
//			Disp->krz_CH1_ND.isReady = true;
//			Disp->krz._CH1.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH2
//void UMyUserWidget::krz_CH2_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Plus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH2_M1.ManRouted();
//			Disp->krz_CH2_M1.isReady = true;
//			Disp->krz._CH2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Plus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH2_M3.ManRouted();
//			Disp->krz_CH2_M3.isReady = true;
//			Disp->krz._CH2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Plus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH2_N.Routed();
//			Disp->krz_CH2_N.isReady = true;
//			Disp->krz._CH2.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH2_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str13.stat == EAStat::Plus
//			&& Disp->krz._str11.stat == EAStat::Minus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH2_ND.Routed();
//			Disp->krz_CH2_ND.isReady = true;
//			Disp->krz._CH2.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH3
//void UMyUserWidget::krz_CH3_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str11.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH3_M1.ManRouted();
//			Disp->krz_CH3_M1.isReady = true;
//			Disp->krz._CH3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str11.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH3_M3.ManRouted();
//			Disp->krz_CH3_M3.isReady = true;
//			Disp->krz._CH3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str11.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH3_N.Routed();
//			Disp->krz_CH3_N.isReady = true;
//			Disp->krz._CH3.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH3_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str11.stat == EAStat::Plus
//			&& Disp->krz._str9.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH3_ND.Routed();
//			Disp->krz_CH3_ND.isReady = true;
//			Disp->krz._CH3.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH4
//void UMyUserWidget::krz_CH4_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str9.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH4_M1.ManRouted();
//			Disp->krz_CH4_M1.isReady = true;
//			Disp->krz._CH4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str9.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH4_M3.ManRouted();
//			Disp->krz_CH4_M3.isReady = true;
//			Disp->krz._CH4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str9.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH4_N.Routed();
//			Disp->krz_CH4_N.isReady = true;
//			Disp->krz._CH4.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH4_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str9.stat == EAStat::Plus
//			&& Disp->krz._str5.stat == EAStat::Plus
//			&& Disp->krz._str3.stat == EAStat::Minus
//			&& Disp->krz._str1.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_CH4_ND.Routed();
//			Disp->krz_CH4_ND.isReady = true;
//			Disp->krz._CH4.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from CH5
//void UMyUserWidget::krz_CH5_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str15.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH5_M1.ManRouted();
//			Disp->krz_CH5_M1.isReady = true;
//			Disp->krz._CH5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH5_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str15.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH5_M3.ManRouted();
//			Disp->krz_CH5_M3.isReady = true;
//			Disp->krz._CH5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_CH5_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str15.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH5_N.Routed();
//			Disp->krz_CH5_N.isReady = true;
//			Disp->krz._CH5.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH5_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str15.stat == EAStat::Plus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH5_ND.Routed();
//			Disp->krz_CH5_ND.isReady = true;
//			Disp->krz._CH5.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//#pragma endregion
//#pragma region from CH6
//void UMyUserWidget::krz_CH6_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH6_M1.ManRouted();
//			Disp->krz_CH6_M1.isReady = true;
//			Disp->krz._CH6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH6_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH6_M3.ManRouted();
//			Disp->krz_CH6_M3.isReady = true;
//			Disp->krz._CH6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_CH6_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH6_N.Routed();
//			Disp->krz_CH6_N.isReady = true;
//			Disp->krz._CH6.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH6_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Plus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH6_ND.Routed();
//			Disp->krz_CH6_ND.isReady = true;
//			Disp->krz._CH6.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//#pragma endregion
//#pragma region from CH7
//void UMyUserWidget::krz_CH7_M1_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH7_M1.ManRouted();
//			Disp->krz_CH7_M1.isReady = true;
//			Disp->krz._CH7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH7_M3_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH7_M3.ManRouted();
//			Disp->krz_CH7_M3.isReady = true;
//			Disp->krz._CH7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_CH7_N_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Minus
//			&& Disp->krz._str5.stat == EAStat::Minus
//			&& Disp->krz._str3.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH7_N.Routed();
//			Disp->krz_CH7_N.isReady = true;
//			Disp->krz._CH7.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_CH7_ND_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str17.stat == EAStat::Minus
//			&& Disp->krz._str15.stat == EAStat::Minus
//			&& Disp->krz._str7.stat == EAStat::Plus
//			&& Disp->krz._str1.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_CH7_ND.Routed();
//			Disp->krz_CH7_ND.isReady = true;
//			Disp->krz._CH7.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//#pragma endregion
//#pragma region from N1
//void UMyUserWidget::krz_N1_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M2.ManRouted();
//			Disp->krz_N1_M2.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M4.ManRouted();
//			Disp->krz_N1_M4.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M6.ManRouted();
//			Disp->krz_N1_M6.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M8.ManRouted();
//			Disp->krz_N1_M8.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N1_M10.ManRouted();
//			Disp->krz_N1_M10.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M12.ManRouted();
//			Disp->krz_N1_M12.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N1_M14.ManRouted();
//			Disp->krz_N1_M14.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M16_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N1_M16.ManRouted();
//			Disp->krz_N1_M16.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M18_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_M18.ManRouted();
//			Disp->krz_N1_M18.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_M20_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N1_M20.ManRouted();
//			Disp->krz_N1_M20.isReady = true;
//			Disp->krz._N1.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_CH.Routed();
//			Disp->krz_N1_CH.isReady = true;
//			Disp->krz._N1.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_CHD.Routed();
//			Disp->krz_N1_CHD.isReady = true;
//			Disp->krz._N1.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N1_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str36.stat == EAStat::Plus
//			&& Disp->krz._str34.stat == EAStat::Minus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N1_CHR.Routed();
//			Disp->krz_N1_CHR.isReady = true;
//			Disp->krz._N1.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N2
//void UMyUserWidget::krz_N2_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M2.ManRouted();
//			Disp->krz_N2_M2.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M4.ManRouted();
//			Disp->krz_N2_M4.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M6.ManRouted();
//			Disp->krz_N2_M6.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M8.ManRouted();
//			Disp->krz_N2_M8.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N2_M10.ManRouted();
//			Disp->krz_N2_M10.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M12.ManRouted();
//			Disp->krz_N2_M12.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N2_M14.ManRouted();
//			Disp->krz_N2_M14.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M16_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N2_M16.ManRouted();
//			Disp->krz_N2_M16.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M18_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Plus
//			&& Disp->krz._str32.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_M18.ManRouted();
//			Disp->krz_N2_M18.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_M20_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//
//			&& Disp->krz._str28.stat == EAStat::Plus
//			&& Disp->krz._str30.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N2_M20.ManRouted();
//			Disp->krz_N2_M20.isReady = true;
//			Disp->krz._N2.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_CH.Routed();
//			Disp->krz_N2_CH.isReady = true;
//			Disp->krz._N2.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_CHD.Routed();
//			Disp->krz_N2_CHD.isReady = true;
//			Disp->krz._N2.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N2_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str34.stat == EAStat::Plus
//			&& Disp->krz._str28.stat == EAStat::Minus
//			&& Disp->krz._str26.stat == EAStat::Minus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N2_CHR.Routed();
//			Disp->krz_N2_CHR.isReady = true;
//			Disp->krz._N2.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N3
//void UMyUserWidget::krz_N3_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_M2.ManRouted();
//			Disp->krz_N3_M2.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_M4.ManRouted();
//			Disp->krz_N3_M4.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_M6.ManRouted();
//			Disp->krz_N3_M6.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_M8.ManRouted();
//			Disp->krz_N3_M8.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N3_M10.ManRouted();
//			Disp->krz_N3_M10.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_M12.ManRouted();
//			Disp->krz_N3_M12.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N3_M14.ManRouted();
//			Disp->krz_N3_M14.isReady = true;
//			Disp->krz._N3.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_CH.Routed();
//			Disp->krz_N3_CH.isReady = true;
//			Disp->krz._N3.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_CHD.Routed();
//			Disp->krz_N3_CHD.isReady = true;
//			Disp->krz._N3.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N3_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str26.stat == EAStat::Plus
//			&& Disp->krz._str24.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N3_CHR.Routed();
//			Disp->krz_N3_CHR.isReady = true;
//			Disp->krz._N3.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N4
//void UMyUserWidget::krz_N4_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_M2.ManRouted();
//			Disp->krz_N4_M2.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_M4.ManRouted();
//			Disp->krz_N4_M4.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_M6.ManRouted();
//			Disp->krz_N4_M6.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_M8.ManRouted();
//			Disp->krz_N4_M8.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N4_M10.ManRouted();
//			Disp->krz_N4_M10.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_M12.ManRouted();
//			Disp->krz_N4_M12.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N4_M14.ManRouted();
//			Disp->krz_N4_M14.isReady = true;
//			Disp->krz._N4.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Minus
//			&& Disp->krz._str12.stat == EAStat::Minus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_CH.Routed();
//			Disp->krz_N4_CH.isReady = true;
//			Disp->krz._N4.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_CHD.Routed();
//			Disp->krz_N4_CHD.isReady = true;
//			Disp->krz._N4.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N4_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str24.stat == EAStat::Plus
//			&& Disp->krz._str16.stat == EAStat::Plus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N4_CHR.Routed();
//			Disp->krz_N4_CHR.isReady = true;
//			Disp->krz._N4.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N5
//void UMyUserWidget::krz_N5_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_M2.ManRouted();
//			Disp->krz_N5_M2.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_M4.ManRouted();
//			Disp->krz_N5_M4.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_M6.ManRouted();
//			Disp->krz_N5_M6.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_M8.ManRouted();
//			Disp->krz_N5_M8.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N5_M10.ManRouted();
//			Disp->krz_N5_M10.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_M12.ManRouted();
//			Disp->krz_N5_M12.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N5_M14.ManRouted();
//			Disp->krz_N5_M14.isReady = true;
//			Disp->krz._N5.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_N5_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_CH.Routed();
//			Disp->krz_N5_CH.isReady = true;
//			Disp->krz._N5.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_CHD.Routed();
//			Disp->krz_N5_CHD.isReady = true;
//			Disp->krz._N5.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N5_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str20.stat == EAStat::Plus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N5_CHR.Routed();
//			Disp->krz_N5_CHR.isReady = true;
//			Disp->krz._N5.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N6
//void UMyUserWidget::krz_N6_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_M2.ManRouted();
//			Disp->krz_N6_M2.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_M4.ManRouted();
//			Disp->krz_N6_M4.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_M6.ManRouted();
//			Disp->krz_N6_M6.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_M8.ManRouted();
//			Disp->krz_N6_M8.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N6_M10.ManRouted();
//			Disp->krz_N6_M10.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_M12.ManRouted();
//			Disp->krz_N6_M12.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N6_M14.ManRouted();
//			Disp->krz_N6_M14.isReady = true;
//			Disp->krz._N6.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_N6_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_CH.Routed();
//			Disp->krz_N6_CH.isReady = true;
//			Disp->krz._N6.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_CHD.Routed();
//			Disp->krz_N6_CHD.isReady = true;
//			Disp->krz._N6.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N6_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Plus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N6_CHR.Routed();
//			Disp->krz_N6_CHR.isReady = true;
//			Disp->krz._N6.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region from N7
//void UMyUserWidget::krz_N7_M2_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_M2.ManRouted();
//			Disp->krz_N7_M2.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M4_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_M4.ManRouted();
//			Disp->krz_N7_M4.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M6_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_M6.ManRouted();
//			Disp->krz_N7_M6.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M8_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_M8.ManRouted();
//			Disp->krz_N7_M8.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M10_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N7_M10.ManRouted();
//			Disp->krz_N7_M10.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M12_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_M12.ManRouted();
//			Disp->krz_N7_M12.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_M14_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Minus
//			&& Disp->krz._str4.stat == EAStat::Minus
//			)
//		{
//			Disp->krz_N7_M14.ManRouted();
//			Disp->krz_N7_M14.isReady = true;
//			Disp->krz._N7.stat = EAStat::White;
//			Disp->SendToServer();
//			break;
//		}
//	}
//}
//void UMyUserWidget::krz_N7_CH_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Plus
//			&& Disp->krz._str12.stat == EAStat::Plus
//			&& Disp->krz._str2.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_CH.Routed();
//			Disp->krz_N7_CH.isReady = true;
//			Disp->krz._N7.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_CHD_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_CHD.Routed();
//			Disp->krz_N7_CHD.isReady = true;
//			Disp->krz._N7.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_N7_CHR_CreateEnd()
//{
//	for (int i = 0; i <= Disp->LimTimeWaitSwit; i++)
//	{
//		Sleep(1000);
//		if (Disp->krz._str22.stat == EAStat::Minus
//			&& Disp->krz._str20.stat == EAStat::Minus
//			&& Disp->krz._str18.stat == EAStat::Minus
//			&& Disp->krz._str16.stat == EAStat::Minus
//			&& Disp->krz._str14.stat == EAStat::Plus
//			&& Disp->krz._str6.stat == EAStat::Minus
//			&& Disp->krz._str8.stat == EAStat::Minus
//			&& Disp->krz._str10.stat == EAStat::Plus
//			)
//		{
//			Disp->krz_N7_CHR.Routed();
//			Disp->krz_N7_CHR.isReady = true;
//			Disp->krz._N7.stat = EAStat::Green;
//			Disp->SendToServer();
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//
//#pragma endregion
//#pragma region Routers: Impl: StartRun
//#pragma region from N
//void UMyUserWidget::krz_N_1P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_1P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_2P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_2P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_3P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_3P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_4P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_4P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_5P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_5P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_6P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_6P));
//	t.detach();
//}
//void UMyUserWidget::krz_N_7P_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_7P));
//	t.detach();
//}
//
//#pragma endregion
//#pragma region from ND
//void UMyUserWidget::krz_ND_1P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_1P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_2P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_2P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_3P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_3P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_4P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_4P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_5P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_5P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_6P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_6P));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_7P_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_7P));
//	t.detach();
//}
//
//#pragma endregion
//#pragma region from CH
//void UMyUserWidget::krz_CH_1P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_1P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_2P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_2P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_3P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_3P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_4P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_4P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_5P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_5P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_6P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_6P));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_7P_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_7P));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CHD
//void UMyUserWidget::krz_CHD_1P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_1P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_2P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_2P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_3P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_3P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_4P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_4P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_5P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_5P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_6P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_6P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_7P_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_7P));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CHR
//void UMyUserWidget::krz_CHR_1P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_1P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_2P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_2P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_3P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_3P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_4P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_4P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_5P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_5P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_6P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_6P));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_7P_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_7P));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M1
//void UMyUserWidget::krz_M1_CH1_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH1));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH2_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH2));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH3_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH3));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH4_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH4));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH5_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH5));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH6_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH6));
//	t.detach();
//}
//void UMyUserWidget::krz_M1_CH7_StartRun()
//{
//	Disp->krz._M1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M1_CH7));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M2
//void UMyUserWidget::krz_M2_N1_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N2_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N3_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N4_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N5_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N6_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_N7_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M2_M5_StartRun()
//{
//	Disp->krz._M2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M3
//void UMyUserWidget::krz_M3_CH1_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH1));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH2_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH2));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH3_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH3));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH4_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH4));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH5_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH5));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH6_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH6));
//	t.detach();
//}
//void UMyUserWidget::krz_M3_CH7_StartRun()
//{
//	Disp->krz._M3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M3_CH7));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M4
//void UMyUserWidget::krz_M4_N1_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N2_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N3_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N4_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N5_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N6_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_N7_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M4_M5_StartRun()
//{
//	Disp->krz._M4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M2_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M5
//void UMyUserWidget::krz_M5_M2_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M4_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M6_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M8_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M10_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M12_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M14_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M16_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M16));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M18_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M18));
//	t.detach();
//}
//void UMyUserWidget::krz_M5_M20_StartRun()
//{
//	Disp->krz._M5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M5_M20));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M6
//void UMyUserWidget::krz_M6_N1_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N2_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N3_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N4_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N5_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N6_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_N7_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M6_M5_StartRun()
//{
//	Disp->krz._M6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M6_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M10
//void UMyUserWidget::krz_M10_N1_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N2_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N3_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N4_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N5_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N6_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_N7_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M10_M5_StartRun()
//{
//	Disp->krz._M10.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M10_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M12
//void UMyUserWidget::krz_M12_N1_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N2_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N3_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N4_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N5_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N6_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_N7_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M12_M5_StartRun()
//{
//	Disp->krz._M12.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M12_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M14
//void UMyUserWidget::krz_M14_N1_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N2_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N3_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N4_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N5_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N6_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_N7_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M14_M5_StartRun()
//{
//	Disp->krz._M14.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M14_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from M16
//
//void UMyUserWidget::krz_M16_M5_StartRun()
//{
//	Disp->krz._M16.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M16_M5));
//	t.detach();
//}
//void UMyUserWidget::krz_M16_N1_StartRun()
//{
//}
//void UMyUserWidget::krz_M16_N2_StartRun()
//{
//}
//
//#pragma endregion
//#pragma region from M18
//
//void UMyUserWidget::krz_M18_M5_StartRun()
//{
//	Disp->krz._M18.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M18_M5));
//	t.detach();
//}
//void UMyUserWidget::krz_M18_N1_StartRun()
//{
//}
//void UMyUserWidget::krz_M18_N2_StartRun()
//{
//}
//
//#pragma endregion
//#pragma region from M20
//
//void UMyUserWidget::krz_M20_M5_StartRun()
//{
//	Disp->krz._M20.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M20_M5));
//	t.detach();
//}
//void UMyUserWidget::krz_M20_N1_StartRun()
//{
//}
//void UMyUserWidget::krz_M20_N2_StartRun()
//{
//}
//
//#pragma endregion
//#pragma region from M8
//void UMyUserWidget::krz_M8_N1_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N1));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N2_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N2));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N3_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N3));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N4_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N4));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N5_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N5));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N6_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N6));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_N7_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_N7));
//	t.detach();
//}
//void UMyUserWidget::krz_M8_M5_StartRun()
//{
//	Disp->krz._M8.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_M8_M5));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH1
//void UMyUserWidget::krz_CH1_M1_StartRun()
//{
//	Disp->krz._CH1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH1_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH1_M3_StartRun()
//{
//	Disp->krz._CH1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH1_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH1_N_StartRun()
//{
//	Disp->krz._CH1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH1_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH1_ND_StartRun()
//{
//	Disp->krz._CH1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH1_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH2
//void UMyUserWidget::krz_CH2_M1_StartRun()
//{
//	Disp->krz._CH2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH2_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH2_M3_StartRun()
//{
//	Disp->krz._CH2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH2_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH2_N_StartRun()
//{
//	Disp->krz._CH2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH2_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH2_ND_StartRun()
//{
//	Disp->krz._CH2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH2_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH3
//void UMyUserWidget::krz_CH3_M1_StartRun()
//{
//	Disp->krz._CH3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH3_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH3_M3_StartRun()
//{
//	Disp->krz._CH3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH3_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH3_N_StartRun()
//{
//	Disp->krz._CH3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH3_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH3_ND_StartRun()
//{
//	Disp->krz._CH3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH3_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH4
//void UMyUserWidget::krz_CH4_M1_StartRun()
//{
//	Disp->krz._CH4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH4_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH4_M3_StartRun()
//{
//	Disp->krz._CH4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH4_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH4_N_StartRun()
//{
//	Disp->krz._CH4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH4_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH4_ND_StartRun()
//{
//	Disp->krz._CH4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH4_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH5
//void UMyUserWidget::krz_CH5_M1_StartRun()
//{
//	Disp->krz._CH5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH5_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH5_M3_StartRun()
//{
//	Disp->krz._CH5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH5_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH5_N_StartRun()
//{
//	Disp->krz._CH5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH5_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH5_ND_StartRun()
//{
//	Disp->krz._CH5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH5_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH6
//void UMyUserWidget::krz_CH6_M1_StartRun()
//{
//	Disp->krz._CH6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH6_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH6_M3_StartRun()
//{
//	Disp->krz._CH6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH6_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH6_N_StartRun()
//{
//	Disp->krz._CH6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH6_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH6_ND_StartRun()
//{
//	Disp->krz._CH6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH6_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from CH7
//void UMyUserWidget::krz_CH7_M1_StartRun()
//{
//	Disp->krz._CH7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH7_M1));
//	t.detach();
//}
//void UMyUserWidget::krz_CH7_M3_StartRun()
//{
//	Disp->krz._CH7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_CH7_M3));
//	t.detach();
//}
//void UMyUserWidget::krz_CH7_N_StartRun()
//{
//	Disp->krz._CH7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH7_N));
//	t.detach();
//}
//void UMyUserWidget::krz_CH7_ND_StartRun()
//{
//	Disp->krz._CH7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH7_ND));
//	t.detach();
//}
//#pragma endregion
//#pragma region from N1
//void UMyUserWidget::krz_N1_M2_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M4_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M6_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M8_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M10_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M12_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M14_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M16_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M16));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M18_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M18));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_M20_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N1_M20));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_CH_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N1_CH));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_CHD_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N1_CHD));
//	t.detach();
//}
//void UMyUserWidget::krz_N1_CHR_StartRun()
//{
//	Disp->krz._N1.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N1_CHR));
//	t.detach();
//}
//#pragma endregion
//#pragma region from N2
//void UMyUserWidget::krz_N2_M2_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M4_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M6_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M8_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M10_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M12_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M14_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M16_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M16));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M18_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M18));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_M20_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N2_M20));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_CH_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N2_CH));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_CHD_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N2_CHD));
//	t.detach();
//}
//void UMyUserWidget::krz_N2_CHR_StartRun()
//{
//	Disp->krz._N2.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N2_CHR));
//	t.detach();
//}
//#pragma endregion
//#pragma region from N3
//void UMyUserWidget::krz_N3_M2_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M4_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M6_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M8_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M10_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M12_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_M14_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N3_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_CH_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N3_CH));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_CHD_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N3_CHD));
//	t.detach();
//}
//void UMyUserWidget::krz_N3_CHR_StartRun()
//{
//	Disp->krz._N3.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N3_CHR));
//	t.detach();
//}
//#pragma endregion
//#pragma region from N4
//void UMyUserWidget::krz_N4_M2_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M4_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M6_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M8_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M10_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M12_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_M14_StartRun()
//{
//	Disp->krz._N4.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N4_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N4_CH_StartRun()
//{
//}
//void UMyUserWidget::krz_N4_CHD_StartRun()
//{
//}
//void UMyUserWidget::krz_N4_CHR_StartRun()
//{
//}
//#pragma endregion
//#pragma region from N5
//void UMyUserWidget::krz_N5_M2_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M4_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M6_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M8_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M10_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M12_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_M14_StartRun()
//{
//	Disp->krz._N5.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N5_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N5_CH_StartRun()
//{
//}
//void UMyUserWidget::krz_N5_CHD_StartRun()
//{
//}
//void UMyUserWidget::krz_N5_CHR_StartRun()
//{
//}
//#pragma endregion
//#pragma region from N6
//void UMyUserWidget::krz_N6_M2_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M4_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M6_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M8_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M10_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M12_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_M14_StartRun()
//{
//	Disp->krz._N6.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N6_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N6_CH_StartRun()
//{
//}
//void UMyUserWidget::krz_N6_CHD_StartRun()
//{
//}
//void UMyUserWidget::krz_N6_CHR_StartRun()
//{
//}
//#pragma endregion
//#pragma region from N7
//void UMyUserWidget::krz_N7_M2_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M2));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M4_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M4));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M6_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M6));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M8_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M8));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M10_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M10));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M12_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M12));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_M14_StartRun()
//{
//	Disp->krz._N7.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_ManRouterRun, this, std::ref(Disp->krz_N7_M14));
//	t.detach();
//}
//void UMyUserWidget::krz_N7_CH_StartRun()
//{
//}
//void UMyUserWidget::krz_N7_CHD_StartRun()
//{
//}
//void UMyUserWidget::krz_N7_CHR_StartRun()
//{
//}
//#pragma endregion
//#pragma region OUT_s
//void UMyUserWidget::krz_N_KARABAS_StartRun()
//{
//	Disp->krz._N.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_N_KARABAS));
//	t.detach();
//}
//void UMyUserWidget::krz_ND_KARABAS_StartRun()
//{
//	Disp->krz._ND.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_ND_KARABAS));
//	t.detach();
//}
//void UMyUserWidget::krz_KARABAS_N_StartRun()
//{
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_KARABAS_N));
//	t.detach();
//}
//void UMyUserWidget::krz_KARABAS_ND_StartRun()
//{
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_KARABAS_ND));
//	t.detach();
//}
//void UMyUserWidget::krz_CH_KARAGANDA_StartRun()
//{
//	Disp->krz._CH.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CH_KARAGANDA));
//	t.detach();
//}
//void UMyUserWidget::krz_CHD_KARAGANDA_StartRun()
//{
//	Disp->krz._CHD.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHD_KARAGANDA));
//	t.detach();
//}
//void UMyUserWidget::krz_KARAGANDA_CH_StartRun()
//{
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_KARAGANDA_CH));
//	t.detach();
//}
//void UMyUserWidget::krz_KARAGANDA_CHD_StartRun()
//{
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_KARAGANDA_CHD));
//	t.detach();
//}
//void UMyUserWidget::krz_CHR_OUT_StartRun()
//{
//	Disp->krz._CHR.dopstat = EdopStat::Norm;
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_CHR_OUT));
//	t.detach();
//}
//void UMyUserWidget::krz_OUT_CHR_StartRun()
//{
//	std::thread t(&UMyUserWidget::krz_RouterRun, this, std::ref(Disp->krz_OUT_CHR));
//	t.detach();
//}
//#pragma endregion
//#pragma endregion
//#pragma region Router: Impl:  Run // анимация имитации движения поездов и локомотивов
//
//Router& UMyUserWidget::krz_GetReadyRouter(EdopStat dopstat)
//{
//	for (size_t i = 0; i < Disp->krz_arrRouter.size(); i++)
//	{
//		if (Disp->krz_arrRouter[i]->arrRouter[0]->dopstat == dopstat && Disp->krz_arrRouter[i]->isReady)
//		{
//			return *Disp->krz_arrRouter[i];
//		}
//	}
//	return *Disp->krz_arrRouter[0];
//}
//void UMyUserWidget::krz_RouterRun(Router& router)//реализация анимации движения поезда по станции
//{
//	//ДЛЯ ПРЕДОТВРАЩЕНИЯ ПОВТОРНОГО ЗАПУСКА МАРШРУТА ЧЕКЕРОМ СТАНЦИИ ИЗМЕНЯЕМ dopstat СВЕТОФОРА МАРШРУТА
//#pragma region SET WAITING START
//	if (router.arrRouter[0]->dopstat == EdopStat::N) Disp->krz._N.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::ND) Disp->krz._ND.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH) Disp->krz._CH.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CHD) Disp->krz._CHD.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CHR) Disp->krz._CHR.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N1) Disp->krz._N1.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N2) Disp->krz._N2.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N3) Disp->krz._N3.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N4) Disp->krz._N4.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N5) Disp->krz._N5.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N6) Disp->krz._N6.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N7) Disp->krz._N7.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH1) Disp->krz._CH1.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH2) Disp->krz._CH2.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH3) Disp->krz._CH3.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH4) Disp->krz._CH4.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH5) Disp->krz._CH5.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH6) Disp->krz._CH6.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH7) Disp->krz._CH7.oper = EOper::WaitingStart;
//#pragma endregion	
//	Sleep(Disp->krz.timeforRouterRun * 2);
//#pragma region Zapusk Razmikania i elementa
//	//for (int i = 0; i < router.sizeRouter; i++)
//	//{
//	//	if (i == 0)
//	//	{
//	//		Disp->MyBeep(100, 1000);
//	//		Sleep(Disp->krz.timeforRouterRun * 2);
//	//		if (router.arrRouter[0]->dopstat == EdopStat::CH)
//	//		{
//	//			Disp->krz._N.stat = EAStat::Red;
//	//			Disp->krz._N.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._1NP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._1NP.num;//передача номера поезда
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::ND)
//	//		{
//	//			Disp->krz._ND.stat = EAStat::Red;
//	//			Disp->krz._ND.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._1UPN));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._1UPN.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH)
//	//		{
//	//			Disp->krz._CH.stat = EAStat::Red;
//	//			Disp->krz._CH.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._1CHP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._1CHP.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CHD)
//	//		{
//	//			Disp->krz._CHD.stat = EAStat::Red;
//	//			Disp->krz._CHD.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._1UPCH));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._1UPCH.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CHR)
//	//		{
//	//			Disp->krz._CHR.stat = EAStat::Red;
//	//			Disp->krz._CHR.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._1PP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._1PP.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N1)
//	//		{
//	//			Disp->krz._N1.stat = EAStat::Grey;
//	//			Disp->krz._N1.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w1 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w1));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w1.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N2)
//	//		{
//	//			Disp->krz._N2.stat = EAStat::Grey;
//	//			Disp->krz._N2.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w2 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w2));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w2.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N3)
//	//		{
//	//			Disp->krz._N3.stat = EAStat::Grey;
//	//			Disp->krz._N3.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w3 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w3));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w3.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N4)
//	//		{
//	//			Disp->krz._N4.stat = EAStat::Grey;
//	//			Disp->krz._N4.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w4 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w4));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w4.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N5)
//	//		{
//	//			Disp->krz._N5.stat = EAStat::Grey;
//	//			Disp->krz._N5.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w5 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w5));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w5.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N6)
//	//		{
//	//			Disp->krz._N1.stat = EAStat::Grey;
//	//			Disp->krz._N1.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w1 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w1));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w6.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N7)
//	//		{
//	//			Disp->krz._N7.stat = EAStat::Grey;
//	//			Disp->krz._N7.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w7 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w7));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w7.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH1)
//	//		{
//	//			Disp->krz._CH1.stat = EAStat::Grey;
//	//			Disp->krz._CH1.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w1 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w1));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w1.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH2)
//	//		{
//	//			Disp->krz._CH2.stat = EAStat::Grey;
//	//			Disp->krz._CH2.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w2 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w2));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w2.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH3)
//	//		{
//	//			Disp->krz._CH3.stat = EAStat::Grey;
//	//			Disp->krz._CH3.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w3 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w3));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w3.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH4)
//	//		{
//	//			Disp->krz._CH4.stat = EAStat::Grey;
//	//			Disp->krz._CH4.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w4 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w4));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w4.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH5)
//	//		{
//	//			Disp->krz._CH5.stat = EAStat::Grey;
//	//			Disp->krz._CH5.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w5 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w5));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w5.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH6)
//	//		{
//	//			Disp->krz._CH6.stat = EAStat::Grey;
//	//			Disp->krz._CH6.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w6 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w6));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w6.num;
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH7)
//	//		{
//	//			Disp->krz._CH7.stat = EAStat::Grey;
//	//			Disp->krz._CH7.oper = EOper::Norm;
//	//			Disp->krz.poezdOn_w7 = false;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w7));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//			router.arrRouter[0]->num = Disp->krz._w7.num;
//	//		}
//	//	}
//	//	else
//	//	{
//	//		//передаем номер поезда
//	//		router.arrRouter[i]->num = router.arrRouter[i - 1]->num;
//	//		std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[i - 1]));//в отдельном потоке запускаем ожидание размыкания рельса
//	//		t.detach();
//	//	}
//	//	router.arrRouter[i]->stat = EAStat::Busy; //обозначаем занятость первого элемента массива маршрута
//	//	Disp->SendToServer();
//	//	Sleep(Disp->krz.timeforRouterRun / 2);
//	//}
//#pragma endregion
//	//обозначаем наличие поезда на станции
//	//if (Disp->krz._w1.stat == EAStat::Busy) Disp->krz.poezdOn_w1 = true;
//	//if (Disp->krz._w2.stat == EAStat::Busy) Disp->krz.poezdOn_w2 = true;
//	//if (Disp->krz._w3.stat == EAStat::Busy) Disp->krz.poezdOn_w3 = true;
//	//if (Disp->krz._w4.stat == EAStat::Busy) Disp->krz.poezdOn_w4 = true;
//	//if (Disp->krz._w5.stat == EAStat::Busy) Disp->krz.poezdOn_w5 = true;
//	//if (Disp->krz._w6.stat == EAStat::Busy) Disp->krz.poezdOn_w6 = true;
//	//if (Disp->krz._w7.stat == EAStat::Busy) Disp->krz.poezdOn_w7 = true;
//	//после выхода со станции стартуем наружный маршрут
//	if (Disp->krz._NP.stat == EAStat::Busy && Disp->krz._NP.dopstat != EdopStat::N/*для преотвращения обратного*/ && Disp->krz._NP.num != 0/*для отсечения маневрового*/)
//	{
//		std::thread t(&UMyUserWidget::krz_FromStationToOutRun, this, std::ref(Disp->krz_N_KARABAS));
//		t.detach();
//	}
//	if (Disp->krz._NAP.stat == EAStat::Busy && Disp->krz._NAP.dopstat != EdopStat::ND && Disp->krz._NAP.num != 0)
//	{
//		std::thread t(&UMyUserWidget::krz_FromStationToOutRun, this, std::ref(Disp->krz_ND_KARABAS));
//		t.detach();
//	}
//	if (Disp->krz._CHP.stat == EAStat::Busy && Disp->krz._CHP.dopstat != EdopStat::CH && Disp->krz._CHP.num != 0)
//	{
//		std::thread t(&UMyUserWidget::krz_FromStationToOutRun, this, std::ref(Disp->krz_CH_KARAGANDA));
//		t.detach();
//	}
//	if (Disp->krz._CHAP.stat == EAStat::Busy && Disp->krz._CHAP.dopstat != EdopStat::CH && Disp->krz._CHAP.num != 0)
//	{
//		std::thread t(&UMyUserWidget::krz_FromStationToOutRun, this, std::ref(Disp->krz_CHD_KARAGANDA));
//		t.detach();
//	}
//	if (Disp->krz._CHRP.stat == EAStat::Busy && Disp->krz._CHRP.dopstat != EdopStat::CH && Disp->krz._CHRP.num != 0)
//	{
//		std::thread t(&UMyUserWidget::krz_FromStationToOutRun, this, std::ref(Disp->krz_CHR_OUT));
//		t.detach();
//	}
//
//}
//void UMyUserWidget::krz_ManRouterRun(Router& router)//реализация анимации движения локомотива по станции
//{
//	//ДЛЯ ПРЕДОТВРАЩЕНИЯ ПОВТОРНОГО ЗАПУСКА МАРШРУТА ЧЕКЕРОМ СТАНЦИИ ИЗМЕНЯЕМ dopstat СВЕТОФОРА МАРШРУТА
//#pragma region SET WAITING START
//	if (router.arrRouter[0]->dopstat == EdopStat::M1) Disp->krz._M1.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M2) Disp->krz._M2.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M3) Disp->krz._M3.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M4) Disp->krz._M4.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M5) Disp->krz._M5.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M6) Disp->krz._M6.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M8) Disp->krz._M8.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M10) Disp->krz._M10.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M12) Disp->krz._M12.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M14) Disp->krz._M14.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M16) Disp->krz._M16.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M18) Disp->krz._M18.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::M20) Disp->krz._M20.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N1) Disp->krz._N1.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N2) Disp->krz._N2.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N3) Disp->krz._N3.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N4) Disp->krz._N4.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N5) Disp->krz._N5.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N6) Disp->krz._N6.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::N7) Disp->krz._N7.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH1) Disp->krz._CH1.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH2) Disp->krz._CH2.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH3) Disp->krz._CH3.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH4) Disp->krz._CH4.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH5) Disp->krz._CH5.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH6) Disp->krz._CH6.oper = EOper::WaitingStart;
//	if (router.arrRouter[0]->dopstat == EdopStat::CH7) Disp->krz._CH7.oper = EOper::WaitingStart;
//#pragma endregion
//	Sleep(Disp->krz.timeforRouterRun * 2);//пауза перед стартом выполнения маршрута
//#pragma region Zapusk Razmikania i elementa
//	//for (int i = 0; i < router.sizeRouter; i++)
//	//{
//
//	//	if (i == 0)
//	//	{
//	//		Disp->MyBeep(100, 1000);// ДАЕМ ГУДОК
//	//		Sleep(Disp->krz.timeforRouterRun * 2);//ЕЩЕ ПАУЗА И ... START
//	//		if (router.arrRouter[0]->dopstat == EdopStat::M1)
//	//		{
//	//			Disp->krz._M1.stat = EAStat::Grey;
//	//			Disp->krz._M1.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._NP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M2)
//	//		{
//	//			Disp->krz._M2.stat = EAStat::Grey;
//	//			Disp->krz._M2.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._CHP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M3)
//	//		{
//	//			Disp->krz._M3.stat = EAStat::Grey;
//	//			Disp->krz._M3.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._NAP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M4)
//	//		{
//	//			Disp->krz._M4.stat = EAStat::Grey;
//	//			Disp->krz._M4.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._CHAP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M5)
//	//		{
//	//			Disp->krz._M5.stat = EAStat::Grey;
//	//			Disp->krz._M5.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M5_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M6)
//	//		{
//	//			Disp->krz._M6.stat = EAStat::Grey;
//	//			Disp->krz._M6.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M6_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M8)
//	//		{
//	//			Disp->krz._M8.stat = EAStat::Grey;
//	//			Disp->krz._M8.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._CHRP));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M10)
//	//		{
//	//			Disp->krz._M10.stat = EAStat::Grey;
//	//			Disp->krz._M10.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M10_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M12)
//	//		{
//	//			Disp->krz._M12.stat = EAStat::Grey;
//	//			Disp->krz._M12.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M12_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M14)
//	//		{
//	//			Disp->krz._M14.stat = EAStat::Grey;
//	//			Disp->krz._M14.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M14_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M16)
//	//		{
//	//			Disp->krz._M16.stat = EAStat::Grey;
//	//			Disp->krz._M16.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M16_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M18)
//	//		{
//	//			Disp->krz._M18.stat = EAStat::Grey;
//	//			Disp->krz._M18.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M18_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::M20)
//	//		{
//	//			Disp->krz._M20.stat = EAStat::Grey;
//	//			Disp->krz._M20.oper = EOper::Norm;
//	//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._M20_tupic));//в отдельном потоке запускаем ожидание размыкания рельса
//	//			t.detach();
//	//		}
//
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N1)
//	//		{
//	//			Disp->krz._N1.stat = EAStat::Grey;
//	//			Disp->krz._N1.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w1)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w1));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N2)
//	//		{
//	//			Disp->krz._N2.stat = EAStat::Grey;
//	//			Disp->krz._N2.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w2)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w2));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N3)
//	//		{
//	//			Disp->krz._N3.stat = EAStat::Grey;
//	//			Disp->krz._N3.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w3)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w3));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N4)
//	//		{
//	//			Disp->krz._N4.stat = EAStat::Grey;
//	//			Disp->krz._N4.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w4)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w4));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N5)
//	//		{
//	//			Disp->krz._N5.stat = EAStat::Grey;
//	//			Disp->krz._N5.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w5)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w5));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N6)
//	//		{
//	//			Disp->krz._N6.stat = EAStat::Grey;
//	//			Disp->krz._N6.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w6)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w6));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::N7)
//	//		{
//	//			Disp->krz._N7.stat = EAStat::Grey;
//	//			Disp->krz._N7.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w7)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w7));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH1)
//	//		{
//	//			Disp->krz._CH1.stat = EAStat::Grey;
//	//			Disp->krz._CH1.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w1)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w1));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH2)
//	//		{
//	//			Disp->krz._CH2.stat = EAStat::Grey;
//	//			Disp->krz._CH2.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w2)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w2));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH3)
//	//		{
//	//			Disp->krz._CH3.stat = EAStat::Grey;
//	//			Disp->krz._CH3.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w3)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w3));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH4)
//	//		{
//	//			Disp->krz._CH4.stat = EAStat::Grey;
//	//			Disp->krz._CH4.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w4)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w4));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH5)
//	//		{
//	//			Disp->krz._CH5.stat = EAStat::Grey;
//	//			Disp->krz._CH5.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w5)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w5));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH6)
//	//		{
//	//			Disp->krz._CH6.stat = EAStat::Grey;
//	//			Disp->krz._CH6.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w6)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w6));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//		else if (router.arrRouter[0]->dopstat == EdopStat::CH7)
//	//		{
//	//			Disp->krz._CH7.stat = EAStat::Grey;
//	//			Disp->krz._CH7.oper = EOper::Norm;
//	//			if (!Disp->krz.poezdOn_w7)
//	//			{
//	//				std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(Disp->krz._w7));//в отдельном потоке запускаем ожидание размыкания рельса
//	//				t.detach();
//	//			}
//	//		}
//	//	}
//	//	else
//	//	{
//	//		std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[i - 1]));//в отдельном потоке запускаем ожидание размыкания рельса
//	//		t.detach();
//	//	}
//	//	router.arrRouter[i]->stat = EAStat::Busy; //обозначаем занятость первого элемента массива маршрута
//	//	Disp->SendToServer();
//	//	Sleep(Disp->krz.timeforRouterRun / 2);
//	//}
//#pragma endregion
//}
//void UMyUserWidget::krz_FromStationToOutRun(Router& router)//реализация анимации движения поезда от станции к ауту
//{
//	for (int i = 0; i < router.sizeRouter; i++)
//	{
//		if (i == 0)
//		{
//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[0]));
//			t.detach();
//			Sleep(Disp->krz.timeforRouterRun * 2);
//		}
//		else
//		{
//			router.arrRouter[i]->stat = EAStat::Busy; //обозначаем занятость первого элемента массива маршрута
//			router.arrRouter[i]->num = router.arrRouter[i - 1]->num;//передаем номер поезда по маршруту
//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[i - 1]));//отправляем на ожидание размыкания( имитация прохождения хвоста поезда)
//			Disp->SendToServer();
//			Sleep(Disp->krz.timeforRouterRun * 4);
//		}
//	}
//}
//void UMyUserWidget::krz_FromOutToStationRun(Router& router)//реализация анимации движения поезда от аута к станции
//{
//	for (int i = 0; i < router.sizeRouter; i++)
//	{
//		if (i == 0)
//		{
//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[0]));
//			t.detach();
//			Sleep(Disp->krz.timeforRouterRun * 4);
//		}
//		else
//		{
//			router.arrRouter[i]->stat = EAStat::Busy; //обозначаем занятость первого элемента массива маршрута
//			router.arrRouter[i]->num = router.arrRouter[i - 1]->num;//передаем номер поезда по маршруту
//			std::thread t(&UMyUserWidget::ImitWaitingEndRazmik, this, std::ref(*router.arrRouter[i - 1]));//отправляем на ожидание размыкания( имитация прохождения хвоста поезда)
//			Disp->SendToServer();
//			Sleep(Disp->krz.timeforRouterRun * 4);
//		}
//	}
//}
//
//void UMyUserWidget::ImitWaitingEndRazmik(FElm& way)
//{
//	Sleep(Disp->krz.timeforRouterRun);
//
//	if (way.cur != ExCurator::FalseBusy)
//	{
//		way.stat = EAStat::Free;//  размыкаем, освобождаем рельс
//	}
//	way.dopstat = EdopStat::Norm;
//	way.oper = EOper::Norm;
//	way.num = 0;
//	Disp->SendToServer();
//}
//void UMyUserWidget::ImitWaitingEndRazmikOutStation(FElm& way)
//{
//	Sleep(Disp->krz.timeforRouterRun * 4);
//	if (way.cur != ExCurator::FalseBusy)
//	{
//		way.stat = EAStat::Free;//  размыкаем, освобождаем рельс
//	}
//	way.dopstat = EdopStat::Norm;
//	way.oper = EOper::Norm;
//	way.num = 0;
//	Disp->SendToServer();
//}
//
//#pragma endregion
//void UMyUserWidget::krz_DestroyOneRouter()
//{
//
//	EdopStat dopstat = krz_Get_Svetofor_Redact();
//
//	for (size_t i = 0; i < Disp->krz_arrRouter.size(); i++)
//	{
//		if (Disp->krz_arrRouter[i]->arrRouter[0]->dopstat == dopstat && Disp->krz_arrRouter[i]->isReady)
//		{
//			std::thread t(&UMyUserWidget::krz_DestroyOneRouterEndInThread, this, std::ref(*Disp->krz_arrRouter[i]));
//			t.detach();
//			break;
//		}
//	}
//
//
//}
//void UMyUserWidget::krz_DestroyOneRouterEndInThread(Router& router)
//{
//	krz_Make_All_Svetofor_UnRedact();
//	//router.ToFree();
//	Disp->SendToServer();
//	Sleep(500);
//	//router.Free();
//	Disp->SendToServer();
//}
//#pragma endregion
//
//#pragma region Strelki
//bool UMyUserWidget::WayFree(FElm& way1, FElm& way2)
//{
//	if (way1.oper == EOper::Norm && way2.oper == EOper::Norm) return true;
//	else return false;
//}
//bool UMyUserWidget::WayFree(FElm& way1, FElm& way2, FElm& way3)
//{
//	if (way1.oper == EOper::Norm && way2.oper == EOper::Norm && way3.oper == EOper::Norm) return true;
//	else return false;
//}
//bool UMyUserWidget::WayFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4)
//{
//	if (way1.oper == EOper::Norm && way2.oper == EOper::Norm && way3.oper == EOper::Norm && way4.oper == EOper::Norm) return true;
//	else return false;
//}
//bool UMyUserWidget::WayFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4, FElm& way5)
//{
//	if (way1.oper == EOper::Norm && way2.oper == EOper::Norm && way2.oper == EOper::Norm && way3.oper == EOper::Norm && way5.oper == EOper::Norm && way5.oper == EOper::Norm) return true;
//	else return false;
//}
//bool UMyUserWidget::WayFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4, FElm& way5, FElm& way6)
//{
//	if (way1.oper == EOper::Norm && way2.oper == EOper::Norm && way3.oper == EOper::Norm && way4.oper == EOper::Norm && way5.oper == EOper::Norm && way6.oper == EOper::Norm) return true;
//	else return false;
//}
//void UMyUserWidget::ToMinus(FElm& str)
//{
//	FElm* StrelkaForPerevod = krz_CheckTwiceStrelka(&str);//при необходимости сначала стартуем пару
//	if (str.stat == EAStat::Plus && (str.cur == ExCurator::Norm || str.cur == ExCurator::WaitingAvaria))//изменяем стрелку
//	{
//		std::thread t(&UMyUserWidget::StrToEndChange, this, std::ref(*StrelkaForPerevod));
//		//std::thread t(&UMyUserWidget::ToChangeStr, this, std::ref(str));
//		t.detach();
//	}
//	else
//	{
//		str.oper = EOper::Norm;
//		Disp->SendToServer();
//	}
//}
//void UMyUserWidget::ToPlus(FElm& str)
//{
//	FElm* StrelkaForPerevod = krz_CheckTwiceStrelka(&str);//при необходимости сначала стартуем пару
//	if (str.stat == EAStat::Minus && (str.cur == ExCurator::Norm || str.cur == ExCurator::WaitingAvaria))//изменяем стрелку
//	{
//		std::thread t(&UMyUserWidget::StrToEndChange, this, std::ref(*StrelkaForPerevod));
//		//std::thread t(&UMyUserWidget::ToChangeStr, this, std::ref(str));
//		t.detach();
//	}
//	else
//	{
//		str.oper = EOper::Norm;
//		Disp->SendToServer();
//	}
//}
//void UMyUserWidget::StrToEndChange(FElm& str)
//{
//
//	str.oper = EOper::Norm;
//	if (str.stat == EAStat::Minus)
//	{
//		str.stat = EAStat::Status_changes;
//		Disp->SendToServer();
//		if (str.cur == ExCurator::WaitingAvaria)
//		{
//			return;
//		}
//		Sleep(Disp->SwitchingTime * 1000);
//		str.stat = EAStat::Plus;
//	}
//	else if (str.stat == EAStat::Plus)
//	{
//		str.stat = EAStat::Status_changes;
//		Disp->SendToServer();
//		if (str.cur == ExCurator::WaitingAvaria)
//		{
//			return;
//		}
//		Sleep(Disp->SwitchingTime * 1000);
//		str.stat = EAStat::Minus;
//	}
//	Disp->SendToServer();
//
//}
//bool UMyUserWidget::krz_IsStrelkaFree(FElm& str)
//{
//	if ((str.num == 1 || str.num == 3) && WayFree(Disp->krz._str1, Disp->krz._s1, Disp->krz._M3_s1, Disp->krz._str3, Disp->krz._s3, Disp->krz._M1_s3)) return true;
//	else return false;
//
//	if (str.num == 2 && WayFree(Disp->krz._str2, Disp->krz._s2, Disp->krz._s2_s12)) return true;
//	else return false;
//
//	if (str.num == 4 && WayFree(Disp->krz._str4, Disp->krz._s4, Disp->krz._M12_s4)) return true;
//	else return false;
//
//	if ((str.num == 5 || str.num == 7) && WayFree(Disp->krz._str5, Disp->krz._s5, Disp->krz._s3_s5, Disp->krz._str7, Disp->krz._s7, Disp->krz._s7_s15)) return true;
//	else return false;
//
//	if (str.num == 6 && WayFree(Disp->krz._str6, Disp->krz._s6, Disp->krz._s6_s14)) return true;
//	else return false;
//
//	if (str.num == 8 && WayFree(Disp->krz._str8, Disp->krz._s8, Disp->krz._M6_s8)) return true;
//	else return false;
//
//	if (str.num == 9 && WayFree(Disp->krz._str9, Disp->krz._s9, Disp->krz._s5_s9)) return true;
//	else return false;
//
//	if (str.num == 10 && WayFree(Disp->krz._str10, Disp->krz._s10, Disp->krz._M8_s10)) return true;
//	else return false;
//
//	if (str.num == 11 && WayFree(Disp->krz._str11, Disp->krz._s11, Disp->krz._CH3_s11)) return true;
//	else return false;
//
//	if ((str.num == 12 || str.num == 14) && WayFree(Disp->krz._str12, Disp->krz._s12, Disp->krz._s2_s12, Disp->krz._str14, Disp->krz._s14, Disp->krz._s14_s16)) return true;
//	else return false;
//
//	if (str.num == 13 && WayFree(Disp->krz._str13, Disp->krz._s13, Disp->krz._CH2_s13)) return true;
//	else return false;
//
//	if (str.num == 15 && WayFree(Disp->krz._str15, Disp->krz._s15, Disp->krz._s7_s15)) return true;
//	else return false;
//
//	if ((str.num == 16 || str.num == 18) && WayFree(Disp->krz._str16, Disp->krz._s16, Disp->krz._s14_s16, Disp->krz._str18, Disp->krz._s18, Disp->krz._s18_s20)) return true;
//	else return false;
//
//	if (str.num == 17 && WayFree(Disp->krz._str17, Disp->krz._s17, Disp->krz._s15_s17)) return true;
//	else return false;
//
//	if (str.num == 20 && WayFree(Disp->krz._str20, Disp->krz._s20, Disp->krz._s18_s20)) return true;
//	else return false;
//
//	if (str.num == 22 && WayFree(Disp->krz._str22, Disp->krz._s22, Disp->krz._N6_s22)) return true;
//	else return false;
//
//	if (str.num == 24 && WayFree(Disp->krz._str24, Disp->krz._s24, Disp->krz._s16_s24)) return true;
//	else return false;
//
//	if ((str.num == 26 || str.num == 28) && WayFree(Disp->krz._str26, Disp->krz._s26, Disp->krz._N3_s26, Disp->krz._str28, Disp->krz._s28, Disp->krz._s28_s34)) return true;
//	else return false;
//
//	if (str.num == 30 && WayFree(Disp->krz._str30, Disp->krz._s30, Disp->krz._s28_s30)) return true;
//	else return false;
//
//	if (str.num == 32 && WayFree(Disp->krz._str32, Disp->krz._s32, Disp->krz._s28_s30)) return true;
//	else return false;
//
//	if (str.num == 34 && WayFree(Disp->krz._str34, Disp->krz._s34, Disp->krz._s28_s34)) return true;
//	else return false;
//
//	if (str.num == 36 && WayFree(Disp->krz._str36, Disp->krz._s36, Disp->krz._N1_s36)) return true;
//	else return false;
//}
//FElm* UMyUserWidget::krz_CheckTwiceStrelka(FElm* str)
//{
//	if (str->num == 1 && Disp->krz._str1.stat ==Disp->krz._str3.stat)
//	{
//		return &Disp->krz._str3;//если стрелка 3 еще не переведена , то переводим сначала ее
//
//	}
//	if (str->num == 5 && Disp->krz._str5.stat ==Disp->krz._str7.stat) return &Disp->krz._str7;
//	if (str->num == 12 && Disp->krz._str12.stat ==Disp->krz._str14.stat) return &Disp->krz._str14;
//	if (str->num == 16 && Disp->krz._str16.stat ==Disp->krz._str18.stat) return &Disp->krz._str18;
//	if (str->num == 26 && Disp->krz._str26.stat ==Disp->krz._str28.stat) return &Disp->krz._str28;
//	return str;//если пара переведена или проверяемая стрелка непарная, то возвращаем ее же
//}
//int UMyUserWidget::krz_Make_Strelka_Redact(int number)
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		Disp->krz_arrStr[i]->oper = EOper::Norm;
//	}
//	if (number == 1) Disp->krz._str1.oper = EOper::Redact;
//	else if (number == 2) Disp->krz._str2.oper = EOper::Redact;
//	else if (number == 3) Disp->krz._str3.oper = EOper::Redact;
//	else if (number == 4) Disp->krz._str4.oper = EOper::Redact;
//	else if (number == 5) Disp->krz._str5.oper = EOper::Redact;
//	else if (number == 6) Disp->krz._str6.oper = EOper::Redact;
//	else if (number == 7) Disp->krz._str7.oper = EOper::Redact;
//	else if (number == 8) Disp->krz._str8.oper = EOper::Redact;
//	else if (number == 9) Disp->krz._str9.oper = EOper::Redact;
//	else if (number == 10) Disp->krz._str10.oper = EOper::Redact;
//	else if (number == 11) Disp->krz._str11.oper = EOper::Redact;
//	else if (number == 12) Disp->krz._str12.oper = EOper::Redact;
//	else if (number == 12) Disp->krz._str13.oper = EOper::Redact;
//	else if (number == 14) Disp->krz._str14.oper = EOper::Redact;
//	else if (number == 15) Disp->krz._str15.oper = EOper::Redact;
//	else if (number == 16) Disp->krz._str16.oper = EOper::Redact;
//	else if (number == 17) Disp->krz._str17.oper = EOper::Redact;
//	else if (number == 18) Disp->krz._str18.oper = EOper::Redact;
//	else if (number == 20) Disp->krz._str20.oper = EOper::Redact;
//	else if (number == 22) Disp->krz._str22.oper = EOper::Redact;
//	else if (number == 24) Disp->krz._str24.oper = EOper::Redact;
//	else if (number == 26) Disp->krz._str26.oper = EOper::Redact;
//	else if (number == 28) Disp->krz._str28.oper = EOper::Redact;
//	else if (number == 30) Disp->krz._str30.oper = EOper::Redact;
//	else if (number == 32) Disp->krz._str32.oper = EOper::Redact;
//	else if (number == 34) Disp->krz._str34.oper = EOper::Redact;
//	else if (number == 36) Disp->krz._str36.oper = EOper::Redact;
//	else {
//		//Disp->BeeperBad(1);
//		return 0;
//	}
//	Disp->SendToServer();
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->num == number) return number;
//	}
//	return 0;
//}
//void UMyUserWidget::krz_Make_All_Strelka_UnRedact()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		Disp->krz_arrStr[i]->oper = EOper::Norm;
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_RedactStrelkaToMinus()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->oper == EOper::Redact)
//		{
//			ToMinus(*Disp->krz_arrStr[i]);
//		}
//	}
//}
//void UMyUserWidget::krz_RedactStrelkaToPlus()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->oper == EOper::Redact)
//		{
//			ToPlus(*Disp->krz_arrStr[i]);
//		}
//	}
//}
//void UMyUserWidget::krz_RedactStrelkaToBreak()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->oper == EOper::Redact)
//		{
//			Disp->krz_arrStr[i]->cur = ExCurator::NotControl;
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_RedactStrelkaMakeWaitingAvaria()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->oper == EOper::Redact)
//		{
//			Disp->krz_arrStr[i]->cur = ExCurator::WaitingAvaria;
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_RedactStrelkaRemont()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		if (Disp->krz_arrStr[i]->oper == EOper::Redact)
//		{
//			Disp->krz_arrStr[i]->cur = ExCurator::Norm;
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_RemontAllStrelka()
//{
//	for (size_t i = 0; i < Disp->krz_arrStr.size(); i++)
//	{
//		Disp->krz_arrStr[i]->cur = ExCurator::Norm;
//	}
//	Disp->SendToServer();
//}
//#pragma endregion
//#pragma region Svetofori
//EdopStat UMyUserWidget::krz_Make_Svetofor_Redact(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		Disp->krz._N.oper = EOper::Redact;
//		Disp->krz._N.dopstat = EdopStat::N;
//		krz_Pult_StartNabor();
//		return EdopStat::N;
//	}
//	else if (dopstat == EdopStat::ND)
//	{
//		Disp->krz._ND.oper = EOper::Redact;
//		Disp->krz._ND.dopstat = EdopStat::ND;
//		krz_Pult_StartNabor();
//		return EdopStat::ND;
//	}
//	else if (dopstat == EdopStat::CH)
//	{
//		Disp->krz._CH.oper = EOper::Redact;
//		Disp->krz._CH.dopstat = EdopStat::CH;
//		krz_Pult_StartNabor();
//		return EdopStat::CH;
//	}
//	else if (dopstat == EdopStat::CHD)
//	{
//		Disp->krz._CHD.oper = EOper::Redact;
//		Disp->krz._CHD.dopstat = EdopStat::CHD;
//		krz_Pult_StartNabor();
//		return EdopStat::CHD;
//	}
//	else if (dopstat == EdopStat::CHR)
//	{
//		Disp->krz._CHR.oper = EOper::Redact;
//		Disp->krz._CHR.dopstat = EdopStat::CHR;
//		krz_Pult_StartNabor();
//		return EdopStat::CHR;
//	}
//
//	else if (dopstat == EdopStat::N1)
//	{
//		Disp->krz._N1.oper = EOper::Redact;
//		Disp->krz._N1.dopstat = EdopStat::N1;
//		krz_Pult_StartNabor();
//		return EdopStat::N1;
//	}
//	else if (dopstat == EdopStat::N2)
//	{
//		Disp->krz._N2.oper = EOper::Redact;
//		Disp->krz._N2.dopstat = EdopStat::N2;
//		krz_Pult_StartNabor();
//		return EdopStat::N2;
//	}
//	else if (dopstat == EdopStat::N3)
//	{
//		Disp->krz._N3.oper = EOper::Redact;
//		Disp->krz._N3.dopstat = EdopStat::N3;
//		krz_Pult_StartNabor();
//		return EdopStat::N3;
//	}
//	else if (dopstat == EdopStat::N4)
//	{
//		Disp->krz._N4.oper = EOper::Redact;
//		Disp->krz._N4.dopstat = EdopStat::N4;
//		krz_Pult_StartNabor();
//		return EdopStat::N4;
//	}
//	else if (dopstat == EdopStat::N5)
//	{
//		Disp->krz._N5.oper = EOper::Redact;
//		Disp->krz._N5.dopstat = EdopStat::N5;
//		krz_Pult_StartNabor();
//		return EdopStat::N5;
//	}
//	else if (dopstat == EdopStat::N6)
//	{
//		Disp->krz._N6.oper = EOper::Redact;
//		Disp->krz._N6.dopstat = EdopStat::N6;
//		krz_Pult_StartNabor();
//		return EdopStat::N6;
//	}
//	else if (dopstat == EdopStat::N7)
//	{
//		Disp->krz._N7.oper = EOper::Redact;
//		Disp->krz._N7.dopstat = EdopStat::N7;
//		return EdopStat::N7;
//	}
//
//	else if (dopstat == EdopStat::CH1)
//	{
//		Disp->krz._CH1.oper = EOper::Redact;
//		Disp->krz._CH1.dopstat = EdopStat::CH1;
//		krz_Pult_StartNabor();
//		return EdopStat::CH1;
//	}
//	else if (dopstat == EdopStat::CH2)
//	{
//		Disp->krz._CH2.oper = EOper::Redact;
//		Disp->krz._CH2.dopstat = EdopStat::CH2;
//		krz_Pult_StartNabor();
//		return EdopStat::CH2;
//	}
//	else if (dopstat == EdopStat::CH3)
//	{
//		Disp->krz._CH3.oper = EOper::Redact;
//		Disp->krz._CH3.dopstat = EdopStat::CH3;
//		krz_Pult_StartNabor();
//		return EdopStat::CH3;
//	}
//	else if (dopstat == EdopStat::CH4)
//	{
//		Disp->krz._CH4.oper = EOper::Redact;
//		Disp->krz._CH4.dopstat = EdopStat::CH4;
//		krz_Pult_StartNabor();
//		return EdopStat::CH4;
//	}
//	else if (dopstat == EdopStat::CH5)
//	{
//		Disp->krz._CH5.oper = EOper::Redact;
//		Disp->krz._CH5.dopstat = EdopStat::CH5;
//		krz_Pult_StartNabor();
//		return EdopStat::CH5;
//	}
//	else if (dopstat == EdopStat::CH6)
//	{
//		Disp->krz._CH6.oper = EOper::Redact;
//		Disp->krz._CH6.dopstat = EdopStat::CH6;
//		krz_Pult_StartNabor();
//		return EdopStat::CH6;
//	}
//	else if (dopstat == EdopStat::CH7)
//	{
//		Disp->krz._CH7.oper = EOper::Redact;
//		Disp->krz._CH7.dopstat = EdopStat::CH7;
//		krz_Pult_StartNabor();
//		return EdopStat::CH7;
//	}
//
//	else if (dopstat == EdopStat::M1)
//	{
//		Disp->krz._M1.oper = EOper::Redact;
//		Disp->krz._M1.dopstat = EdopStat::M1;
//		krz_Pult_StartNabor();
//		return EdopStat::M1;
//	}
//	else if (dopstat == EdopStat::M2)
//	{
//		Disp->krz._M2.oper = EOper::Redact;
//		Disp->krz._M2.dopstat = EdopStat::M2;
//		krz_Pult_StartNabor();
//		return EdopStat::M2;
//	}
//	else if (dopstat == EdopStat::M3)
//	{
//		Disp->krz._M3.oper = EOper::Redact;
//		Disp->krz._M3.dopstat = EdopStat::M3;
//		krz_Pult_StartNabor();
//		return EdopStat::M3;
//	}
//	else if (dopstat == EdopStat::M4)
//	{
//		Disp->krz._M4.oper = EOper::Redact;
//		Disp->krz._M4.dopstat = EdopStat::M4;
//		krz_Pult_StartNabor();
//		return EdopStat::M4;
//	}
//	else if (dopstat == EdopStat::M5)
//	{
//		Disp->krz._M5.oper = EOper::Redact;
//		Disp->krz._M5.dopstat = EdopStat::M5;
//		krz_Pult_StartNabor();
//		return EdopStat::M5;
//	}
//	else if (dopstat == EdopStat::M6)
//	{
//		Disp->krz._M6.oper = EOper::Redact;
//		Disp->krz._M6.dopstat = EdopStat::M6;
//		krz_Pult_StartNabor();
//		return EdopStat::M6;
//	}
//	else if (dopstat == EdopStat::M8)
//	{
//		Disp->krz._M8.oper = EOper::Redact;
//		Disp->krz._M8.dopstat = EdopStat::M8;
//		krz_Pult_StartNabor();
//		return EdopStat::M8;
//	}
//	else if (dopstat == EdopStat::M10)
//	{
//		Disp->krz._M10.oper = EOper::Redact;
//		Disp->krz._M10.dopstat = EdopStat::M10;
//		krz_Pult_StartNabor();
//		return EdopStat::M10;
//	}
//	else if (dopstat == EdopStat::M12)
//	{
//		Disp->krz._M12.oper = EOper::Redact;
//		Disp->krz._M12.dopstat = EdopStat::M12;
//		krz_Pult_StartNabor();
//		return EdopStat::M12;
//	}
//	else if (dopstat == EdopStat::M14)
//	{
//		Disp->krz._M14.oper = EOper::Redact;
//		Disp->krz._M14.dopstat = EdopStat::M14;
//		krz_Pult_StartNabor();
//		return EdopStat::M14;
//	}
//	else if (dopstat == EdopStat::M16)
//	{
//		Disp->krz._M16.oper = EOper::Redact;
//		Disp->krz._M16.dopstat = EdopStat::M16;
//		krz_Pult_StartNabor();
//		return EdopStat::M16;
//	}
//	else if (dopstat == EdopStat::M18)
//	{
//		Disp->krz._M18.oper = EOper::Redact;
//		Disp->krz._M18.dopstat = EdopStat::M18;
//		krz_Pult_StartNabor();
//		return EdopStat::M18;
//	}
//	else if (dopstat == EdopStat::M20)
//	{
//		Disp->krz._M20.oper = EOper::Redact;
//		Disp->krz._M20.dopstat = EdopStat::M20;
//		krz_Pult_StartNabor();
//		return EdopStat::M20;
//	}
//	return EdopStat::Norm;
//}
//bool UMyUserWidget::krz_IsRedactSvetoforFree()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact && (Disp->krz_arrSvetofor[i]->stat == EAStat::Grey || Disp->krz_arrSvetofor[i]->stat == EAStat::Red)) return true;
//	}
//	return false;
//}
//void UMyUserWidget::krz_Make_All_Svetofor_UnRedact()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
//		Disp->krz_arrSvetofor[i]->dopstat = EdopStat::Norm;
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_BrokenSvetoforMake(ExCurator cur)
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact)
//		{
//			if (cur == ExCurator::BrokenRed)
//			{
//				Disp->krz_arrSvetofor[i]->cur = ExCurator::BrokenRed;
//			}
//			if (cur == ExCurator::BrokenBlue)
//			{
//				Disp->krz_arrSvetofor[i]->cur = ExCurator::BrokenBlue;
//			}
//			if (cur == ExCurator::BrokenGreen)
//			{
//				Disp->krz_arrSvetofor[i]->cur = ExCurator::BrokenGreen;
//			}
//			if (cur == ExCurator::BrokenWhite)
//			{
//				Disp->krz_arrSvetofor[i]->cur = ExCurator::BrokenWhite;
//			}
//			if (cur == ExCurator::BrokenYellow)
//			{
//				Disp->krz_arrSvetofor[i]->cur = ExCurator::BrokenYellow;
//			}
//			Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_RedactSvetofor_Remont()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact)
//		{
//			Disp->krz_arrSvetofor[i]->cur = ExCurator::Norm;
//			Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
//			break;
//		}
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_AllSvetofor_Remont()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		Disp->krz_arrSvetofor[i]->cur = ExCurator::Norm;
//
//	}
//	Disp->SendToServer();
//}
//EdopStat UMyUserWidget::krz_Get_Svetofor_Redact()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact) return Disp->krz_arrSvetofor[i]->dopstat;
//	}
//	return EdopStat::Norm;
//}
//#pragma endregion
//#pragma region Signals
//void UMyUserWidget::krz_RazvorotPeregona(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		if (Disp->krz.GreenKey_N.stat == EAStat::Green)
//		{
//			if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left)
//			{
//				Disp->krz.GreenKey_N.dopstat = EdopStat::Right;
//				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->krz.GreenKey_N.dopstat = EdopStat::Left;
//				Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
//			}
//			Disp->SendToServer();
//		}
//	}
//	if (dopstat == EdopStat::ND)
//	{
//		if (Disp->krz.GreenKey_ND.stat == EAStat::Green)
//		{
//			if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left)
//			{
//				Disp->krz.GreenKey_ND.dopstat = EdopStat::Right;
//				Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->krz.GreenKey_ND.dopstat = EdopStat::Left;
//				Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
//			}
//			Disp->SendToServer();
//		}
//	}
//	if (dopstat == EdopStat::CH)
//	{
//		if (Disp->krz.GreenKey_CH.stat == EAStat::Green)
//		{
//			if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left)
//			{
//				Disp->krz.GreenKey_CH.dopstat = EdopStat::Right;
//				Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->krz.GreenKey_CH.dopstat = EdopStat::Left;
//				Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
//			}
//			Disp->SendToServer();
//		}
//	}
//	if (dopstat == EdopStat::CHD)
//	{
//		if (Disp->krz.GreenKey_CHD.stat == EAStat::Green)
//		{
//			if (Disp->krz.GreenKey_CHD.dopstat == EdopStat::Left)
//			{
//				Disp->krz.GreenKey_CHD.dopstat = EdopStat::Right;
//				Disp->kg.GreenKey_N.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->krz.GreenKey_CHD.dopstat = EdopStat::Left;
//				Disp->kg.GreenKey_N.dopstat = EdopStat::Left;
//			}
//			Disp->SendToServer();
//		}
//	}
//	if (dopstat == EdopStat::CHR)
//	{
//		if (Disp->krz.GreenKey_CHR.stat == EAStat::Green)
//		{
//			if (Disp->krz.GreenKey_CHR.dopstat == EdopStat::Left)
//			{
//				Disp->krz.GreenKey_CHR.dopstat = EdopStat::Right;
//			}
//			else
//			{
//				Disp->krz.GreenKey_CHR.dopstat = EdopStat::Left;
//			}
//			Disp->SendToServer();
//		}
//	}
//}
//void UMyUserWidget::krz_VspomogatRazvorotPeregona(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//
//		if (Disp->krz.GreenKey_N.dopstat == EdopStat::Left)
//		{
//			Disp->krz.GreenKey_N.dopstat = EdopStat::Right;
//			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Right;
//		}
//		else
//		{
//			Disp->krz.GreenKey_N.dopstat = EdopStat::Left;
//			Disp->krb.GreenKey_CHD.dopstat = EdopStat::Left;
//		}
//		Disp->SendToServer();
//
//	}
//	if (dopstat == EdopStat::ND)
//	{
//
//		if (Disp->krz.GreenKey_ND.dopstat == EdopStat::Left)
//		{
//			Disp->krz.GreenKey_ND.dopstat = EdopStat::Right;
//			Disp->krb.GreenKey_CH.dopstat = EdopStat::Right;
//		}
//		else
//		{
//			Disp->krz.GreenKey_ND.dopstat = EdopStat::Left;
//			Disp->krb.GreenKey_CH.dopstat = EdopStat::Left;
//		}
//		Disp->SendToServer();
//
//	}
//	if (dopstat == EdopStat::CH)
//	{
//
//		if (Disp->krz.GreenKey_CH.dopstat == EdopStat::Left)
//		{
//			Disp->krz.GreenKey_CH.dopstat = EdopStat::Right;
//			Disp->kg.GreenKey_ND.dopstat = EdopStat::Right;
//		}
//		else
//		{
//			Disp->krz.GreenKey_CH.dopstat = EdopStat::Left;
//			Disp->kg.GreenKey_ND.dopstat = EdopStat::Left;
//		}
//		Disp->SendToServer();
//
//	}
//}
//#pragma endregion
//
//#pragma region Pult
//
//
//
//
//EdopStat UMyUserWidget::krz_Pult_Make_Svetofor_Redact(EdopStat dopstat)
//{
//	if (!krz_pult_SvetoforChoice_2)
//	{
//		if (!krz_pult_SvetoforChoice_1)
//		{
//			if (dopstat == EdopStat::N)
//			{
//				Disp->krz._N.oper = EOper::Redact;
//				Disp->krz._N.dopstat = EdopStat::N;
//				krz_Pult_StartNabor();
//				return EdopStat::N;
//			}
//			else if (dopstat == EdopStat::ND)
//			{
//				Disp->krz._ND.oper = EOper::Redact;
//				Disp->krz._ND.dopstat = EdopStat::ND;
//				krz_Pult_StartNabor();
//				return EdopStat::ND;
//			}
//			else if (dopstat == EdopStat::CH)
//			{
//				Disp->krz._CH.oper = EOper::Redact;
//				Disp->krz._CH.dopstat = EdopStat::CH;
//				krz_Pult_StartNabor();
//				return EdopStat::CH;
//			}
//			else if (dopstat == EdopStat::CHD)
//			{
//				Disp->krz._CHD.oper = EOper::Redact;
//				Disp->krz._CHD.dopstat = EdopStat::CHD;
//				krz_Pult_StartNabor();
//				return EdopStat::CHD;
//			}
//			else if (dopstat == EdopStat::CHR)
//			{
//				Disp->krz._CHR.oper = EOper::Redact;
//				Disp->krz._CHR.dopstat = EdopStat::CHR;
//				krz_Pult_StartNabor();
//				return EdopStat::CHR;
//			}
//
//			else if (dopstat == EdopStat::N1)
//			{
//				Disp->krz._N1.oper = EOper::Redact;
//				Disp->krz._N1.dopstat = EdopStat::N1;
//				krz_Pult_StartNabor();
//				return EdopStat::N1;
//			}
//			else if (dopstat == EdopStat::N2)
//			{
//				Disp->krz._N2.oper = EOper::Redact;
//				Disp->krz._N2.dopstat = EdopStat::N2;
//				krz_Pult_StartNabor();
//				return EdopStat::N2;
//			}
//			else if (dopstat == EdopStat::N3)
//			{
//				Disp->krz._N3.oper = EOper::Redact;
//				Disp->krz._N3.dopstat = EdopStat::N3;
//				krz_Pult_StartNabor();
//				return EdopStat::N3;
//			}
//			else if (dopstat == EdopStat::N4)
//			{
//				Disp->krz._N4.oper = EOper::Redact;
//				Disp->krz._N4.dopstat = EdopStat::N4;
//				krz_Pult_StartNabor();
//				return EdopStat::N4;
//			}
//			else if (dopstat == EdopStat::N5)
//			{
//				Disp->krz._N5.oper = EOper::Redact;
//				Disp->krz._N5.dopstat = EdopStat::N5;
//				krz_Pult_StartNabor();
//				return EdopStat::N5;
//			}
//			else if (dopstat == EdopStat::N6)
//			{
//				Disp->krz._N6.oper = EOper::Redact;
//				Disp->krz._N6.dopstat = EdopStat::N6;
//				krz_Pult_StartNabor();
//				return EdopStat::N6;
//			}
//			else if (dopstat == EdopStat::N7)
//			{
//				Disp->krz._N7.oper = EOper::Redact;
//				Disp->krz._N7.dopstat = EdopStat::N7;
//				return EdopStat::N7;
//			}
//
//			else if (dopstat == EdopStat::CH1)
//			{
//				Disp->krz._CH1.oper = EOper::Redact;
//				Disp->krz._CH1.dopstat = EdopStat::CH1;
//				krz_Pult_StartNabor();
//				return EdopStat::CH1;
//			}
//			else if (dopstat == EdopStat::CH2)
//			{
//				Disp->krz._CH2.oper = EOper::Redact;
//				Disp->krz._CH2.dopstat = EdopStat::CH2;
//				krz_Pult_StartNabor();
//				return EdopStat::CH2;
//			}
//			else if (dopstat == EdopStat::CH3)
//			{
//				Disp->krz._CH3.oper = EOper::Redact;
//				Disp->krz._CH3.dopstat = EdopStat::CH3;
//				krz_Pult_StartNabor();
//				return EdopStat::CH3;
//			}
//			else if (dopstat == EdopStat::CH4)
//			{
//				Disp->krz._CH4.oper = EOper::Redact;
//				Disp->krz._CH4.dopstat = EdopStat::CH4;
//				krz_Pult_StartNabor();
//				return EdopStat::CH4;
//			}
//			else if (dopstat == EdopStat::CH5)
//			{
//				Disp->krz._CH5.oper = EOper::Redact;
//				Disp->krz._CH5.dopstat = EdopStat::CH5;
//				krz_Pult_StartNabor();
//				return EdopStat::CH5;
//			}
//			else if (dopstat == EdopStat::CH6)
//			{
//				Disp->krz._CH6.oper = EOper::Redact;
//				Disp->krz._CH6.dopstat = EdopStat::CH6;
//				krz_Pult_StartNabor();
//				return EdopStat::CH6;
//			}
//			else if (dopstat == EdopStat::CH7)
//			{
//				Disp->krz._CH7.oper = EOper::Redact;
//				Disp->krz._CH7.dopstat = EdopStat::CH7;
//				krz_Pult_StartNabor();
//				return EdopStat::CH7;
//			}
//
//			else if (dopstat == EdopStat::M1)
//			{
//				Disp->krz._M1.oper = EOper::Redact;
//				Disp->krz._M1.dopstat = EdopStat::M1;
//				krz_Pult_StartNabor();
//				return EdopStat::M1;
//			}
//			else if (dopstat == EdopStat::M2)
//			{
//				Disp->krz._M2.oper = EOper::Redact;
//				Disp->krz._M2.dopstat = EdopStat::M2;
//				krz_Pult_StartNabor();
//				return EdopStat::M2;
//			}
//			else if (dopstat == EdopStat::M3)
//			{
//				Disp->krz._M3.oper = EOper::Redact;
//				Disp->krz._M3.dopstat = EdopStat::M3;
//				krz_Pult_StartNabor();
//				return EdopStat::M3;
//			}
//			else if (dopstat == EdopStat::M4)
//			{
//				Disp->krz._M4.oper = EOper::Redact;
//				Disp->krz._M4.dopstat = EdopStat::M4;
//				krz_Pult_StartNabor();
//				return EdopStat::M4;
//			}
//			else if (dopstat == EdopStat::M5)
//			{
//				Disp->krz._M5.oper = EOper::Redact;
//				Disp->krz._M5.dopstat = EdopStat::M5;
//				krz_Pult_StartNabor();
//				return EdopStat::M5;
//			}
//			else if (dopstat == EdopStat::M6)
//			{
//				Disp->krz._M6.oper = EOper::Redact;
//				Disp->krz._M6.dopstat = EdopStat::M6;
//				krz_Pult_StartNabor();
//				return EdopStat::M6;
//			}
//			else if (dopstat == EdopStat::M8)
//			{
//				Disp->krz._M8.oper = EOper::Redact;
//				Disp->krz._M8.dopstat = EdopStat::M8;
//				krz_Pult_StartNabor();
//				return EdopStat::M8;
//			}
//			else if (dopstat == EdopStat::M10)
//			{
//				Disp->krz._M10.oper = EOper::Redact;
//				Disp->krz._M10.dopstat = EdopStat::M10;
//				krz_Pult_StartNabor();
//				return EdopStat::M10;
//			}
//			else if (dopstat == EdopStat::M12)
//			{
//				Disp->krz._M12.oper = EOper::Redact;
//				Disp->krz._M12.dopstat = EdopStat::M12;
//				krz_Pult_StartNabor();
//				return EdopStat::M12;
//			}
//			else if (dopstat == EdopStat::M14)
//			{
//				Disp->krz._M14.oper = EOper::Redact;
//				Disp->krz._M14.dopstat = EdopStat::M14;
//				krz_Pult_StartNabor();
//				return EdopStat::M14;
//			}
//			else if (dopstat == EdopStat::M16)
//			{
//				Disp->krz._M16.oper = EOper::Redact;
//				Disp->krz._M16.dopstat = EdopStat::M16;
//				krz_Pult_StartNabor();
//				return EdopStat::M16;
//			}
//			else if (dopstat == EdopStat::M18)
//			{
//				Disp->krz._M18.oper = EOper::Redact;
//				Disp->krz._M18.dopstat = EdopStat::M18;
//				krz_Pult_StartNabor();
//				return EdopStat::M18;
//			}
//			else if (dopstat == EdopStat::M20)
//			{
//				Disp->krz._M20.oper = EOper::Redact;
//				Disp->krz._M20.dopstat = EdopStat::M20;
//				krz_Pult_StartNabor();
//				return EdopStat::M20;
//			}
//		}
//		else
//		{
//			if (dopstat == EdopStat::N)
//			{
//				Disp->krz._N.oper = EOper::Redact_2;
//				Disp->krz._N.dopstat = EdopStat::N;
//				krz_Pult_EndNabor();
//				return EdopStat::N;
//			}
//			else if (dopstat == EdopStat::ND)
//			{
//				Disp->krz._ND.oper = EOper::Redact_2;
//				Disp->krz._ND.dopstat = EdopStat::ND;
//				krz_Pult_EndNabor();
//				return EdopStat::ND;
//			}
//			else if (dopstat == EdopStat::CH)
//			{
//				Disp->krz._CH.oper = EOper::Redact_2;
//				Disp->krz._CH.dopstat = EdopStat::CH;
//				krz_Pult_EndNabor();
//				return EdopStat::CH;
//			}
//			else if (dopstat == EdopStat::CHD)
//			{
//				Disp->krz._CHD.oper = EOper::Redact_2;
//				Disp->krz._CHD.dopstat = EdopStat::CHD;
//				krz_Pult_EndNabor();
//				return EdopStat::CHD;
//			}
//			else if (dopstat == EdopStat::CHR)
//			{
//				Disp->krz._CHR.oper = EOper::Redact_2;
//				Disp->krz._CHR.dopstat = EdopStat::CHR;
//				krz_Pult_EndNabor();
//				return EdopStat::CHR;
//			}
//
//			else if (dopstat == EdopStat::N1)
//			{
//				Disp->krz._N1.oper = EOper::Redact_2;
//				Disp->krz._N1.dopstat = EdopStat::N1;
//				krz_Pult_EndNabor();
//				return EdopStat::N1;
//			}
//			else if (dopstat == EdopStat::N2)
//			{
//				Disp->krz._N2.oper = EOper::Redact_2;
//				Disp->krz._N2.dopstat = EdopStat::N2;
//				krz_Pult_EndNabor();
//				return EdopStat::N2;
//			}
//			else if (dopstat == EdopStat::N3)
//			{
//				Disp->krz._N3.oper = EOper::Redact_2;
//				Disp->krz._N3.dopstat = EdopStat::N3;
//				krz_Pult_EndNabor();
//				return EdopStat::N3;
//			}
//			else if (dopstat == EdopStat::N4)
//			{
//				Disp->krz._N4.oper = EOper::Redact_2;
//				Disp->krz._N4.dopstat = EdopStat::N4;
//				krz_Pult_EndNabor();
//				return EdopStat::N4;
//			}
//			else if (dopstat == EdopStat::N5)
//			{
//				Disp->krz._N5.oper = EOper::Redact_2;
//				Disp->krz._N5.dopstat = EdopStat::N5;
//				krz_Pult_EndNabor();
//				return EdopStat::N5;
//			}
//			else if (dopstat == EdopStat::N6)
//			{
//				Disp->krz._N6.oper = EOper::Redact_2;
//				Disp->krz._N6.dopstat = EdopStat::N6;
//				krz_Pult_EndNabor();
//				return EdopStat::N6;
//			}
//			else if (dopstat == EdopStat::N7)
//			{
//				Disp->krz._N7.oper = EOper::Redact_2;
//				Disp->krz._N7.dopstat = EdopStat::N7;
//				return EdopStat::N7;
//			}
//
//			else if (dopstat == EdopStat::CH1)
//			{
//				Disp->krz._CH1.oper = EOper::Redact_2;
//				Disp->krz._CH1.dopstat = EdopStat::CH1;
//				krz_Pult_EndNabor();
//				return EdopStat::CH1;
//			}
//			else if (dopstat == EdopStat::CH2)
//			{
//				Disp->krz._CH2.oper = EOper::Redact_2;
//				Disp->krz._CH2.dopstat = EdopStat::CH2;
//				krz_Pult_EndNabor();
//				return EdopStat::CH2;
//			}
//			else if (dopstat == EdopStat::CH3)
//			{
//				Disp->krz._CH3.oper = EOper::Redact_2;
//				Disp->krz._CH3.dopstat = EdopStat::CH3;
//				krz_Pult_EndNabor();
//				return EdopStat::CH3;
//			}
//			else if (dopstat == EdopStat::CH4)
//			{
//				Disp->krz._CH4.oper = EOper::Redact_2;
//				Disp->krz._CH4.dopstat = EdopStat::CH4;
//				krz_Pult_EndNabor();
//				return EdopStat::CH4;
//			}
//			else if (dopstat == EdopStat::CH5)
//			{
//				Disp->krz._CH5.oper = EOper::Redact_2;
//				Disp->krz._CH5.dopstat = EdopStat::CH5;
//				krz_Pult_EndNabor();
//				return EdopStat::CH5;
//			}
//			else if (dopstat == EdopStat::CH6)
//			{
//				Disp->krz._CH6.oper = EOper::Redact_2;
//				Disp->krz._CH6.dopstat = EdopStat::CH6;
//				krz_Pult_EndNabor();
//				return EdopStat::CH6;
//			}
//			else if (dopstat == EdopStat::CH7)
//			{
//				Disp->krz._CH7.oper = EOper::Redact_2;
//				Disp->krz._CH7.dopstat = EdopStat::CH7;
//				krz_Pult_EndNabor();
//				return EdopStat::CH7;
//			}
//
//			else if (dopstat == EdopStat::M1)
//			{
//				Disp->krz._M1.oper = EOper::Redact_2;
//				Disp->krz._M1.dopstat = EdopStat::M1;
//				krz_Pult_EndNabor();
//				return EdopStat::M1;
//			}
//			else if (dopstat == EdopStat::M2)
//			{
//				Disp->krz._M2.oper = EOper::Redact_2;
//				Disp->krz._M2.dopstat = EdopStat::M2;
//				krz_Pult_EndNabor();
//				return EdopStat::M2;
//			}
//			else if (dopstat == EdopStat::M3)
//			{
//				Disp->krz._M3.oper = EOper::Redact_2;
//				Disp->krz._M3.dopstat = EdopStat::M3;
//				krz_Pult_EndNabor();
//				return EdopStat::M3;
//			}
//			else if (dopstat == EdopStat::M4)
//			{
//				Disp->krz._M4.oper = EOper::Redact_2;
//				Disp->krz._M4.dopstat = EdopStat::M4;
//				krz_Pult_EndNabor();
//				return EdopStat::M4;
//			}
//			else if (dopstat == EdopStat::M5)
//			{
//				Disp->krz._M5.oper = EOper::Redact_2;
//				Disp->krz._M5.dopstat = EdopStat::M5;
//				krz_Pult_EndNabor();
//				return EdopStat::M5;
//			}
//			else if (dopstat == EdopStat::M6)
//			{
//				Disp->krz._M6.oper = EOper::Redact_2;
//				Disp->krz._M6.dopstat = EdopStat::M6;
//				krz_Pult_EndNabor();
//				return EdopStat::M6;
//			}
//			else if (dopstat == EdopStat::M8)
//			{
//				Disp->krz._M8.oper = EOper::Redact_2;
//				Disp->krz._M8.dopstat = EdopStat::M8;
//				krz_Pult_EndNabor();
//				return EdopStat::M8;
//			}
//			else if (dopstat == EdopStat::M10)
//			{
//				Disp->krz._M10.oper = EOper::Redact_2;
//				Disp->krz._M10.dopstat = EdopStat::M10;
//				krz_Pult_EndNabor();
//				return EdopStat::M10;
//			}
//			else if (dopstat == EdopStat::M12)
//			{
//				Disp->krz._M12.oper = EOper::Redact_2;
//				Disp->krz._M12.dopstat = EdopStat::M12;
//				krz_Pult_EndNabor();
//				return EdopStat::M12;
//			}
//			else if (dopstat == EdopStat::M14)
//			{
//				Disp->krz._M14.oper = EOper::Redact_2;
//				Disp->krz._M14.dopstat = EdopStat::M14;
//				krz_Pult_EndNabor();
//				return EdopStat::M14;
//			}
//			else if (dopstat == EdopStat::M16)
//			{
//				Disp->krz._M16.oper = EOper::Redact_2;
//				Disp->krz._M16.dopstat = EdopStat::M16;
//				krz_Pult_EndNabor();
//				return EdopStat::M16;
//			}
//			else if (dopstat == EdopStat::M18)
//			{
//				Disp->krz._M18.oper = EOper::Redact_2;
//				Disp->krz._M18.dopstat = EdopStat::M18;
//				krz_Pult_EndNabor();
//				return EdopStat::M18;
//			}
//			else if (dopstat == EdopStat::M20)
//			{
//				Disp->krz._M20.oper = EOper::Redact_2;
//				Disp->krz._M20.dopstat = EdopStat::M20;
//				krz_Pult_EndNabor();
//				return EdopStat::M20;
//			}
//		}
//	}
//	else
//	{
//
//		krz_Pult_Make_All_Svetofor_UnRedact();
//	}
//
//	//Disp->BeeperBad(1);
//	return EdopStat::Norm;
//}
//EdopStat UMyUserWidget::krz_Pult_Get_Svetofor_Redact()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact) return Disp->krz_arrSvetofor[i]->dopstat;
//	}
//	return EdopStat::Norm;
//}
//EdopStat UMyUserWidget::krz_Pult_Get_Svetofor_Redact_2()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact_2) return Disp->krz_arrSvetofor[i]->dopstat;
//	}
//	return EdopStat::Norm;
//}
//void UMyUserWidget::krz_Pult_Make_Redact_Svetofor_Default()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		if (Disp->krz_arrSvetofor[i]->oper == EOper::Redact)
//		{
//			if (Disp->krz_arrSvetofor[i]->dopstat == EdopStat::N || Disp->krz_arrSvetofor[i]->dopstat == EdopStat::ND || Disp->krz_arrSvetofor[i]->dopstat == EdopStat::CH
//				|| Disp->krz_arrSvetofor[i]->dopstat == EdopStat::CHD || Disp->krz_arrSvetofor[i]->dopstat == EdopStat::CHR)
//			{
//				Disp->krz_arrSvetofor[i]->stat = EAStat::Red;
//			}
//			else
//			{
//				Disp->krz_arrSvetofor[i]->stat = EAStat::Grey;
//			}
//			Disp->krz_arrSvetofor[i]->dopstat = EdopStat::Norm;
//			Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
//		}
//		break;
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_Pult_Make_All_Svetofor_UnRedact()
//{
//	for (size_t i = 0; i < Disp->krz_arrSvetofor.size(); i++)
//	{
//		Disp->krz_arrSvetofor[i]->oper = EOper::Norm;
//	}
//	Disp->SendToServer();
//}
//void UMyUserWidget::krz_Pult_StartNabor()
//{
//	krz_pult_SvetoforChoice_1 = true;
//}
//void UMyUserWidget::krz_Pult_EndNabor()
//{
//	krz_pult_SvetoforChoice_2 = true;
//}
//void UMyUserWidget::krz_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat)
//{
//	if (dopstat == EdopStat::N)
//	{
//		if (Disp->krz._N.stat != EAStat::White)
//		{
//			Disp->krz._N.stat = EAStat::White;
//		}
//		else
//		{
//			if (Disp->krz._N.dopstat != EdopStat::Norm)
//			{
//				Disp->krz._N.stat = EAStat::Green;
//			}
//			else
//			{
//				Disp->krz._N.stat = EAStat::Red;
//			}
//		}
//	}
//	if (dopstat == EdopStat::ND)
//	{
//		if (Disp->krz._ND.stat != EAStat::White)
//		{
//			Disp->krz._ND.stat = EAStat::White;
//		}
//		else
//		{
//			if (Disp->krz._ND.dopstat != EdopStat::Norm)
//			{
//				Disp->krz._ND.stat = EAStat::Green;
//			}
//			else
//			{
//				Disp->krz._ND.stat = EAStat::Red;
//			}
//		}
//	}
//	if (dopstat == EdopStat::CH)
//	{
//		if (Disp->krz._CH.stat != EAStat::White)
//		{
//			Disp->krz._CH.stat = EAStat::White;
//		}
//		else
//		{
//			if (Disp->krz._CH.dopstat != EdopStat::Norm)
//			{
//				Disp->krz._CH.stat = EAStat::Green;
//			}
//			else
//			{
//				Disp->krz._CH.stat = EAStat::Red;
//			}
//		}
//	}
//	if (dopstat == EdopStat::CHD)
//	{
//		if (Disp->krz._CHD.stat != EAStat::White)
//		{
//			Disp->krz._CHD.stat = EAStat::White;
//		}
//		else
//		{
//			if (Disp->krz._CHD.dopstat != EdopStat::Norm)
//			{
//				Disp->krz._CHD.stat = EAStat::Green;
//			}
//			else
//			{
//				Disp->krz._CHD.stat = EAStat::Red;
//			}
//		}
//	}
//	if (dopstat == EdopStat::CHR)
//	{
//		if (Disp->krz._CHR.stat != EAStat::White)
//		{
//			Disp->krz._CHR.stat = EAStat::White;
//		}
//		else
//		{
//			if (Disp->krz._CHR.dopstat != EdopStat::Norm)
//			{
//				Disp->krz._CHR.stat = EAStat::Green;
//			}
//			else
//			{
//				Disp->krz._CHR.stat = EAStat::Red;
//			}
//		}
//	}
//
//}
//void UMyUserWidget::krz_Pult_OtmenaAllRouters()
//{
//}
//void UMyUserWidget::krz_Pult_ManevroviyRouter()
//{
//
//	EdopStat Rstart = EdopStat::Norm;
//	EdopStat Rend = EdopStat::Norm;
//	Rstart = krz_Pult_Get_Svetofor_Redact();
//	Rend = krz_Pult_Get_Svetofor_Redact_2();
//	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
//	{
//		if (Rstart == EdopStat::M1)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_M1_CH1_CheckPossCreate()) krz_M1_CH1_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_M1_CH2_CheckPossCreate()) krz_M1_CH2_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_M1_CH3_CheckPossCreate()) krz_M1_CH3_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_M1_CH4_CheckPossCreate()) krz_M1_CH4_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_M1_CH5_CheckPossCreate()) krz_M1_CH5_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_M1_CH6_CheckPossCreate()) krz_M1_CH6_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_M1_CH7_CheckPossCreate()) krz_M1_CH7_Create();
//			}
//		}
//		if (Rstart == EdopStat::M2)
//		{
//
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M2_N1_CheckPossCreate()) krz_M2_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M2_N2_CheckPossCreate()) krz_M2_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M2_N3_CheckPossCreate()) krz_M2_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M2_N4_CheckPossCreate()) krz_M2_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M2_N5_CheckPossCreate()) krz_M2_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M2_N6_CheckPossCreate()) krz_M2_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M2_N7_CheckPossCreate()) krz_M2_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M2_M5_CheckPossCreate()) krz_M2_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M3)
//		{
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_M3_CH1_CheckPossCreate()) krz_M3_CH1_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_M3_CH2_CheckPossCreate()) krz_M3_CH2_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_M3_CH3_CheckPossCreate()) krz_M3_CH3_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_M3_CH4_CheckPossCreate()) krz_M3_CH4_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_M3_CH5_CheckPossCreate()) krz_M3_CH5_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_M3_CH6_CheckPossCreate()) krz_M3_CH6_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_M3_CH7_CheckPossCreate()) krz_M3_CH7_Create();
//			}
//		}
//		if (Rstart == EdopStat::M4)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M4_N1_CheckPossCreate()) krz_M4_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M4_N2_CheckPossCreate()) krz_M4_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M4_N3_CheckPossCreate()) krz_M4_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M4_N4_CheckPossCreate()) krz_M4_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M4_N5_CheckPossCreate()) krz_M4_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M4_N6_CheckPossCreate()) krz_M4_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M4_N7_CheckPossCreate()) krz_M4_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M4_M5_CheckPossCreate()) krz_M4_M5_Create();
//			}
//
//		}
//		if (Rstart == EdopStat::M5)
//		{
//			if (Rend == EdopStat::M2)
//			{
//				if (krz_M5_M2_CheckPossCreate()) krz_M5_M2_Create();
//			}
//			if (Rend == EdopStat::M4)
//			{
//				if (krz_M5_M4_CheckPossCreate()) krz_M5_M4_Create();
//			}
//		}
//		if (Rstart == EdopStat::M6)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M6_N1_CheckPossCreate()) krz_M6_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M6_N2_CheckPossCreate()) krz_M6_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M6_N3_CheckPossCreate()) krz_M6_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M6_N4_CheckPossCreate()) krz_M6_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M6_N5_CheckPossCreate()) krz_M6_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M6_N6_CheckPossCreate()) krz_M6_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M6_N7_CheckPossCreate()) krz_M6_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M6_M5_CheckPossCreate()) krz_M6_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M8)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M8_N1_CheckPossCreate()) krz_M8_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M8_N2_CheckPossCreate()) krz_M8_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M8_N3_CheckPossCreate()) krz_M8_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M8_N4_CheckPossCreate()) krz_M8_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M8_N5_CheckPossCreate()) krz_M8_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M8_N6_CheckPossCreate()) krz_M8_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M8_N7_CheckPossCreate()) krz_M8_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M8_M5_CheckPossCreate()) krz_M8_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M10)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M10_N1_CheckPossCreate()) krz_M10_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M10_N2_CheckPossCreate()) krz_M10_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M10_N3_CheckPossCreate()) krz_M10_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M10_N4_CheckPossCreate()) krz_M10_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M10_N5_CheckPossCreate()) krz_M10_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M10_N6_CheckPossCreate()) krz_M10_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M10_N7_CheckPossCreate()) krz_M10_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M10_M5_CheckPossCreate()) krz_M10_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M12)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M12_N1_CheckPossCreate()) krz_M12_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M12_N2_CheckPossCreate()) krz_M12_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M12_N3_CheckPossCreate()) krz_M12_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M12_N4_CheckPossCreate()) krz_M12_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M12_N5_CheckPossCreate()) krz_M12_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M12_N6_CheckPossCreate()) krz_M12_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M12_N7_CheckPossCreate()) krz_M12_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M12_M5_CheckPossCreate()) krz_M12_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M14)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M14_N1_CheckPossCreate()) krz_M14_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M14_N2_CheckPossCreate()) krz_M14_N2_Create();
//			}
//
//			if (Rend == EdopStat::N3)
//			{
//				if (krz_M14_N3_CheckPossCreate()) krz_M14_N3_Create();
//			}
//
//			if (Rend == EdopStat::N4)
//			{
//				if (krz_M14_N4_CheckPossCreate()) krz_M14_N4_Create();
//			}
//
//			if (Rend == EdopStat::N5)
//			{
//				if (krz_M14_N5_CheckPossCreate()) krz_M14_N5_Create();
//			}
//
//			if (Rend == EdopStat::N6)
//			{
//				if (krz_M14_N6_CheckPossCreate()) krz_M14_N6_Create();
//			}
//
//			if (Rend == EdopStat::N7)
//			{
//				if (krz_M14_N7_CheckPossCreate()) krz_M14_N7_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M14_M5_CheckPossCreate()) krz_M14_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M16)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M16_N1_CheckPossCreate()) krz_M16_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M16_N2_CheckPossCreate()) krz_M16_N2_Create();
//			}
//
//
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M16_M5_CheckPossCreate()) krz_M16_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M18)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M18_N1_CheckPossCreate()) krz_M18_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M18_N2_CheckPossCreate()) krz_M18_N2_Create();
//			}
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M18_M5_CheckPossCreate()) krz_M18_M5_Create();
//			}
//		}
//		if (Rstart == EdopStat::M20)
//		{
//			if (Rend == EdopStat::N1)
//			{
//				if (krz_M20_N1_CheckPossCreate()) krz_M20_N1_Create();
//			}
//
//			if (Rend == EdopStat::N2)
//			{
//				if (krz_M20_N2_CheckPossCreate()) krz_M20_N2_Create();
//			}
//
//
//
//			if (Rend == EdopStat::M5)
//			{
//				if (krz_M20_M5_CheckPossCreate()) krz_M20_M5_Create();
//			}
//		}
//
//
//		if (Rend == EdopStat::M1)
//		{
//			if (Rstart == EdopStat::CH1)
//			{
//				if (krz_CH1_M1_CheckPossCreate()) krz_CH1_M1_Create();
//			}
//			if (Rstart == EdopStat::CH2)
//			{
//				if (krz_CH2_M1_CheckPossCreate()) krz_CH2_M1_Create();
//			}
//			if (Rstart == EdopStat::CH3)
//			{
//				if (krz_CH3_M1_CheckPossCreate()) krz_CH3_M1_Create();
//			}
//			if (Rstart == EdopStat::CH4)
//			{
//				if (krz_CH4_M1_CheckPossCreate()) krz_CH4_M1_Create();
//			}
//			if (Rstart == EdopStat::CH5)
//			{
//				if (krz_CH5_M1_CheckPossCreate()) krz_CH5_M1_Create();
//			}
//			if (Rstart == EdopStat::CH6)
//			{
//				if (krz_CH6_M1_CheckPossCreate()) krz_CH6_M1_Create();
//			}
//			if (Rstart == EdopStat::CH7)
//			{
//				if (krz_CH7_M1_CheckPossCreate()) krz_CH7_M1_Create();
//			}
//		}
//
//		if (Rend == EdopStat::M2)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M2_CheckPossCreate()) krz_M5_M2_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M2_CheckPossCreate()) krz_N1_M2_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M2_CheckPossCreate()) krz_N2_M2_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M2_CheckPossCreate()) krz_N3_M2_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M2_CheckPossCreate()) krz_N4_M2_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M2_CheckPossCreate()) krz_N5_M2_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M2_CheckPossCreate()) krz_N6_M2_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M2_CheckPossCreate()) krz_N7_M2_Create();
//			}
//		}
//
//		if (Rend == EdopStat::M3)
//		{
//			if (Rstart == EdopStat::CH1)
//			{
//				if (krz_CH1_M3_CheckPossCreate()) krz_CH1_M3_Create();
//			}
//			if (Rstart == EdopStat::CH2)
//			{
//				if (krz_CH2_M3_CheckPossCreate()) krz_CH2_M3_Create();
//			}
//			if (Rstart == EdopStat::CH3)
//			{
//				if (krz_CH3_M3_CheckPossCreate()) krz_CH3_M3_Create();
//			}
//			if (Rstart == EdopStat::CH4)
//			{
//				if (krz_CH4_M3_CheckPossCreate()) krz_CH4_M3_Create();
//			}
//			if (Rstart == EdopStat::CH5)
//			{
//				if (krz_CH5_M3_CheckPossCreate()) krz_CH5_M3_Create();
//			}
//			if (Rstart == EdopStat::CH6)
//			{
//				if (krz_CH6_M3_CheckPossCreate()) krz_CH6_M3_Create();
//			}
//			if (Rstart == EdopStat::CH7)
//			{
//				if (krz_CH7_M3_CheckPossCreate()) krz_CH7_M3_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M4)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M4_CheckPossCreate()) krz_M5_M4_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M4_CheckPossCreate()) krz_N1_M4_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M4_CheckPossCreate()) krz_N2_M4_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M4_CheckPossCreate()) krz_N3_M4_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M4_CheckPossCreate()) krz_N4_M4_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M4_CheckPossCreate()) krz_N5_M4_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M4_CheckPossCreate()) krz_N6_M4_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M4_CheckPossCreate()) krz_N7_M4_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M6)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M6_CheckPossCreate()) krz_M5_M6_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M6_CheckPossCreate()) krz_N1_M6_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M6_CheckPossCreate()) krz_N2_M6_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M6_CheckPossCreate()) krz_N3_M6_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M6_CheckPossCreate()) krz_N4_M6_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M6_CheckPossCreate()) krz_N5_M6_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M6_CheckPossCreate()) krz_N6_M6_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M6_CheckPossCreate()) krz_N7_M6_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M8)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M8_CheckPossCreate()) krz_M5_M8_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M8_CheckPossCreate()) krz_N1_M8_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M8_CheckPossCreate()) krz_N2_M8_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M8_CheckPossCreate()) krz_N3_M8_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M8_CheckPossCreate()) krz_N4_M8_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M8_CheckPossCreate()) krz_N5_M8_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M8_CheckPossCreate()) krz_N6_M8_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M8_CheckPossCreate()) krz_N7_M8_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M10)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M10_CheckPossCreate()) krz_M5_M10_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M10_CheckPossCreate()) krz_N1_M10_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M10_CheckPossCreate()) krz_N2_M10_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M10_CheckPossCreate()) krz_N3_M10_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M10_CheckPossCreate()) krz_N4_M10_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M10_CheckPossCreate()) krz_N5_M10_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M10_CheckPossCreate()) krz_N6_M10_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M10_CheckPossCreate()) krz_N7_M10_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M12)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M12_CheckPossCreate()) krz_M5_M12_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M12_CheckPossCreate()) krz_N1_M12_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M12_CheckPossCreate()) krz_N2_M12_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M12_CheckPossCreate()) krz_N3_M12_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M12_CheckPossCreate()) krz_N4_M12_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M12_CheckPossCreate()) krz_N5_M12_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M12_CheckPossCreate()) krz_N6_M12_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M12_CheckPossCreate()) krz_N7_M12_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M14)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M14_CheckPossCreate()) krz_M5_M14_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M14_CheckPossCreate()) krz_N1_M14_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M14_CheckPossCreate()) krz_N2_M14_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_M14_CheckPossCreate()) krz_N3_M14_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_M14_CheckPossCreate()) krz_N4_M14_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_M14_CheckPossCreate()) krz_N5_M14_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_M14_CheckPossCreate()) krz_N6_M14_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_M14_CheckPossCreate()) krz_N7_M14_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M16)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M16_CheckPossCreate()) krz_M5_M16_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M16_CheckPossCreate()) krz_N1_M16_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M16_CheckPossCreate()) krz_N2_M16_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M18)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M18_CheckPossCreate()) krz_M5_M18_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M18_CheckPossCreate()) krz_N1_M18_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M18_CheckPossCreate()) krz_N2_M18_Create();
//			}
//
//		}
//
//		if (Rend == EdopStat::M20)
//		{
//			if (Rstart == EdopStat::M5)
//			{
//				if (krz_M5_M20_CheckPossCreate()) krz_M5_M20_Create();
//			}
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_M20_CheckPossCreate()) krz_N1_M20_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_M20_CheckPossCreate()) krz_N2_M20_Create();
//			}
//
//		}
//
//
//	}
//	krz_pult_SvetoforChoice_1 = false;
//	krz_pult_SvetoforChoice_2 = false;
//}
//void UMyUserWidget::krz_Pult_PoezdnoyRouter()
//{
//	EdopStat Rstart = EdopStat::Norm;
//	EdopStat Rend = EdopStat::Norm;
//	Rstart = krz_Pult_Get_Svetofor_Redact();
//	Rend = krz_Pult_Get_Svetofor_Redact_2();
//	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
//	{
//		if (Rstart == EdopStat::N)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_N_1P_CheckPossCreate()) krz_N_1P_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_N_2P_CheckPossCreate()) krz_N_2P_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_N_3P_CheckPossCreate()) krz_N_3P_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_N_4P_CheckPossCreate()) krz_N_4P_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_N_5P_CheckPossCreate()) krz_N_5P_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_N_6P_CheckPossCreate()) krz_N_6P_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_N_7P_CheckPossCreate()) krz_N_7P_Create();
//			}
//		}
//		if (Rstart == EdopStat::ND)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_ND_1P_CheckPossCreate()) krz_ND_1P_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_ND_2P_CheckPossCreate()) krz_ND_2P_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_ND_3P_CheckPossCreate()) krz_ND_3P_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_ND_4P_CheckPossCreate()) krz_ND_4P_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_ND_5P_CheckPossCreate()) krz_ND_5P_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_ND_6P_CheckPossCreate()) krz_ND_6P_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_ND_7P_CheckPossCreate()) krz_ND_7P_Create();
//			}
//		}
//		if (Rstart == EdopStat::CH)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_CH_1P_CheckPossCreate()) krz_CH_1P_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_CH_2P_CheckPossCreate()) krz_CH_2P_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_CH_3P_CheckPossCreate()) krz_CH_3P_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_CH_4P_CheckPossCreate()) krz_CH_4P_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_CH_5P_CheckPossCreate()) krz_CH_5P_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_CH_6P_CheckPossCreate()) krz_CH_6P_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_CH_7P_CheckPossCreate()) krz_CH_7P_Create();
//			}
//		}
//		if (Rstart == EdopStat::CHD)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_CHD_1P_CheckPossCreate()) krz_CHD_1P_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_CHD_2P_CheckPossCreate()) krz_CHD_2P_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_CHD_3P_CheckPossCreate()) krz_CHD_3P_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_CHD_4P_CheckPossCreate()) krz_CHD_4P_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_CHD_5P_CheckPossCreate()) krz_CHD_5P_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_CHD_6P_CheckPossCreate()) krz_CHD_6P_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_CHD_7P_CheckPossCreate()) krz_CHD_7P_Create();
//			}
//		}
//		if (Rstart == EdopStat::CHR)
//		{
//
//			if (Rend == EdopStat::CH1)
//			{
//				if (krz_CHR_1P_CheckPossCreate()) krz_CHR_1P_Create();
//			}
//
//			if (Rend == EdopStat::CH2)
//			{
//				if (krz_CHR_2P_CheckPossCreate()) krz_CHR_2P_Create();
//			}
//
//			if (Rend == EdopStat::CH3)
//			{
//				if (krz_CHR_3P_CheckPossCreate()) krz_CHR_3P_Create();
//			}
//
//			if (Rend == EdopStat::CH4)
//			{
//				if (krz_CHR_4P_CheckPossCreate()) krz_CHR_4P_Create();
//			}
//
//			if (Rend == EdopStat::CH5)
//			{
//				if (krz_CHR_5P_CheckPossCreate()) krz_CHR_5P_Create();
//			}
//
//			if (Rend == EdopStat::CH6)
//			{
//				if (krz_CHR_6P_CheckPossCreate()) krz_CHR_6P_Create();
//			}
//
//			if (Rend == EdopStat::CH7)
//			{
//				if (krz_CHR_7P_CheckPossCreate()) krz_CHR_7P_Create();
//			}
//		}
//
//		if (Rend == EdopStat::N)
//		{
//			if (Rstart == EdopStat::CH1)
//			{
//				if (krz_CH1_N_CheckPossCreate()) krz_CH1_N_Create();
//			}
//			if (Rstart == EdopStat::CH2)
//			{
//				if (krz_CH2_N_CheckPossCreate()) krz_CH2_N_Create();
//			}
//			if (Rstart == EdopStat::CH3)
//			{
//				if (krz_CH3_N_CheckPossCreate()) krz_CH3_N_Create();
//			}
//			if (Rstart == EdopStat::CH4)
//			{
//				if (krz_CH4_N_CheckPossCreate()) krz_CH4_N_Create();
//			}
//			if (Rstart == EdopStat::CH5)
//			{
//				if (krz_CH5_N_CheckPossCreate()) krz_CH5_N_Create();
//			}
//			if (Rstart == EdopStat::CH6)
//			{
//				if (krz_CH6_N_CheckPossCreate()) krz_CH6_N_Create();
//			}
//			if (Rstart == EdopStat::CH7)
//			{
//				if (krz_CH7_N_CheckPossCreate()) krz_CH7_N_Create();
//			}
//		}
//		if (Rend == EdopStat::ND)
//		{
//			if (Rstart == EdopStat::CH1)
//			{
//				if (krz_CH1_ND_CheckPossCreate()) krz_CH1_ND_Create();
//			}
//			if (Rstart == EdopStat::CH2)
//			{
//				if (krz_CH2_ND_CheckPossCreate()) krz_CH2_ND_Create();
//			}
//			if (Rstart == EdopStat::CH3)
//			{
//				if (krz_CH3_ND_CheckPossCreate()) krz_CH3_ND_Create();
//			}
//			if (Rstart == EdopStat::CH4)
//			{
//				if (krz_CH4_ND_CheckPossCreate()) krz_CH4_ND_Create();
//			}
//			if (Rstart == EdopStat::CH5)
//			{
//				if (krz_CH5_ND_CheckPossCreate()) krz_CH5_ND_Create();
//			}
//			if (Rstart == EdopStat::CH6)
//			{
//				if (krz_CH6_ND_CheckPossCreate()) krz_CH6_ND_Create();
//			}
//			if (Rstart == EdopStat::CH7)
//			{
//				if (krz_CH7_ND_CheckPossCreate()) krz_CH7_ND_Create();
//			}
//		}
//		if (Rend == EdopStat::CH)
//		{
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_CH_CheckPossCreate()) krz_N1_CH_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_CH_CheckPossCreate()) krz_N2_CH_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_CH_CheckPossCreate()) krz_N3_CH_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_CH_CheckPossCreate()) krz_N4_CH_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_CH_CheckPossCreate()) krz_N5_CH_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_CH_CheckPossCreate()) krz_N6_CH_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_CH_CheckPossCreate()) krz_N7_CH_Create();
//			}
//		}
//		if (Rend == EdopStat::CHD)
//		{
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_CHD_CheckPossCreate()) krz_N1_CHD_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_CHD_CheckPossCreate()) krz_N2_CHD_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_CHD_CheckPossCreate()) krz_N3_CHD_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_CHD_CheckPossCreate()) krz_N4_CHD_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_CHD_CheckPossCreate()) krz_N5_CHD_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_CHD_CheckPossCreate()) krz_N6_CHD_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_CHD_CheckPossCreate()) krz_N7_CHD_Create();
//			}
//		}
//		if (Rend == EdopStat::CHR)
//		{
//			if (Rstart == EdopStat::N1)
//			{
//				if (krz_N1_CHR_CheckPossCreate()) krz_N1_CHR_Create();
//			}
//			if (Rstart == EdopStat::N2)
//			{
//				if (krz_N2_CHR_CheckPossCreate()) krz_N2_CHR_Create();
//			}
//			if (Rstart == EdopStat::N3)
//			{
//				if (krz_N3_CHR_CheckPossCreate()) krz_N3_CHR_Create();
//			}
//			if (Rstart == EdopStat::N4)
//			{
//				if (krz_N4_CHR_CheckPossCreate()) krz_N4_CHR_Create();
//			}
//			if (Rstart == EdopStat::N5)
//			{
//				if (krz_N5_CHR_CheckPossCreate()) krz_N5_CHR_Create();
//			}
//			if (Rstart == EdopStat::N6)
//			{
//				if (krz_N6_CHR_CheckPossCreate()) krz_N6_CHR_Create();
//			}
//			if (Rstart == EdopStat::N7)
//			{
//				if (krz_N7_CHR_CheckPossCreate()) krz_N7_CHR_Create();
//			}
//		}
//	}
//	krz_pult_SvetoforChoice_1 = false;
//	krz_pult_SvetoforChoice_2 = false;
//}
//void UMyUserWidget::krz_Pult_OtmenaNabora()
//{
//	krz_Make_All_Svetofor_UnRedact();
//}
//void UMyUserWidget::krz_Pult_Iskusstvennaya_razdelka()
//{
//}
//FString UMyUserWidget::krz_Pult_CreatePortHandler()
//{
//	FString str = "port COM 3";
//	sPortName = L"COM3";
//	hSerial = ::CreateFile(sPortName, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
//	if (hSerial == INVALID_HANDLE_VALUE)
//	{
//
//		return "Error port";
//	}
//	DCB dcbSerialParams = { 0 };
//	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
//	if (!GetCommState(hSerial, &dcbSerialParams))
//	{
//		//std::cout << "getting state error\n";
//
//		return "Error port";
//	}
//	dcbSerialParams.BaudRate = CBR_9600;
//	dcbSerialParams.ByteSize = 8;
//	dcbSerialParams.StopBits = ONESTOPBIT;
//	dcbSerialParams.Parity = NOPARITY;
//	if (!SetCommState(hSerial, &dcbSerialParams))
//	{
//		std::cout << "error setting serial port state\n";
//		return "Error port";
//	}
//	//namePort = sPortName;
//
//	return str;
//}
//void UMyUserWidget::krz_Pult_PrepareArrCommandToFirstLoad()
//{
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmStr.size(); i++)
//	{
//		krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmStr[i]);
//	}
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmSvetofor.size(); i++)
//	{
//		krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmSvetofor[i]);
//	}
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmWay.size(); i++)
//	{
//		krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmWay[i]);
//	}
//}
//void UMyUserWidget::krz_Pult_CheckerChanger()
//{
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmStr.size(); i++)
//	{
//		if (Disp->krz_pult_arrPelmStr[i].elm->stat != Disp->krz_pult_arrStrDub[i].stat || Disp->krz_pult_arrPelmStr[i].elm->oper != Disp->krz_pult_arrStrDub[i].oper)
//		{
//			Disp->krz_pult_arrStrDub[i].stat = Disp->krz_pult_arrPelmStr[i].elm->stat;
//			Disp->krz_pult_arrStrDub[i].oper = Disp->krz_pult_arrPelmStr[i].elm->oper;
//			krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmStr[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmSvetofor.size(); i++)
//	{
//		if (Disp->krz_pult_arrPelmSvetofor[i].elm->stat != Disp->krz_pult_arrSvetoforDub[i].stat || Disp->krz_pult_arrPelmSvetofor[i].elm->oper != Disp->krz_pult_arrSvetoforDub[i].oper)
//		{
//			Disp->krz_pult_arrSvetoforDub[i].stat = Disp->krz_pult_arrPelmSvetofor[i].elm->stat;
//			Disp->krz_pult_arrSvetoforDub[i].oper = Disp->krz_pult_arrPelmSvetofor[i].elm->oper;
//			krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmSvetofor[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krz_pult_arrPelmWay.size(); i++)
//	{
//		if (Disp->krz_pult_arrPelmWay[i].elm->stat != Disp->krz_pult_arrWayDub[i].stat)
//		{
//			Disp->krz_pult_arrWayDub[i].stat = Disp->krz_pult_arrPelmWay[i].elm->stat;
//			krz_Pult_SenderTo_LoaderTo(Disp->krz_pult_arrPelmWay[i]);
//		}
//	}
//
//}
//FString UMyUserWidget::krz_Pult_LoaderTo()
//{
//	FString str = "";
//	if (krz_pult_arrComm.size() != 0)
//	{
//		iRet = WriteFile(hSerial, krz_pult_arrComm[0].c_str(), krz_pult_arrComm[0].size(), &dwBytesWritten, NULL);
//		str = krz_pult_arrComm[0].c_str();
//
//		Beep(800, 20);
//		krz_pult_arrComm.erase(krz_pult_arrComm.begin());
//	}
//	return str;
//}
//void UMyUserWidget::krz_Pult_SenderTo_LoaderTo(Pelm elm)
//{
//#pragma region Strelki
//
//	if (!strcmp(elm.name.c_str(), "str1"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b31on\n");
//			krz_pult_arrComm.push_back("a42off\n");
//			krz_pult_arrComm.push_back("a25off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a42on\n");
//			krz_pult_arrComm.push_back("a25off\n");
//			krz_pult_arrComm.push_back("b31off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a25on\n");
//			krz_pult_arrComm.push_back("a42off\n");
//			krz_pult_arrComm.push_back("b31off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str2"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b46on\n");
//			krz_pult_arrComm.push_back("b53off\n");
//			krz_pult_arrComm.push_back("b52off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b53on\n");
//			krz_pult_arrComm.push_back("b52off\n");
//			krz_pult_arrComm.push_back("b46off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b52on\n");
//			krz_pult_arrComm.push_back("b53off\n");
//			krz_pult_arrComm.push_back("b46off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str3"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b31on\n");
//			krz_pult_arrComm.push_back("a42off\n");
//			krz_pult_arrComm.push_back("a25off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a42on\n");
//			krz_pult_arrComm.push_back("a25off\n");
//			krz_pult_arrComm.push_back("b31off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a25on\n");
//			krz_pult_arrComm.push_back("a42off\n");
//			krz_pult_arrComm.push_back("b31off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str4"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b47on\n");
//			krz_pult_arrComm.push_back("b50off\n");
//			krz_pult_arrComm.push_back("b48off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b50on\n");
//			krz_pult_arrComm.push_back("b47off\n");
//			krz_pult_arrComm.push_back("b48off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b48on\n");
//			krz_pult_arrComm.push_back("b50off\n");
//			krz_pult_arrComm.push_back("b47off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str5"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b36on\n");
//			krz_pult_arrComm.push_back("a53off\n");
//			krz_pult_arrComm.push_back("b37off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a53on\n");
//			krz_pult_arrComm.push_back("b37off\n");
//			krz_pult_arrComm.push_back("b36off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b37on\n");
//			krz_pult_arrComm.push_back("a53off\n");
//			krz_pult_arrComm.push_back("b36off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str6"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b42on\n");
//			krz_pult_arrComm.push_back("b51off\n");
//			krz_pult_arrComm.push_back("a49off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a49on\n");
//			krz_pult_arrComm.push_back("b51off\n");
//			krz_pult_arrComm.push_back("b42off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b51on\n");
//			krz_pult_arrComm.push_back("a49off\n");
//			krz_pult_arrComm.push_back("b42off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str7"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b36on\n");
//			krz_pult_arrComm.push_back("a53off\n");
//			krz_pult_arrComm.push_back("b37off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a53on\n");
//			krz_pult_arrComm.push_back("b37off\n");
//			krz_pult_arrComm.push_back("b36off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b37on\n");
//			krz_pult_arrComm.push_back("a53off\n");
//			krz_pult_arrComm.push_back("b36off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str8"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b2on\n");
//			krz_pult_arrComm.push_back("b43off\n");
//			krz_pult_arrComm.push_back("b3off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b43on\n");
//			krz_pult_arrComm.push_back("b2off\n");
//			krz_pult_arrComm.push_back("b3off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b3on\n");
//			krz_pult_arrComm.push_back("b43off\n");
//			krz_pult_arrComm.push_back("b2off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str9"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("b28on\n");
//			krz_pult_arrComm.push_back("a45off\n");
//			krz_pult_arrComm.push_back("b34off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b34on\n");
//			krz_pult_arrComm.push_back("a45off\n");
//			krz_pult_arrComm.push_back("b28off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a45on\n");
//			krz_pult_arrComm.push_back("b28off\n");
//			krz_pult_arrComm.push_back("b34off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str10"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("b4off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b4on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("b4off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str11"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a23on\n");
//			krz_pult_arrComm.push_back("a41off\n");
//			krz_pult_arrComm.push_back("b22off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b22on\n");
//			krz_pult_arrComm.push_back("a41off\n");
//			krz_pult_arrComm.push_back("a23off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a41on\n");
//			krz_pult_arrComm.push_back("a23off\n");
//			krz_pult_arrComm.push_back("b22off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str12"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("bn11on\n");
//			krz_pult_arrComm.push_back("bn10off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn10off\n");
//			krz_pult_arrComm.push_back("bn11off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("bn10on\n");
//			krz_pult_arrComm.push_back("bn11off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str13"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a49on\n");
//			krz_pult_arrComm.push_back("a51off\n");
//			krz_pult_arrComm.push_back("b29off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a51on\n");
//			krz_pult_arrComm.push_back("a49off\n");
//			krz_pult_arrComm.push_back("b29off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b29on\n");
//			krz_pult_arrComm.push_back("a51off\n");
//			krz_pult_arrComm.push_back("a49off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("a50on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("a50off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str14"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("bn11on\n");
//			krz_pult_arrComm.push_back("bn10off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn10off\n");
//			krz_pult_arrComm.push_back("bn11off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("bn10on\n");
//			krz_pult_arrComm.push_back("bn11off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str15"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a39on\n");
//			krz_pult_arrComm.push_back("b32off\n");
//			krz_pult_arrComm.push_back("b27off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b32on\n");
//			krz_pult_arrComm.push_back("a39off\n");
//			krz_pult_arrComm.push_back("b27off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("b27on\n");
//			krz_pult_arrComm.push_back("a39off\n");
//			krz_pult_arrComm.push_back("b32off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str16"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("bn14on\n");
//			krz_pult_arrComm.push_back("bn13off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("bn13on\n");
//			krz_pult_arrComm.push_back("bn14off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn14off\n");
//			krz_pult_arrComm.push_back("bn13off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str17"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("a52off\n");
//			krz_pult_arrComm.push_back("b25off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b25on\n");
//			krz_pult_arrComm.push_back("a52off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a52on\n");
//			krz_pult_arrComm.push_back("b25off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str18"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("bn14on\n");
//			krz_pult_arrComm.push_back("bn13off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("bn13on\n");
//			krz_pult_arrComm.push_back("bn14off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn14off\n");
//			krz_pult_arrComm.push_back("bn13off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str20"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("bn7on\n");
//			krz_pult_arrComm.push_back("bn6off\n");
//			krz_pult_arrComm.push_back("bn15off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("bn15on\n");
//			krz_pult_arrComm.push_back("bn6off\n");
//			krz_pult_arrComm.push_back("bn7off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("bn6on\n");
//			krz_pult_arrComm.push_back("bn7off\n");
//			krz_pult_arrComm.push_back("bn15off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("a46on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("a46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str22"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("d27on\n");
//			krz_pult_arrComm.push_back("d31off\n");
//			krz_pult_arrComm.push_back("d28off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("d28on\n");
//			krz_pult_arrComm.push_back("d31off\n");
//			krz_pult_arrComm.push_back("d27off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("d31on\n");
//			krz_pult_arrComm.push_back("d28off\n");
//			krz_pult_arrComm.push_back("d27off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str24"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("d37off\n");
//			krz_pult_arrComm.push_back("d31off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("d37on\n");
//			krz_pult_arrComm.push_back("d31off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("d31on\n");
//			krz_pult_arrComm.push_back("d37off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str26"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a22on\n");
//			krz_pult_arrComm.push_back("a29off\n");
//			krz_pult_arrComm.push_back("a26off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a26on\n");
//			krz_pult_arrComm.push_back("a29off\n");
//			krz_pult_arrComm.push_back("a22off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a29on\n");
//			krz_pult_arrComm.push_back("a26off\n");
//			krz_pult_arrComm.push_back("a22off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str28"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a22on\n");
//			krz_pult_arrComm.push_back("a29off\n");
//			krz_pult_arrComm.push_back("a26off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a26on\n");
//			krz_pult_arrComm.push_back("a29off\n");
//			krz_pult_arrComm.push_back("a22off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a29on\n");
//			krz_pult_arrComm.push_back("a26off\n");
//			krz_pult_arrComm.push_back("a22off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str30"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a24on\n");
//			krz_pult_arrComm.push_back("a30off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("a30off\n");
//			krz_pult_arrComm.push_back("a24off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a30on\n");
//			krz_pult_arrComm.push_back("a24off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str32"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a28on\n");
//			krz_pult_arrComm.push_back("a36off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a28on\n");
//			krz_pult_arrComm.push_back("a36off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a36on\n");
//			krz_pult_arrComm.push_back("a28off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str34"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("a31off\n");
//			krz_pult_arrComm.push_back("a30off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("a31on\n");
//			krz_pult_arrComm.push_back("a30off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a30on\n");
//			krz_pult_arrComm.push_back("a31off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str36"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			krz_pult_arrComm.push_back("a27on\n");
//			krz_pult_arrComm.push_back("a32off\n");
//			krz_pult_arrComm.push_back("b35off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Minus)
//		{
//			krz_pult_arrComm.push_back("b35on\n");
//			krz_pult_arrComm.push_back("a32off\n");
//			krz_pult_arrComm.push_back("a27off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Status_changes)
//		{
//			krz_pult_arrComm.push_back("a32on\n");
//			krz_pult_arrComm.push_back("a27off\n");
//			krz_pult_arrComm.push_back("b35off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//
//
//#pragma endregion
//#pragma region Svetofors
//	if (!strcmp(elm.name.c_str(), "N"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			krz_pult_arrComm.push_back("c42on\n");
//			krz_pult_arrComm.push_back("c47off\n");
//			krz_pult_arrComm.push_back("c43off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("c43on\n");
//			krz_pult_arrComm.push_back("c47off\n");
//			krz_pult_arrComm.push_back("c42off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("c47on\n");
//			krz_pult_arrComm.push_back("c43off\n");
//			krz_pult_arrComm.push_back("c42off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "ND"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			krz_pult_arrComm.push_back("an15on\n");
//			krz_pult_arrComm.push_back("an13off\n");
//			krz_pult_arrComm.push_back("a5off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("an13on\n");
//			krz_pult_arrComm.push_back("a5off\n");
//			krz_pult_arrComm.push_back("an15off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("a5on\n");
//			krz_pult_arrComm.push_back("an13off\n");
//			krz_pult_arrComm.push_back("an15off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("a7on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("a7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			krz_pult_arrComm.push_back("an3on\n");
//			krz_pult_arrComm.push_back("c4off\n");
//			krz_pult_arrComm.push_back("c3off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("c3on\n");
//			krz_pult_arrComm.push_back("an3off\n");
//			krz_pult_arrComm.push_back("c4off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("c4on\n");
//			krz_pult_arrComm.push_back("an3off\n");
//			krz_pult_arrComm.push_back("c3off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CHD"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			krz_pult_arrComm.push_back("gn2on\n");
//			krz_pult_arrComm.push_back("fn2off\n");
//			krz_pult_arrComm.push_back("gn1off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("gn1on\n");
//			krz_pult_arrComm.push_back("fn2off\n");
//			krz_pult_arrComm.push_back("gn2off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("fn2on\n");
//			krz_pult_arrComm.push_back("gn1off\n");
//			krz_pult_arrComm.push_back("gn2off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CHR"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			krz_pult_arrComm.push_back("e49on\n");
//			krz_pult_arrComm.push_back("e51off\n");
//			krz_pult_arrComm.push_back("e41off\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("e51on\n");
//			krz_pult_arrComm.push_back("e49off\n");
//			krz_pult_arrComm.push_back("e41off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("e41on\n");
//			krz_pult_arrComm.push_back("e51off\n");
//			krz_pult_arrComm.push_back("e49off\n");
//
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "N1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("e37off\n");
//			krz_pult_arrComm.push_back("e26off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("e37on\n");
//			krz_pult_arrComm.push_back("e26off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("e26on\n");
//			krz_pult_arrComm.push_back("e37off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N7"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "N1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("c29off\n");
//			krz_pult_arrComm.push_back("c27off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("c29on\n");
//			krz_pult_arrComm.push_back("c27off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("c27on\n");
//			krz_pult_arrComm.push_back("c29off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("c28off\n");
//			krz_pult_arrComm.push_back("c24off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("c24on\n");
//			krz_pult_arrComm.push_back("c28off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("c28on\n");
//			krz_pult_arrComm.push_back("c24off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("c25off\n");
//			krz_pult_arrComm.push_back("c22off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("c25on\n");
//			krz_pult_arrComm.push_back("c22off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("c22on\n");
//			krz_pult_arrComm.push_back("c25off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("fn11off\n");
//			krz_pult_arrComm.push_back("fn12off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("fn11on\n");
//			krz_pult_arrComm.push_back("fn12off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("fn12on\n");
//			krz_pult_arrComm.push_back("fn11off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "N7"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("f40off\n");
//			krz_pult_arrComm.push_back("f36off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("f36on\n");
//			krz_pult_arrComm.push_back("f40off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("f40on\n");
//			krz_pult_arrComm.push_back("f36off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("f37on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("f37off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "CH1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("f43off\n");
//			krz_pult_arrComm.push_back("f33off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("f43on\n");
//			krz_pult_arrComm.push_back("f33off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("f33on\n");
//			krz_pult_arrComm.push_back("f43off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("d2off\n");
//			krz_pult_arrComm.push_back("f42off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("d2on\n");
//			krz_pult_arrComm.push_back("f42off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("f42on\n");
//			krz_pult_arrComm.push_back("d2off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("dn0off\n");
//			krz_pult_arrComm.push_back("dn2off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("dn0on\n");
//			krz_pult_arrComm.push_back("dn2off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("dn2on\n");
//			krz_pult_arrComm.push_back("dn0off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("f8off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("f8on\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("f8off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("a11off\n");
//			krz_pult_arrComm.push_back("a10off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("a10on\n");
//			krz_pult_arrComm.push_back("a11off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("a11on\n");
//			krz_pult_arrComm.push_back("a10off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("b11off\n");
//			krz_pult_arrComm.push_back("b8off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("b8on\n");
//			krz_pult_arrComm.push_back("b11off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("b11on\n");
//			krz_pult_arrComm.push_back("b8off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("an6on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("an6off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CH7"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("b13off\n");
//			krz_pult_arrComm.push_back("b12off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			krz_pult_arrComm.push_back("b13on\n");
//			krz_pult_arrComm.push_back("b12off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("b12on\n");
//			krz_pult_arrComm.push_back("b13off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("a6on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("a6off\n");
//		}
//	}
//
//
//
//
//
//	if (!strcmp(elm.name.c_str(), "M1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("an15off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("an15on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("a9on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("a9off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("an2off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("an2on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("an1on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("an1off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("gn4off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("gn4on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("g9off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("g9on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("e34on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("e34off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("cn13off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("cn13on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M8"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("e40off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("e40on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M10"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M12"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("fn5off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("fn5on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M14"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("fn8off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("fn8on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M16"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("d38off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("d38on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M18"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("d50off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("d50on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("d49on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("d49off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "M20"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			krz_pult_arrComm.push_back("d48off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			krz_pult_arrComm.push_back("d48on\n");
//		}
//		if (elm.elm->oper == EOper::Redact || elm.elm->oper == EOper::Redact_2)
//		{
//			krz_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//
//
//#pragma endregion
//#pragma region Ways
//	if (!strcmp(elm.name.c_str(), "_1NP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2NP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2NP_KARABAS"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_NP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("a8off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("a8on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_NAP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn1off\n");
//			krz_pult_arrComm.push_back("d11off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("cn1on\n");
//			krz_pult_arrComm.push_back("d11off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d11on\n");
//			krz_pult_arrComm.push_back("cn1off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1UPN"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPN"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPN_KARABAS"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CHP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1CHP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("bn1off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn1off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("bn1on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2CHP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("bn0off\n");
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("c45off\n");//?
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn0off\n");
//			krz_pult_arrComm.push_back("c45off\n");///?
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("bn0on\n");
//			krz_pult_arrComm.push_back("c45on\n");//?
//			krz_pult_arrComm.push_back("off\n");
//
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2CHP_KARAGANDA"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CHAP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c7off\n");
//			krz_pult_arrComm.push_back("c6off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c7on\n");
//			krz_pult_arrComm.push_back("c6off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c6on\n");
//			krz_pult_arrComm.push_back("c7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("an9off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("an9off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("an9on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("an8off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("an8off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("an8on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPCH_KARAGANDA"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CHRP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e50off\n");
//			krz_pult_arrComm.push_back("e42off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e50on\n");
//			krz_pult_arrComm.push_back("e42off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e42on\n");
//			krz_pult_arrComm.push_back("e50off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1PP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e39off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("e39off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e39on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2PP"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e48off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("e48off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e48on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2PP_OUT"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s1"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn4off\n");
//			krz_pult_arrComm.push_back("d13off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d13on\n");
//			krz_pult_arrComm.push_back("cn4off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("cn4on\n");
//			krz_pult_arrComm.push_back("d13off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("bn4off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("bn4off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("bn4on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s3"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn3off\n");
//			krz_pult_arrComm.push_back("cn5off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("cn5on\n");
//			krz_pult_arrComm.push_back("cn3off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("cn3on\n");
//			krz_pult_arrComm.push_back("cn5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s4"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s5"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d9off\n");
//			krz_pult_arrComm.push_back("d6off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d9on\n");
//			krz_pult_arrComm.push_back("d6off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d6on\n");
//			krz_pult_arrComm.push_back("d5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s6"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("fn0off\n");
//			krz_pult_arrComm.push_back("gn0off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("gn0on\n");
//			krz_pult_arrComm.push_back("fn0off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn0on\n");
//			krz_pult_arrComm.push_back("gn0off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s7"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d8off\n");
//			krz_pult_arrComm.push_back("d7off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d7on\n");
//			krz_pult_arrComm.push_back("d8off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d8on\n");
//			krz_pult_arrComm.push_back("d7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s8"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("fn1off\n");
//			krz_pult_arrComm.push_back("fn4off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("fn4on\n");
//			krz_pult_arrComm.push_back("fn1off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn1on\n");
//			krz_pult_arrComm.push_back("fn4off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s9"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e10off\n");
//			krz_pult_arrComm.push_back("e11off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e11on\n");
//			krz_pult_arrComm.push_back("e10off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e10on\n");
//			krz_pult_arrComm.push_back("e11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s10"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s11"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("f46off\n");
//			krz_pult_arrComm.push_back("f45off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("f46on\n");
//			krz_pult_arrComm.push_back("f45off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("f45on\n");
//			krz_pult_arrComm.push_back("f46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s12"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g13off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("g13off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g13on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s13"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s14"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g11off\n");
//			krz_pult_arrComm.push_back("gn11off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g11on\n");
//			krz_pult_arrComm.push_back("gn11off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("gn11on\n");
//			krz_pult_arrComm.push_back("g11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s15"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("a12off\n");
//			krz_pult_arrComm.push_back("a13off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("a12on\n");
//			krz_pult_arrComm.push_back("a13off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("a13on\n");
//			krz_pult_arrComm.push_back("a12off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s16"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c36off\n");
//			krz_pult_arrComm.push_back("c34off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c36on\n");
//			krz_pult_arrComm.push_back("c34off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c34on\n");
//			krz_pult_arrComm.push_back("c36off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s17"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c38off\n");
//			krz_pult_arrComm.push_back("a4off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c38on\n");
//			krz_pult_arrComm.push_back("a4off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("a4on\n");
//			krz_pult_arrComm.push_back("c38off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s18"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g2off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("g2off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g2on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s20"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f39off\n");
//			krz_pult_arrComm.push_back("f34off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f39on\n");
//			krz_pult_arrComm.push_back("f34off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f34on\n");
//			krz_pult_arrComm.push_back("f39off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s22"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s24"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("d30off\n");
//			krz_pult_arrComm.push_back("d26off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("d30on\n");//net na skheme
//			krz_pult_arrComm.push_back("d26off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("d26on\n");
//			krz_pult_arrComm.push_back("d30off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s26"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c26off\n");
//			krz_pult_arrComm.push_back("d36off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c26on\n");
//			krz_pult_arrComm.push_back("d36off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d36on\n");
//			krz_pult_arrComm.push_back("c26off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s28"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d33off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("d33off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d33on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s30"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s32"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s34"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e23off\n");
//			krz_pult_arrComm.push_back("e22off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e23on\n");
//			krz_pult_arrComm.push_back("e22off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//
//			krz_pult_arrComm.push_back("e22on\n");
//			krz_pult_arrComm.push_back("e23off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s36"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s1_s7"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c11off\n");
//			krz_pult_arrComm.push_back("c12off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c11on\n");
//			krz_pult_arrComm.push_back("c12off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c12on\n");
//			krz_pult_arrComm.push_back("c11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s3_s5"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("dn1off\n");
//			krz_pult_arrComm.push_back("d10off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d10on\n");
//			krz_pult_arrComm.push_back("dn1off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("dn1on\n");
//			krz_pult_arrComm.push_back("d10off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2_s12"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c53off\n");
//			krz_pult_arrComm.push_back("c50off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c53on\n");
//			krz_pult_arrComm.push_back("c50off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c50on\n");
//			krz_pult_arrComm.push_back("c53off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s5_s9"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("dn3off\n");
//			krz_pult_arrComm.push_back("f9off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("dn3on\n");
//			krz_pult_arrComm.push_back("f9off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f9on\n");
//			krz_pult_arrComm.push_back("dn3off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s6_s14"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g12off\n");
//			krz_pult_arrComm.push_back("g3off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g3on\n");
//			krz_pult_arrComm.push_back("g12off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g12on\n");
//			krz_pult_arrComm.push_back("g3off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s7_s15"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c10off\n");
//			krz_pult_arrComm.push_back("c9off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c10on\n");
//			krz_pult_arrComm.push_back("c9off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c9on\n");
//			krz_pult_arrComm.push_back("c10off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s15_s17"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s12_s18"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c52off\n");
//			krz_pult_arrComm.push_back("c48off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c48on\n");
//			krz_pult_arrComm.push_back("c52off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c52on\n");
//			krz_pult_arrComm.push_back("c48off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s18_s20"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c51off\n");
//			krz_pult_arrComm.push_back("c49off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c51on\n");//?
//			krz_pult_arrComm.push_back("c49off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c49on\n");//?
//			krz_pult_arrComm.push_back("c51off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s14_s16"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c37off\n");
//			krz_pult_arrComm.push_back("c35off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c35on\n");
//			krz_pult_arrComm.push_back("c37off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c37on\n");
//			krz_pult_arrComm.push_back("c35off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s16_s24"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c32off\n");
//			krz_pult_arrComm.push_back("c30off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c32on\n");
//			krz_pult_arrComm.push_back("c30off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c30on\n");
//			krz_pult_arrComm.push_back("c32off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s14_s16"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s28_s34"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g37off\n");
//			krz_pult_arrComm.push_back("g30off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g37on\n");
//			krz_pult_arrComm.push_back("g30off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g30on\n");
//			krz_pult_arrComm.push_back("g37off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s28_s30"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g34off\n");
//			krz_pult_arrComm.push_back("g26off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g34on\n");
//			krz_pult_arrComm.push_back("g26off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g26on\n");
//			krz_pult_arrComm.push_back("g34off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s30_s34"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s30_s32"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g29off\n");
//			krz_pult_arrComm.push_back("g25off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g29on\n");
//			krz_pult_arrComm.push_back("g25off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g25on\n");
//			krz_pult_arrComm.push_back("g29off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M1_s3"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d5off\n");
//			krz_pult_arrComm.push_back("d4off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d5on\n");
//			krz_pult_arrComm.push_back("d4off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d4on\n");
//			krz_pult_arrComm.push_back("d5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M2_s2"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn9off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("cn9off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("cn9on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M3_s1"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c13off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("c13off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c13on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M4_s6"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("gn12off\n");
//			krz_pult_arrComm.push_back("gn14off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("gn12on\n");
//			krz_pult_arrComm.push_back("gn14off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("gn14on\n");
//			krz_pult_arrComm.push_back("gn12off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M5_s36"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e36off\n");
//			krz_pult_arrComm.push_back("e35off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e35on\n");
//			krz_pult_arrComm.push_back("e36off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e36on\n");
//			krz_pult_arrComm.push_back("e35off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M6_s8"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e43off\n");
//			krz_pult_arrComm.push_back("e38off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e38on\n");
//			krz_pult_arrComm.push_back("e43off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e43on\n");
//			krz_pult_arrComm.push_back("e38off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M10_s10"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("fn3off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("fn3off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn3on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M12_s4"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c5off\n");
//			krz_pult_arrComm.push_back("an0off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c5on\n");
//			krz_pult_arrComm.push_back("an0off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("an0on\n");
//			krz_pult_arrComm.push_back("c5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M14_s4"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f53off\n");
//			krz_pult_arrComm.push_back("f50off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f50on\n");
//			krz_pult_arrComm.push_back("f53off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f53on\n");
//			krz_pult_arrComm.push_back("f50off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M16_s32"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d52off\n");
//			krz_pult_arrComm.push_back("d43off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d52on\n");
//			krz_pult_arrComm.push_back("d43off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d43on\n");
//			krz_pult_arrComm.push_back("d52off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M18_s32"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d47off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d47on\n");//d47on без обозначения
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("don\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M20 s30"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g27off\n");
//			krz_pult_arrComm.push_back("g22off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g27on\n");
//			krz_pult_arrComm.push_back("g22off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g22on\n");
//			krz_pult_arrComm.push_back("g27off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M8_s10"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e44off\n");
//			krz_pult_arrComm.push_back("en7off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("en7on\n");
//			krz_pult_arrComm.push_back("e44off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e44on\n");
//			krz_pult_arrComm.push_back("en7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH1_s13"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f49off\n");
//			krz_pult_arrComm.push_back("f41off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f41on\n");
//			krz_pult_arrComm.push_back("f49off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f49on\n");
//			krz_pult_arrComm.push_back("f41off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH2_s13"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f47off\n");
//			krz_pult_arrComm.push_back("f44off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f47on\n");
//			krz_pult_arrComm.push_back("f44off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f44on\n");
//			krz_pult_arrComm.push_back("f47off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH3_s11"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d3off\n");
//			krz_pult_arrComm.push_back("e13off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d3on\n");
//			krz_pult_arrComm.push_back("e13off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e13on\n");
//			krz_pult_arrComm.push_back("d3off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH4_s9"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f13off\n");
//			krz_pult_arrComm.push_back("f10off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f13on\n");
//			krz_pult_arrComm.push_back("f10off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f10on\n");
//			krz_pult_arrComm.push_back("f13off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH5_s15"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c40off\n");
//			krz_pult_arrComm.push_back("c41off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c40on\n");
//			krz_pult_arrComm.push_back("c41off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c41on\n");
//			krz_pult_arrComm.push_back("c40off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH6_s17"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("b10off\n");
//			krz_pult_arrComm.push_back("b9off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("b10on\n");
//			krz_pult_arrComm.push_back("b9off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("b9on\n");
//			krz_pult_arrComm.push_back("b10off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_CH7_s17"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c38off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c38on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("c38off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N1_s36"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e32off\n");
//			krz_pult_arrComm.push_back("e27off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e32on\n");
//			krz_pult_arrComm.push_back("e27off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e27on\n");
//			krz_pult_arrComm.push_back("e32off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N2_s34"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g33off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g33on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("g33off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N3_s26"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d53off\n");
//			krz_pult_arrComm.push_back("d42off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d42on\n");
//			krz_pult_arrComm.push_back("d53off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d53on\n");
//			krz_pult_arrComm.push_back("d42off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N4_s24"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("c32off\n");
//			krz_pult_arrComm.push_back("c33off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("c32on\n");
//			krz_pult_arrComm.push_back("c33off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("c33on\n");
//			krz_pult_arrComm.push_back("c32off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N5_s20"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn10off\n");
//			krz_pult_arrComm.push_back("cn11off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("cn11on\n");
//			krz_pult_arrComm.push_back("cn10off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("cn10on\n");
//			krz_pult_arrComm.push_back("cn11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N6_s22"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("fn7off\n");
//			krz_pult_arrComm.push_back("fn10off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("fn7on\n");
//			krz_pult_arrComm.push_back("fn10off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn10on\n");
//			krz_pult_arrComm.push_back("fn7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_N7_s22"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f38off\n");
//			krz_pult_arrComm.push_back("f35off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f38on\n");
//			krz_pult_arrComm.push_back("f35off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("f35on\n");
//			krz_pult_arrComm.push_back("f38off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w1"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e31off\n");
//			krz_pult_arrComm.push_back("e28off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e28on\n");
//			krz_pult_arrComm.push_back("e31off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e31on\n");
//			krz_pult_arrComm.push_back("e28off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w2"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g8off\n");
//			krz_pult_arrComm.push_back("g4off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g8on\n");
//			krz_pult_arrComm.push_back("g4off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g4on\n");
//			krz_pult_arrComm.push_back("g8off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w3"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g10off\n");
//			krz_pult_arrComm.push_back("g6off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g10on\n");
//			krz_pult_arrComm.push_back("g6off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g6on\n");
//			krz_pult_arrComm.push_back("g10off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w4"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g53off\n");
//			krz_pult_arrComm.push_back("g50off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g53on\n");
//			krz_pult_arrComm.push_back("g50off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g50on\n");
//			krz_pult_arrComm.push_back("g53off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w5"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g52off\n");
//			krz_pult_arrComm.push_back("g51off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g52on\n");
//			krz_pult_arrComm.push_back("g51off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g51on\n");
//			krz_pult_arrComm.push_back("g52off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w6"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g48off\n");
//			krz_pult_arrComm.push_back("g47off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g48on\n");
//			krz_pult_arrComm.push_back("g47off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g47on\n");
//			krz_pult_arrComm.push_back("g48off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w7"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g46off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g46on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("g46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M6_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("cn12off\n");
//			krz_pult_arrComm.push_back("cn15off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("cn15on\n");
//			krz_pult_arrComm.push_back("cn12off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("cn13on\n");
//			krz_pult_arrComm.push_back("cn15off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M18_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d51off\n");
//			krz_pult_arrComm.push_back("d46off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d46on\n");
//			krz_pult_arrComm.push_back("d51off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d51on\n");
//			krz_pult_arrComm.push_back("d46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M16_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("d41off\n");
//			krz_pult_arrComm.push_back("d40off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("d40on\n");
//			krz_pult_arrComm.push_back("d41off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("d41on\n");
//			krz_pult_arrComm.push_back("d40off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M5_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("e33off\n");
//			krz_pult_arrComm.push_back("e30off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("e30on\n");
//			krz_pult_arrComm.push_back("e33off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("e33on\n");
//			krz_pult_arrComm.push_back("e30off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M14_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f51off\n");
//			krz_pult_arrComm.push_back("fn6off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f51on\n");
//			krz_pult_arrComm.push_back("fn6off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn6on\n");
//			krz_pult_arrComm.push_back("f51off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M12_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("f48off\n");
//			krz_pult_arrComm.push_back("fn15off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("f48on\n");
//			krz_pult_arrComm.push_back("fn15off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("fn15on\n");
//			krz_pult_arrComm.push_back("f48off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M20_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("g36off\n");
//			krz_pult_arrComm.push_back("g24off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("g24on\n");
//			krz_pult_arrComm.push_back("g36off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("g36on\n");
//			krz_pult_arrComm.push_back("g24off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_M_tupic"))
//	{
//		if (elm.elm->stat == EAStat::Free)
//		{
//			krz_pult_arrComm.push_back("off\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Routed || elm.elm->stat == EAStat::ManRouted)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			krz_pult_arrComm.push_back("on\n");
//			krz_pult_arrComm.push_back("off\n");
//		}
//	}
//
//
//
//#pragma endregion
//
//}
//void UMyUserWidget::krz_Pult_FirstLoadTo()
//{
//}
//void UMyUserWidget::krz_Pult_AvariynoeOtkritiePereezda()
//{
//}
//void UMyUserWidget::krz_Pult_ZakritiePereezda()
//{
//}
//void UMyUserWidget::krz_Pult_DGA()
//{
//
//}
//
//
//
//#pragma endregion