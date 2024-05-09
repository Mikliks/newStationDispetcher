// Fill out your copyright notice in the Description page of Project Settings.


#include "KarabasPultWidget.h"

#pragma region Pult

//void UKarabasPultWidget::krb_IskusstvennaiyaRazdelka()
//{
//	Disp->ZaprosIscusstRazdelka(Station::Karabas);
//}

void UKarabasPultWidget::SendCommToServer(Commd comm)
{
	Disp->SendCommToServer(Station::Karabas, comm);
}

void UKarabasPultWidget::StrelkaToPlus(int number)
{
	if (number == 1) SendCommToServer(Commd::s1_Plus);
	else if(number == 2) SendCommToServer(Commd::s2_Plus);
	else if (number == 3) SendCommToServer(Commd::s3_Plus);
	else if (number == 4) SendCommToServer(Commd::s4_Plus);
	else if (number == 5) SendCommToServer(Commd::s5_Plus);
	else if (number == 6) SendCommToServer(Commd::s6_Plus);
	else if (number == 7) SendCommToServer(Commd::s7_Plus);
	else if (number == 8) SendCommToServer(Commd::s8_Plus);
	else if (number == 9) SendCommToServer(Commd::s9_Plus);
	else if (number == 10) SendCommToServer(Commd::s10_Plus);
	else if (number == 11) SendCommToServer(Commd::s11_Plus);
	else if (number == 12) SendCommToServer(Commd::s12_Plus);
	else if (number == 14) SendCommToServer(Commd::s14_Plus);
	else if (number == 16) SendCommToServer(Commd::s16_Plus);
}

void UKarabasPultWidget::StrelkaToMinus(int number)
{
	if (number == 1) SendCommToServer(Commd::s1_Minus);
	else if (number == 2) SendCommToServer(Commd::s2_Minus);
	else if (number == 3) SendCommToServer(Commd::s3_Minus);
	else if (number == 4) SendCommToServer(Commd::s4_Minus);
	else if (number == 5) SendCommToServer(Commd::s5_Minus);
	else if (number == 6) SendCommToServer(Commd::s6_Minus);
	else if (number == 7) SendCommToServer(Commd::s7_Minus);
	else if (number == 8) SendCommToServer(Commd::s8_Minus);
	else if (number == 9) SendCommToServer(Commd::s9_Minus);
	else if (number == 10) SendCommToServer(Commd::s10_Minus);
	else if (number == 11) SendCommToServer(Commd::s11_Minus);
	else if (number == 12) SendCommToServer(Commd::s12_Minus);
	else if (number == 14) SendCommToServer(Commd::s14_Minus);
	else if (number == 16) SendCommToServer(Commd::s16_Minus);
}



bool UKarabasPultWidget::Initialize()
{
	Super::Initialize();

	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	return true;
}

bool UKarabasPultWidget::krb_pult_SetStartOtmenaOneRouter()
{
	if (krb_pult_IsOtmenaRouterSet == false)
	{
		krb_pult_IsOtmenaRouterSet = true;
		return true;
	}
	krb_pult_IsOtmenaRouterSet = false;
	return false;
}

void UKarabasPultWidget::krb_pult_CheckerSetterDirectRouter()
{
	if (Disp->krb._1NP.dopstat == EdopStat::CH1
		|| Disp->krb._1NP.dopstat == EdopStat::CH2
		|| Disp->krb._1NP.dopstat == EdopStat::CH3
		|| Disp->krb._1NP.dopstat == EdopStat::CH4
		|| Disp->krb._1NP.dopstat == EdopStat::CH5

		|| Disp->krb._w1.dopstat == EdopStat::CH
		|| Disp->krb._w2.dopstat == EdopStat::CH
		|| Disp->krb._w3.dopstat == EdopStat::CH
		|| Disp->krb._w4.dopstat == EdopStat::CH
		|| Disp->krb._w5.dopstat == EdopStat::CH

		|| Disp->krb._w1.dopstat == EdopStat::CHD
		|| Disp->krb._w2.dopstat == EdopStat::CHD
		|| Disp->krb._w3.dopstat == EdopStat::CHD
		|| Disp->krb._w4.dopstat == EdopStat::CHD
		|| Disp->krb._w5.dopstat == EdopStat::CHD
		)
		krb_pult_IsChetTrainRouterSet = true;

	else krb_pult_IsChetTrainRouterSet = false;

	if (Disp->krb._1CHP.dopstat == EdopStat::N1
		|| Disp->krb._1CHP.dopstat == EdopStat::N2
		|| Disp->krb._1CHP.dopstat == EdopStat::N3
		|| Disp->krb._1CHP.dopstat == EdopStat::N4
		|| Disp->krb._1CHP.dopstat == EdopStat::N5

		|| Disp->krb._1UPCH.dopstat == EdopStat::N1
		|| Disp->krb._1UPCH.dopstat == EdopStat::N2
		|| Disp->krb._1UPCH.dopstat == EdopStat::N3
		|| Disp->krb._1UPCH.dopstat == EdopStat::N4
		|| Disp->krb._1UPCH.dopstat == EdopStat::N5

		|| Disp->krb._w1.dopstat == EdopStat::N
		|| Disp->krb._w2.dopstat == EdopStat::N
		|| Disp->krb._w3.dopstat == EdopStat::N
		|| Disp->krb._w4.dopstat == EdopStat::N
		|| Disp->krb._w5.dopstat == EdopStat::N
		)
		krb_pult_IsNeChetTrainRouterSet = true;

	else krb_pult_IsNeChetTrainRouterSet = false;

	if (Disp->krb._NP.dopstat == EdopStat::CH1 && Disp->krb._1NP.dopstat != EdopStat::CH1
		|| Disp->krb._NP.dopstat == EdopStat::CH2 && Disp->krb._1NP.dopstat != EdopStat::CH2
		|| Disp->krb._NP.dopstat == EdopStat::CH3 && Disp->krb._1NP.dopstat != EdopStat::CH3
		|| Disp->krb._NP.dopstat == EdopStat::CH4 && Disp->krb._1NP.dopstat != EdopStat::CH4
		|| Disp->krb._NP.dopstat == EdopStat::CH5 && Disp->krb._1NP.dopstat != EdopStat::CH5

		|| Disp->krb._NP.dopstat == EdopStat::M5


		|| Disp->krb._M3.dopstat == EdopStat::CH4
		|| Disp->krb._M3.dopstat == EdopStat::CH5

		|| Disp->krb._w1.dopstat == EdopStat::M2
		|| Disp->krb._w2.dopstat == EdopStat::M2
		|| Disp->krb._w3.dopstat == EdopStat::M2
		|| Disp->krb._w4.dopstat == EdopStat::M2
		|| Disp->krb._w5.dopstat == EdopStat::M2

		|| Disp->krb._w1.dopstat == EdopStat::M4
		|| Disp->krb._w2.dopstat == EdopStat::M4
		|| Disp->krb._w3.dopstat == EdopStat::M4
		|| Disp->krb._w4.dopstat == EdopStat::M4
		|| Disp->krb._w5.dopstat == EdopStat::M4

		|| Disp->krb._w1.dopstat == EdopStat::M6
		|| Disp->krb._w2.dopstat == EdopStat::M6
		)
		krb_pult_IsChetManRouterSet = true;

	else krb_pult_IsChetManRouterSet = false;

	if (Disp->krb._CHP.dopstat == EdopStat::N1 && Disp->krb._1CHP.dopstat != EdopStat::N1
		|| Disp->krb._CHP.dopstat == EdopStat::N2 && Disp->krb._1CHP.dopstat != EdopStat::N2
		|| Disp->krb._CHP.dopstat == EdopStat::N3 && Disp->krb._1CHP.dopstat != EdopStat::N3
		|| Disp->krb._CHP.dopstat == EdopStat::N4 && Disp->krb._1CHP.dopstat != EdopStat::N4
		|| Disp->krb._CHP.dopstat == EdopStat::N5 && Disp->krb._1CHP.dopstat != EdopStat::N5

		|| Disp->krb._CHAP.dopstat == EdopStat::N1 && Disp->krb._1UPCH.dopstat != EdopStat::N1
		|| Disp->krb._CHAP.dopstat == EdopStat::N2 && Disp->krb._1UPCH.dopstat != EdopStat::N2
		|| Disp->krb._CHAP.dopstat == EdopStat::N3 && Disp->krb._1UPCH.dopstat != EdopStat::N3
		|| Disp->krb._CHAP.dopstat == EdopStat::N4 && Disp->krb._1UPCH.dopstat != EdopStat::N4
		|| Disp->krb._CHAP.dopstat == EdopStat::N5 && Disp->krb._1UPCH.dopstat != EdopStat::N5


		|| Disp->krb._w1.dopstat == EdopStat::M1
		|| Disp->krb._w2.dopstat == EdopStat::M1
		|| Disp->krb._w3.dopstat == EdopStat::M1
		|| Disp->krb._w4.dopstat == EdopStat::M1
		|| Disp->krb._w5.dopstat == EdopStat::M1

		|| Disp->krb._w4.dopstat == EdopStat::M3
		|| Disp->krb._w5.dopstat == EdopStat::M3
		)
		krb_pult_IsNeChetManRouterSet = true;

	else krb_pult_IsNeChetManRouterSet = false;
}

void UKarabasPultWidget::DopCheckerForPult()
{
	if (krb_pult_IsChetManRouterSet != krb_pult_IsChetManRouterSetDop)
	{
		if (krb_pult_IsChetManRouterSet) Disp->krb_pult_arrComm.push_back("b25on");
		else Disp->krb_pult_arrComm.push_back("b25off");
		krb_pult_IsChetManRouterSetDop = krb_pult_IsChetManRouterSet;
	}
	if (krb_pult_IsNeChetManRouterSet != krb_pult_IsNeChetManRouterSetDop)
	{
		if (krb_pult_IsNeChetManRouterSet) Disp->krb_pult_arrComm.push_back("a47on");
		else Disp->krb_pult_arrComm.push_back("a47off");
		krb_pult_IsNeChetManRouterSetDop = krb_pult_IsNeChetManRouterSet;
	}
	if (krb_pult_IsChetTrainRouterSet != krb_pult_IsChetTrainRouterSetDop)
	{
		if (krb_pult_IsChetTrainRouterSet) Disp->krb_pult_arrComm.push_back("b24on");
		else Disp->krb_pult_arrComm.push_back("b24off");
		krb_pult_IsChetTrainRouterSetDop = krb_pult_IsChetTrainRouterSet;
	}
	if (krb_pult_IsNeChetTrainRouterSet != krb_pult_IsNeChetTrainRouterSetDop)
	{
		if (krb_pult_IsNeChetTrainRouterSet) Disp->krb_pult_arrComm.push_back("a44on");
		else Disp->krb_pult_arrComm.push_back("a44off");
		krb_pult_IsNeChetTrainRouterSetDop = krb_pult_IsNeChetTrainRouterSet;
	}
}

bool UKarabasPultWidget::krb_pult_ManevrRouterSet()
{
	if (krb_pult_IsManevrRouterSet == false)
	{
		krb_pult_IsManevrRouterSet = true;
		krb_pult_IsTrainRouterSet = false;
		return true;
	}
	krb_pult_IsManevrRouterSet = false;
	return false;
}

bool UKarabasPultWidget::krb_pult_TrainRouterSet()
{
	if (krb_pult_IsTrainRouterSet == false)
	{
		krb_pult_IsTrainRouterSet = true;
		krb_pult_IsManevrRouterSet = false;
		return true;
	}
	krb_pult_IsTrainRouterSet = false;
	return false;
}

void UKarabasPultWidget::krb_Pult_RazvorotPeregona_N()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::N);
}
void UKarabasPultWidget::krb_Pult_RazvorotPeregona_CH()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::CH);
}
void UKarabasPultWidget::krb_Pult_VspomogatRazvorotPeregona_N()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::N);
}
void UKarabasPultWidget::krb_Pult_VspomogatRazvorotPeregona_CH()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::CH);
}
void UKarabasPultWidget::krb_Pult_VspomogatRazvorotPeregona_CHD()
{
	Disp->SendCommForGreenKeyMain(Station::Karabas, EdopStat::CHD);
}
void UKarabasPultWidget::krb_Pult_RazvorotPeregona_CHD()
{
	Disp->SendCommForGreenKey(Station::Karabas, EdopStat::CHD);
}

bool UKarabasPultWidget::krb_Pult_IsAnyRouterDestrouing()
{
	for (size_t i = 0; i < Disp->krb_arrWay.size(); i++)
	{
		if (Disp->krb_arrWay[i]->stat == EAStat::ToFree)
		{
			return true;
		}
			
	}
	return false;
}



bool UKarabasPultWidget::krb_Pult_IsThereVzrez()
{
	
	return Disp->krb.Vzrez;
}

bool UKarabasPultWidget::krb_Pult_IsChetRouterSetting()
{
	if (
		   Disp->krb._M5_s11.dopstat == EdopStat::M5 && Disp->krb._M5_s11.stat == EAStat::ToRouted		
		|| Disp->krb._CH1_s11.dopstat == EdopStat::CH1 &&  Disp->krb._CH1_s11.stat == EAStat::ToRouted
		|| Disp->krb._CH2_s9.dopstat == EdopStat::CH2 && Disp->krb._CH2_s9.stat == EAStat::ToRouted
		|| Disp->krb._CH3_s3.dopstat == EdopStat::CH3 && Disp->krb._CH3_s3.stat == EAStat::ToRouted
		|| Disp->krb._CH4_s7.dopstat == EdopStat::CH4 && Disp->krb._CH4_s7.stat == EAStat::ToRouted
		|| Disp->krb._CH5_s7.dopstat == EdopStat::CH5 && Disp->krb._CH5_s7.stat == EAStat::ToRouted
		|| Disp->krb._M2_s2.dopstat == EdopStat::M2 && Disp->krb._M2_s2.stat == EAStat::ToRouted
		|| Disp->krb._M2_s2.dopstat == EdopStat::CH && Disp->krb._M2_s2.stat == EAStat::ToRouted
		|| Disp->krb._M4_s4.dopstat == EdopStat::M4 && Disp->krb._M4_s4.stat == EAStat::ToRouted
		|| Disp->krb._M4_s4.dopstat == EdopStat::CHD && Disp->krb._M4_s4.stat == EAStat::ToRouted
		|| Disp->krb._M6_s12.dopstat == EdopStat::M6 && Disp->krb._M6_s12.stat == EAStat::ToRouted

		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M2.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M4.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M5.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M6.oper == EOper::Redact)
		
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._CH1.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._CH2.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._CH3.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._CH4.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._CH5.oper == EOper::Redact)
		||  krb_pult_IsTrainRouterSet && Disp->krb._CH.oper == EOper::Redact
		|| krb_pult_IsTrainRouterSet && Disp->krb._CHD.oper == EOper::Redact

		) 
		
		return true;
	return false;
}

bool UKarabasPultWidget::krb_Pult_IsNeChetRouterSetting()
{
	if (
		Disp->krb._M1_s1.dopstat == EdopStat::M1 && Disp->krb._M1_s1.stat == EAStat::ToRouted
		|| Disp->krb._M1_s1.dopstat == EdopStat::N && Disp->krb._M1_s1.stat == EAStat::ToRouted
		|| Disp->krb._M3_s5.dopstat == EdopStat::M3 && Disp->krb._M3_s5.stat == EAStat::ToRouted
		|| Disp->krb._N1_s14.dopstat == EdopStat::N1 &&  Disp->krb._N1_s14.stat == EAStat::ToRouted
		|| Disp->krb._N2_s14.dopstat == EdopStat::N2 &&  Disp->krb._N2_s14.stat == EAStat::ToRouted
		|| Disp->krb._N3_s8.dopstat == EdopStat::N3 &&  Disp->krb._N3_s8.stat == EAStat::ToRouted
		|| Disp->krb._N4_s16.dopstat == EdopStat::N4 &&  Disp->krb._N4_s16.stat == EAStat::ToRouted
		|| Disp->krb._N5_s16.dopstat == EdopStat::N5 &&  Disp->krb._N5_s16.stat == EAStat::ToRouted
		
		|| Disp->krb._M1_s1.dopstat == EdopStat::CH && Disp->krb._M1_s1.stat == EAStat::ToRouted
		|| Disp->krb._M3_s5.dopstat == EdopStat::M3 && Disp->krb._M3_s5.stat == EAStat::ToRouted


		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M1.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._M3.oper == EOper::Redact)


		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._N1.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._N2.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._N3.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._N4.oper == EOper::Redact)
		|| ((krb_pult_IsManevrRouterSet || krb_pult_IsTrainRouterSet) && Disp->krb._N5.oper == EOper::Redact)
		|| krb_pult_IsTrainRouterSet && Disp->krb._N.oper == EOper::Redact
		
		)

		return true;
	return false;
}

bool UKarabasPultWidget::krb_Pult_IsChetRouterSetted()
{
	if (
		Disp->krb._M2.stat == EAStat::White
		|| Disp->krb._M4.stat == EAStat::White
		|| Disp->krb._M5.stat == EAStat::White
		|| Disp->krb._M6.stat == EAStat::White
		|| Disp->krb._CH.stat == EAStat::Green
		|| Disp->krb._CHD.stat == EAStat::Green
		|| Disp->krb._CH1.stat == EAStat::Green
		|| Disp->krb._CH2.stat == EAStat::Green
		|| Disp->krb._CH3.stat == EAStat::Green
		|| Disp->krb._CH4.stat == EAStat::Green
		|| Disp->krb._CH5.stat == EAStat::Green
		|| Disp->krb._CH1.stat == EAStat::White
		|| Disp->krb._CH2.stat == EAStat::White
		|| Disp->krb._CH3.stat == EAStat::White
		|| Disp->krb._CH4.stat == EAStat::White
		|| Disp->krb._CH5.stat == EAStat::White
		)
		return true;
	return false;
}

bool UKarabasPultWidget::krb_Pult_IsNeChetRouterSetted()
{
	if (Disp->krb._M1.stat == EAStat::White 
		|| Disp->krb._M3.stat == EAStat::White
		|| Disp->krb._N.stat == EAStat::Green
		|| Disp->krb._N1.stat == EAStat::Green
		|| Disp->krb._N2.stat == EAStat::Green
		|| Disp->krb._N3.stat == EAStat::Green
		|| Disp->krb._N4.stat == EAStat::Green
		|| Disp->krb._N5.stat == EAStat::Green
		|| Disp->krb._N1.stat == EAStat::White
		|| Disp->krb._N2.stat == EAStat::White
		|| Disp->krb._N3.stat == EAStat::White
		|| Disp->krb._N4.stat == EAStat::White
		|| Disp->krb._N5.stat == EAStat::White

		) return true;
	return false;
}

bool UKarabasPultWidget::krb_Pult_Make_Svetofor_Redact(EdopStat dopstat)
{
	//если начальный светофор  выбран , то отменяем выбор при совпадении допстат
	if (RedactSvetoforStart == dopstat)
	{
		krb_Pult_Make_All_Svetofor_UnRedact();
	/*	if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);

		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);


		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);


		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);


		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);*/
		return false;
	}
	//если при невыбранном светофоре ожидается статус отмены, то запускаем отмену маршрута
	else if (krb_pult_IsOtmenaRouterSet == true)
	{
		Commd com = Disp->GetCommFromDopStat(dopstat);

		if (com != Commd::NotDef)
		{
			SendCommToServer(com);
		}
		krb_pult_IsOtmenaRouterSet = false;
		krb_Pult_Make_All_Svetofor_UnRedact();
		return true;
	}
	//если не выбран ни старт ни финиш - выбираем светофор старт
	else if (RedactSvetoforStart == EdopStat::Norm && RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforStart = dopstat;
		if (dopstat == EdopStat::N) SendCommToServer(Commd::N_vibor);

		else if (dopstat == EdopStat::CH) SendCommToServer(Commd::CH_vibor);
		else if (dopstat == EdopStat::CHD) SendCommToServer(Commd::CHD_vibor);


		else if (dopstat == EdopStat::N1) SendCommToServer(Commd::N1_vibor);
		else if (dopstat == EdopStat::N2) SendCommToServer(Commd::N2_vibor);
		else if (dopstat == EdopStat::N3) SendCommToServer(Commd::N3_vibor);
		else if (dopstat == EdopStat::N4) SendCommToServer(Commd::N4_vibor);
		else if (dopstat == EdopStat::N5) SendCommToServer(Commd::N5_vibor);


		else if (dopstat == EdopStat::CH1) SendCommToServer(Commd::CH1_vibor);
		else if (dopstat == EdopStat::CH2) SendCommToServer(Commd::CH2_vibor);
		else if (dopstat == EdopStat::CH3) SendCommToServer(Commd::CH3_vibor);
		else if (dopstat == EdopStat::CH4) SendCommToServer(Commd::CH4_vibor);
		else if (dopstat == EdopStat::CH5) SendCommToServer(Commd::CH5_vibor);


		else if (dopstat == EdopStat::M1) SendCommToServer(Commd::M1_vibor);
		else if (dopstat == EdopStat::M2) SendCommToServer(Commd::M2_vibor);
		else if (dopstat == EdopStat::M3) SendCommToServer(Commd::M3_vibor);
		else if (dopstat == EdopStat::M4) SendCommToServer(Commd::M4_vibor);
		else if (dopstat == EdopStat::M5) SendCommToServer(Commd::M5_vibor);
		else if (dopstat == EdopStat::M6) SendCommToServer(Commd::M6_vibor);



		return true;
	}
	//если не выбран только финиш то - создаем маршрут
	else if (RedactSvetoforEnd == EdopStat::Norm)
	{
		RedactSvetoforEnd = dopstat;



		if (krb_pult_IsManevrRouterSet)
		{
			krb_Pult_ManevroviyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		}
		else if (krb_pult_IsTrainRouterSet)
		{
			krb_Pult_PoezdnoyRouterCreate(RedactSvetoforStart, RedactSvetoforEnd);
		}
		krb_pult_IsManevrRouterSet = false;
		krb_pult_IsTrainRouterSet = false;
		krb_Pult_Make_All_Svetofor_UnRedact();
		return true;
	}


	return false;
}

void UKarabasPultWidget::krb_Pult_Make_All_Svetofor_UnRedact()
{
	RedactSvetoforStart = EdopStat::Norm;
	RedactSvetoforEnd = EdopStat::Norm;
	SendCommToServer(Commd::GeneralOtmenaNabor);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "All Select Events is Destroyed!!!", true, FVector2D(1.1f, 1.1f));
}

bool UKarabasPultWidget::krb_Pult_Prigl_NNDCHCHDCHR(EdopStat dopstat)
{
	if (dopstat == EdopStat::N)
	{
		if (Disp->krb._N.stat != EAStat::White)
		{
			SendCommToServer(Commd::N_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._N.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::N_ToGreen);
				return false;
			}
			else
			{
				SendCommToServer(Commd::N_ToRed);
				return false;
			}
		}
	}
	if (dopstat == EdopStat::CH)
	{
		if (Disp->krb._CH.stat != EAStat::White)
		{
			SendCommToServer(Commd::CH_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._CH.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::CH_ToGreen2);
				return false;
			}
			else
			{
				SendCommToServer(Commd::CH_ToRed);
				return false;
			}
		}
	}
	if (dopstat == EdopStat::CHD)
	{
		if (Disp->krb._CHD.stat != EAStat::White)
		{
			SendCommToServer(Commd::CHD_ToWhite);
			return true;
		}
		else
		{
			if (Disp->krb._CHD.dopstat != EdopStat::Norm)
			{
				SendCommToServer(Commd::CHD_ToGreen);
				return false;
			}
			else
			{
				SendCommToServer(Commd::CHD_ToRed);
				return false;
			}
		}
	}

	return false;
}
void UKarabasPultWidget::krb_Pult_OtmenaAllRouters()
{
	Commd com = Commd::NotDef;
	for (size_t i = 0; i < Disp->krb_arrSvetofor.size(); i++)
	{
		if (Disp->krb_arrSvetofor[i]->stat == EAStat::Green || Disp->krb_arrSvetofor[i]->stat == EAStat::White)
		{
			com = Disp->GetCommFromDopStat(Disp->krb_arrSvetofor[i]->dopstat);
			if (com != Commd::NotDef)
			{
				SendCommToServer(com);
			}
			Sleep(10);
		}
	}

}
void UKarabasPultWidget::krb_Pult_ManevroviyRouterCreate(EdopStat Rstart, EdopStat Rend)
{
	if (Rstart != EdopStat::Norm && Rend != EdopStat::Norm)
	{
		if (Rstart == EdopStat::M1)
		{

			if (Rend == EdopStat::CH1)
			{
				if (krb_M1_CH1_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH1_Create);
				}
			}

			if (Rend == EdopStat::CH2)
			{
				if (krb_M1_CH2_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH2_Create);
				}
			}

			if (Rend == EdopStat::CH3)
			{
				if (krb_M1_CH3_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH3_Create);
				}
			}

			if (Rend == EdopStat::CH4)
			{
				if (krb_M1_CH4_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH4_Create);
				}
			}

			if (Rend == EdopStat::CH5)
			{
				if (krb_M1_CH5_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_CH5_Create);
				}
			}

			if (Rend == EdopStat::M5)
			{
				if (krb_M1_M5_CheckPossCreate())
				{
					SendCommToServer(Commd::M1_M5_Create);
				}
			}

		}
		if (Rstart == EdopStat::M2)
		{

			if (Rend == EdopStat::N1)
			{
				if (krb_M2_N1_CheckPossCreate())  SendCommToServer(Commd::M2_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M2_N2_CheckPossCreate())  SendCommToServer(Commd::M2_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krb_M2_N3_CheckPossCreate())  SendCommToServer(Commd::M2_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krb_M2_N4_CheckPossCreate())  SendCommToServer(Commd::M2_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krb_M2_N5_CheckPossCreate())  SendCommToServer(Commd::M2_N5_Create);
			}

		}
		if (Rstart == EdopStat::M3)
		{


			if (Rend == EdopStat::CH4)
			{
				if (krb_M3_CH4_CheckPossCreate())  SendCommToServer(Commd::M3_CH4_Create);
			}

			if (Rend == EdopStat::CH5)
			{
				if (krb_M3_CH5_CheckPossCreate())  SendCommToServer(Commd::M3_CH5_Create);
			}


		}
		if (Rstart == EdopStat::M4)
		{
			if (Rend == EdopStat::N1)
			{
				if (krb_M4_N1_CheckPossCreate())  SendCommToServer(Commd::M4_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M4_N2_CheckPossCreate())  SendCommToServer(Commd::M4_N2_Create);
			}

			if (Rend == EdopStat::N3)
			{
				if (krb_M4_N3_CheckPossCreate())  SendCommToServer(Commd::M4_N3_Create);
			}

			if (Rend == EdopStat::N4)
			{
				if (krb_M4_N4_CheckPossCreate())  SendCommToServer(Commd::M4_N4_Create);
			}

			if (Rend == EdopStat::N5)
			{
				if (krb_M4_N5_CheckPossCreate())  SendCommToServer(Commd::M4_N5_Create);
			}



		}
		if (Rstart == EdopStat::M5)
		{
			if (Rend == EdopStat::M1)
			{
				if (krb_M5_M1_CheckPossCreate())  SendCommToServer(Commd::M5_M1_Create);
			}

		}
		if (Rstart == EdopStat::M6)
		{
			if (Rend == EdopStat::N1)
			{
				if (krb_M6_N1_CheckPossCreate())  SendCommToServer(Commd::M6_N1_Create);
			}

			if (Rend == EdopStat::N2)
			{
				if (krb_M6_N2_CheckPossCreate())  SendCommToServer(Commd::M6_N2_Create);
			}


		}

		if (Rend == EdopStat::M1)
		{
			if (Rstart == EdopStat::CH1)
			{
				if (krb_CH1_M1_CheckPossCreate())  SendCommToServer(Commd::CH1_M1_Create);
			}
			if (Rstart == EdopStat::CH2)
			{
				if (krb_CH2_M1_CheckPossCreate())  SendCommToServer(Commd::CH2_M1_Create);
			}
			if (Rstart == EdopStat::CH3)
			{
				if (krb_CH3_M1_CheckPossCreate())  SendCommToServer(Commd::CH3_M1_Create);
			}
			if (Rstart == EdopStat::CH4)
			{
				if (krb_CH4_M1_CheckPossCreate())  SendCommToServer(Commd::CH4_M1_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krb_CH5_M1_CheckPossCreate())  SendCommToServer(Commd::CH5_M1_Create);
			}

		}
		if (Rend == EdopStat::M2)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M2_CheckPossCreate())  SendCommToServer(Commd::N1_M2_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M2_CheckPossCreate())  SendCommToServer(Commd::N2_M2_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krb_N3_M2_CheckPossCreate())  SendCommToServer(Commd::N3_M2_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krb_N4_M2_CheckPossCreate())  SendCommToServer(Commd::N4_M2_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krb_N5_M2_CheckPossCreate())  SendCommToServer(Commd::N5_M2_Create);
			}

		}
		if (Rend == EdopStat::M3)
		{

			if (Rstart == EdopStat::CH4)
			{
				if (krb_CH4_M3_CheckPossCreate())  SendCommToServer(Commd::CH4_M3_Create);
			}
			if (Rstart == EdopStat::CH5)
			{
				if (krb_CH5_M3_CheckPossCreate())  SendCommToServer(Commd::CH5_M3_Create);
			}


		}
		if (Rend == EdopStat::M4)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M4_CheckPossCreate())  SendCommToServer(Commd::N1_M4_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M4_CheckPossCreate())  SendCommToServer(Commd::N2_M4_Create);
			}
			if (Rstart == EdopStat::N3)
			{
				if (krb_N3_M4_CheckPossCreate())  SendCommToServer(Commd::N3_M4_Create);
			}
			if (Rstart == EdopStat::N4)
			{
				if (krb_N4_M4_CheckPossCreate())  SendCommToServer(Commd::N4_M4_Create);
			}
			if (Rstart == EdopStat::N5)
			{
				if (krb_N5_M4_CheckPossCreate())  SendCommToServer(Commd::N5_M4_Create);
			}


		}
		if (Rend == EdopStat::M6)
		{

			if (Rstart == EdopStat::N1)
			{
				if (krb_N1_M6_CheckPossCreate())  SendCommToServer(Commd::N1_M6_Create);
			}
			if (Rstart == EdopStat::N2)
			{
				if (krb_N2_M6_CheckPossCreate())  SendCommToServer(Commd::N2_M6_Create);
			}


		}

	}
	krb_Pult_Make_All_Svetofor_UnRedact();
}
void UKarabasPultWidget::krb_Pult_PoezdnoyRouterCreate(EdopStat Rstart, EdopStat Rend)
{

	if (Rstart == EdopStat::N)
	{

		if (Rend == EdopStat::CH1)
		{
			if (krb_N_1P_CheckPossCreate()) SendCommToServer(Commd::N_1P_Create);

		}

		if (Rend == EdopStat::CH2)
		{
			if (krb_N_2P_CheckPossCreate()) SendCommToServer(Commd::N_2P_Create);
		}

		if (Rend == EdopStat::CH3)
		{
			if (krb_N_3P_CheckPossCreate()) SendCommToServer(Commd::N_3P_Create);
		}

		if (Rend == EdopStat::CH4)
		{
			if (krb_N_4P_CheckPossCreate()) SendCommToServer(Commd::N_4P_Create);
		}

		if (Rend == EdopStat::CH5)
		{
			if (krb_N_5P_CheckPossCreate()) SendCommToServer(Commd::N_5P_Create);
		}


	}
	if (Rstart == EdopStat::CH)
	{

		if (Rend == EdopStat::N1)
		{
			if (krb_CH_1P_CheckPossCreate()) SendCommToServer(Commd::CH_1P_Create);
		}

		if (Rend == EdopStat::N2)
		{
			if (krb_CH_2P_CheckPossCreate()) SendCommToServer(Commd::CH_2P_Create);
		}

		if (Rend == EdopStat::N3)
		{
			if (krb_CH_3P_CheckPossCreate()) SendCommToServer(Commd::CH_3P_Create);
		}

		if (Rend == EdopStat::N4)
		{
			if (krb_CH_4P_CheckPossCreate()) SendCommToServer(Commd::CH_4P_Create);
		}

		if (Rend == EdopStat::N5)
		{
			if (krb_CH_5P_CheckPossCreate()) SendCommToServer(Commd::CH_5P_Create);
		}


	}
	if (Rstart == EdopStat::CHD)
	{

		if (Rend == EdopStat::N1)
		{
			if (krb_CHD_1P_CheckPossCreate()) SendCommToServer(Commd::CHD_1P_Create);
		}

		if (Rend == EdopStat::N2)
		{
			if (krb_CHD_2P_CheckPossCreate()) SendCommToServer(Commd::CHD_2P_Create);
		}

		if (Rend == EdopStat::N3)
		{
			if (krb_CHD_3P_CheckPossCreate()) SendCommToServer(Commd::CHD_3P_Create);
		}

		if (Rend == EdopStat::N4)
		{
			if (krb_CHD_4P_CheckPossCreate()) SendCommToServer(Commd::CHD_4P_Create);
		}

		if (Rend == EdopStat::N5)
		{
			if (krb_CHD_5P_CheckPossCreate()) SendCommToServer(Commd::CHD_5P_Create);
		}

	}

	if (Rend == EdopStat::N)
	{
		if (Rstart == EdopStat::CH1)
		{
			if (krb_CH1_N_CheckPossCreate()) SendCommToServer(Commd::CH1_N_Create);
		}
		if (Rstart == EdopStat::CH2)
		{
			if (krb_CH2_N_CheckPossCreate()) SendCommToServer(Commd::CH2_N_Create);
		}
		if (Rstart == EdopStat::CH3)
		{
			if (krb_CH3_N_CheckPossCreate()) SendCommToServer(Commd::CH3_N_Create);
		}
		if (Rstart == EdopStat::CH4)
		{
			if (krb_CH4_N_CheckPossCreate()) SendCommToServer(Commd::CH4_N_Create);
		}
		if (Rstart == EdopStat::CH5)
		{
			if (krb_CH5_N_CheckPossCreate()) SendCommToServer(Commd::CH5_N_Create);
		}

	}
	if (Rend == EdopStat::CH)
	{
		if (Rstart == EdopStat::N1)
		{
			if (krb_N1_CH_CheckPossCreate()) SendCommToServer(Commd::N1_CH_Create);
		}
		if (Rstart == EdopStat::N2)
		{
			if (krb_N2_CH_CheckPossCreate()) SendCommToServer(Commd::N2_CH_Create);
		}
		if (Rstart == EdopStat::N3)
		{
			if (krb_N3_CH_CheckPossCreate()) SendCommToServer(Commd::N3_CH_Create);
		}
		if (Rstart == EdopStat::N4)
		{
			if (krb_N4_CH_CheckPossCreate()) SendCommToServer(Commd::N4_CH_Create);
		}
		if (Rstart == EdopStat::N5)
		{
			if (krb_N5_CH_CheckPossCreate()) SendCommToServer(Commd::N5_CH_Create);
		}

	}
	if (Rend == EdopStat::CHD)
	{
		if (Rstart == EdopStat::N1)
		{
			if (krb_N1_CHD_CheckPossCreate()) SendCommToServer(Commd::N1_CHD_Create);
		}
		if (Rstart == EdopStat::N2)
		{
			if (krb_N2_CHD_CheckPossCreate()) SendCommToServer(Commd::N2_CHD_Create);
		}
		if (Rstart == EdopStat::N3)
		{
			if (krb_N3_CHD_CheckPossCreate()) SendCommToServer(Commd::N3_CHD_Create);
		}
		if (Rstart == EdopStat::N4)
		{
			if (krb_N4_CHD_CheckPossCreate()) SendCommToServer(Commd::N4_CHD_Create);
		}
		if (Rstart == EdopStat::N5)
		{
			if (krb_N5_CHD_CheckPossCreate()) SendCommToServer(Commd::N5_CHD_Create);
		}

	}

	krb_Pult_Make_All_Svetofor_UnRedact();

}
void UKarabasPultWidget::krb_Pult_OtmenaNabora()
{
	krb_Pult_Make_All_Svetofor_UnRedact();
}
void UKarabasPultWidget::krb_Pult_Iskusstvennaya_razdelka()
{
	Disp->ZaprosIscusstRazdelka(Station::Karabas);
}



void UKarabasPultWidget::krb_Pult_Reload()
{
	std::thread t1(&UKarabasPultWidget::krb_Pult_Reload_InThread, this);
	t1.detach();
}
void UKarabasPultWidget::krb_Pult_Reload_InThread()
{
	Disp->krb_Pult_FirstInitArrPelm();
}
void UKarabasPultWidget::krb_Pult_Off()
{
	std::thread t1(&UKarabasPultWidget::krb_Pult_Off_InThread, this);
	t1.detach();
}
void UKarabasPultWidget::krb_Pult_Off_InThread()
{

	Disp->krb_pult_arrComm.clear();

	Disp->krb_pult_arrComm.push_back("a53off\n");
	Disp->krb_pult_arrComm.push_back("a52off\n");
	Disp->krb_pult_arrComm.push_back("a51off\n");
	Disp->krb_pult_arrComm.push_back("a50off\n");
	Disp->krb_pult_arrComm.push_back("a49off\n");
	Disp->krb_pult_arrComm.push_back("a48off\n");
	Disp->krb_pult_arrComm.push_back("a47off\n");
	Disp->krb_pult_arrComm.push_back("a46off\n");
	Disp->krb_pult_arrComm.push_back("a45off\n");
	Disp->krb_pult_arrComm.push_back("a44off\n");
	Disp->krb_pult_arrComm.push_back("a43off\n");
	Disp->krb_pult_arrComm.push_back("a42off\n");
	Disp->krb_pult_arrComm.push_back("a41off\n");
	Disp->krb_pult_arrComm.push_back("a40off\n");
	Disp->krb_pult_arrComm.push_back("a39off\n");
	Disp->krb_pult_arrComm.push_back("a38off\n");
	Disp->krb_pult_arrComm.push_back("a37off\n");
	Disp->krb_pult_arrComm.push_back("a36off\n");
	Disp->krb_pult_arrComm.push_back("a35off\n");
	Disp->krb_pult_arrComm.push_back("a34off\n");
	Disp->krb_pult_arrComm.push_back("a33off\n");
	Disp->krb_pult_arrComm.push_back("a32off\n");
	Disp->krb_pult_arrComm.push_back("a31off\n");
	Disp->krb_pult_arrComm.push_back("a30off\n");
	Disp->krb_pult_arrComm.push_back("a29off\n");
	Disp->krb_pult_arrComm.push_back("a28off\n");
	Disp->krb_pult_arrComm.push_back("a27off\n");
	Disp->krb_pult_arrComm.push_back("a26off\n");
	Disp->krb_pult_arrComm.push_back("a25off\n");
	Disp->krb_pult_arrComm.push_back("a24off\n");
	Disp->krb_pult_arrComm.push_back("a23off\n");
	Disp->krb_pult_arrComm.push_back("a22off\n");
	Disp->krb_pult_arrComm.push_back("a13off\n");
	Disp->krb_pult_arrComm.push_back("a12off\n");
	Disp->krb_pult_arrComm.push_back("a11off\n");
	Disp->krb_pult_arrComm.push_back("a10off\n");
	Disp->krb_pult_arrComm.push_back("a9off\n");
	Disp->krb_pult_arrComm.push_back("a8off\n");
	Disp->krb_pult_arrComm.push_back("a7off\n");
	Disp->krb_pult_arrComm.push_back("a6off\n");
	Disp->krb_pult_arrComm.push_back("a5off\n");
	Disp->krb_pult_arrComm.push_back("a4off\n");
	Disp->krb_pult_arrComm.push_back("a3off\n");
	Disp->krb_pult_arrComm.push_back("a2off\n");
	Disp->krb_pult_arrComm.push_back("an0off\n");
	Disp->krb_pult_arrComm.push_back("an1off\n");
	Disp->krb_pult_arrComm.push_back("an2off\n");
	Disp->krb_pult_arrComm.push_back("an3off\n");
	Disp->krb_pult_arrComm.push_back("an4off\n");
	Disp->krb_pult_arrComm.push_back("an5off\n");
	Disp->krb_pult_arrComm.push_back("an6off\n");
	Disp->krb_pult_arrComm.push_back("an7off\n");
	Disp->krb_pult_arrComm.push_back("an8off\n");
	Disp->krb_pult_arrComm.push_back("an9off\n");
	Disp->krb_pult_arrComm.push_back("an10off\n");
	Disp->krb_pult_arrComm.push_back("an11off\n");
	Disp->krb_pult_arrComm.push_back("an12off\n");
	Disp->krb_pult_arrComm.push_back("an13off\n");
	Disp->krb_pult_arrComm.push_back("an14off\n");
	Disp->krb_pult_arrComm.push_back("an15off\n");

	Disp->krb_pult_arrComm.push_back("b53off\n");
	Disp->krb_pult_arrComm.push_back("b52off\n");
	Disp->krb_pult_arrComm.push_back("b51off\n");
	Disp->krb_pult_arrComm.push_back("b50off\n");
	Disp->krb_pult_arrComm.push_back("b49off\n");
	Disp->krb_pult_arrComm.push_back("b48off\n");
	Disp->krb_pult_arrComm.push_back("b47off\n");
	Disp->krb_pult_arrComm.push_back("b46off\n");
	Disp->krb_pult_arrComm.push_back("b45off\n");
	Disp->krb_pult_arrComm.push_back("b44off\n");
	Disp->krb_pult_arrComm.push_back("b43off\n");
	Disp->krb_pult_arrComm.push_back("b42off\n");
	Disp->krb_pult_arrComm.push_back("b41off\n");
	Disp->krb_pult_arrComm.push_back("b40off\n");
	Disp->krb_pult_arrComm.push_back("b39off\n");
	Disp->krb_pult_arrComm.push_back("b38off\n");
	Disp->krb_pult_arrComm.push_back("b37off\n");
	Disp->krb_pult_arrComm.push_back("b36off\n");
	Disp->krb_pult_arrComm.push_back("b35off\n");
	Disp->krb_pult_arrComm.push_back("b34off\n");
	Disp->krb_pult_arrComm.push_back("b33off\n");
	Disp->krb_pult_arrComm.push_back("b32off\n");
	Disp->krb_pult_arrComm.push_back("b31off\n");
	Disp->krb_pult_arrComm.push_back("b30off\n");
	Disp->krb_pult_arrComm.push_back("b29off\n");
	Disp->krb_pult_arrComm.push_back("b28off\n");
	Disp->krb_pult_arrComm.push_back("b27off\n");
	Disp->krb_pult_arrComm.push_back("b26off\n");
	Disp->krb_pult_arrComm.push_back("b25off\n");
	Disp->krb_pult_arrComm.push_back("b24off\n");
	Disp->krb_pult_arrComm.push_back("b23off\n");
	Disp->krb_pult_arrComm.push_back("b22off\n");
	Disp->krb_pult_arrComm.push_back("b13off\n");
	Disp->krb_pult_arrComm.push_back("b12off\n");
	Disp->krb_pult_arrComm.push_back("b11off\n");
	Disp->krb_pult_arrComm.push_back("b10off\n");
	Disp->krb_pult_arrComm.push_back("b9off\n");
	Disp->krb_pult_arrComm.push_back("b8off\n");
	Disp->krb_pult_arrComm.push_back("b7off\n");
	Disp->krb_pult_arrComm.push_back("b6off\n");
	Disp->krb_pult_arrComm.push_back("b5off\n");
	Disp->krb_pult_arrComm.push_back("b4off\n");
	Disp->krb_pult_arrComm.push_back("b3off\n");
	Disp->krb_pult_arrComm.push_back("b2off\n");
	Disp->krb_pult_arrComm.push_back("bn0off\n");
	Disp->krb_pult_arrComm.push_back("bn1off\n");
	Disp->krb_pult_arrComm.push_back("bn2off\n");
	Disp->krb_pult_arrComm.push_back("bn3off\n");
	Disp->krb_pult_arrComm.push_back("bn4off\n");
	Disp->krb_pult_arrComm.push_back("bn5off\n");
	Disp->krb_pult_arrComm.push_back("bn6off\n");
	Disp->krb_pult_arrComm.push_back("bn7off\n");
	Disp->krb_pult_arrComm.push_back("bn8off\n");
	Disp->krb_pult_arrComm.push_back("bn9off\n");
	Disp->krb_pult_arrComm.push_back("bn10off\n");
	Disp->krb_pult_arrComm.push_back("bn11off\n");
	Disp->krb_pult_arrComm.push_back("bn12off\n");
	Disp->krb_pult_arrComm.push_back("bn13off\n");
	Disp->krb_pult_arrComm.push_back("bn14off\n");
	Disp->krb_pult_arrComm.push_back("bn15off\n");

}

//void UKarabasPultWidget::krb_Pult_CheckerChanger()
//{
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmStr.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmStr[i].elm->stat != Disp->krb_pult_arrStrDub[i].stat || Disp->krb_pult_arrPelmStr[i].elm->oper != Disp->krb_pult_arrStrDub[i].oper)
//		{
//			Disp->krb_pult_arrStrDub[i].stat = Disp->krb_pult_arrPelmStr[i].elm->stat;
//			Disp->krb_pult_arrStrDub[i].oper = Disp->krb_pult_arrPelmStr[i].elm->oper;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmStr[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmSvetofor.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmSvetofor[i].elm->stat != Disp->krb_pult_arrSvetoforDub[i].stat || Disp->krb_pult_arrPelmSvetofor[i].elm->oper != Disp->krb_pult_arrSvetoforDub[i].oper)
//		{
//			Disp->krb_pult_arrSvetoforDub[i].stat = Disp->krb_pult_arrPelmSvetofor[i].elm->stat;
//			Disp->krb_pult_arrSvetoforDub[i].oper = Disp->krb_pult_arrPelmSvetofor[i].elm->oper;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmSvetofor[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmWay.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmWay[i].elm->stat != Disp->krb_pult_arrWayDub[i].stat)
//		{
//			Disp->krb_pult_arrWayDub[i].stat = Disp->krb_pult_arrPelmWay[i].elm->stat;
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmWay[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrPelmSignals.size(); i++)
//	{
//		if (Disp->krb_pult_arrPelmSignals[i].elm->stat != Disp->krb_pult_arrEFlmSignalsDub[i].stat
//			|| Disp->krb_pult_arrPelmSignals[i].elm->dopstat != Disp->krb_pult_arrEFlmSignalsDub[i].dopstat
//			|| Disp->krb_pult_arrPelmSignals[i].elm->oper != Disp->krb_pult_arrEFlmSignalsDub[i].oper
//			|| Disp->krb_pult_arrPelmSignals[i].elm->cur != Disp->krb_pult_arrEFlmSignalsDub[i].cur)
//		{
//			Disp->krb_pult_arrEFlmSignalsDub[i].stat = Disp->krb_pult_arrPelmSignals[i].elm->stat;
//			Disp->krb_pult_arrEFlmSignalsDub[i].dopstat = Disp->krb_pult_arrPelmSignals[i].elm->dopstat;
//			Disp->krb_pult_arrEFlmSignalsDub[i].oper = Disp->krb_pult_arrPelmSignals[i].elm->oper;
//			Disp->krb_pult_arrEFlmSignalsDub[i].cur = Disp->krb_pult_arrPelmSignals[i].elm->cur;
//
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrPelmSignals[i]);
//		}
//	}
//	for (size_t i = 0; i < Disp->krb_pult_arrBoolSignals.size(); i++)
//	{
//		if (*(Disp->krb_pult_arrBoolSignals[i].boo) != Disp->krb_pult_arrBoolSignalsDub[i])
//		{
//			Disp->krb_pult_arrBoolSignalsDub[i] = *(Disp->krb_pult_arrBoolSignals[i].boo);
//
//			krb_Pult_SenderTo_LoaderTo(Disp->krb_pult_arrBoolSignals[i]);
//		}
//	}
//
//}
//FString UKarabasPultWidget::krb_Pult_LoaderTo()
//{
//	krb_pult_CheckerSetterDirectRouter();
//	DopCheckerForPult();
//	krb_Pult_CheckerChanger();
//	FString str = "";
//	if (Disp->krb_pult_arrComm.size() != 0)
//	{
//		iRet = WriteFile(hSerial, Disp->krb_pult_arrComm[0].c_str(), Disp->krb_pult_arrComm[0].size(), &dwBytesWritten, NULL);
//		str = Disp->krb_pult_arrComm[0].c_str();
//
//		//Beep(800, 20);
//		Disp->krb_pult_arrComm.erase(Disp->krb_pult_arrComm.begin());
//	}
//	if (!str.IsEmpty())
//	{
//		if (true/*str[str.Len() - 2] != 'f'*/)
//		{
//			UE_LOG(qwon, Display, TEXT("           %s"), *str);
//			/*std::thread t(&UKarabasPultWidget::MyBeepDef, this, 880, 50);
//			t.detach();*/
//			return str;
//		}
//		UE_LOG(qwoff, Display, TEXT("              %s"), *str);
//	}
//
//	return L"";
//}
//void UKarabasPultWidget::krb_Pult_FirstInitArrPelm()
//{
//	//"портим" дуб. массивы для сравнения,чтобы CheckerChanger сгенерировал актуальные команды для загрузки пульта
//
//	for (size_t i = 0; i < Disp->krb_pult_arrStrDub.size(); i++)
//	{
//		Disp->krb_pult_arrStrDub[i].stat = EAStat::Grey;
//		Disp->krb_pult_arrStrDub[i].oper = EOper::ToRouted;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrSvetoforDub.size(); i++)
//	{
//		Disp->krb_pult_arrSvetoforDub[i].stat = EAStat::Free;
//		Disp->krb_pult_arrSvetoforDub[i].oper = EOper::Busy;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrWayDub.size(); i++)
//	{
//		Disp->krb_pult_arrWayDub[i].stat = EAStat::Grey;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrEFlmSignalsDub.size(); i++)
//	{
//		Disp->krb_pult_arrEFlmSignalsDub[i].stat = EAStat::Grey;
//		Disp->krb_pult_arrEFlmSignalsDub[i].dopstat = EdopStat::Norm;
//		Disp->krb_pult_arrEFlmSignalsDub[i].oper = EOper::Routed;
//		Disp->krb_pult_arrEFlmSignalsDub[i].cur = ExCurator::ToDefault;
//	}
//
//	for (size_t i = 0; i < Disp->krb_pult_arrBoolSignalsDub.size(); i++)
//	{
//		Disp->krb_pult_arrBoolSignalsDub[i] = !Disp->krb_pult_arrBoolSignals[i].boo;
//	}
//}
//void UKarabasPultWidget::krb_Pult_SenderTo_LoaderTo(Pelm elm)
//{
//#pragma region Strelki
//
//	if (!strcmp(elm.name.c_str(), "str1"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an4on\n");
//			Disp->krb_pult_arrComm.push_back("an5off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an5on\n");
//			Disp->krb_pult_arrComm.push_back("an4off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an5off\n");
//			Disp->krb_pult_arrComm.push_back("an4off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str2"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str4.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25on\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str4.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41on\n");	
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str3"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an2on\n");
//			Disp->krb_pult_arrComm.push_back("an3off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an3on\n");
//			Disp->krb_pult_arrComm.push_back("an2off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an3off\n");
//			Disp->krb_pult_arrComm.push_back("an2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str4"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str2.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25on\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str2.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a25off\n");
//			Disp->krb_pult_arrComm.push_back("a41off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str5"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("an0on\n");
//			Disp->krb_pult_arrComm.push_back("an1off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("an1on\n");
//			Disp->krb_pult_arrComm.push_back("an0off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("an1off\n");
//			Disp->krb_pult_arrComm.push_back("an0off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str6"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a24on\n");
//			Disp->krb_pult_arrComm.push_back("a38off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a38on\n");
//			Disp->krb_pult_arrComm.push_back("a24off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a38off\n");
//			Disp->krb_pult_arrComm.push_back("a24off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str7"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a3on\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a2on\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//			Disp->krb_pult_arrComm.push_back("a2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str8"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str10.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a23on\n");
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str10.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a39on\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str9"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a5on\n");
//			Disp->krb_pult_arrComm.push_back("a4off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a4on\n");
//			Disp->krb_pult_arrComm.push_back("a5off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a4off\n");
//			Disp->krb_pult_arrComm.push_back("a5off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str10"))
//	{
//		if (elm.elm->stat == EAStat::Plus && Disp->krb._str8.stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a23on\n");
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus && Disp->krb._str8.stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a39on\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a39off\n");
//			Disp->krb_pult_arrComm.push_back("a23off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str11"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("a7on\n");
//			Disp->krb_pult_arrComm.push_back("a6off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a6on\n");
//			Disp->krb_pult_arrComm.push_back("a7off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a6off\n");
//			Disp->krb_pult_arrComm.push_back("a7off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str12"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b52on\n");
//			Disp->krb_pult_arrComm.push_back("a36off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a36on\n");
//			Disp->krb_pult_arrComm.push_back("b52off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a36off\n");
//			Disp->krb_pult_arrComm.push_back("b52off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str14"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b53on\n");
//			Disp->krb_pult_arrComm.push_back("a35off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a35on\n");
//			Disp->krb_pult_arrComm.push_back("b53off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a35off\n");
//			Disp->krb_pult_arrComm.push_back("b53off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "str16"))
//	{
//		if (elm.elm->stat == EAStat::Plus)
//		{
//			Disp->krb_pult_arrComm.push_back("b49on\n");
//			Disp->krb_pult_arrComm.push_back("a37off\n");
//		}
//		else if (elm.elm->stat == EAStat::Minus)
//		{
//			Disp->krb_pult_arrComm.push_back("a37on\n");
//			Disp->krb_pult_arrComm.push_back("b49off\n");
//		}
//		else 
//		{
//			Disp->krb_pult_arrComm.push_back("a37off\n");
//			Disp->krb_pult_arrComm.push_back("b49off\n");
//		}
//	}
//
//
//
//#pragma endregion
//#pragma region Svetofors
//
//	if (!strcmp(elm.name.c_str(), "N"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b9on\n");
//			Disp->krb_pult_arrComm.push_back("b8off\n");
//			Disp->krb_pult_arrComm.push_back("b10off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b8on\n");
//			Disp->krb_pult_arrComm.push_back("b9off\n");
//			Disp->krb_pult_arrComm.push_back("b10off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b10on\n");
//			Disp->krb_pult_arrComm.push_back("b8off\n");
//			Disp->krb_pult_arrComm.push_back("b9off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "CH"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("a29on\n");
//			Disp->krb_pult_arrComm.push_back("a27off\n");
//			Disp->krb_pult_arrComm.push_back("a26off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a26on\n");
//			Disp->krb_pult_arrComm.push_back("a27off\n");
//			Disp->krb_pult_arrComm.push_back("a29off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a27on\n");
//			Disp->krb_pult_arrComm.push_back("a26off\n");
//			Disp->krb_pult_arrComm.push_back("a29off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "CHD"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("a34on\n");
//			Disp->krb_pult_arrComm.push_back("a32off\n");
//			Disp->krb_pult_arrComm.push_back("a30off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a32on\n");
//			Disp->krb_pult_arrComm.push_back("a34off\n");
//			Disp->krb_pult_arrComm.push_back("a30off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a30on\n");
//			Disp->krb_pult_arrComm.push_back("a32off\n");
//			Disp->krb_pult_arrComm.push_back("a34off\n");
//		}
//	}
//
//
//	if (!strcmp(elm.name.c_str(), "CH1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an10off\n");
//			Disp->krb_pult_arrComm.push_back("an11off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an11on\n");
//			Disp->krb_pult_arrComm.push_back("an10off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an10on\n");
//			Disp->krb_pult_arrComm.push_back("an11off\n");
//		}
//	
//	}
//	if (!strcmp(elm.name.c_str(), "CH2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an8off\n");
//			Disp->krb_pult_arrComm.push_back("an9off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an8on\n");
//			Disp->krb_pult_arrComm.push_back("an9off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an9on\n");
//			Disp->krb_pult_arrComm.push_back("an8off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an13off\n");
//			Disp->krb_pult_arrComm.push_back("an12off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("an13on\n");
//			Disp->krb_pult_arrComm.push_back("an12off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an12on\n");
//			Disp->krb_pult_arrComm.push_back("an13off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a8off\n");
//			Disp->krb_pult_arrComm.push_back("a9off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a9on\n");
//			Disp->krb_pult_arrComm.push_back("a8off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a8on\n");
//			Disp->krb_pult_arrComm.push_back("a9off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "CH5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a53off\n");
//			Disp->krb_pult_arrComm.push_back("a52off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("a53on\n");
//			Disp->krb_pult_arrComm.push_back("a52off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a53off\n");
//			Disp->krb_pult_arrComm.push_back("a52on\n");
//		}
//
//	}
//
//	if (!strcmp(elm.name.c_str(), "N1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b36off\n");
//			Disp->krb_pult_arrComm.push_back("b34off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b36on\n");
//			Disp->krb_pult_arrComm.push_back("b34off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b34on\n");
//			Disp->krb_pult_arrComm.push_back("b36off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b37off\n");
//			Disp->krb_pult_arrComm.push_back("b38off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b37on\n");
//			Disp->krb_pult_arrComm.push_back("b38off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b38on\n");
//			Disp->krb_pult_arrComm.push_back("b37off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b43off\n");
//			Disp->krb_pult_arrComm.push_back("b40off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b40on\n");
//			Disp->krb_pult_arrComm.push_back("b43off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b43on\n");
//			Disp->krb_pult_arrComm.push_back("b40off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b35off\n");
//			Disp->krb_pult_arrComm.push_back("b29off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b29on\n");
//			Disp->krb_pult_arrComm.push_back("b35off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b35on\n");
//			Disp->krb_pult_arrComm.push_back("b29off\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "N5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("b33off\n");
//			Disp->krb_pult_arrComm.push_back("b30off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b33on\n");
//			Disp->krb_pult_arrComm.push_back("b30off\n");
//
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("b30on\n");
//			Disp->krb_pult_arrComm.push_back("b33off\n");
//		}
//
//	}
//
//	//
//	if (!strcmp(elm.name.c_str(), "M1"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a13off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a13on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M2"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a43off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a43on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M3"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("an15off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("an15on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M4"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a40off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a40on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M5"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a10off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a10on\n");
//		}
//
//	}
//	if (!strcmp(elm.name.c_str(), "M6"))
//	{
//		if (elm.elm->stat == EAStat::Grey)
//		{
//			Disp->krb_pult_arrComm.push_back("a48off\n");
//		}
//		if (elm.elm->stat == EAStat::White)
//		{
//			Disp->krb_pult_arrComm.push_back("a48on\n");
//		}
//
//	}
//
//
//
//#pragma endregion
//#pragma region Ways
//	if (!strcmp(elm.name.c_str(), "_1NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b2on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b2off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b3on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b3off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_NP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b11on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b11off\n");
//		}
//	}
//
//
//	if (!strcmp(elm.name.c_str(), "_CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b46on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2CHP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b45on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b45off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "_CHAP"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a33on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a33off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_1UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b48on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b48off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_2UPCH"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b47on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b47off\n");
//		}
//	}
//
//	//
//	if (!strcmp(elm.name.c_str(), "_s12_s14"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a49on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a49off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s10_s16"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a46on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a46off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2_s10"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a45on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a45off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s4_s6"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a42on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a42off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s2"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s9"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a11on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a11off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s1_s3"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("a12on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a12off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_s5_s7"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("an14on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("an14off\n");
//		}
//	}
//
//	if (!strcmp(elm.name.c_str(), "_w1"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b31on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b31off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w2"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b32on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b32off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w3"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b26on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b26off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w4"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b28on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b28off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "_w5"))
//	{
//		if (elm.elm->stat == EAStat::Busy)
//		{
//			Disp->krb_pult_arrComm.push_back("b22on\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("b22off\n");
//		}
//	}
//
//	//if (!strcmp(elm.name.c_str(), "_M3_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	//if (!strcmp(elm.name.c_str(), "_M5_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	//if (!strcmp(elm.name.c_str(), "_M6_tupic"))
//	//{
//	//	if (elm.elm->stat == EAStat::Busy)
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("on\n");
//	//	}
//	//	else
//	//	{
//	//		Disp->krb_pult_arrComm.push_back("off\n");
//	//	}
//	//}
//	
//	
//
//#pragma endregion
//#pragma region Signals
//	if (!strcmp(elm.name.c_str(), "Fider1"))
//	{
//		if (elm.elm->cur == ExCurator::Norm)
//		{
//			Disp->krb_pult_arrComm.push_back("a50off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a50on\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "Fider2"))
//	{
//		if (elm.elm->cur == ExCurator::Norm)
//		{
//			Disp->krb_pult_arrComm.push_back("a51off\n");
//		}
//		else
//		{
//			Disp->krb_pult_arrComm.push_back("a51on\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_CHD"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b50on\n");
//			//Disp->krb_pult_arrComm.push_back("off\n");
//		}
//		if(elm.elm->stat == EAStat::Green)
//		{
//			Disp->krb_pult_arrComm.push_back("b50off\n");
//			//Disp->krb_pult_arrComm.push_back("b50off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("a33on\n");
//			Disp->krb_pult_arrComm.push_back("b51off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("b51on\n");
//			Disp->krb_pult_arrComm.push_back("a33off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_CH"))
//	{
//		if (elm.elm->stat == EAStat::Red)
//		{
//			Disp->krb_pult_arrComm.push_back("b44on\n");
//			//Disp->krb_pult_arrComm.push_back("off\n");
//		}
//		if (elm.elm->stat == EAStat::Green)
//		{
//			//Disp->krb_pult_arrComm.push_back("on\n");
//			Disp->krb_pult_arrComm.push_back("b44off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("a22on\n");
//			Disp->krb_pult_arrComm.push_back("b42off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("b42on\n");
//			Disp->krb_pult_arrComm.push_back("a22off\n");
//		}
//	}
//	if (!strcmp(elm.name.c_str(), "GreenKey_N"))
//	{
//		if (elm.elm->stat == EAStat::Red )
//		{
//			Disp->krb_pult_arrComm.push_back("an6on\n");
//
//		}
//		if (elm.elm->stat == EAStat::Green )
//		{
//		
//			Disp->krb_pult_arrComm.push_back("an6off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Left)
//		{
//			Disp->krb_pult_arrComm.push_back("b4on\n");
//			Disp->krb_pult_arrComm.push_back("an7off\n");
//		}
//		if (elm.elm->dopstat == EdopStat::Right)
//		{
//			Disp->krb_pult_arrComm.push_back("an7on\n");
//			Disp->krb_pult_arrComm.push_back("b4off\n");
//		}
//	}
//	
//#pragma endregion
//
//}
//void UKarabasPultWidget::krb_Pult_SenderTo_LoaderTo(Pbool boo)
//{
//	if (!strcmp(boo.name.c_str(), "IR"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b41on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b41off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "Vzrez"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b39on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b39off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "RouterOtmena"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b27on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b27off\n");
//		}
//	}
//	if (!strcmp(boo.name.c_str(), "DGA"))
//	{
//		if (*(boo.boo) == true)
//		{
//			Disp->krb_pult_arrComm.push_back("b23on\n");
//		}
//		if (*(boo.boo) == false)
//		{
//			Disp->krb_pult_arrComm.push_back("b23off\n");
//		}
//	}
//}

void UKarabasPultWidget::krb_Pult_AvariynoeOtkritiePereezda()
{
	Disp->krb_pult_arrComm.push_back("b7on\n");
	Disp->krb_pult_arrComm.push_back("b5off\n");
}
void UKarabasPultWidget::krb_Pult_ZakritiePereezda()
{
	Disp->krb_pult_arrComm.push_back("b7off\n");
	Disp->krb_pult_arrComm.push_back("b5on\n");
}
void UKarabasPultWidget::krb_Pult_DGA()
{
	if (Disp->krb.DGA == false)
	{
		SendCommToServer(Commd::DGA_true);
	}
	else
	{
		SendCommToServer(Commd::DGA_false);
	}
}

#pragma endregion

#pragma region Routers: Impl: CheckPossCreate
#pragma region from N

bool UKarabasPultWidget::krb_N_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_1P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_2P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_3P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_4P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH

bool UKarabasPultWidget::krb_CH_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_1P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_2P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_3P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_4P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CHD

bool UKarabasPultWidget::krb_CHD_1P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_1P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CHD_2P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_2P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CHD_3P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_3P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CHD_4P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_4P.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CHD_5P_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CHD_5P.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M1

bool UKarabasPultWidget::krb_M1_CH1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M1_CH2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M1_CH3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M1_CH4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;;
}
bool UKarabasPultWidget::krb_M1_CH5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M1_CH5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M1_M5_CheckPossCreate()
{
	if (Disp->krb._M5_tupic.stat == EAStat::Free)
	{
		if (Disp->krb_M1_M5.IsFree()) return  true;
	}
	else if (Disp->krb._M5_tupic.stat == EAStat::Busy)
	{
		if (Disp->krb_M1_M5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M2

bool UKarabasPultWidget::krb_M2_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M2_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M2_N3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M2_N4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M2_N5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M2_N5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M2_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M3

bool UKarabasPultWidget::krb_M3_CH4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M3_CH4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M3_CH4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M3_CH5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M3_CH5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M3_CH5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from M4

bool UKarabasPultWidget::krb_M4_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M4_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M4_N3_CheckPossCreate()
{
	if (Disp->krb._w3.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N3.IsFree()) return  true;
	}
	else if (Disp->krb._w3.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N3.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M4_N4_CheckPossCreate()
{
	if (Disp->krb._w4.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N4.IsFree()) return  true;
	}
	else if (Disp->krb._w4.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N4.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M4_N5_CheckPossCreate()
{
	if (Disp->krb._w5.stat == EAStat::Free)
	{
		if (Disp->krb_M4_N5.IsFree()) return  true;
	}
	else if (Disp->krb._w5.stat == EAStat::Busy)
	{
		if (Disp->krb_M4_N5.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}


#pragma endregion
#pragma region from M5

bool UKarabasPultWidget::krb_M5_M1_CheckPossCreate()
{
	if (!Disp->krb_M5_M1.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from M6

bool UKarabasPultWidget::krb_M6_N1_CheckPossCreate()
{
	if (Disp->krb._w1.stat == EAStat::Free)
	{
		if (Disp->krb_M6_N1.IsFree()) return  true;
	}
	else if (Disp->krb._w1.stat == EAStat::Busy)
	{
		if (Disp->krb_M6_N1.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}
bool UKarabasPultWidget::krb_M6_N2_CheckPossCreate()
{
	if (Disp->krb._w2.stat == EAStat::Free)
	{
		if (Disp->krb_M6_N2.IsFree()) return  true;
	}
	else if (Disp->krb._w2.stat == EAStat::Busy)
	{
		if (Disp->krb_M6_N2.IsManevrFreeToBusyWay()) return  true;
	}
	return false;
}

#pragma endregion
#pragma region from CH1

bool UKarabasPultWidget::krb_CH1_M1_CheckPossCreate()
{
	if (!Disp->krb_CH1_M1.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH1_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH1_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH2

bool UKarabasPultWidget::krb_CH2_M1_CheckPossCreate()
{
	if (!Disp->krb_CH2_M1.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH2_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH2_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH3

bool UKarabasPultWidget::krb_CH3_M1_CheckPossCreate()
{
	if (!Disp->krb_CH3_M1.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH3_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH3_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH4

bool UKarabasPultWidget::krb_CH4_M1_CheckPossCreate()
{
	if (!Disp->krb_CH4_M1.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH4_M3_CheckPossCreate()
{
	if (!Disp->krb_CH4_M3.IsManevrFreeToBusyWay()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH4_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH4_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from CH5

bool UKarabasPultWidget::krb_CH5_M1_CheckPossCreate()
{
	if (!Disp->krb_CH5_M1.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH5_M3_CheckPossCreate()
{
	if (!Disp->krb_CH5_M3.IsManevrFreeToBusyWay()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_CH5_N_CheckPossCreate()
{
	if (Disp->krb.GreenKey_N.dopstat == EdopStat::Right) return false;
	if (!Disp->krb_CH5_N.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N1

bool UKarabasPultWidget::krb_N1_M2_CheckPossCreate()
{
	if (!Disp->krb_N1_M2.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N1_M4_CheckPossCreate()
{
	if (!Disp->krb_N1_M4.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N1_M6_CheckPossCreate()
{
	if (!Disp->krb_N1_M6.IsManevrFreeToBusyWay()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N1_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N1_CH.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N1_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N1_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N2

bool UKarabasPultWidget::krb_N2_M2_CheckPossCreate()
{
	if (!Disp->krb_N2_M2.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N2_M4_CheckPossCreate()
{
	if (!Disp->krb_N2_M4.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N2_M6_CheckPossCreate()
{
	if (!Disp->krb_N2_M6.IsManevrFreeToBusyWay()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N2_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N2_CH.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N2_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N2_CH.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N3

bool UKarabasPultWidget::krb_N3_M2_CheckPossCreate()
{
	if (!Disp->krb_N3_M2.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N3_M4_CheckPossCreate()
{
	if (!Disp->krb_N3_M4.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N3_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N3_CH.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N3_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N3_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N4

bool UKarabasPultWidget::krb_N4_M2_CheckPossCreate()
{
	if (!Disp->krb_N4_M2.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N4_M4_CheckPossCreate()
{
	if (!Disp->krb_N4_M4.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N4_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N4_CH.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N4_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N4_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region from N5

bool UKarabasPultWidget::krb_N5_M2_CheckPossCreate()
{
	if (!Disp->krb_N5_M2.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N5_M4_CheckPossCreate()
{
	if (!Disp->krb_N5_M4.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N5_CH_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CH.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N5_CH.IsFree()) return  false;
	return true;
}
bool UKarabasPultWidget::krb_N5_CHD_CheckPossCreate()
{
	if (Disp->krb.GreenKey_CHD.dopstat == EdopStat::Left) return false;
	if (!Disp->krb_N5_CHD.IsFree()) return  false;
	return true;
}

#pragma endregion
#pragma region OUT_

//bool UKarabasPultWidget::krb_N_RASPORIADIT_CheckPossCreate()
//{
//	if (!Disp->krb_N_RASPORIADIT.IsFree()) return  false;
//	return true;
//}
//bool UKarabasPultWidget::krb_CH_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->krb_CH_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UKarabasPultWidget::krb_CHD_KARAGANOZEK_CheckPossCreate()
//{
//	if (!Disp->krb_CHD_KARAGANOZEK.IsFree()) return  false;
//	return true;
//}
//bool UKarabasPultWidget::krb_RASPORIADIT_N_CheckPossCreate()
//{
//	if (!Disp->krb_RASPORIADIT_N.IsFree()) return  false;
//	return true;
//}
//bool UKarabasPultWidget::krb_KARAGANOZEK_CH_CheckPossCreate()
//{
//	if (!Disp->krb_KARAGANOZEK_CH.IsFree()) return  false;
//	return true;
//}
//bool UKarabasPultWidget::krb_KARAGANOZEK_CHD_CheckPossCreate()
//{
//	if (!Disp->krb_KARAGANOZEK_CHD.IsFree()) return  false;
//	return true;
//}

#pragma endregion


#pragma endregion