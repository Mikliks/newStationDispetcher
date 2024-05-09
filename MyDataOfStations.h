// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma comment(lib, "ws2_32.lib")
#pragma warning(disable: 4996)
#pragma warning(disable: 4005)
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include<fstream>

//#include <chrono>
//#include <ctime>

#include "Components/HorizontalBox.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
//#include "Components/EditableText.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/ComboBoxString.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/Text/STextBlock.h"
#include <vector>

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <thread>
#include <mutex>
#include <string>
#include<direct.h>
#include <shlobj.h>



//#include "../../Intermediate/ProjectFiles/NewRouter.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyDataOfStations.generated.h"


#pragma region SOCKETS ComPort
static LPCTSTR sPortName = L"";
static HANDLE hSerial = nullptr; //обработчик порта
static DWORD dwBytesWritten;
static BOOL iRet;
static int timeSleep = 30;//пауза между соседними командами при отправке их в порт для Ардуино
#pragma endregion

#define PauseCheckerChangerPult 30
#define CountOtcepInTrain 10
#define MaxCountVagonInOtcep 16
#define MaxCountVagonInTrain 50
#define PauseBetweenCommand 30


#pragma region Enum / Struct  Definitions

UENUM(BlueprintType)
enum class EDefectName : uint8
{
	Norm UMETA(DisplayName = "Norm"),
	Predohranitel UMETA(DisplayName = "Predohranitel"),
	ControlMiganiya UMETA(DisplayName = "ControlMiganiya"),
	Pereezd UMETA(DisplayName = "Pereezd"),
	Zemlya UMETA(DisplayName = "Zemlya"),
	Batareya UMETA(DisplayName = "Batareya"),
	Ventilyaciya UMETA(DisplayName = "Ventilyaciya"),
	Electrostanciya UMETA(DisplayName = "Electrostanciya"),
	Toplivo UMETA(DisplayName = "Toplivo"),
	MRC_MN UMETA(DisplayName = "MRC_MN"),
	Block_NN UMETA(DisplayName = "Block_NN"),
	NeispravnoctPereezdov UMETA(DisplayName = "NeispravnoctPereezdov"),
	UTS UMETA(DisplayName = "UTS"),
	OgragdenieSostavov UMETA(DisplayName = "OgragdenieSostavov"),
	NeispravnostiGorochnihUstroistv UMETA(DisplayName = "NeispravnostiGorochnihUstroistv"),
	VzrezStrelki UMETA(DisplayName = "VzrezStrelki"),
	Fider1 UMETA(DisplayName = "Fider1"),
	Fider2 UMETA(DisplayName = "Fider2"),
	LognayaZaniatost_way1 UMETA(DisplayName = "LognayaZaniatost_way1"),
	LognayaSvobodnost_way1 UMETA(DisplayName = "LognayaSvobodnost_way1")
};
UENUM(BlueprintType)
enum class Station : uint8
{
	Curator UMETA(DisplayName = "Curator"),
	Dispetcher_1 UMETA(DisplayName = "Dispetcher_1"),
	Dispetcher_2 UMETA(DisplayName = "Dispetcher_2"),
	Radiouzel UMETA(DisplayName = "Radiouzel"),
	Dubovskaya UMETA(DisplayName = "Dubovskaya"),
	Maykuduk UMETA(DisplayName = "Maykuduk"),
	GanaAul UMETA(DisplayName = "GanaAul"),
	Karaganozek UMETA(DisplayName = "Karaganozek"),
	Karabas UMETA(DisplayName = "Karabas"),
	KarabasPult UMETA(DisplayName = "KarabasPult"),
	Rasporiaditelnaya UMETA(DisplayName = "Rasporiaditelnaya"),
	GanaKaraganda UMETA(DisplayName = "GanaKaraganda"),
	Karaganda_1 UMETA(DisplayName = "Karaganda_1"),
	Karaganda_2 UMETA(DisplayName = "Karaganda_2"),
	Unknown UMETA(DisplayName = "Unknown"),
	Karaganda UMETA(DisplayName = "Karaganda"),
	DSPG UMETA(DisplayName = "DSPG"),
	Karaganda_DSP UMETA(DisplayName = "Karaganda_DSP"),
	Karaganda_DSC UMETA(DisplayName = "Karaganda_DSC"),
	OSG_3 UMETA(DisplayName = "OSG_3"),
	TrainReestr UMETA(DisplayName = "TrainReestr"),
	OperData UMETA(DisplayName = "OperData"),
	OSG_2 UMETA(DisplayName = "OSG_2"),
	OSG_1 UMETA(DisplayName = "OSG_1")
};
USTRUCT(BlueprintType)
struct FStationsOnline
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		bool Curator_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_1_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_2_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Radiouzel_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dubovskaya_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Maykuduk_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool GanaAul_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganozek_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karabas_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool KarabasPult_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Rasporiaditelnaya_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool GanaKaraganda_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_1_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_2_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Unknown_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool DSPG_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_DSP_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_DSC_onLine = false;
	UPROPERTY(BlueprintReadWrite)
		bool OSG_3_onLine = false;
};
UENUM(BlueprintType)
enum class EAStat : uint8
{
	Grey UMETA(DisplayName = "Grey"),
	Red UMETA(DisplayName = "Red"),
	Yellow UMETA(DisplayName = "Yellow"),
	Green UMETA(DisplayName = "Green"),
	Blue UMETA(DisplayName = "Blue"),
	White UMETA(DisplayName = "White"),
	Plus UMETA(DisplayName = "Plus"),
	Minus UMETA(DisplayName = "Minus"),
	Free UMETA(DisplayName = "Free"),
	Routed UMETA(DisplayName = "Routed"),
	ToFree UMETA(DisplayName = "ToFree"),
	ToRouted UMETA(DisplayName = "ToRouted"),
	Busy UMETA(DisplayName = "Busy"),
	ToManRouted UMETA(DisplayName = "ToManRouted"),
	ManRouted UMETA(DisplayName = "ManRouted"),
	Status_changes UMETA(DisplayName = "Status_changes"),
	Distans_direct UMETA(DisplayName = "Distans_direct"),
	Hand_direct UMETA(DisplayName = "Hand_direct"),
	NotDefined UMETA(DisplayName = "NotDefined")
};
UENUM(BlueprintType)
enum class EOper : uint8
{
	Norm UMETA(DisplayName = "Norm"),
	Redact UMETA(DisplayName = "Redact"),
	ToChange UMETA(DisplayName = "ToChange"),
	ToDefault UMETA(DisplayName = "ToDefault"),
	Redact_2 UMETA(DisplayName = "Redact_2"),
	WaitingStart UMETA(DisplayName = "WaitingStart"),
	ToRouted UMETA(DisplayName = "ToRouted"),
	Routed UMETA(DisplayName = "Routed"),
	ManRouted UMETA(DisplayName = "ManRouted"),
	ToFree UMETA(DisplayName = "ToFree"),
	Busy UMETA(DisplayName = "Busy"),
	NotDefined UMETA(DisplayName = "NotDefined")
};
UENUM(BlueprintType)
enum class EdopStat : uint8
{
	Norm UMETA(DisplayName = "Norm "),
	N UMETA(DisplayName = "N "),
	ND UMETA(DisplayName = "ND "),
	CH UMETA(DisplayName = "CH "),
	CHD UMETA(DisplayName = "CHD "),
	M1 UMETA(DisplayName = "M1 "),
	M2 UMETA(DisplayName = "M2 "),
	M3 UMETA(DisplayName = "M3 "),
	M4 UMETA(DisplayName = "M4 "),
	M5 UMETA(DisplayName = "M5 "),
	M6 UMETA(DisplayName = "M6 "),
	M7 UMETA(DisplayName = "M7 "),
	M8 UMETA(DisplayName = "M8 "),
	M9 UMETA(DisplayName = "M9 "),
	M10 UMETA(DisplayName = "M10 "),
	M11 UMETA(DisplayName = "M11 "),
	M12 UMETA(DisplayName = "M12 "),
	M13 UMETA(DisplayName = "M13 "),
	M14 UMETA(DisplayName = "M14 "),
	M15 UMETA(DisplayName = "M15 "),
	M16 UMETA(DisplayName = "M16 "),
	M17 UMETA(DisplayName = "M17 "),
	M18 UMETA(DisplayName = "M18 "),
	M19 UMETA(DisplayName = "M19 "),
	M20 UMETA(DisplayName = "M20 "),
	M21 UMETA(DisplayName = "M21 "),
	M22 UMETA(DisplayName = "M22 "),
	M23 UMETA(DisplayName = "M23 "),
	M24 UMETA(DisplayName = "M24 "),
	M25 UMETA(DisplayName = "M25 "),
	M26 UMETA(DisplayName = "M26 "),
	M27 UMETA(DisplayName = "M27 "),
	M28 UMETA(DisplayName = "M28 "),
	M29 UMETA(DisplayName = "M29 "),
	M30 UMETA(DisplayName = "M30 "),
	M31 UMETA(DisplayName = "M31 "),
	CH1 UMETA(DisplayName = "CH1 "),
	CH2 UMETA(DisplayName = "CH2 "),
	CH3 UMETA(DisplayName = "CH3 "),
	CH4 UMETA(DisplayName = "CH4 "),
	CH5 UMETA(DisplayName = "CH5 "),
	CH6 UMETA(DisplayName = "CH6 "),
	CH7 UMETA(DisplayName = "CH7 "),
	CH8 UMETA(DisplayName = "CH8 "),
	CH9 UMETA(DisplayName = "CH9 "),
	CH10 UMETA(DisplayName = "CH10 "),
	N1 UMETA(DisplayName = "N1 "),
	N2 UMETA(DisplayName = "N2 "),
	N3 UMETA(DisplayName = "N3 "),
	N4 UMETA(DisplayName = "N4 "),
	N5 UMETA(DisplayName = "N5 "),
	N6 UMETA(DisplayName = "N6 "),
	N7 UMETA(DisplayName = "N7 "),
	N8 UMETA(DisplayName = "N8 "),
	N9 UMETA(DisplayName = "N9 "),
	N10 UMETA(DisplayName = "N10 "),
	N1A UMETA(DisplayName = "N1A "),
	N2A UMETA(DisplayName = "N2A "),
	N3A UMETA(DisplayName = "N3A "),
	N4A UMETA(DisplayName = "N4A "),
	N5A UMETA(DisplayName = "N5A "),
	CHM1 UMETA(DisplayName = "CHM1 "),
	CHM2 UMETA(DisplayName = "CHM2 "),
	CHM3 UMETA(DisplayName = "CHM3 "),
	CHM4 UMETA(DisplayName = "CHM4 "),
	CHM5 UMETA(DisplayName = "CHM5 "),
	CHM6 UMETA(DisplayName = "CHM6 "),
	CHM7 UMETA(DisplayName = "CHM7 "),
	CHM8 UMETA(DisplayName = "CHM8 "),
	CHM9 UMETA(DisplayName = "CHM9 "),
	CHM10 UMETA(DisplayName = "CHM10 "),
	CHM1A UMETA(DisplayName = "CHM1A "),
	CHM2A UMETA(DisplayName = "CHM2A "),
	CHM3A UMETA(DisplayName = "CHM3A "),
	CHM4A UMETA(DisplayName = "CHM4A "),
	CHM5A UMETA(DisplayName = "CHM5A "),
	NM1B UMETA(DisplayName = "NM1B "),
	NM2B UMETA(DisplayName = "NM2B "),
	NM3B UMETA(DisplayName = "NM3B "),
	NM4B UMETA(DisplayName = "NM4B "),
	NM1 UMETA(DisplayName = "NM1 "),
	NM2 UMETA(DisplayName = "NM2 "),
	NM3 UMETA(DisplayName = "NM3 "),
	NM4 UMETA(DisplayName = "NM4 "),
	NM5 UMETA(DisplayName = "NM5 "),
	NM6 UMETA(DisplayName = "NM6 "),
	NM7 UMETA(DisplayName = "NM7 "),
	NM8 UMETA(DisplayName = "NM8 "),
	NM9 UMETA(DisplayName = "NM9 "),
	NM10 UMETA(DisplayName = "NM10 "),
	NM11 UMETA(DisplayName = "NM11 "),
	NM12 UMETA(DisplayName = "NM12 "),
	NM13 UMETA(DisplayName = "NM13 "),
	NM14 UMETA(DisplayName = "NM14 "),
	NM15 UMETA(DisplayName = "NM15 "),
	NM16 UMETA(DisplayName = "NM16 "),
	NM17 UMETA(DisplayName = "NM17 "),
	NM18 UMETA(DisplayName = "NM18 "),
	NM19 UMETA(DisplayName = "NM19 "),
	NM20 UMETA(DisplayName = "NM20 "),
	NM21 UMETA(DisplayName = "NM21 "),
	NM22 UMETA(DisplayName = "NM22 "),
	NM23 UMETA(DisplayName = "NM23 "),
	NM24 UMETA(DisplayName = "NM24 "),
	NM25 UMETA(DisplayName = "NM25 "),
	NM26 UMETA(DisplayName = "NM26 "),
	NM27 UMETA(DisplayName = "NM27 "),
	NM28 UMETA(DisplayName = "NM28 "),
	NM29 UMETA(DisplayName = "NM29 "),
	NM30 UMETA(DisplayName = "NM30 "),
	NM31 UMETA(DisplayName = "NM31 "),
	NM32 UMETA(DisplayName = "NM32 "),
	NM33 UMETA(DisplayName = "NM33 "),
	NM34 UMETA(DisplayName = "NM34 "),
	PG1 UMETA(DisplayName = "PG1 "),
	PG2 UMETA(DisplayName = "PG2 "),
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right"),
	CHR UMETA(DisplayName = "CHR"),
	MX4 UMETA(DisplayName = "MX4"),
	NotDefined UMETA(DisplayName = "NotDefined"),
	MG1 UMETA(DisplayName = "MG1 "),
	MG3 UMETA(DisplayName = "MG3 "),
	MG5 UMETA(DisplayName = "MG5 "),
	MG7 UMETA(DisplayName = "MG7 "),
	MG9 UMETA(DisplayName = "MG9 "),

	M33 UMETA(DisplayName = "M33 "),
	M35 UMETA(DisplayName = "M35 ")
};
UENUM(BlueprintType)
enum class ExCurator : uint8
{
	Norm UMETA(DisplayName = "Norm"),
	Redact UMETA(DisplayName = "Redact"),
	ToDefault UMETA(DisplayName = "ToDefault"),
	Broken UMETA(DisplayName = "Broken"),
	BrokenRed UMETA(DisplayName = "BrokenRed"),
	BrokenYellow UMETA(DisplayName = "BrokenYellow"),
	BrokenGreen UMETA(DisplayName = "BrokenGreen"),
	BrokenBlue UMETA(DisplayName = "BrokenBlue"),
	BrokenWhite UMETA(DisplayName = "BrokenWhite"),
	WaitingAvaria UMETA(DisplayName = "WaitingAvaria"),
	NotControl UMETA(DisplayName = "NotControl"),
	FalseBusy UMETA(DisplayName = "FalseBusy"),
	FalseFree UMETA(DisplayName = "FalseFree"),
	FalseZamikanie UMETA(DisplayName = "FalseZamikanie"),
	NotDefined UMETA(DisplayName = "NotDefined")
};
USTRUCT(BlueprintType)
struct FElm
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		EAStat stat;
	UPROPERTY(BlueprintReadWrite)
		EOper oper;
	UPROPERTY(BlueprintReadWrite)
		EdopStat dopstat;
	UPROPERTY(BlueprintReadWrite)
		ExCurator cur;
	UPROPERTY(BlueprintReadWrite)
		int num;
	UPROPERTY(BlueprintReadWrite)
		int dopn;
};

UENUM(BlueprintType)
enum class RoleSelect : uint8
{
	NoRole UMETA(DisplayName = "NoRole"),
	Role_Curator UMETA(DisplayName = "Role_Curator"),
	Role_Dispetcher_1 UMETA(DisplayName = "Role_Dispetcher_1"),
	Role_Dispetcher_2 UMETA(DisplayName = "Role_Dispetcher_2"),
	Role_Radiouzel UMETA(DisplayName = "Role_Radiouzel"),
	Role_Dubovskaya UMETA(DisplayName = "Role_Dubovskaya"),
	Role_Maykuduk UMETA(DisplayName = "Role_Maykuduk"),
	Role_GanaAul UMETA(DisplayName = "Role_GanaAul"),
	Role_Karaganozek UMETA(DisplayName = "Role_Karaganozek"),
	Role_Karabas UMETA(DisplayName = "Role_Karabas"),
	Role_Rasporiaditelnaya UMETA(DisplayName = "Role_Rasporiaditelnaya"),
	Role_GanaKaraganda UMETA(DisplayName = "Role_GanaKaraganda"),
	Role_Karaganda_1 UMETA(DisplayName = "Role_Karaganda_1"),
	Role_Karaganda_2 UMETA(DisplayName = "Role_Karaganda_2"),
	Role_Unknown UMETA(DisplayName = "Role_Unknown"),
	Role_Karaganda UMETA(DisplayName = "Role_Karaganda"),
	Role_DSPG UMETA(DisplayName = "Role_DSPG"),
	Role_OSG_1 UMETA(DisplayName = "Role_OSG-1"),
	Role_OSG_2 UMETA(DisplayName = "Role_OSG-2"),
	Role_OSG_3 UMETA(DisplayName = "Role_OSG-3")
};

struct Pelm
{
	std::string name;
	FElm* elm;
};

struct Pbool
{
	std::string name;
	bool* boo;
};

struct NameConnect
{
	SOCKET connection;
	Station station;
	bool status = false;
};

UENUM(BlueprintType)
enum class ETypeVagon : uint8
{
	notDefine UMETA(DisplayName = "notDefine"),
	Critiy UMETA(DisplayName = "Critiy"),
	Poluvagon UMETA(DisplayName = "Poluvagon"),
	Cisterna UMETA(DisplayName = "Cistrna"),
	Mukovoz UMETA(DisplayName = "Mukovoz"),
	Hopper UMETA(DisplayName = "Hopper"),
	Platforma UMETA(DisplayName = "Platforma"),
	Loco UMETA(DisplayName = "Loco")
};
UENUM(BlueprintType)
enum class ENumberTrain : uint8
{
	_3001 UMETA(DisplayName = "3001"),
	_3002 UMETA(DisplayName = "3002"),
	_3003 UMETA(DisplayName = "3003"),
	_3004 UMETA(DisplayName = "3004"),
	_3005 UMETA(DisplayName = "3005"),
	_3006 UMETA(DisplayName = "3006"),
	_3007 UMETA(DisplayName = "3007"),
	_3008 UMETA(DisplayName = "3008"),
	_3009 UMETA(DisplayName = "3009"),
	_3010 UMETA(DisplayName = "3010"),
	_3011 UMETA(DisplayName = "3011"),
	_3012 UMETA(DisplayName = "3012"),
	_3013 UMETA(DisplayName = "3013"),
	_3014 UMETA(DisplayName = "3014"),
	_3015 UMETA(DisplayName = "3015"),
	_3016 UMETA(DisplayName = "3016"),
	_3017 UMETA(DisplayName = "3017"),
	_3018 UMETA(DisplayName = "3018"),
	_3019 UMETA(DisplayName = "3019"),
	_3020 UMETA(DisplayName = "3020"),
	_3021 UMETA(DisplayName = "3021"),
	_3022 UMETA(DisplayName = "3022"),
	_3023 UMETA(DisplayName = "3023"),
	_3024 UMETA(DisplayName = "3024"),
	_3025 UMETA(DisplayName = "3025"),
	_3026 UMETA(DisplayName = "3026"),
	_3027 UMETA(DisplayName = "3027"),
	_3028 UMETA(DisplayName = "3028"),
	_3029 UMETA(DisplayName = "3029"),
	_3030 UMETA(DisplayName = "3030"),
	_3031 UMETA(DisplayName = "3031"),
	_3032 UMETA(DisplayName = "3032"),
	_3033 UMETA(DisplayName = "3033"),
	_3034 UMETA(DisplayName = "3034"),
	_3035 UMETA(DisplayName = "3035"),
	_3036 UMETA(DisplayName = "3036"),
	_3037 UMETA(DisplayName = "3037"),
	_3038 UMETA(DisplayName = "3038"),
	_3039 UMETA(DisplayName = "3039"),
	_3040 UMETA(DisplayName = "3040"),
	_3041 UMETA(DisplayName = "3041"),
	_3042 UMETA(DisplayName = "3042"),
	_3043 UMETA(DisplayName = "3043"),
	_3044 UMETA(DisplayName = "3044"),
	_3045 UMETA(DisplayName = "3045"),
	_3046 UMETA(DisplayName = "3046"),
	_3047 UMETA(DisplayName = "3047"),
	_3048 UMETA(DisplayName = "3048"),
	_3049 UMETA(DisplayName = "3049"),
	_3050 UMETA(DisplayName = "3050"),
	_3051 UMETA(DisplayName = "3051"),
	_3052 UMETA(DisplayName = "3052"),
	_3053 UMETA(DisplayName = "3053"),
	_3054 UMETA(DisplayName = "3054"),
	_3055 UMETA(DisplayName = "3055"),
	_3056 UMETA(DisplayName = "3056"),
	_3057 UMETA(DisplayName = "3057"),
	_3058 UMETA(DisplayName = "3058"),
	_3059 UMETA(DisplayName = "3059"),
	_3060 UMETA(DisplayName = "3060"),
	_3061 UMETA(DisplayName = "3061"),
	_3062 UMETA(DisplayName = "3062"),
	_3063 UMETA(DisplayName = "3063"),
	_3064 UMETA(DisplayName = "3064"),
	_3065 UMETA(DisplayName = "3065"),
	_3066 UMETA(DisplayName = "3066"),
	_3067 UMETA(DisplayName = "3067"),
	_3068 UMETA(DisplayName = "3068"),
	_3069 UMETA(DisplayName = "3069"),
	_3070 UMETA(DisplayName = "3070"),
	_3071 UMETA(DisplayName = "3071"),
	_3072 UMETA(DisplayName = "3072"),
	_3073 UMETA(DisplayName = "3073"),
	_3074 UMETA(DisplayName = "3074"),
	_3075 UMETA(DisplayName = "3075"),
	_3076 UMETA(DisplayName = "3076"),
	_3077 UMETA(DisplayName = "3077"),
	_3078 UMETA(DisplayName = "3078"),
	_3079 UMETA(DisplayName = "3079"),
	_3080 UMETA(DisplayName = "3080"),
	_3081 UMETA(DisplayName = "3081"),
	_3082 UMETA(DisplayName = "3082"),
	_3083 UMETA(DisplayName = "3083"),
	_3084 UMETA(DisplayName = "3084"),
	_3085 UMETA(DisplayName = "3085"),
	_3086 UMETA(DisplayName = "3086"),
	_3087 UMETA(DisplayName = "3087"),
	_3088 UMETA(DisplayName = "3088"),
	_3089 UMETA(DisplayName = "3089"),
	_3090 UMETA(DisplayName = "3090"),
	_3091 UMETA(DisplayName = "3091"),
	_3092 UMETA(DisplayName = "3092"),
	_3093 UMETA(DisplayName = "3093"),
	_3094 UMETA(DisplayName = "3094"),
	_3095 UMETA(DisplayName = "3095"),
	_3096 UMETA(DisplayName = "3096"),
	_3097 UMETA(DisplayName = "3097"),
	_3098 UMETA(DisplayName = "3098"),
	_3099 UMETA(DisplayName = "3099"),
	_3100 UMETA(DisplayName = "3100"),
};
UENUM(BlueprintType)
enum class ECountVagons : uint8
{
	_1 UMETA(DisplayName = "1"),
	_2 UMETA(DisplayName = "2"),
	_3 UMETA(DisplayName = "3"),
	_4 UMETA(DisplayName = "4"),
	_5 UMETA(DisplayName = "5"),
	_6 UMETA(DisplayName = "6"),
	_7 UMETA(DisplayName = "7"),
	_8 UMETA(DisplayName = "8"),
	_9 UMETA(DisplayName = "9"),
	_10 UMETA(DisplayName = "10"),
	_11 UMETA(DisplayName = "11"),
	_12 UMETA(DisplayName = "12"),
	_13 UMETA(DisplayName = "13"),
	_14 UMETA(DisplayName = "14"),
	_15 UMETA(DisplayName = "15"),
	_16 UMETA(DisplayName = "16"),
	_17 UMETA(DisplayName = "17"),
	_18 UMETA(DisplayName = "18"),
	_19 UMETA(DisplayName = "19"),
	_20 UMETA(DisplayName = "20"),

};
UENUM(BlueprintType)
enum class ENumberOtcep : uint8
{
	_0 UMETA(DisplayName = "0"),
	_1 UMETA(DisplayName = "1"),
	_2 UMETA(DisplayName = "2"),
	_3 UMETA(DisplayName = "3"),
	_4 UMETA(DisplayName = "4"),
	_5 UMETA(DisplayName = "5"),
	_6 UMETA(DisplayName = "6"),
	_7 UMETA(DisplayName = "7"),
	_8 UMETA(DisplayName = "8"),
	_9 UMETA(DisplayName = "9"),
	_10 UMETA(DisplayName = "10")

};
//UENUM(BlueprintType)
//enum class EEndWay : uint8
//{
//	M3_tupic UMETA(DisplayName = "тупик М3")
//};
UENUM(BlueprintType)
enum class Direction : uint8
{
	// -CH- четное
	EVEN UMETA(DisplayName = "Chet"),
	// -N- нечетное
	ODD UMETA(DisplayName = "Nechet")
};
UENUM(BlueprintType)
enum class CommdForServer : uint8
{
	rout UMETA(DisplayName = "rout"),
	buzy UMETA(DisplayName = "buzy"),
	free UMETA(DisplayName = "free"),
	select UMETA(DisplayName = "select"),
	grey UMETA(DisplayName = "grey"),
	white UMETA(DisplayName = "white")
	
};
enum class Commd : short
{
	GeneralOtmenaNabor,

#pragma region select
	N_vibor,
	ND_vibor,
	CH_vibor,
	CHD_vibor,
	CHR_vibor,
	M1_vibor,
	M2_vibor,
	M3_vibor,
	M4_vibor,
	M5_vibor,
	M6_vibor,
	M7_vibor,
	M8_vibor,
	M9_vibor,
	M10_vibor,
	M11_vibor,
	M12_vibor,
	M13_vibor,
	M14_vibor,
	M15_vibor,
	M16_vibor,
	M17_vibor,
	M18_vibor,
	M19_vibor,
	M20_vibor,

	N1_vibor,
	N2_vibor,
	N3_vibor,
	N4_vibor,
	N5_vibor,
	N6_vibor,
	N7_vibor,

	CH1_vibor,
	CH2_vibor,
	CH3_vibor,
	CH4_vibor,
	CH5_vibor,
	CH6_vibor,
	CH7_vibor,


	DGA_true,
	DGA_false,
	N_ToWhite,
	ND_ToWhite,
	CH_ToWhite,
	CHD_ToWhite,
	CHR_ToWhite,
	N_ToRed,
	ND_ToRed,
	CH_ToRed,
	CHD_ToRed,
	CHR_ToRed,
	N_ToGreen,
	ND_ToGreen,
	CH_ToGreen2,
	CHD_ToGreen,
	CHR_ToGreen2,
	NotDef,

#pragma endregion

#pragma region Dispetcher
	zaprosSetDispetcherDirect,
	zaprosSetOperatorDirect,
#pragma endregion

#pragma region SendData
	sendDataKarabas,
	sendDataKaraganozek,
	sendDataKaraganda,
	sendDataMaykuduk,
	sendDataGanaKaraganda,
	sendDataKaraganda_1,
	sendDataKaraganda_2,
	sendDataRasporiaditelnaya,
	sendDataDubovskaya,
	sendDataGanaAul,
	sendDataRadiousel,
	sendDataCurator,
	sendDataTrainReestr,
#pragma endregion

#pragma region Contur Key
	Set_NKG,
	Set_CHKG,
	UnSet_NKG,
	UnSet_CHKG,
#pragma endregion

#pragma region GreenKey
	GreenKeyCH,
	GreenKeyCHD,
	GreenKeyCHR,
	GreenKeyN,
	GreenKeyND,
	GreenKeyCH_main,
	GreenKeyCHD_main,
	GreenKeyCHR_main,
	GreenKeyN_main,
	GreenKeyND_main,
#pragma endregion

#pragma region strelki	
	s1_vibor,
	s2_vibor,
	s3_vibor,
	s4_vibor,
	s5_vibor,
	s6_vibor,
	s7_vibor,
	s8_vibor,
	s9_vibor,
	s10_vibor,
	s11_vibor,
	s12_vibor,
	s13_vibor,
	s14_vibor,
	s15_vibor,
	s16_vibor,
	s17_vibor,
	s18_vibor,
	s19_vibor,
	s20_vibor,
	s21_vibor,
	s22_vibor,
	s23_vibor,
	s24_vibor,
	s25_vibor,
	s26_vibor,
	s27_vibor,
	s28_vibor,
	s29_vibor,
	s30_vibor,
	s31_vibor,
	s32_vibor,
	s33_vibor,
	s34_vibor,
	s35_vibor,
	s36_vibor,

	s1_Plus,
	s1_Minus,
	s2_Plus,
	s2_Minus,
	s3_Plus,
	s3_Minus,
	s4_Plus,
	s4_Minus,
	s5_Plus,
	s5_Minus,
	s6_Plus,
	s6_Minus,
	s7_Plus,
	s7_Minus,
	s8_Plus,
	s8_Minus,
	s9_Plus,
	s9_Minus,
	s10_Plus,
	s10_Minus,
	s11_Plus,
	s11_Minus,
	s12_Plus,
	s12_Minus,
	s13_Plus,
	s13_Minus,
	s14_Plus,
	s14_Minus,
	s15_Plus,
	s15_Minus,
	s16_Plus,
	s16_Minus,
	s17_Plus,
	s17_Minus,
	s18_Plus,
	s18_Minus,
	s19_Plus,
	s19_Minus,
	s20_Plus,
	s20_Minus,
	s21_Plus,
	s21_Minus,
	s22_Plus,
	s22_Minus,
	s23_Plus,
	s23_Minus,
	s24_Plus,
	s24_Minus,
	s25_Plus,
	s25_Minus,
	s26_Plus,
	s26_Minus,
	s27_Plus,
	s27_Minus,
	s28_Plus,
	s28_Minus,
	s29_Plus,
	s29_Minus,
	s30_Plus,
	s30_Minus,
	s31_Plus,
	s31_Minus,
	s32_Plus,
	s32_Minus,
	s33_Plus,
	s33_Minus,
	s34_Plus,
	s34_Minus,
	s35_Plus,
	s35_Minus,
	s36_Plus,
	s36_Minus,
	s37_Plus,
	s37_Minus,
	s38_Plus,
	s38_Minus,
	s39_Plus,
	s39_Minus,
	s40_Plus,
	s40_Minus,
	s41_Plus,
	s41_Minus,
	s42_Plus,
	s42_Minus,
	s43_Plus,
	s43_Minus,
	s44_Plus,
	s44_Minus,
	s45_Plus,
	s45_Minus,
	s46_Plus,
	s46_Minus,
	s47_Plus,
	s47_Minus,
	s48_Plus,
	s48_Minus,
	s49_Plus,
	s49_Minus,
	s50_Plus,
	s50_Minus,
	s51_Plus,
	s51_Minus,
	s52_Plus,
	s52_Minus,
	s53_Plus,
	s53_Minus,
	s54_Plus,
	s54_Minus,
	s55_Plus,
	s55_Minus,
	s56_Plus,
	s56_Minus,
	s57_Plus,
	s57_Minus,
	s58_Plus,
	s58_Minus,
	s59_Plus,
	s59_Minus,
	s60_Plus,
	s60_Minus,
	s61_Plus,
	s61_Minus,
	s62_Plus,
	s62_Minus,
	s63_Plus,
	s63_Minus,
	s64_Plus,
	s64_Minus,
	s65_Plus,
	s65_Minus,
	s66_Plus,
	s66_Minus,
	s67_Plus,
	s67_Minus,
	s68_Plus,
	s68_Minus,
	s69_Plus,
	s69_Minus,
	s70_Plus,
	s70_Minus,
	s71_Plus,
	s71_Minus,
	s72_Plus,
	s72_Minus,
	s73_Plus,
	s73_Minus,
	s74_Plus,
	s74_Minus,
	s75_Plus,
	s75_Minus,
	s76_Plus,
	s76_Minus,
	s77_Plus,
	s77_Minus,
	s78_Plus,
	s78_Minus,
	s79_Plus,
	s79_Minus,
	s80_Plus,
	s80_Minus,
	s81_Plus,
	s81_Minus,
	s82_Plus,
	s82_Minus,
	s83_Plus,
	s83_Minus,
	s84_Plus,
	s84_Minus,
	s85_Plus,
	s85_Minus,
	s86_Plus,
	s86_Minus,
	s87_Plus,
	s87_Minus,
	s88_Plus,
	s88_Minus,
	s89_Plus,
	s89_Minus,
	s90_Plus,
	s90_Minus,
	s91_Plus,
	s91_Minus,
	s92_Plus,
	s92_Minus,
	s93_Plus,
	s93_Minus,
	s94_Plus,
	s94_Minus,
	s95_Plus,
	s95_Minus,
	s96_Plus,
	s96_Minus,
	s97_Plus,
	s97_Minus,
	s98_Plus,
	s98_Minus,
	s99_Plus,
	s99_Minus,
	s100_Plus,
	s100_Minus,

#pragma region dop


	s101_Minus,
	s103_Minus,
	s105_Minus,
	s107_Minus,
	s109_Minus,
	s111_Minus,
	s113_Minus,
	s115_Minus,
	s117_Minus,
	s119_Minus,
	s121_Minus,
	s123_Minus,
	s125_Minus,
	s127_Minus,
	s129_Minus,
	s131_Minus,
	s133_Minus,
	s135_Minus,
	s137_Minus,
	s301_Minus,
	s303_Minus,
	s305_Minus,
	s307_Minus,


	s101_Plus,
	s103_Plus,
	s105_Plus,
	s107_Plus,
	s109_Plus,
	s111_Plus,
	s113_Plus,
	s115_Plus,
	s117_Plus,
	s119_Plus,
	s121_Plus,
	s123_Plus,
	s125_Plus,
	s127_Plus,
	s129_Plus,
	s131_Plus,
	s133_Plus,
	s135_Plus,
	s137_Plus,
	s301_Plus,
	s303_Plus,
	s305_Plus,
	s307_Plus,
#pragma endregion


#pragma endregion
#pragma region SetRole
	Curator,
	Dispetcher_1,
	Dispetcher_2,
	Karabas,
	Karaganozek,
	Karaganda,
	Maykuduk,
	GanaKaraganda,
	Karaganda_1,
	Karaganda_2,
	Rasporiaditelnaya,
	Dubovskaya,
	GanaAul,
	Radiouzel,
#pragma endregion
#pragma region CreateRouterPoezd

	N_1P_Create,
	N_2P_Create,
	N_3P_Create,
	N_4P_Create,
	N_5P_Create,
	N_6P_Create,
	N_7P_Create,

	ND_1P_Create,
	ND_2P_Create,
	ND_3P_Create,
	ND_4P_Create,
	ND_5P_Create,
	ND_6P_Create,
	ND_7P_Create,

	CH_1P_Create,
	CH_2P_Create,
	CH_3P_Create,
	CH_4P_Create,
	CH_5P_Create,
	CH_6P_Create,
	CH_7P_Create,

	CHD_1P_Create,
	CHD_2P_Create,
	CHD_3P_Create,
	CHD_4P_Create,
	CHD_5P_Create,
	CHD_6P_Create,
	CHD_7P_Create,

	CHR_1P_Create,
	CHR_2P_Create,
	CHR_3P_Create,
	CHR_4P_Create,
	CHR_5P_Create,
	CHR_6P_Create,
	CHR_7P_Create,

	N1_CH_Create,
	N2_CH_Create,
	N3_CH_Create,
	N4_CH_Create,
	N5_CH_Create,
	N6_CH_Create,
	N7_CH_Create,

	N1_CHD_Create,
	N2_CHD_Create,
	N3_CHD_Create,
	N4_CHD_Create,
	N5_CHD_Create,
	N6_CHD_Create,
	N7_CHD_Create,

	N1_CHR_Create,
	N2_CHR_Create,
	N3_CHR_Create,
	N4_CHR_Create,
	N5_CHR_Create,
	N6_CHR_Create,
	N7_CHR_Create,

	CH1_N_Create,
	CH2_N_Create,
	CH3_N_Create,
	CH4_N_Create,
	CH5_N_Create,
	CH6_N_Create,
	CH7_N_Create,

	CH1_ND_Create,
	CH2_ND_Create,
	CH3_ND_Create,
	CH4_ND_Create,
	CH5_ND_Create,
	CH6_ND_Create,
	CH7_ND_Create,

	CHM1_N_Create,
	CHM2_N_Create,
	CHM3_N_Create,
	CHM4_N_Create,
	CHM5_N_Create,
	CHM6_N_Create,
	CHM7_N_Create,

	CHM1_ND_Create,
	CHM2_ND_Create,
	CHM3_ND_Create,
	CHM4_ND_Create,
	CHM5_ND_Create,
	CHM6_ND_Create,
	CHM7_ND_Create,

	N1A_CH_Create,
	N2A_CH_Create,
	N3A_CH_Create,
	N4A_CH_Create,
	N5A_CH_Create,

	N1A_CHD_Create,
	N2A_CHD_Create,
	N3A_CHD_Create,
	N4A_CHD_Create,
	N5A_CHD_Create,

	NM1_2AP_Create,
	NM2_2AP_Create,
	NM3_2AP_Create,
	NM4_2AP_Create,
	NM5_2AP_Create,
	NM6_2AP_Create,
	NM7_2AP_Create,

	NM1_3AP_Create,
	NM2_3AP_Create,
	NM3_3AP_Create,
	NM4_3AP_Create,
	NM5_3AP_Create,
	NM6_3AP_Create,
	NM7_3AP_Create,

	NM1_4AP_Create,
	NM2_4AP_Create,
	NM3_4AP_Create,
	NM4_4AP_Create,
	NM5_4AP_Create,
	NM6_4AP_Create,
	NM7_4AP_Create,

	NM1_5AP_Create,
	NM2_5AP_Create,
	NM3_5AP_Create,
	NM4_5AP_Create,
	NM5_5AP_Create,
	NM6_5AP_Create,
	NM7_5AP_Create,

	NM20_1AP_Create,
	NM21_1AP_Create,
	NM22_1AP_Create,
	NM23_1AP_Create,
	NM24_1AP_Create,
	NM25_1AP_Create,
	NM26_1AP_Create,
	NM27_1AP_Create,
	NM28_1AP_Create,
	NM29_1AP_Create,
	NM30_1AP_Create,
	NM31_1AP_Create,
	NM32_1AP_Create,
	NM33_1AP_Create,
	NM34_1AP_Create,

	NM11_2AP_Create,
	NM12_2AP_Create,
	NM13_2AP_Create,
	NM14_2AP_Create,
	NM15_2AP_Create,
	NM16_2AP_Create,
	NM17_2AP_Create,
	NM18_2AP_Create,
	NM19_2AP_Create,

	NM20_2AP_Create,
	NM21_2AP_Create,
	NM22_2AP_Create,
	NM23_2AP_Create,
	NM24_2AP_Create,
	NM25_2AP_Create,
	NM26_2AP_Create,
	NM27_2AP_Create,
	NM28_2AP_Create,
	NM29_2AP_Create,
	NM30_2AP_Create,
	NM31_2AP_Create,
	NM32_2AP_Create,
	NM33_2AP_Create,
	NM34_2AP_Create,

	NM11_3AP_Create,
	NM12_3AP_Create,
	NM13_3AP_Create,
	NM14_3AP_Create,
	NM15_3AP_Create,
	NM16_3AP_Create,
	NM17_3AP_Create,
	NM18_3AP_Create,
	NM19_3AP_Create,

	NM20_3AP_Create,
	NM21_3AP_Create,
	NM22_3AP_Create,

	NM11_4AP_Create,
	NM12_4AP_Create,
	NM13_4AP_Create,
	NM14_4AP_Create,
	NM15_4AP_Create,
	NM16_4AP_Create,
	NM17_4AP_Create,
	NM18_4AP_Create,
	NM19_4AP_Create,

	NM20_4AP_Create,
	NM21_4AP_Create,
	NM22_4AP_Create,

	CH_N1A_Create,
	CH_N2A_Create,
	CH_N3A_Create,
	CH_N4A_Create,
	CH_N5A_Create,

	CHD_N1A_Create,
	CHD_N2A_Create,
	CHD_N3A_Create,
	CHD_N4A_Create,
	CHD_N5A_Create,

	NM1_CHM2A_Create,
	NM2_CHM2A_Create,
	NM3_CHM2A_Create,
	NM4_CHM2A_Create,
	NM5_CHM2A_Create,
	NM6_CHM2A_Create,
	NM7_CHM2A_Create,

	NM1_CHM3A_Create,
	NM2_CHM3A_Create,
	NM3_CHM3A_Create,
	NM4_CHM3A_Create,
	NM5_CHM3A_Create,
	NM6_CHM3A_Create,
	NM7_CHM3A_Create,

	NM1_CHM4A_Create,
	NM2_CHM4A_Create,
	NM3_CHM4A_Create,
	NM4_CHM4A_Create,
	NM5_CHM4A_Create,
	NM6_CHM4A_Create,
	NM7_CHM4A_Create,

	NM1_CHM5A_Create,
	NM2_CHM5A_Create,
	NM3_CHM5A_Create,
	NM4_CHM5A_Create,
	NM5_CHM5A_Create,
	NM6_CHM5A_Create,
	NM7_CHM5A_Create,

	M27_CHM2A_Create,
	M27_CHM3A_Create,
	M27_CHM4A_Create,
	M27_CHM5A_Create,

#pragma endregion
#pragma region CreateRouterManevr
	M3_M2_Create,
	M2_M3_Create,
	M3_M1_Create,
	M1_M3_Create,
	M4_M2_Create,
	M2_M4_Create,

	CH1_M1_Create,
	CH2_M1_Create,
	CH3_M1_Create,
	CH4_M1_Create,
	CH5_M1_Create,
	CH6_M1_Create,
	CH7_M1_Create,

	CH1_M3_Create,
	CH2_M3_Create,
	CH3_M3_Create,
	CH4_M3_Create,
	CH5_M3_Create,
	CH6_M3_Create,
	CH7_M3_Create,

	N1_M2_Create,
	N2_M2_Create,
	N3_M2_Create,
	N4_M2_Create,
	N5_M2_Create,
	N6_M2_Create,
	N7_M2_Create,

	N1_M4_Create,
	N2_M4_Create,
	N3_M4_Create,
	N4_M4_Create,
	N5_M4_Create,
	N6_M4_Create,
	N7_M4_Create,

	N1_M6_Create,
	N2_M6_Create,
	N3_M6_Create,
	N4_M6_Create,
	N5_M6_Create,
	N6_M6_Create,
	N7_M6_Create,

	N1_M8_Create,
	N2_M8_Create,
	N3_M8_Create,
	N4_M8_Create,
	N5_M8_Create,
	N6_M8_Create,
	N7_M8_Create,

	N1_M10_Create,
	N2_M10_Create,
	N3_M10_Create,
	N4_M10_Create,
	N5_M10_Create,
	N6_M10_Create,
	N7_M10_Create,

	N1_M12_Create,
	N2_M12_Create,
	N3_M12_Create,
	N4_M12_Create,
	N5_M12_Create,
	N6_M12_Create,
	N7_M12_Create,

	N1_M14_Create,
	N2_M14_Create,
	N3_M14_Create,
	N4_M14_Create,
	N5_M14_Create,
	N6_M14_Create,
	N7_M14_Create,

	N1_M16_Create,
	N2_M16_Create,

	N1_M18_Create,
	N2_M18_Create,

	N1_M20_Create,
	N2_M20_Create,

	M1_M5_Create,
	M1_M4_Create,
	M1_CH1_Create,
	M1_CH2_Create,
	M1_CH3_Create,
	M1_CH4_Create,
	M1_CH5_Create,
	M1_CH6_Create,
	M1_CH7_Create,

	M7_M4_Create,
	M7_CH1_Create,
	M7_CH2_Create,
	M7_CH3_Create,
	M7_CH4_Create,
	M7_CH5_Create,
	M7_CH6_Create,
	M7_CH7_Create,

	M3_CH1_Create,
	M3_CH2_Create,
	M3_CH3_Create,
	M3_CH4_Create,
	M3_CH5_Create,
	M3_CH6_Create,
	M3_CH7_Create,
	M3_M4_Create,

	CH1_M7_Create,
	CH2_M7_Create,
	CH3_M7_Create,
	CH4_M7_Create,
	CH5_M7_Create,
	CH6_M7_Create,
	CH7_M7_Create,

	CH1_M5_Create,
	CH3_M5_Create,



	M2_M5_Create,
	M2_N1_Create,
	M2_N2_Create,
	M2_N3_Create,
	M2_N4_Create,
	M2_N5_Create,
	M2_N6_Create,
	M2_N7_Create,

	M3_M6_Create,
	M4_M3_Create,
	M4_M5_Create,
	M4_N1_Create,
	M4_N2_Create,
	M4_N3_Create,
	M4_N4_Create,
	M4_N5_Create,
	M4_N6_Create,
	M4_N7_Create,
	M4_M1_Create,

	M5_M1_Create,
	M5_M2_Create,
	M5_M4_Create,
	M5_M6_Create,
	M5_M8_Create,
	M5_M10_Create,
	M5_M12_Create,
	M5_M14_Create,
	M5_M16_Create,
	M5_M18_Create,
	M5_M20_Create,
	M5_CH1_Create,
	M5_CH2_Create,
	M5_CH3_Create,
	M5_CH5_Create,

	M6_M1_Create,
	M6_M3_Create,
	M6_M5_Create,
	M6_N1_Create,
	M6_N2_Create,
	M6_N3_Create,
	M6_N4_Create,
	M6_N5_Create,
	M6_N6_Create,
	M6_N7_Create,



	M8_M5_Create,

	M8_N1_Create,
	M8_N2_Create,
	M8_N3_Create,
	M8_N4_Create,
	M8_N5_Create,
	M8_N6_Create,
	M8_N7_Create,

	M9_M2_Create,
	M9_M4_Create,
	M2_M9_Create,
	M4_M9_Create,

	M10_M5_Create,
	M10_N1_Create,
	M10_N2_Create,
	M10_N3_Create,
	M10_N4_Create,
	M10_N5_Create,
	M10_N6_Create,
	M10_N7_Create,

	M12_M5_Create,
	M12_N1_Create,
	M12_N2_Create,
	M12_N3_Create,
	M12_N4_Create,
	M12_N5_Create,
	M12_N6_Create,
	M12_N7_Create,

	M14_M5_Create,
	M14_N1_Create,
	M14_N2_Create,
	M14_N3_Create,
	M14_N4_Create,
	M14_N5_Create,
	M14_N6_Create,
	M14_N7_Create,

	M16_M5_Create,
	M16_N1_Create,
	M16_N2_Create,
	M18_M5_Create,
	M18_N1_Create,
	M18_N2_Create,
	M20_M5_Create,
	M20_N1_Create,
	M20_N2_Create,

	M1_CHM1_Create,
	M1_CHM2_Create,
	M1_CHM3_Create,
	M1_CHM4_Create,
	M1_CHM5_Create,
	M1_CHM6_Create,
	M1_CHM7_Create,

	M3_CHM1_Create,
	M3_CHM2_Create,
	M3_CHM3_Create,
	M3_CHM4_Create,
	M3_CHM5_Create,
	M3_CHM6_Create,
	M3_CHM7_Create,

	M21_CHM1_Create,
	M21_CHM2_Create,
	M21_CHM3_Create,
	M21_CHM4_Create,
	M21_CHM5_Create,
	M21_CHM6_Create,
	M21_CHM7_Create,

	NM20_CHM1A_Create,
	NM21_CHM1A_Create,
	NM22_CHM1A_Create,
	NM23_CHM1A_Create,
	NM24_CHM1A_Create,
	NM25_CHM1A_Create,
	NM26_CHM1A_Create,
	NM27_CHM1A_Create,
	NM28_CHM1A_Create,
	NM29_CHM1A_Create,
	NM30_CHM1A_Create,
	NM31_CHM1A_Create,
	NM32_CHM1A_Create,
	NM33_CHM1A_Create,
	NM34_CHM1A_Create,

	NM11_CHM2A_Create,
	NM12_CHM2A_Create,
	NM13_CHM2A_Create,
	NM14_CHM2A_Create,
	NM15_CHM2A_Create,
	NM16_CHM2A_Create,
	NM17_CHM2A_Create,
	NM18_CHM2A_Create,
	NM19_CHM2A_Create,

	NM20_CHM2A_Create,
	NM21_CHM2A_Create,
	NM22_CHM2A_Create,
	NM23_CHM2A_Create,
	NM24_CHM2A_Create,
	NM25_CHM2A_Create,
	NM26_CHM2A_Create,
	NM27_CHM2A_Create,
	NM28_CHM2A_Create,
	NM29_CHM2A_Create,
	NM30_CHM2A_Create,
	NM31_CHM2A_Create,
	NM32_CHM2A_Create,
	NM33_CHM2A_Create,
	NM34_CHM2A_Create,

	NM11_CHM3A_Create,
	NM12_CHM3A_Create,
	NM13_CHM3A_Create,
	NM14_CHM3A_Create,
	NM15_CHM3A_Create,
	NM16_CHM3A_Create,
	NM17_CHM3A_Create,
	NM18_CHM3A_Create,
	NM19_CHM3A_Create,

	NM20_CHM3A_Create,
	NM21_CHM3A_Create,
	NM22_CHM3A_Create,

	NM11_CHM4A_Create,
	NM12_CHM4A_Create,
	NM13_CHM4A_Create,
	NM14_CHM4A_Create,
	NM15_CHM4A_Create,
	NM16_CHM4A_Create,
	NM17_CHM4A_Create,
	NM18_CHM4A_Create,
	NM19_CHM4A_Create,

	NM20_CHM4A_Create,
	NM21_CHM4A_Create,
	NM22_CHM4A_Create,

	CHM1_M1_Create,
	CHM2_M1_Create,
	CHM3_M1_Create,
	CHM4_M1_Create,
	CHM5_M1_Create,
	CHM6_M1_Create,
	CHM7_M1_Create,
	M14_M1_Create,
	M16_M1_Create,
	M18_M1_Create,
	M20_M1_Create,

	CHM1_M3_Create,
	CHM2_M3_Create,
	CHM3_M3_Create,
	CHM4_M3_Create,
	CHM5_M3_Create,
	CHM6_M3_Create,
	CHM7_M3_Create,
	M14_M3_Create,
	M16_M3_Create,
	M18_M3_Create,
	M20_M3_Create,

	NM1_M6_Create,
	NM2_M6_Create,
	NM3_M6_Create,
	NM4_M6_Create,
	NM5_M6_Create,
	NM6_M6_Create,
	NM7_M6_Create,

	NM1B_M6_Create,
	NM2B_M6_Create,
	NM3B_M6_Create,
	NM4B_M6_Create,

	M1_M20_Create,
	M3_M20_Create,
	M21_M20_Create,

	CHM1_M21_Create,
	CHM2_M21_Create,
	CHM3_M21_Create,
	CHM4_M21_Create,
	CHM5_M21_Create,
	CHM6_M21_Create,
	CHM7_M21_Create,

	M14_M21_Create,
	M16_M21_Create,
	M18_M21_Create,
	M20_M21_Create,

	NM1B_PG1_Create,
	NM2B_PG1_Create,
	NM3B_PG1_Create,
	NM4B_PG1_Create,

	NM1B_PG2_Create,
	NM2B_PG2_Create,
	NM3B_PG2_Create,
	NM4B_PG2_Create,

	M2_N1A_Create,
	M2_N2A_Create,
	M2_N3A_Create,
	M2_N4A_Create,
	M2_N5A_Create,

	M4_N1A_Create,
	M4_N2A_Create,
	M4_N3A_Create,
	M4_N4A_Create,
	M4_N5A_Create,

	CH5_M5_Create,

	M13_CHM5A_Create,

	CHM1A_NM1_Create,
	CHM2A_NM1_Create,
	CHM3A_NM1_Create,
	CHM4A_NM1_Create,
	CHM5A_NM1_Create,

	CHM1A_NM2_Create,
	CHM2A_NM2_Create,
	CHM3A_NM2_Create,
	CHM4A_NM2_Create,
	CHM5A_NM2_Create,

	CHM1A_NM3_Create,
	CHM2A_NM3_Create,
	CHM3A_NM3_Create,
	CHM4A_NM3_Create,
	CHM5A_NM3_Create,

	CHM1A_NM4_Create,
	CHM2A_NM4_Create,
	CHM3A_NM4_Create,
	CHM4A_NM4_Create,
	CHM5A_NM4_Create,

	CHM1A_NM5_Create,
	CHM2A_NM5_Create,
	CHM3A_NM5_Create,
	CHM4A_NM5_Create,
	CHM5A_NM5_Create,

	CHM1A_NM6_Create,
	CHM2A_NM6_Create,
	CHM3A_NM6_Create,
	CHM4A_NM6_Create,
	CHM5A_NM6_Create,

	CHM1A_NM7_Create,
	CHM2A_NM7_Create,
	CHM3A_NM7_Create,
	CHM4A_NM7_Create,
	CHM5A_NM7_Create,

	M1_M14_Create,
	M1_M16_Create,
	M1_M18_Create,


	M3_M14_Create,
	M3_M16_Create,
	M3_M18_Create,


	M21_M14_Create,
	M21_M16_Create,
	M21_M18_Create,

	M5_CH6_Create,
	CH6_M5_Create,

	M15_M2_Create,
	N1A_M2_Create,
	N2A_M2_Create,
	N3A_M2_Create,
	N4A_M2_Create,
	N5A_M2_Create,

	M15_M4_Create,
	N1A_M4_Create,
	N2A_M4_Create,
	N3A_M4_Create,
	N4A_M4_Create,
	N5A_M4_Create,

	CHM3A_M13_Create,
	CHM4A_M13_Create,
	CHM5A_M13_Create,

	CHM2A_M27_Create,
	CHM3A_M27_Create,
	CHM4A_M27_Create,
	CHM5A_M27_Create,

	M2_M15_Create,
	M4_M15_Create,

	M22_NM23_Create,
	M22_NM24_Create,
	M22_NM25_Create,
	M22_NM26_Create,
	M22_NM27_Create,
	M22_NM28_Create,
	M22_NM29_Create,
	M22_NM30_Create,
	M22_NM31_Create,
	M22_NM32_Create,
	M22_NM33_Create,
	M22_NM34_Create,

	CHM1A_NM20_Create,
	CHM1A_NM21_Create,
	CHM1A_NM22_Create,
	CHM1A_NM23_Create,
	CHM1A_NM24_Create,
	CHM1A_NM25_Create,
	CHM1A_NM26_Create,
	CHM1A_NM27_Create,
	CHM1A_NM28_Create,
	CHM1A_NM29_Create,
	CHM1A_NM30_Create,
	CHM1A_NM31_Create,
	CHM1A_NM32_Create,
	CHM1A_NM33_Create,
	CHM1A_NM34_Create,



	CHM2A_NM11_Create,
	CHM2A_NM12_Create,
	CHM2A_NM13_Create,
	CHM2A_NM14_Create,
	CHM2A_NM15_Create,
	CHM2A_NM16_Create,
	CHM2A_NM17_Create,
	CHM2A_NM18_Create,
	CHM2A_NM19_Create,
	CHM2A_NM20_Create,
	CHM2A_NM21_Create,
	CHM2A_NM22_Create,
	CHM2A_NM23_Create,
	CHM2A_NM24_Create,
	CHM2A_NM25_Create,
	CHM2A_NM26_Create,
	CHM2A_NM27_Create,
	CHM2A_NM28_Create,
	CHM2A_NM29_Create,
	CHM2A_NM30_Create,
	CHM2A_NM31_Create,
	CHM2A_NM32_Create,
	CHM2A_NM33_Create,
	CHM2A_NM34_Create,



	CHM3A_NM11_Create,
	CHM3A_NM12_Create,
	CHM3A_NM13_Create,
	CHM3A_NM14_Create,
	CHM3A_NM15_Create,
	CHM3A_NM16_Create,
	CHM3A_NM17_Create,
	CHM3A_NM18_Create,
	CHM3A_NM19_Create,
	CHM3A_NM20_Create,
	CHM3A_NM21_Create,
	CHM3A_NM22_Create,

	CHM4A_NM11_Create,
	CHM4A_NM12_Create,
	CHM4A_NM13_Create,
	CHM4A_NM14_Create,
	CHM4A_NM15_Create,
	CHM4A_NM16_Create,
	CHM4A_NM17_Create,
	CHM4A_NM18_Create,
	CHM4A_NM19_Create,
	CHM4A_NM20_Create,
	CHM4A_NM21_Create,
	CHM4A_NM22_Create,

	NM23_M22_Create,
	NM24_M22_Create,
	NM25_M22_Create,
	NM26_M22_Create,
	NM27_M22_Create,
	NM28_M22_Create,
	NM29_M22_Create,
	NM30_M22_Create,
	NM31_M22_Create,
	NM32_M22_Create,
	NM33_M22_Create,
	NM34_M22_Create,

	Karaganda_DSP_directSet,
	Karaganda_DSC_directSet,

#pragma endregion
#pragma region DeleteRouter

	N,
	ND,
	CH,
	CHD,
	CHR,

	N1,
	N2,
	N3,
	N4,
	N5,
	N6,
	N7,

	CH1,
	CH2,
	CH3,
	CH4,
	CH5,
	CH6,
	CH7,

	M1,
	M2,
	M3,
	M4,
	M5,
	M6,
	M7,
	M8,
	M9,
	M10,
	M11,
	M12,
	M13,
	M14,
	M15,
	M16,
	M17,
	M18,
	M19,
	M20,
	M21,
	M22,
	M23,
	M24,
	M25,
	M26,
	M27,
	M28,
	M29,
	M30,
	M31,


	NM1,
	NM2,
	NM3,
	NM4,
	NM5,
	NM6,
	NM7,
	NM8,
	NM9,
	NM10,
	NM11,
	NM12,
	NM13,
	NM14,
	NM15,
	NM16,
	NM17,
	NM18,
	NM19,
	NM20,
	NM21,
	NM22,
	NM23,
	NM24,
	NM25,
	NM26,
	NM27,
	NM28,
	NM29,
	NM30,
	NM31,
	NM32,
	NM33,
	NM34,

	N1A,
	N2A,
	N3A,
	N4A,
	N5A,

	CHM1,
	CHM2,
	CHM3,
	CHM4,
	CHM5,
	CHM6,
	CHM7,

	CHM1A,
	CHM2A,
	CHM3A,
	CHM4A,
	CHM5A,

	NM1A,
	NM2A,
	NM3A,
	NM4A,

	NM1B,
	NM2B,
	NM3B,
	NM4B,

#pragma endregion

	M1_M6_Create,

#pragma region fromDSPG

	PG1_red,
	PG1_green,
	PG1_yellow,
	PG1_white,

	PG2_red,
	PG2_green,
	PG2_yellow,
	PG2_white,

	MG1_white,
	MG3_white,
	MG5_white,
	MG7_white,
	MG9_white,
	M29_white,
	M31_white,
	MG1_grey,
	MG3_grey,
	MG5_grey,
	MG7_grey,
	MG9_grey,
	M29_grey,
	M31_grey,

#pragma region 301

	_301_Plus,
	_301_Minus,

	s301_black,
	s301_red,
	s301_white,

	_301sp_black,
	_301sp_red,
	_301sp_white,

#pragma endregion
#pragma region 303

	_303_Plus,
	_303_Minus,

	s303_black,
	s303_red,
	s303_white,

	_303sp_black,
	_303sp_red,
	_303sp_white,

#pragma endregion
#pragma region 305

	_305_Plus,
	_305_Minus,

	s305_black,
	s305_red,
	s305_white,

	_305sp_black,
	_305sp_red,
	_305sp_white,

#pragma endregion
#pragma region 307

	_307_Plus,
	_307_Minus,

	s307_black,
	s307_red,
	s307_white,

	_307sp_black,
	_307sp_red,
	_307sp_white,

#pragma endregion
#pragma region 87

	_87_Plus,
	_87_Minus,

	s87_black,
	s87_red,
	s87_white,

	_87sp_black,
	_87sp_red,
	_87sp_white,

#pragma endregion
#pragma region 93

	_93_Plus,
	_93_Minus,

	s93_black,
	s93_red,
	s93_white,

	_93sp_black,
	_93sp_red,
	_93sp_white,

#pragma endregion
#pragma region 95

	_95_Plus,
	_95_Minus,

	s95_black,
	s95_red,
	s95_white,

	_95sp_black,
	_95sp_red,
	_95sp_white,

#pragma endregion
#pragma region 97

	_97_Plus,
	_97_Minus,

	s97_black,
	s97_red,
	s97_white,

	_97sp_black,
	_97sp_red,
	_97sp_white,

#pragma endregion
#pragma region 89

	_89_Plus,
	_89_Minus,

	s89_black,
	s89_red,
	s89_white,

	_89sp_black,
	_89sp_red,
	_89sp_white,

#pragma endregion
#pragma region 91

	_91_Plus,
	_91_Minus,

	s91_black,
	s91_red,
	s91_white,

	_91sp_black,
	_91sp_red,
	_91sp_white,

#pragma endregion
#pragma region 99

	_99_Plus,
	_99_Minus,

	s99_black,
	s99_red,
	s99_white,

	_99sp_black,
	_99sp_red,
	_99sp_white,

#pragma endregion
#pragma region 101

	_101_Plus,
	_101_Minus,

	s101_black,
	s101_red,
	s101_white,

	_101sp_black,
	_101sp_red,
	_101sp_white,

#pragma endregion
#pragma region 103

	_103_Plus,
	_103_Minus,

	s103_black,
	s103_red,
	s103_white,

	_103sp_black,
	_103sp_red,
	_103sp_white,

#pragma endregion
#pragma region 105

	_105_Plus,
	_105_Minus,

	s105_black,
	s105_red,
	s105_white,

	_105sp_black,
	_105sp_red,
	_105sp_white,

#pragma endregion
#pragma region 107

	_107_Plus,
	_107_Minus,

	s107_black,
	s107_red,
	s107_white,

	_107sp_black,
	_107sp_red,
	_107sp_white,

#pragma endregion
#pragma region 109

	_109_Plus,
	_109_Minus,

	s109_black,
	s109_red,
	s109_white,

	_109sp_black,
	_109sp_red,
	_109sp_white,

#pragma endregion
#pragma region 111

	_111_Plus,
	_111_Minus,

	s111_black,
	s111_red,
	s111_white,

	_111sp_black,
	_111sp_red,
	_111sp_white,

#pragma endregion
#pragma region 113

	_113_Plus,
	_113_Minus,

	s113_black,
	s113_red,
	s113_white,

	_113sp_black,
	_113sp_red,
	_113sp_white,

#pragma endregion
#pragma region 115

	_115_Plus,
	_115_Minus,

	s115_black,
	s115_red,
	s115_white,

	_115sp_black,
	_115sp_red,
	_115sp_white,

#pragma endregion
#pragma region 117

	_117_Plus,
	_117_Minus,

	s117_black,
	s117_red,
	s117_white,

	_117sp_black,
	_117sp_red,
	_117sp_white,

#pragma endregion
#pragma region 119

	_119_Plus,
	_119_Minus,

	s119_black,
	s119_red,
	s119_white,

	_119sp_black,
	_119sp_red,
	_119sp_white,

#pragma endregion
#pragma region 121

	_121_Plus,
	_121_Minus,

	s121_black,
	s121_red,
	s121_white,

	_121sp_black,
	_121sp_red,
	_121sp_white,

#pragma endregion
#pragma region 123

	_123_Plus,
	_123_Minus,

	s123_black,
	s123_red,
	s123_white,

	_123sp_black,
	_123sp_red,
	_123sp_white,

#pragma endregion
#pragma region 125

	_125_Plus,
	_125_Minus,

	s125_black,
	s125_red,
	s125_white,

	_125sp_black,
	_125sp_red,
	_125sp_white,

#pragma endregion
#pragma region 127

	_127_Plus,
	_127_Minus,

	s127_black,
	s127_red,
	s127_white,

	_127sp_black,
	_127sp_red,
	_127sp_white,

#pragma endregion
#pragma region 129

	_129_Plus,
	_129_Minus,

	s129_black,
	s129_red,
	s129_white,

	_129sp_black,
	_129sp_red,
	_129sp_white,

#pragma endregion

#pragma region 305_other

	_305ma_Free,
	_305ma_Busy,
	_305ma_ManRouted,
	_305mb_Free,
	_305mb_Busy,
	_305mb_ManRouted,
	_305pa_Free,
	_305pa_Busy,
	_305pa_ManRouted,
	_305pb_Free,
	_305pb_Busy,
	_305pb_ManRouted,

#pragma endregion
#pragma region 307_other

	_307ma_Free,
	_307ma_Busy,
	_307ma_ManRouted,
	_307mb_Free,
	_307mb_Busy,
	_307mb_ManRouted,
	_307pa_Free,
	_307pa_Busy,
	_307pa_ManRouted,
	_307pb_Free,
	_307pb_Busy,
	_307pb_ManRouted,

#pragma endregion



#pragma region 91_other

	_91ma_Free,
	_91ma_Busy,
	_91ma_ManRouted,
	_91mb_Free,
	_91mb_Busy,
	_91mb_ManRouted,
	_91pa_Free,
	_91pa_Busy,
	_91pa_ManRouted,
	_91pb_Free,
	_91pb_Busy,
	_91pb_ManRouted,

#pragma endregion
#pragma region 97_other

	_97ma_Free,
	_97ma_Busy,
	_97ma_ManRouted,
	_97mb_Free,
	_97mb_Busy,
	_97mb_ManRouted,
	_97pa_Free,
	_97pa_Busy,
	_97pa_ManRouted,
	_97pb_Free,
	_97pb_Busy,
	_97pb_ManRouted,

#pragma endregion
#pragma region 103_other

	_103ma_Free,
	_103ma_Busy,
	_103ma_ManRouted,
	_103mb_Free,
	_103mb_Busy,
	_103mb_ManRouted,
	_103pa_Free,
	_103pa_Busy,
	_103pa_ManRouted,
	_103pb_Free,
	_103pb_Busy,
	_103pb_ManRouted,

#pragma endregion
#pragma region 107_other

	_107ma_Free,
	_107ma_Busy,
	_107ma_ManRouted,
	_107mb_Free,
	_107mb_Busy,
	_107mb_ManRouted,
	_107pa_Free,
	_107pa_Busy,
	_107pa_ManRouted,
	_107pb_Free,
	_107pb_Busy,
	_107pb_ManRouted,

#pragma endregion
#pragma region 115_other

	_115ma_Free,
	_115ma_Busy,
	_115ma_ManRouted,
	_115mb_Free,
	_115mb_Busy,
	_115mb_ManRouted,
	_115pa_Free,
	_115pa_Busy,
	_115pa_ManRouted,
	_115pb_Free,
	_115pb_Busy,
	_115pb_ManRouted,

#pragma endregion
#pragma region 117_other

	_117ma_Free,
	_117ma_Busy,
	_117ma_ManRouted,
	_117mb_Free,
	_117mb_Busy,
	_117mb_ManRouted,
	_117pa_Free,
	_117pa_Busy,
	_117pa_ManRouted,
	_117pb_Free,
	_117pb_Busy,
	_117pb_ManRouted,

#pragma endregion
#pragma region 127_other

	_127ma_Free,
	_127ma_Busy,
	_127ma_ManRouted,
	_127mb_Free,
	_127mb_Busy,
	_127mb_ManRouted,
	_127pa_Free,
	_127pa_Busy,
	_127pa_ManRouted,
	_127pb_Free,
	_127pb_Busy,
	_127pb_ManRouted,

#pragma endregion
#pragma region 129_other

	_129ma_Free,
	_129ma_Busy,
	_129ma_ManRouted,
	_129mb_Free,
	_129mb_Busy,
	_129mb_ManRouted,
	_129pa_Free,
	_129pa_Busy,
	_129pa_ManRouted,
	_129pb_Free,
	_129pb_Busy,
	_129pb_ManRouted,

#pragma endregion

#pragma region 105_other

	_105ma_Free,
	_105ma_Busy,
	_105ma_ManRouted,
	_105mb_Free,
	_105mb_Busy,
	_105mb_ManRouted,
	_105mv_Free,
	_105mv_Busy,
	_105mv_ManRouted,

#pragma endregion
#pragma region 111_other

	_111ma_Free,
	_111ma_Busy,
	_111ma_ManRouted,
	_111mb_Free,
	_111mb_Busy,
	_111mb_ManRouted,
	_111mv_Free,
	_111mv_Busy,
	_111mv_ManRouted,

#pragma endregion
#pragma region 123_other

	_123ma_Free,
	_123ma_Busy,
	_123ma_ManRouted,
	_123mb_Free,
	_123mb_Busy,
	_123mb_ManRouted,
	_123mv_Free,
	_123mv_Busy,
	_123mv_ManRouted,

#pragma endregion
#pragma region 125_other

	_125ma_Free,
	_125ma_Busy,
	_125ma_ManRouted,
	_125mb_Free,
	_125mb_Busy,
	_125mb_ManRouted,
	_125mv_Free,
	_125mv_Busy,
	_125mv_ManRouted,

#pragma endregion

#pragma region 89_other

	_89pa_Free,
	_89pa_Busy,
	_89pa_ManRouted,
	_89pb_Free,
	_89pb_Busy,
	_89pb_ManRouted,
	_89pv_Free,
	_89pv_Busy,
	_89pv_ManRouted,

#pragma endregion
#pragma region 95_other

	_95pa_Free,
	_95pa_Busy,
	_95pa_ManRouted,
	_95pb_Free,
	_95pb_Busy,
	_95pb_ManRouted,
	_95pv_Free,
	_95pv_Busy,
	_95pv_ManRouted,

#pragma endregion
#pragma region 101_other

	_101pa_Free,
	_101pa_Busy,
	_101pa_ManRouted,
	_101pb_Free,
	_101pb_Busy,
	_101pb_ManRouted,
	_101pv_Free,
	_101pv_Busy,
	_101pv_ManRouted,

#pragma endregion
#pragma region 113_other

	_113pa_Free,
	_113pa_Busy,
	_113pa_ManRouted,
	_113pb_Free,
	_113pb_Busy,
	_113pb_ManRouted,
	_113pv_Free,
	_113pv_Busy,
	_113pv_ManRouted,

#pragma endregion




#pragma region 87_other

	_87pa_Free,
	_87pa_Busy,
	_87pa_ManRouted,
	_87ma_Free,
	_87ma_Busy,
	_87ma_ManRouted,

#pragma endregion
#pragma region 99_other

	_99pa_Free,
	_99pa_Busy,
	_99pa_ManRouted,
	_99ma_Free,
	_99ma_Busy,
	_99ma_ManRouted,

#pragma endregion
#pragma region 109_other

	_109pa_Free,
	_109pa_Busy,
	_109pa_ManRouted,
	_109ma_Free,
	_109ma_Busy,
	_109ma_ManRouted,

#pragma endregion
#pragma region 119_other

	_119pa_Free,
	_119pa_Busy,
	_119pa_ManRouted,
	_119ma_Free,
	_119ma_Busy,
	_119ma_ManRouted,

#pragma endregion

	gp_black,
	gp_red,
	gp_white,

	_1_3zp_on,
	_2_3zp_on,

	_1_3zp_off,
	_2_3zp_off


#pragma endregion

#pragma region dop
	,
	M23_CHM6_Create,
	M25_CHM6_Create,
	M23_CHM7_Create,
	M25_CHM7_Create,
	M24_NM6_Create,
	M24_NM7_Create,
	M26_NM6_Create,
	M26_NM7_Create,

	CHM6_M23_Create,
	CHM6_M25_Create,
	CHM7_M23_Create,
	CHM7_M25_Create,
	NM6_M24_Create,
	NM7_M24_Create,
	NM6_M26_Create,
	NM7_M26_Create,


	M5_CHM5A_Create,
	M5_CHM4A_Create,
	M5_CHM3A_Create,



	M13_CHM4A_Create,
	M13_CHM3A_Create,
	CHM2A_M5_Create,

	CHM5A_M5_Create,
	CHM4A_M5_Create,
	CHM3A_M5_Create,





	M27_M6_Create,



	M6_NM7_Create,
	M6_NM6_Create,
	M6_NM5_Create,
	M6_NM4_Create,
	M6_NM3_Create,
	M6_NM2_Create,
	M6_NM1_Create,

	M6_M27_Create,

	M6_NM1B_Create,
	M6_NM2B_Create,
	M6_NM3B_Create,
	M6_NM4B_Create,

	NM7_M12_Create,
	NM6_M12_Create,
	NM5_M12_Create,
	NM4_M12_Create,
	NM3_M12_Create,
	NM2_M12_Create,
	NM1_M12_Create,

	M27_M12_Create,

	NM1B_M12_Create,
	NM2B_M12_Create,
	NM3B_M12_Create,
	NM4B_M12_Create,

	M12_NM7_Create,
	M12_NM6_Create,
	M12_NM5_Create,
	M12_NM4_Create,
	M12_NM3_Create,
	M12_NM2_Create,
	M12_NM1_Create,

	M12_M27_Create,

	M12_NM1B_Create,
	M12_NM2B_Create,
	M12_NM3B_Create,
	M12_NM4B_Create,


#pragma region gp_Free

	_11gp_Free,
	_12gp_Free,
	_13gp_Free,
	_14gp_Free,
	_15gp_Free,
	_16gp_Free,
	_17gp_Free,
	_18gp_Free,
	_19gp_Free,
	_20gp_Free,
	_21gp_Free,
	_22gp_Free,
	_23gp_Free,
	_24gp_Free,
	_25gp_Free,
	_26gp_Free,
	_27gp_Free,
	_28gp_Free,
	_29gp_Free,
	_30gp_Free,
	_31gp_Free,
	_32gp_Free,
	_33gp_Free,
	_34gp_Free,

#pragma endregion
#pragma region gp_ManRouted

	_11gp_ManRouted,
	_12gp_ManRouted,
	_13gp_ManRouted,
	_14gp_ManRouted,
	_15gp_ManRouted,
	_16gp_ManRouted,
	_17gp_ManRouted,
	_18gp_ManRouted,
	_19gp_ManRouted,
	_20gp_ManRouted,
	_21gp_ManRouted,
	_22gp_ManRouted,
	_23gp_ManRouted,
	_24gp_ManRouted,
	_25gp_ManRouted,
	_26gp_ManRouted,
	_27gp_ManRouted,
	_28gp_ManRouted,
	_29gp_ManRouted,
	_30gp_ManRouted,
	_31gp_ManRouted,
	_32gp_ManRouted,
	_33gp_ManRouted,
	_34gp_ManRouted,

#pragma endregion
#pragma region gp_Busy

	_11gp_Busy,
	_12gp_Busy,
	_13gp_Busy,
	_14gp_Busy,
	_15gp_Busy,
	_16gp_Busy,
	_17gp_Busy,
	_18gp_Busy,
	_19gp_Busy,
	_20gp_Busy,
	_21gp_Busy,
	_22gp_Busy,
	_23gp_Busy,
	_24gp_Busy,
	_25gp_Busy,
	_26gp_Busy,
	_27gp_Busy,
	_28gp_Busy,
	_29gp_Busy,
	_30gp_Busy,
	_31gp_Busy,
	_32gp_Busy,
	_33gp_Busy,
	_34gp_Busy,

#pragma endregion
#pragma region G1P
	G1P_Free,
	G1P_ManRouted,
	G1P_Busy,
#pragma endregion
#pragma region G2P
	G2P_Free,
	G2P_ManRouted,
	G2P_Busy,
#pragma endregion

#pragma endregion
#pragma region pultExpert
		M1_SELECT,
		M1_GREY,
		M1_WHITE,
		M3_SELECT,
		M3_GREY,
		M3_WHITE,
		WAY_1_FREE,
		WAY_1_ROUT,
		WAY_1_BUSY,
		WAY_2_FREE,
		WAY_2_ROUT,
		WAY_2_BUSY,
		WAY_3_FREE,
		WAY_3_ROUT,
		WAY_3_BUSY,
		WAY_4_FREE,
		WAY_4_ROUT,
		WAY_4_BUSY,
		WAY_5_FREE,
		WAY_5_ROUT,
		WAY_5_BUSY,
		WAY_6_FREE,
		WAY_6_ROUT,
		WAY_6_BUSY,
		WAY_7_FREE,
		WAY_7_ROUT,
		WAY_7_BUSY,
		WAY_NDP_FREE,
		WAY_NDP_ROUT,
		WAY_NDP_BUSY,
		WAY_NAP_FREE,
		WAY_NAP_ROUT,
		WAY_NAP_BUSY,
		WAY_2UP_FREE,	
		WAY_2UP_BUSY,
		WAY_1UP_FREE,
		WAY_1UP_BUSY,
		WAY_2PP_FREE,
		WAY_2PP_BUSY,
		WAY_1PP_FREE,
		WAY_1PP_BUSY,

#pragma endregion

#pragma region dop2

		M33_NM1B_Create,
		M33_NM2B_Create,
		M33_NM3B_Create,
		M33_NM4B_Create,

		M35_NM1B_Create,
		M35_NM2B_Create,
		M35_NM3B_Create,
		M35_NM4B_Create,
		M33,
		M35,

		CHM2A_NM1B_Create,
		CHM2A_NM2B_Create,
		CHM2A_NM3B_Create,
		CHM2A_NM4B_Create,

		CHM3A_NM1B_Create,
		CHM3A_NM2B_Create,
		CHM3A_NM3B_Create,
		CHM3A_NM4B_Create,

		CHM4A_NM1B_Create,
		CHM4A_NM2B_Create,
		CHM4A_NM3B_Create,
		CHM4A_NM4B_Create,

		CHM5A_NM1B_Create,
		CHM5A_NM2B_Create,
		CHM5A_NM3B_Create,
		CHM5A_NM4B_Create,

		NM1B_CHM2A_Create,
		NM2B_CHM2A_Create,
		NM3B_CHM2A_Create,
		NM4B_CHM2A_Create,

		NM1B_CHM3A_Create,
		NM2B_CHM3A_Create,
		NM3B_CHM3A_Create,
		NM4B_CHM3A_Create,

		NM1B_CHM4A_Create,
		NM2B_CHM4A_Create,
		NM3B_CHM4A_Create,
		NM4B_CHM4A_Create,

		NM1B_CHM5A_Create,
		NM2B_CHM5A_Create,
		NM3B_CHM5A_Create,
		NM4B_CHM5A_Create




#pragma endregion


};

std::string GetStrFromCommd(Commd commd);

UENUM(BlueprintType)
enum class TargetEndWay : uint8
{
	no UMETA(DisplayName = "no"),
	GP1 UMETA(DisplayName = "GP1"),
	GP2 UMETA(DisplayName = "GP2"),
	GP3 UMETA(DisplayName = "GP3"),
	GP4 UMETA(DisplayName = "GP4"),
	GP5 UMETA(DisplayName = "GP5"),
	GP6 UMETA(DisplayName = "GP6"),
	GP7 UMETA(DisplayName = "GP7"),
	GP8 UMETA(DisplayName = "GP8"),
	GP9 UMETA(DisplayName = "GP9"),
	GP10 UMETA(DisplayName = "GP10"),
	GP11 UMETA(DisplayName = "GP11"),
	GP12 UMETA(DisplayName = "GP12"),
	GP13 UMETA(DisplayName = "GP13"),
	GP14 UMETA(DisplayName = "GP14"),
	GP15 UMETA(DisplayName = "GP15"),
	GP16 UMETA(DisplayName = "GP16"),
	GP17 UMETA(DisplayName = "GP17"),
	GP18 UMETA(DisplayName = "GP18"),
	GP19 UMETA(DisplayName = "GP19"),
	GP20 UMETA(DisplayName = "GP20"),
	GP21 UMETA(DisplayName = "GP21"),
	GP22 UMETA(DisplayName = "GP22"),
	GP23 UMETA(DisplayName = "GP23"),
	GP24 UMETA(DisplayName = "GP24"),
	tupic_M3 UMETA(DisplayName = "tupic_M3"),
	tupic_M5 UMETA(DisplayName = "tupic_M5"),
	tupic_M6 UMETA(DisplayName = "tupic_M6"),
	tupic_M10 UMETA(DisplayName = "tupic_M10"),
	tupic_M12 UMETA(DisplayName = "tupic_M12"),
	tupic_M14 UMETA(DisplayName = "tupic_M14"),
	tupic_M16 UMETA(DisplayName = "tupic_M16"),
	tupic_M18 UMETA(DisplayName = "tupic_M18"),
	tupic_M20 UMETA(DisplayName = "tupic_M20"),
	tupic_M21 UMETA(DisplayName = "tupic_M21"),
	tupic_M27 UMETA(DisplayName = "tupic_M27"),
	tupic_M13 UMETA(DisplayName = "tupic_M13"),
	way_1 UMETA(DisplayName = "way_1"),
	way_2 UMETA(DisplayName = "way_2"),
	way_3 UMETA(DisplayName = "way_3"),
	way_4 UMETA(DisplayName = "way_4"),
	way_5 UMETA(DisplayName = "way_5"),
	way_6 UMETA(DisplayName = "way_6"),
	way_7 UMETA(DisplayName = "way_7"),

	way_1a UMETA(DisplayName = "way_1a"),
	way_2a UMETA(DisplayName = "way_2a"),
	way_3a UMETA(DisplayName = "way_3a"),
	way_4a UMETA(DisplayName = "way_4a"),
	way_5a UMETA(DisplayName = "way_5a"),

	way_1b UMETA(DisplayName = "way_1b"),
	way_2b UMETA(DisplayName = "way_2b"),
	way_3b UMETA(DisplayName = "way_3b"),
	way_4b UMETA(DisplayName = "way_4b"),

	tupic_M4 UMETA(DisplayName = "tupic_M4"),
	tupic_M7 UMETA(DisplayName = "tupic_M7"),
	tupic_M8 UMETA(DisplayName = "tupic_M8"),
	tupic_M9 UMETA(DisplayName = "tupic_M9"),
	w_P1G1P UMETA(DisplayName = "w_P1G1P"),
	w_P1G2P UMETA(DisplayName = "w_P1G2P"),
	w_G1P UMETA(DisplayName = "w_G1P"),
	w_G2P UMETA(DisplayName = "w_G2P"),
	w_301SP UMETA(DisplayName = "w_301SP"),
	w_GP UMETA(DisplayName = "w_GP"),
	w_303SP UMETA(DisplayName = "w_303SP"),
	w_305SP UMETA(DisplayName = "w_305SP"),
	w_305MA UMETA(DisplayName = "w_305MA"),
	w_305MB UMETA(DisplayName = "w_305MB"),
	w_305PA UMETA(DisplayName = "w_305PA"),
	w_305PB UMETA(DisplayName = "w_305PB"),
	w_307SP UMETA(DisplayName = "w_307SP"),
	w_307MA UMETA(DisplayName = "w_307MA"),
	w_307MB UMETA(DisplayName = "w_307MB"),
	w_307PA UMETA(DisplayName = "w_307PA"),
	w_307PB UMETA(DisplayName = "w_307PB"),
	w_87SP UMETA(DisplayName = "w_87SP"),
	w_87MA UMETA(DisplayName = "w_87MA"),
	w_87PA UMETA(DisplayName = "w_87PA"),
	w_89SP UMETA(DisplayName = "w_89SP"),
	w_89PA UMETA(DisplayName = "w_89PA"),
	w_89PB UMETA(DisplayName = "w_89PB"),
	w_89PV UMETA(DisplayName = "w_89PV"),
	w_91SP UMETA(DisplayName = "w_91SP"),
	w_91MA UMETA(DisplayName = "w_91MA"),
	w_91MB UMETA(DisplayName = "w_91MB"),
	w_91PA UMETA(DisplayName = "w_91PA"),
	w_91PB UMETA(DisplayName = "w_91PB"),
	w_93SP UMETA(DisplayName = "w_93SP"),
	w_95SP UMETA(DisplayName = "w_95SP"),
	w_95PA UMETA(DisplayName = "w_95PA"),
	w_95PB UMETA(DisplayName = "w_95PB"),
	w_95PV UMETA(DisplayName = "w_95PV"),
	w_97SP UMETA(DisplayName = "w_97SP"),
	w_97MA UMETA(DisplayName = "w_97MA"),
	w_97MB UMETA(DisplayName = "w_97MB"),
	w_97PA UMETA(DisplayName = "w_97PA"),
	w_97PB UMETA(DisplayName = "w_97PB"),

	w_99SP UMETA(DisplayName = "w_99SP"),
	w_99MA UMETA(DisplayName = "w_99MA"),
	w_99PA UMETA(DisplayName = "w_99PA"),

	w_101SP UMETA(DisplayName = "w_101SP"),
	w_101PA UMETA(DisplayName = "w_101PA"),
	w_101PB UMETA(DisplayName = "w_101PB"),
	w_101PV UMETA(DisplayName = "w_101PV"),

	w_103SP UMETA(DisplayName = "w_103SP"),
	w_103MA UMETA(DisplayName = "w_103MA"),
	w_103MB UMETA(DisplayName = "w_103MB"),
	w_103PA UMETA(DisplayName = "w_103PA"),
	w_103PB UMETA(DisplayName = "w_103PB"),

	w_105SP UMETA(DisplayName = "w_105SP"),
	w_105MA UMETA(DisMlayName = "w_105MA"),
	w_105MB UMETA(DisMlayName = "w_105MB"),
	w_105MV UMETA(DisMlayName = "w_105MV"),

	w_107SP UMETA(DisplayName = "w_107SP"),
	w_107MA UMETA(DisplayName = "w_107MA"),
	w_107MB UMETA(DisplayName = "w_107MB"),
	w_107PA UMETA(DisplayName = "w_107PA"),
	w_107PB UMETA(DisplayName = "w_107PB"),

	w_109SP UMETA(DisplayName = "w_109SP"),
	w_109MA UMETA(DisplayName = "w_109MA"),
	w_109PA UMETA(DisplayName = "w_109PA"),

	w_113SP UMETA(DisplayName = "w_113SP"),
	w_113PA UMETA(DisplayName = "w_113PA"),
	w_113PB UMETA(DisplayName = "w_113PB"),
	w_113PV UMETA(DisplayName = "w_113PV"),

	w_115SP UMETA(DisplayName = "w_115SP"),
	w_115MA UMETA(DisplayName = "w_115MA"),
	w_115MB UMETA(DisplayName = "w_115MB"),
	w_115PA UMETA(DisplayName = "w_115PA"),
	w_115PB UMETA(DisplayName = "w_115PB"),

	w_111SP UMETA(DisplayName = "w_111SP"),
	w_111MA UMETA(DisMlayName = "w_111MA"),
	w_111MB UMETA(DisMlayName = "w_111MB"),
	w_111MV UMETA(DisMlayName = "w_111MV"),

	w_117SP UMETA(DisplayName = "w_117SP"),
	w_117MA UMETA(DisplayName = "w_117MA"),
	w_117MB UMETA(DisplayName = "w_117MB"),
	w_117PA UMETA(DisplayName = "w_117PA"),
	w_117PB UMETA(DisplayName = "w_117PB"),

	w_119SP UMETA(DisplayName = "w_119SP"),
	w_119MA UMETA(DisplayName = "w_119MA"),
	w_119PA UMETA(DisplayName = "w_119PA"),

	w_121SP UMETA(DisplayName = "w_121SP"),

	w_123SP UMETA(DisplayName = "w_123SP"),
	w_123MA UMETA(DisMlayName = "w_123MA"),
	w_123MB UMETA(DisMlayName = "w_123MB"),
	w_123MV UMETA(DisMlayName = "w_123MV"),

	w_125SP UMETA(DisplayName = "w_125SP"),
	w_125MA UMETA(DisMlayName = "w_125MA"),
	w_125MB UMETA(DisMlayName = "w_125MB"),
	w_125MV UMETA(DisMlayName = "w_125MV"),

	w_127SP UMETA(DisplayName = "w_127SP"),
	w_127MA UMETA(DisplayName = "w_127MA"),
	w_127MB UMETA(DisplayName = "w_127MB"),
	w_127PA UMETA(DisplayName = "w_127PA"),
	w_127PB UMETA(DisplayName = "w_127PB"),

	w_129SP UMETA(DisplayName = "w_129SP"),
	w_129MA UMETA(DisplayName = "w_129MA"),
	w_129MB UMETA(DisplayName = "w_129MB"),
	w_129PA UMETA(DisplayName = "w_129PA"),
	w_129PB UMETA(DisplayName = "w_129PB"),
	w_11gp UMETA(DisplayName = "w_11gp"),
	w_12gp UMETA(DisplayName = "w_12gp"),
	w_13gp UMETA(DisplayName = "w_13gp"),
	w_14gp UMETA(DisplayName = "w_14gp"),
	w_15gp UMETA(DisplayName = "w_15gp"),
	w_16gp UMETA(DisplayName = "w_16gp"),
	w_17gp UMETA(DisplayName = "w_17gp"),
	w_18gp UMETA(DisplayName = "w_18gp"),
	w_19gp UMETA(DisplayName = "w_19gp"),
	w_20gp UMETA(DisplayName = "w_20gp"),
	w_21gp UMETA(DisplayName = "w_21gp"),
	w_22gp UMETA(DisplayName = "w_22gp"),
	w_23gp UMETA(DisplayName = "w_23gp"),
	w_24gp UMETA(DisplayName = "w_24gp"),
	w_25gp UMETA(DisplayName = "w_25gp"),
	w_26gp UMETA(DisplayName = "w_26gp"),
	w_27gp UMETA(DisplayName = "w_27gp"),
	w_28gp UMETA(DisplayName = "w_28gp"),
	w_29gp UMETA(DisplayName = "w_29gp"),
	w_30gp UMETA(DisplayName = "w_30gp"),
	w_31gp UMETA(DisplayName = "w_31gp"),
	w_32gp UMETA(DisplayName = "w_32gp"),
	w_33gp UMETA(DisplayName = "w_33gp"),
	w_34gp UMETA(DisplayName = "w_34gp"),

		M5_HunterGas UMETA(DisplayName = "M5_HunterGas"),
		M4_VoennayaChast UMETA(DisplayName = "M4_VoennayaChast"),
		M6_ShahtaImSatpaeva UMETA(DisplayName = "M6_ShahtaImSatpaeva"),
		M3_ShahtaAbaiskaya UMETA(DisplayName = "M3_ShahtaAbaiskaya"),
		M5_VagonnoeDepo UMETA(DisplayName = "M5_VagonnoeDepo"),
		M6_StankostroitelniyZavod UMETA(DisplayName = "M6_StankostroitelniyZavod"),
		M5_Lesopilka UMETA(DisplayName = "M5_Lesopilka"),
		M16_CementniyZavod UMETA(DisplayName = "M16_CementniyZavod"),
		M18_NeftebazaTerminal2 UMETA(DisplayName = "M18_NeftebazaTerminal2"),
		M20_ShahtaImBaiganova UMETA(DisplayName = "M20_ShahtaImBaiganova"),
		M7_ShahtaKaragandinskaya UMETA(DisplayName = "M7_ShahtaKaragandinskaya"),
		M5_ObogatitFabrikaKaragandinskaya UMETA(DisplayName = "M5_ObogatitFabrikaKaragandinskaya"),
		M6_SkladVzrivIOpasnihVeschestv UMETA(DisplayName = "M6_SkladVzrivIOpasnihVeschestv"),
		M8_ZavodGBI UMETA(DisplayName = "M8_ZavodGBI"),
		M5_Rudnik UMETA(DisplayName = "M5_Rudnik"),
		M6_ChimZavod UMETA(DisplayName = "M6_ChimZavod"),
		M7_Hlebozavod UMETA(DisplayName = "M7_Hlebozavod"),
		M8_ZavodMetalloizdeliy UMETA(DisplayName = "M8_ZavodMetalloizdeliy"),
		M5_AvtomobZavod UMETA(DisplayName = "M5_AvtomobZavod"),
		M6_ShahtaSaranskaya UMETA(DisplayName = "M6_ShahtaSaranskaya"),
		M7_ObogatitFabrikaVostochnaya UMETA(DisplayName = "M7_ObogatitFabrikaVostochnaya"),
		M9_AvtomobZavod UMETA(DisplayName = "M9_AvtomobZavod"),
		M23_Elevator1 UMETA(DisplayName = "M23_Elevator1"),
		M25_UgolniyKarier UMETA(DisplayName = "M25_UgolniyKarier"),
		M26_Neftebaza1 UMETA(DisplayName = "M26_Neftebaza1"),
		M24_MashinostroiyZavod UMETA(DisplayName = "M24_MashinostroiyZavod"),
		M3_ZavodRGShO UMETA(DisplayName = "M3_ZavodRGShO"),
		M5_ShahtaImKuzenbaeva UMETA(DisplayName = "M5_ShahtaImKuzenbaeva"),
		M6_ZavodTeplopribor UMETA(DisplayName = "M6_ZavodTeplopribor"),
		M7_ShinniyZavod UMETA(DisplayName = "M7_ShinniyZavod"),
		M4_ZavodMouschihSredstv UMETA(DisplayName = "M4_ZavodMouschihSredstv"),
		M3_GelezorudniyKarier UMETA(DisplayName = "M3_GelezorudniyKarier"),
		M3_GelezorudniyKarier1 UMETA(DisplayName = "M3_GelezorudniyKarier1"),
		M5_MiacoKombinat UMETA(DisplayName = "M5_MiacoKombinat"),
		M6_ZavodRGTO UMETA(DisplayName = "M6_ZavodRGTO"),
		M3_OptoviySklad UMETA(DisplayName = "M3_OptoviySklad"),
		M3_GelezorudniyKarier2 UMETA(DisplayName = "M3_GelezorudniyKarier2"),
		_1_nadvig UMETA(DisplayName = "_1_nadvig"),
		_2_nadvig UMETA(DisplayName = "_2_nadvig"),

};
USTRUCT(BlueprintType)
struct FSort
{
	GENERATED_USTRUCT_BODY()

		//UPROPERTY(blueprintReadWrite)
		std::string name;

	UPROPERTY(blueprintReadWrite)
		bool stat = false;

};
USTRUCT(BlueprintType)
struct FVagon
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		bool Engine = false;
	UPROPERTY(BlueprintReadWrite)
		ETypeVagon vagonType;
	UPROPERTY(BlueprintReadWrite)
		int IdentificatorScepka = 0;
	UPROPERTY(BlueprintReadWrite)
		bool InSostav = false;
	UPROPERTY(BlueprintReadWrite)
		int massaVagon = 0;

	FVagon()
	{
		vagonType = ETypeVagon::Cisterna;
		IdentificatorScepka = 0;
		InSostav = false;
		massaVagon = 1000;
	}
	FVagon(ETypeVagon vagonTyp)
	{
		vagonType = vagonTyp;
	}
	FVagon(ETypeVagon vagonTyp, int scepka)
	{
		vagonType = vagonTyp;
		IdentificatorScepka = scepka;
	}
	FVagon(ETypeVagon vagonTyp, bool inSost)
	{
		vagonType = vagonTyp;
		InSostav = inSost;
	}
	FVagon(ETypeVagon vagonTyp, bool inSost, int scepka)
	{
		vagonType = vagonTyp;
		InSostav = inSost;
		IdentificatorScepka = scepka;
	}
	FVagon(ETypeVagon vagonTyp, int scepka, bool inSost, int massa)
	{
		vagonType = vagonTyp;
		IdentificatorScepka = scepka;
		InSostav = inSost;
		massaVagon = massa;
	}
};
USTRUCT(BlueprintType)
struct FStudent
{
	GENERATED_USTRUCT_BODY()


		wchar_t nameStud[50] = L"??";
	wchar_t familyStud[50] = L"??";
	wchar_t groupStud[50] = L"??";
	int ballStud = 0;

};
USTRUCT(BlueprintType)
struct FDataStudents
{
	GENERATED_USTRUCT_BODY()


		UPROPERTY(BlueprintReadWrite)
		FStudent dispetcher1;
	UPROPERTY(BlueprintReadWrite)
		FStudent dispetcher2;
	UPROPERTY(BlueprintReadWrite)
		FStudent karabas;
	UPROPERTY(BlueprintReadWrite)
		FStudent karaganozek;
	UPROPERTY(BlueprintReadWrite)
		FStudent karaganda;
	UPROPERTY(BlueprintReadWrite)
		FStudent maykudyk;
	UPROPERTY(BlueprintReadWrite)
		FStudent ganakaraganda;
	UPROPERTY(BlueprintReadWrite)
		FStudent karaganda1;
	UPROPERTY(BlueprintReadWrite)
		FStudent karaganda2;
	UPROPERTY(BlueprintReadWrite)
		FStudent rasporiaditelnaya;
	UPROPERTY(BlueprintReadWrite)
		FStudent dubovskaya;
	UPROPERTY(BlueprintReadWrite)
		FStudent ganaaul;
	UPROPERTY(BlueprintReadWrite)
		FStudent radiouzel;
	UPROPERTY(BlueprintReadWrite)
		FStudent karagandaDSP;
	UPROPERTY(BlueprintReadWrite)
		FStudent karagandaDSC;

};
#pragma endregion
#pragma region Class Definition

#pragma region ClassRouter

class Router
{

public:

	int sizeRouter;


	FElm** arrRouter;
	Router();
#pragma region SET ROUTER

	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27, FElm& elm28);
	void SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27, FElm& elm28, FElm& elm29);

#pragma endregion	
	void SetSvetoforDefault();
	void ToRouted(EdopStat dopstat);
	void ToRoutedInThread(EdopStat dopstat);
	void ToRoutedToWayBusyInThread(EdopStat dopstat);
	void ToRoutedToWayBusy(EdopStat dopstat);
	void Routed();
	void ManRouted();
	void ManSortRouted();
	EdopStat GetRouterDopstat();
	void DeleteDopStat();
	void ManRoutedToWayBusy();
	bool IsFree();
	bool IsManevrFreeToBusyWay();
	void ToDestroy();
	void Destroy();



	~Router();

};

#pragma endregion
#pragma region ClassOtcep

struct FOtcep
{
	Station station;
	ETypeVagon typevagon;
	short count;
	TargetEndWay wayEnd;

	//FOtcep();


	//установить отцеп по параметрам
	void SetOtcep(ETypeVagon typevag, short countvagon, Station stationTarget, TargetEndWay wayEndTarget);
	//установить отцеп по параметрам другого отцепа
	void SetOtcep(FOtcep otcepForAdd);
	//удалить отцеп
	void SetOtcepFree();
	//тип вагонов в отцепе
	ETypeVagon GetVagonType();
	//количество вагонов в отцепе
	short GetVagonCount();
	//убавить количество вагонов в отцепе (при недопустимом вычитателе операция не совершается  и возвращается false)
	bool MinusVagonCount(int countvagForMinus);
	//добавить количество вагонов в отцепе (при превышении суммы операция не совершается  и возвращается false)
	bool PlusVagonCount(int countvagForPlus);
	//станция назначения отцепа
	Station GetStationTarget();
	//конкретный идентификатор назначения отцепа на станции назначения
	TargetEndWay GetWayEndTarget();
	//доступность отцепа для добавления
	bool IsOtcepFree();
	/*FOtcep operator = (const FOtcep& otcep);*/
	bool operator == (const FOtcep& otherOtcep);
	bool operator != (const FOtcep& otherOtcep);


};

#pragma endregion
#pragma region ClassLoco

struct Loco
{
	short numLoc;

public:

	Loco();
	void SetNumber(short num);
	int GetNumber();
};

#pragma endregion
#pragma region ClassTrain
class Train
{
public:
	//четный локомотив
	Loco locoEven;
	//нечетный локомотив
	Loco locoOdd;
	//данный поезд подходит для установки на любую станцию
	bool IsReady;
	//данный поезд установлен - использован
	bool OnRels;
	short number;
	//Station toStation;
	FOtcep otcep_1;
	FOtcep otcep_2;
	FOtcep otcep_3;
	FOtcep otcep_4;
	FOtcep otcep_5;
	FOtcep otcep_6;
	FOtcep otcep_7;
	FOtcep otcep_8;
	FOtcep otcep_9;
	FOtcep otcep_10;

	//FOtcep** arrOtcep;




	/*Train();
	Train(const Train& other);
	~Train();*/
	FOtcep* GetOtcepFromNumber(int numberOtcep);
	FOtcep* GetFreeOtcep();
	FOtcep* GetHeadOtcep();
	FOtcep* GetTailOtcep();
	//установить номер данного поезда
	void SetNumber(short numTrain);
	//получить номер данного поезда int
	int GetNumber();
	//получить номер данного поезда Ftext
	FString GetTextNumber();
	//установить номер нечетного локомотива (удачно при его отсутствиит.е. =0)
	bool SetNumberLocoOdd(short numLocoOdd);
	//установить номер четного локомотива (удачно при его отсутствии т.е. =0)
	bool SetNumberLocoEven(short numLocoEven);
	//получить номер нечетного локомотива
	short GetNumberLocoOdd();
	//получить номер четного локомотива
	short GetNumberLocoEven();
	//получить количество установленных отцепов
	int GetOtcepCount();
	//количество вагонов в поезде
	int GetVagonsCount();
	void SetTrain(Train trainForCopy);

	int GetCountVagonInOtcep(ENumberOtcep numberOtcep);
	ETypeVagon GetTypeVagonInOtcep(ENumberOtcep numberOtcep);
	Station GetStationTargetInOtcep(ENumberOtcep numberOtcep);
	TargetEndWay GetEndWayInOtcep(ENumberOtcep numberOtcep);

	ETypeVagon GetTypeVagon(int numOtcep);
	Station GetStationTarget(int numOtcep);
	TargetEndWay GetEndWay(int numOtcep);

	//возвращает тип вагонов в отцепе в text
	FText GetTypeVagonInOtcep(int numOtcep);
	FText GetStationTargetInOtcep(int numOtcep);
	FText GetEndWayInOtcep(int numOtcep);
	//простая установка текущего свободного отцепа

	bool SetOtcep(ETypeVagon typevagon, int count, Station station, TargetEndWay endWay);
	//простая установка текущего свободного отцепа
	bool SetOtcep(FOtcep otcep);

	//установить данный поезд свободным
	void SetTrainFree();
	void SetOnRelsFalse();
	//установить отцепы данного поезда свободными
	void SetAllOtcepFree();
	//сделать данный поезд готовым для установки на станцию
	void SetTrainReady();
	//свободен ли поезд
	void SetOnRels();
	//свободен ли поезд
	bool IsTrainFree();
	//готов ли поезд для использования
	bool IsTrainReady();
	//использован ли поезд (поставлен на рельсы)
	bool IsTrainOnRels();
	//есть ли хотя-бы один локомотив у зтого поезда
	bool IsThereOneAnyLoco();
	//имеется ли у поезда нечетный локомотив
	bool IsThereLocoOdd();
	//имеется ли у поезда четный локомотив
	bool IsThereLocoEven();
	//сдвинуть отцепы от головы на 1 к хвосту при наличии свободного хвоста
	bool SdvigOtcepsToTail();
	//сдвинуть отцепы от хвоста на 1 к голове при наличии свободного головного
	bool SdvigOtcepsToHead();
	void SwapHeadAndTail();
	bool CheckPossAddTrain(Train  groupForAdd);


	bool AddOtcepToHead(FOtcep otcep);
	bool AddOtcepToTail(FOtcep otcep);
	bool AddTrain(Train& trainForAdd);
	//удаляет из поезда найденый совпадающий отцеп true при удаче
	bool RemoveOtcep(FOtcep otcep);
	FOtcep GetAndMinusTailOtcep();
	FOtcep GetAndMinusHeadOtcep();
	static int IntFromECountVagons(ECountVagons countVagons);
	static ENumberOtcep GetNumberOtcepFromInt(int numOtcep);
	FText GetTypeVagonINOtcep(ENumberOtcep numberOtcep);

	int GetNumberOtcepFree();


};
#pragma endregion
UENUM(BlueprintType)
enum class Way : uint8
{
	w_P1G1P UMETA(DisplayName = "w_P1G1P"),
	w_P1G2P UMETA(DisplayName = "w_P1G2P"),
	w_G1P UMETA(DisplayName = "w_G1P"),
	w_G2P UMETA(DisplayName = "w_G2P"),
	w_301SP UMETA(DisplayName = "w_301SP"),
	w_GP UMETA(DisplayName = "w_GP"),
	w_303SP UMETA(DisplayName = "w_303SP"),
	w_305SP UMETA(DisplayName = "w_305SP"),
	w_305MA UMETA(DisplayName = "w_305MA"),
	w_305MB UMETA(DisplayName = "w_305MB"),
	w_305PA UMETA(DisplayName = "w_305PA"),
	w_305PB UMETA(DisplayName = "w_305PB"),
	w_307SP UMETA(DisplayName = "w_307SP"),
	w_307MA UMETA(DisplayName = "w_307MA"),
	w_307MB UMETA(DisplayName = "w_307MB"),
	w_307PA UMETA(DisplayName = "w_307PA"),
	w_307PB UMETA(DisplayName = "w_307PB"),
	w_87SP UMETA(DisplayName = "w_87SP"),
	w_87MA UMETA(DisplayName = "w_87MA"),
	w_87PA UMETA(DisplayName = "w_87PA"),
	w_89SP UMETA(DisplayName = "w_89SP"),
	w_89PA UMETA(DisplayName = "w_89PA"),
	w_89PB UMETA(DisplayName = "w_89PB"),
	w_89PV UMETA(DisplayName = "w_89PV"),
	w_91SP UMETA(DisplayName = "w_91SP"),
	w_91MA UMETA(DisplayName = "w_91MA"),
	w_91MB UMETA(DisplayName = "w_91MB"),
	w_91PA UMETA(DisplayName = "w_91PA"),
	w_91PB UMETA(DisplayName = "w_91PB"),
	w_93SP UMETA(DisplayName = "w_93SP"),
	w_95SP UMETA(DisplayName = "w_95SP"),
	w_95PA UMETA(DisplayName = "w_95PA"),
	w_95PB UMETA(DisplayName = "w_95PB"),
	w_95PV UMETA(DisplayName = "w_95PV"),
	w_97SP UMETA(DisplayName = "w_97SP"),
	w_97MA UMETA(DisplayName = "w_97MA"),
	w_97MB UMETA(DisplayName = "w_97MB"),
	w_97PA UMETA(DisplayName = "w_97PA"),
	w_97PB UMETA(DisplayName = "w_97PB"),

	w_99SP UMETA(DisplayName = "w_99SP"),
	w_99MA UMETA(DisplayName = "w_99MA"),
	w_99PA UMETA(DisplayName = "w_99PA"),

	w_101SP UMETA(DisplayName = "w_101SP"),
	w_101PA UMETA(DisplayName = "w_101PA"),
	w_101PB UMETA(DisplayName = "w_101PB"),
	w_101PV UMETA(DisplayName = "w_101PV"),

	w_103SP UMETA(DisplayName = "w_103SP"),
	w_103MA UMETA(DisplayName = "w_103MA"),
	w_103MB UMETA(DisplayName = "w_103MB"),
	w_103PA UMETA(DisplayName = "w_103PA"),
	w_103PB UMETA(DisplayName = "w_103PB"),

	w_105SP UMETA(DisplayName = "w_105SP"),
	w_105MA UMETA(DisMlayName = "w_105MA"),
	w_105MB UMETA(DisMlayName = "w_105MB"),
	w_105MV UMETA(DisMlayName = "w_105MV"),

	w_107SP UMETA(DisplayName = "w_107SP"),
	w_107MA UMETA(DisplayName = "w_107MA"),
	w_107MB UMETA(DisplayName = "w_107MB"),
	w_107PA UMETA(DisplayName = "w_107PA"),
	w_107PB UMETA(DisplayName = "w_107PB"),

	w_109SP UMETA(DisplayName = "w_109SP"),
	w_109MA UMETA(DisplayName = "w_109MA"),
	w_109PA UMETA(DisplayName = "w_109PA"),

	w_113SP UMETA(DisplayName = "w_113SP"),
	w_113PA UMETA(DisplayName = "w_113PA"),
	w_113PB UMETA(DisplayName = "w_113PB"),
	w_113PV UMETA(DisplayName = "w_113PV"),

	w_115SP UMETA(DisplayName = "w_115SP"),
	w_115MA UMETA(DisplayName = "w_115MA"),
	w_115MB UMETA(DisplayName = "w_115MB"),
	w_115PA UMETA(DisplayName = "w_115PA"),
	w_115PB UMETA(DisplayName = "w_115PB"),

	w_111SP UMETA(DisplayName = "w_111SP"),
	w_111MA UMETA(DisMlayName = "w_111MA"),
	w_111MB UMETA(DisMlayName = "w_111MB"),
	w_111MV UMETA(DisMlayName = "w_111MV"),

	w_117SP UMETA(DisplayName = "w_117SP"),
	w_117MA UMETA(DisplayName = "w_117MA"),
	w_117MB UMETA(DisplayName = "w_117MB"),
	w_117PA UMETA(DisplayName = "w_117PA"),
	w_117PB UMETA(DisplayName = "w_117PB"),

	w_119SP UMETA(DisplayName = "w_119SP"),
	w_119MA UMETA(DisplayName = "w_119MA"),
	w_119PA UMETA(DisplayName = "w_119PA"),

	w_121SP UMETA(DisplayName = "w_121SP"),

	w_123SP UMETA(DisplayName = "w_123SP"),
	w_123MA UMETA(DisMlayName = "w_123MA"),
	w_123MB UMETA(DisMlayName = "w_123MB"),
	w_123MV UMETA(DisMlayName = "w_123MV"),

	w_125SP UMETA(DisplayName = "w_125SP"),
	w_125MA UMETA(DisMlayName = "w_125MA"),
	w_125MB UMETA(DisMlayName = "w_125MB"),
	w_125MV UMETA(DisMlayName = "w_125MV"),

	w_127SP UMETA(DisplayName = "w_127SP"),
	w_127MA UMETA(DisplayName = "w_127MA"),
	w_127MB UMETA(DisplayName = "w_127MB"),
	w_127PA UMETA(DisplayName = "w_127PA"),
	w_127PB UMETA(DisplayName = "w_127PB"),

	w_129SP UMETA(DisplayName = "w_129SP"),
	w_129MA UMETA(DisplayName = "w_129MA"),
	w_129MB UMETA(DisplayName = "w_129MB"),
	w_129PA UMETA(DisplayName = "w_129PA"),
	w_129PB UMETA(DisplayName = "w_129PB"),
	w_1gp UMETA(DisplayName = "w_1gp"),
	w_2gp UMETA(DisplayName = "w_2gp"),
	w_3gp UMETA(DisplayName = "w_3gp"),
	w_4gp UMETA(DisplayName = "w_4gp"),
	w_5gp UMETA(DisplayName = "w_5gp"),
	w_6gp UMETA(DisplayName = "w_6gp"),
	w_7gp UMETA(DisplayName = "w_7gp"),
	w_8gp UMETA(DisplayName = "w_8gp"),
	w_9gp UMETA(DisplayName = "w_9gp"),
	w_10gp UMETA(DisplayName = "w_10gp"),
	w_11gp UMETA(DisplayName = "w_11gp"),
	w_12gp UMETA(DisplayName = "w_12gp"),
	w_13gp UMETA(DisplayName = "w_13gp"),
	w_14gp UMETA(DisplayName = "w_14gp"),
	w_15gp UMETA(DisplayName = "w_15gp"),
	w_16gp UMETA(DisplayName = "w_16gp"),
	w_17gp UMETA(DisplayName = "w_17gp"),
	w_18gp UMETA(DisplayName = "w_18gp"),
	w_19gp UMETA(DisplayName = "w_19gp"),
	w_20gp UMETA(DisplayName = "w_20gp"),
	w_21gp UMETA(DisplayName = "w_21gp"),
	w_22gp UMETA(DisplayName = "w_22gp"),
	w_23gp UMETA(DisplayName = "w_23gp"),
	w_24gp UMETA(DisplayName = "w_24gp")

};
USTRUCT(BlueprintType)
struct FDataZaprosAddOtcep
{
	GENERATED_USTRUCT_BODY()

		int endWay = 0;
	FOtcep otcep;
};

USTRUCT(BlueprintType)
struct FDataZaprosMinusOtcep
{
	GENERATED_USTRUCT_BODY()

		int startWay = 0;
	FOtcep otcep;
};
struct ZaprosFromSortirovka
{
	int numEndWay = 0;
	int numOldTrain = 0;
	FOtcep otcep = {};
};

#pragma region ClassTrainReestr

struct TrainReestr : public Train
{

#pragma region Trains
	Train train_01;
	Train train_02;
	Train train_03;
	Train train_04;
	Train train_05;
	Train train_06;
	Train train_07;
	Train train_08;
	Train train_09;
	Train train_10;
	Train train_11;
	Train train_12;
	Train train_13;
	Train train_14;
	Train train_15;
	Train train_16;
	Train train_17;
	Train train_18;
	Train train_19;
	Train train_20;
	Train train_21;
	Train train_22;
	Train train_23;
	Train train_24;
	Train train_25;
	Train train_26;
	Train train_27;
	Train train_28;
	Train train_29;
	Train train_30;
	Train train_31;
	Train train_32;
	Train train_33;
	Train train_34;
	Train train_35;
	Train train_36;
	Train train_37;
	Train train_38;
	Train train_39;
	Train train_40;
	Train train_41;
	Train train_42;
	Train train_43;
	Train train_44;
	Train train_45;
	Train train_46;
	Train train_47;
	Train train_48;
	Train train_49;
	Train train_50;
#pragma endregion
#pragma region 100

	Train groupOtcep_01;
	Train groupOtcep_02;
	Train groupOtcep_03;
	Train groupOtcep_04;
	Train groupOtcep_05;
	Train groupOtcep_06;
	Train groupOtcep_07;
	Train groupOtcep_08;
	Train groupOtcep_09;
	Train groupOtcep_10;
	Train groupOtcep_11;
	Train groupOtcep_12;
	Train groupOtcep_13;
	Train groupOtcep_14;
	Train groupOtcep_15;
	Train groupOtcep_16;
	Train groupOtcep_17;
	Train groupOtcep_18;
	Train groupOtcep_19;
	Train groupOtcep_20;
	Train groupOtcep_21;
	Train groupOtcep_22;
	Train groupOtcep_23;
	Train groupOtcep_24;
	Train groupOtcep_25;
	Train groupOtcep_26;
	Train groupOtcep_27;
	Train groupOtcep_28;
	Train groupOtcep_29;
	Train groupOtcep_30;
	Train groupOtcep_31;
	Train groupOtcep_32;
	Train groupOtcep_33;
	Train groupOtcep_34;
	Train groupOtcep_35;
	Train groupOtcep_36;
	Train groupOtcep_37;
	Train groupOtcep_38;
	Train groupOtcep_39;
	Train groupOtcep_40;
	Train groupOtcep_41;
	Train groupOtcep_42;
	Train groupOtcep_43;
	Train groupOtcep_44;
	Train groupOtcep_45;
	Train groupOtcep_46;
	Train groupOtcep_47;
	Train groupOtcep_48;
	Train groupOtcep_49;
	Train groupOtcep_50;
	Train groupOtcep_51;
	Train groupOtcep_52;
	Train groupOtcep_53;
	Train groupOtcep_54;
	Train groupOtcep_55;
	Train groupOtcep_56;
	Train groupOtcep_57;
	Train groupOtcep_58;
	Train groupOtcep_59;
	Train groupOtcep_60;
	Train groupOtcep_61;
	Train groupOtcep_62;
	Train groupOtcep_63;
	Train groupOtcep_64;
	Train groupOtcep_65;
	Train groupOtcep_66;
	Train groupOtcep_67;
	Train groupOtcep_68;
	Train groupOtcep_69;
	Train groupOtcep_70;
	Train groupOtcep_71;
	Train groupOtcep_72;
	Train groupOtcep_73;
	Train groupOtcep_74;
	Train groupOtcep_75;
	Train groupOtcep_76;
	Train groupOtcep_77;
	Train groupOtcep_78;
	Train groupOtcep_79;
	Train groupOtcep_80;
	Train groupOtcep_81;
	Train groupOtcep_82;
	Train groupOtcep_83;
	Train groupOtcep_84;
	Train groupOtcep_85;
	Train groupOtcep_86;
	Train groupOtcep_87;
	Train groupOtcep_88;
	Train groupOtcep_89;
	Train groupOtcep_90;
	Train groupOtcep_91;
	Train groupOtcep_92;
	Train groupOtcep_93;
	Train groupOtcep_94;
	Train groupOtcep_95;
	Train groupOtcep_96;
	Train groupOtcep_97;
	Train groupOtcep_98;
	Train groupOtcep_99;
	Train groupOtcep_100;

#pragma endregion	
	/*TrainReestr();
	TrainReestr(const TrainReestr& other);*/

	void SetNumbersGroupOtcep();

	bool GetOrSetTrainAndAddOtcep(int gp_way, ETypeVagon vagonType, int vadonCount, Station stationTarget, TargetEndWay endWay);
	Train* GetFreeTrain();
	Train* GetFreeTrainForZaprosSort();
	bool SetNumberTrain(int oldNum, int newNum);
	bool CheckUniqueNumberTrain(int numTrain);
	std::vector<int> GetArrNumTrainInReestr();

	std::vector<Train*> GetArrTrainInReestr();
	std::vector<Train*> GetArrGroupOtcepInReestr();

	//массив номеров поездов реестра
	TArray<FString> GetNumbersAllTrain();

	//массив номеров поездов реестра onRels = true
	TArray<FString> GetNumbersOnRelsTrain();

	//массив номеров поездов реестра onRels = false
	TArray<FString> GetNumbersReadyTrain();


	bool SetTrainOtcep(ENumberTrain numTrain, ETypeVagon typeVagon, ECountVagons countVagons, Station stationTarget, TargetEndWay endWayTarget);
	bool SetTrainFree(ENumberTrain numTrain);

	int GetCountOtcep(int numTrain);
	Train* GetTrain(int numTrain);
	Train* GetTrain(FString numTrain);

	bool IsTrainOnRels(int numTrain);
	bool IsNumberFree(int num);

	//получить int из перечисления
	int GenIntNumTrainFromEnumberTrain(ENumberTrain numberTrain);

	bool SetReestr(TrainReestr forCopyReestr);

	Train* GetGroupOtcep(int number);

	void SetDefaultNumbersForTrain();

	void SetTrainReady(FString numTrain);

	ETypeVagon GetTypeVagonOfOtcep(int numTrain, int numOtcep);
	int GetCountVagonOfOtcep(int numTrain, int numOtcep);

	Train* GetFreeOddGroupOtcepFromReestr();

	Train* GetFreeEvenGroupOtcepFromReestr();

	// поезд для вычитания и возвращает указатель нечетной отсоединенной группы вагонов
	Train* MinusToOdd(Train* operTrain, int countVagForMinus);
	//принимает номер поезда для вычитания и возвращает указатель четной отсоединенной группы вагонов
	Train* MinusToEven(Train* operTrain, int countVagForMinus);

	//проверяет возможность стыковки главного поезда и группы 
	bool CheckPossAddGroupOtcepToTrain(Train* mainTrain, Train* addGroup, bool isRouterOdd);
	// реально стыкует поезда 
	bool AddGroupOtcepToTrain(Train* mainTrain, Train* addGroup, bool isRouterOdd);

	void SetAllTrainFree();

	void CreateTrainExamples_C_1_1();
	void CreateTrainExamplesForSort();
};

#pragma endregion
#pragma region ClassOperDataFromStation

class OperDataFromStation
{
public:

	OperDataFromStation();
	bool SetOperCountVag(int countVag, Station station);
	int GetOperCountVag(Station station);

private:
	int operCountVag_Karabas;
	int operCountVag_Karaganozek;
	int operCountVag_Karaganda;
	int operCountVag_Maykuduk;
	int operCountVag_GanaKaraganda;
	int operCountVag_Karaganda_1;
	int operCountVag_Karaganda_2;
	int operCountVag_Rasporiaditelnaya;
	int operCountVag_Dubovskaya;
	int operCountVag_Radiouzel;
	int operCountVag_GanaAul;
};

#pragma endregion

#pragma endregion


#pragma region Station Structures Definitions

#pragma region Curator
USTRUCT(BlueprintType)
struct Fst_curat
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
	UPROPERTY(BlueprintReadWrite)
		int SwitchingTime; //время переключения стрелки
	UPROPERTY(BlueprintReadWrite)
		int LimTimeWaitSwit;//время ожидания функцией x_CreateEnd() пока переводятся стрелки при формировании станционного маршрута
								//если стрелки не перевелись за этот предел времени, то маршрут не будет создан и потребуется ИР
	UPROPERTY(blueprintReadWrite)
		int timeDestroyRouter;//время разрушения мвршрута в сек
	UPROPERTY(BlueprintReadWrite)
		int timeforRouterRun;
	UPROPERTY(BlueprintReadWrite)
		int timeIscusstvennayaRazdelka;
	UPROPERTY(BlueprintReadWrite)
		bool IsKaraganozekVoiceFromPultCommandSet = true;
	UPROPERTY(BlueprintReadWrite)
		bool IsKaraganozekVoiceToPultCommandSet = false;
	UPROPERTY(BlueprintReadWrite)
		bool IsKarabasVoiceFromPultCommandSet = true;
	UPROPERTY(BlueprintReadWrite)
		bool IsKarabasVoiceToPultCommandSet = false;
	UPROPERTY(BlueprintReadWrite)
		bool IsDSPGVoiceFromPultCommandSet = true;
	UPROPERTY(BlueprintReadWrite)
		bool IsDSPGVoiceToPultCommandSet = false;
};
#pragma endregion
#pragma region Dispetcher_1
USTRUCT(BlueprintType)
struct Fst_disp1
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

#pragma endregion
#pragma region Svetofors

#pragma endregion
#pragma region Strelki

#pragma endregion
#pragma region Ways

#pragma endregion
		UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
};
#pragma endregion
#pragma region Dispetcher_2
USTRUCT(BlueprintType)
struct Fst_disp2
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

#pragma endregion
#pragma region Svetofors

#pragma endregion
#pragma region Strelki

#pragma endregion
#pragma region Ways

#pragma endregion
		UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
};
#pragma endregion
#pragma region Radiouzel
USTRUCT(BlueprintType)
struct Fst_raduzel
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals
		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;

	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;


	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;


#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;

#pragma endregion
#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;

#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;

	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;

	UPROPERTY(BlueprintReadWrite)
		FElm _s11;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;

#pragma endregion
#pragma region Semafornie

	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s7;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s9;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s3;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s4;


#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;

	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_tupic;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;

#pragma endregion
#pragma endregion	
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
#pragma region Added



#pragma endregion
};
#pragma endregion
#pragma region  Dubovskaya
USTRUCT(BlueprintType)
struct FSt_dbs
{
	GENERATED_USTRUCT_BODY()

#pragma region Signals
		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;

	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;


	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;


#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;

#pragma endregion
#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;

#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;

	UPROPERTY(BlueprintReadWrite)
		FElm _s6;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s6;


#pragma endregion
#pragma region Semafornie

	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s3;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s6;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;

	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_tupic;

#pragma endregion
#pragma endregion	
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
};
#pragma endregion
#pragma region Maykuduk
USTRUCT(BlueprintType)
struct Fst_mkd
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;

	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH6;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5;
	UPROPERTY(BlueprintReadWrite)
		FElm _N6;

#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;
	UPROPERTY(BlueprintReadWrite)
		FElm _str12;
	UPROPERTY(BlueprintReadWrite)
		FElm _str13;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str15;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
	UPROPERTY(BlueprintReadWrite)
		FElm _str17;
	UPROPERTY(BlueprintReadWrite)
		FElm _str18;
	UPROPERTY(BlueprintReadWrite)
		FElm _str19;
	UPROPERTY(BlueprintReadWrite)
		FElm _str20;

#pragma endregion
#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;


	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;


#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s19;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_s18;

#pragma endregion
#pragma region Semafornie

	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s16;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH6_s17;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5_s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _N6_s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _m7_s19;
	UPROPERTY(BlueprintReadWrite)
		FElm _m8_s20;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;
	UPROPERTY(BlueprintReadWrite)
		FElm _w6;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8_tupic;

#pragma endregion
#pragma endregion	
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;

};
#pragma endregion
#pragma region GanaAul
USTRUCT(BlueprintType)
struct Fst_ganaul
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals
		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		FElm PereezdZakrit;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		int NumberRouter;
	UPROPERTY(BlueprintReadWrite)
		int timeforRouterRun;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5;
#pragma endregion
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;
	UPROPERTY(BlueprintReadWrite)
		FElm _str12;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
#pragma endregion
#pragma region Ways

#pragma region Pribligenie
	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP_Raspor;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH_KARAGANOZEK;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP_KARAGAOZEK;

#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10_s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s10;

#pragma endregion
#pragma region Semafornie
	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s12;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5_s7;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5_s16;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;

	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w1;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w2;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w3;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w4;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w5;

	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;
#pragma endregion

#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;

};
#pragma endregion
#pragma region  Karaganozek
USTRUCT(BlueprintType)
struct FSt_krgzk
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHR;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool IdetNabor;
	UPROPERTY(BlueprintReadWrite)
		bool isDay;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Goodok;
	UPROPERTY(BlueprintReadWrite)
		int NumberRouter;
	UPROPERTY(BlueprintReadWrite)
		int timeforRouterRun;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHR;
	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M10;
	UPROPERTY(BlueprintReadWrite)
		FElm _M12;
	UPROPERTY(BlueprintReadWrite)
		FElm _M14;
	UPROPERTY(BlueprintReadWrite)
		FElm _M16;
	UPROPERTY(BlueprintReadWrite)
		FElm _M18;
	UPROPERTY(BlueprintReadWrite)
		FElm _M20;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH6;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH7;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5;
	UPROPERTY(BlueprintReadWrite)
		FElm _N6;
	UPROPERTY(BlueprintReadWrite)
		FElm _N7;
#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;
	UPROPERTY(BlueprintReadWrite)
		FElm _str12;
	UPROPERTY(BlueprintReadWrite)
		FElm _str13;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str15;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
	UPROPERTY(BlueprintReadWrite)
		FElm _str17;
	UPROPERTY(BlueprintReadWrite)
		FElm _str18;
	UPROPERTY(BlueprintReadWrite)
		FElm _str20;
	UPROPERTY(BlueprintReadWrite)
		FElm _str22;
	UPROPERTY(BlueprintReadWrite)
		FElm _str24;
	UPROPERTY(BlueprintReadWrite)
		FElm _str26;
	UPROPERTY(BlueprintReadWrite)
		FElm _str28;
	UPROPERTY(BlueprintReadWrite)
		FElm _str30;
	UPROPERTY(BlueprintReadWrite)
		FElm _str32;
	UPROPERTY(BlueprintReadWrite)
		FElm _str34;
	UPROPERTY(BlueprintReadWrite)
		FElm _str36;
#pragma endregion
#pragma region Ways
#pragma region Pribligenie
	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP_KARABAS;
	UPROPERTY(BlueprintReadWrite)
		FElm _NDP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN_KARABAS;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP_KARAGANDA;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH_KARAGANDA;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHRP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1PP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2PP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2PP_OUT;
#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _s22;
	UPROPERTY(BlueprintReadWrite)
		FElm _s24;
	UPROPERTY(BlueprintReadWrite)
		FElm _s26;
	UPROPERTY(BlueprintReadWrite)
		FElm _s28;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30;
	UPROPERTY(BlueprintReadWrite)
		FElm _s32;
	UPROPERTY(BlueprintReadWrite)
		FElm _s34;
	UPROPERTY(BlueprintReadWrite)
		FElm _s36;
#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7_s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18_s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18_s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14_s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_s24;
	UPROPERTY(BlueprintReadWrite)
		FElm _s28_s30;
	UPROPERTY(BlueprintReadWrite)
		FElm _s28_s34;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30_s34;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30_s32;
#pragma endregion
#pragma region Semafornie
	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s36;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _M10_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _M12_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M14_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M16_s32;
	UPROPERTY(BlueprintReadWrite)
		FElm _M18_s32;
	UPROPERTY(BlueprintReadWrite)
		FElm _M20_s30;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5_s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH6_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH7_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s36;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s34;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s26;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s24;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5_s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _N6_s22;
	UPROPERTY(BlueprintReadWrite)
		FElm _N7_s22;
#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;
	UPROPERTY(BlueprintReadWrite)
		FElm _w6;
	UPROPERTY(BlueprintReadWrite)
		FElm _w7;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M10_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M12_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M14_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M16_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M18_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M20_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_tupic;
	/*UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w1;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w2;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w3;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w4;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w5;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w6;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w7;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M10_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M12_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M14_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M16_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M18_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M20_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M4_tupic;*/
#pragma endregion
#pragma endregion	
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool RouterOtmena;
	UPROPERTY(BlueprintReadWrite)
		bool DGA;
	UPROPERTY(BlueprintReadWrite)
		bool IskussRazdelka;
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;

};
#pragma endregion
#pragma region Karabas
USTRUCT(BlueprintType)
struct Fst_krbs
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals
		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		FElm PereezdZakrit;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		int NumberRouter;
	UPROPERTY(BlueprintReadWrite)
		int timeforRouterRun;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5;
#pragma endregion
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;
	UPROPERTY(BlueprintReadWrite)
		FElm _str12;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
#pragma endregion
#pragma region Ways

#pragma region Pribligenie
	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP_Raspor;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH_KARAGANOZEK;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP_KARAGAOZEK;

#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10_s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s10;

#pragma endregion
#pragma region Semafornie
	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s12;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5_s7;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5_s16;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;

	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w1;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w2;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w3;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w4;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_w5;

	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		bool poezdOn_M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;
#pragma endregion

#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool RouterOtmena;
	UPROPERTY(BlueprintReadWrite)
		bool DGA;
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
	UPROPERTY(BlueprintReadWrite)
		bool IsChoiceVoiceCheck = false;

	UPROPERTY(BlueprintReadWrite)
		bool zakritiePereezda = false;

	UPROPERTY(BlueprintReadWrite)
		bool izvecheniePereezda = false;

	UPROPERTY(BlueprintReadWrite)
		bool avariaPereezda = false;

	UPROPERTY(BlueprintReadWrite)
		bool chetSvetoforSelected = false;

	UPROPERTY(BlueprintReadWrite)
		bool nechetSvetoforSelected = false;

	UPROPERTY(BlueprintReadWrite)
		bool chetRouterCreating = false;

	UPROPERTY(BlueprintReadWrite)
		bool nechetRouterCreating = false;
};
#pragma endregion
#pragma region Rasporiaditelnaya
USTRUCT(BlueprintType)
struct Fst_raspor
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;


	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;

	UPROPERTY(BlueprintReadWrite)
		FElm _M5;


	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;


#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;


#pragma endregion
#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;


	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;




#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;


#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;


#pragma endregion
#pragma region Semafornie

	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s8;


	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s3;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s4;


#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;


	UPROPERTY(BlueprintReadWrite)
		FElm _M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;

#pragma endregion
#pragma endregion	
#pragma region Added



	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7;

	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;

	UPROPERTY(BlueprintReadWrite)
		FElm _m7_tupik;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _m7_s7;

	UPROPERTY(BlueprintReadWrite)
		FElm _m6_tupik;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _m6_s10;

#pragma endregion
};
#pragma endregion
#pragma region GanaKaraganda
USTRUCT(BlueprintType)
struct Fst_gancar
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;

	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _M9;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5;


#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;

	UPROPERTY(BlueprintReadWrite)
		FElm _str13;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str15;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;

	UPROPERTY(BlueprintReadWrite)
		FElm _str18;

	UPROPERTY(BlueprintReadWrite)
		FElm _str19;
	UPROPERTY(BlueprintReadWrite)
		FElm _str22;

#pragma endregion
#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;


	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;


#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;

	UPROPERTY(BlueprintReadWrite)
		FElm _s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;

	UPROPERTY(BlueprintReadWrite)
		FElm _s18;

	UPROPERTY(BlueprintReadWrite)
		FElm _s19;
	UPROPERTY(BlueprintReadWrite)
		FElm _s22;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8_s10;

	UPROPERTY(BlueprintReadWrite)
		FElm _s16_s18;

#pragma endregion
#pragma region Semafornie

	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s16;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH5_s15;


	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5_s10;

	UPROPERTY(BlueprintReadWrite)
		FElm _m7_s19;
	UPROPERTY(BlueprintReadWrite)
		FElm _m9_s22;


#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;


	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;

	UPROPERTY(BlueprintReadWrite)
		FElm _M7_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M9_tupic;

#pragma endregion
#pragma endregion	
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
#pragma region dop
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _str20;

#pragma endregion

};
#pragma endregion
#pragma region Karaganda_1
USTRUCT(BlueprintType)
struct Fst_carg1
{
	GENERATED_USTRUCT_BODY()

#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion

#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;


	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8;
	UPROPERTY(BlueprintReadWrite)
		FElm _M9;
	UPROPERTY(BlueprintReadWrite)
		FElm _M11;
	UPROPERTY(BlueprintReadWrite)
		FElm _M14;

	UPROPERTY(BlueprintReadWrite)
		FElm _M16;
	UPROPERTY(BlueprintReadWrite)
		FElm _M18;

	UPROPERTY(BlueprintReadWrite)
		FElm _M20;
	UPROPERTY(BlueprintReadWrite)
		FElm _M21;


	UPROPERTY(BlueprintReadWrite)
		FElm _M27;
	UPROPERTY(BlueprintReadWrite)
		FElm _M29;
	UPROPERTY(BlueprintReadWrite)
		FElm _M31;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHM1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM4;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM5;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM6;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM7;


	UPROPERTY(BlueprintReadWrite)
		FElm _NM1;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM2;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM3;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM4;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM5;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM6;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM7;




	UPROPERTY(BlueprintReadWrite)
		FElm _NM1B;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM2B;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM3B;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM4B;



#pragma endregion	

#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str9;
	UPROPERTY(BlueprintReadWrite)
		FElm _str11;
	UPROPERTY(BlueprintReadWrite)
		FElm _str13;
	UPROPERTY(BlueprintReadWrite)
		FElm _str15;
	UPROPERTY(BlueprintReadWrite)
		FElm _str17;
	UPROPERTY(BlueprintReadWrite)
		FElm _str19;
	UPROPERTY(BlueprintReadWrite)
		FElm _str21;
	UPROPERTY(BlueprintReadWrite)
		FElm _str23;
	UPROPERTY(BlueprintReadWrite)
		FElm _str25;
	UPROPERTY(BlueprintReadWrite)
		FElm _str27;
	UPROPERTY(BlueprintReadWrite)
		FElm _str29;
	UPROPERTY(BlueprintReadWrite)
		FElm _str31;
	UPROPERTY(BlueprintReadWrite)
		FElm _str33;
	UPROPERTY(BlueprintReadWrite)
		FElm _str35;
	UPROPERTY(BlueprintReadWrite)
		FElm _str37;
	UPROPERTY(BlueprintReadWrite)
		FElm _str39;
	UPROPERTY(BlueprintReadWrite)
		FElm _str41;
	UPROPERTY(BlueprintReadWrite)
		FElm _str43;
	UPROPERTY(BlueprintReadWrite)
		FElm _str45;
	UPROPERTY(BlueprintReadWrite)
		FElm _str47;
	UPROPERTY(BlueprintReadWrite)
		FElm _str51;
	UPROPERTY(BlueprintReadWrite)
		FElm _str53;
	UPROPERTY(BlueprintReadWrite)
		FElm _str55;
	UPROPERTY(BlueprintReadWrite)
		FElm _str57;
	UPROPERTY(BlueprintReadWrite)
		FElm _str59;

	UPROPERTY(BlueprintReadWrite)
		FElm _str61;
	UPROPERTY(BlueprintReadWrite)
		FElm _str63;
	UPROPERTY(BlueprintReadWrite)
		FElm _str65;
	UPROPERTY(BlueprintReadWrite)
		FElm _str67;
	UPROPERTY(BlueprintReadWrite)
		FElm _str69;
	UPROPERTY(BlueprintReadWrite)
		FElm _str71;
	UPROPERTY(BlueprintReadWrite)
		FElm _str73;
	UPROPERTY(BlueprintReadWrite)
		FElm _str75;
	UPROPERTY(BlueprintReadWrite)
		FElm _str77;
	UPROPERTY(BlueprintReadWrite)
		FElm _str79;

	UPROPERTY(BlueprintReadWrite)
		FElm _str81;
	UPROPERTY(BlueprintReadWrite)
		FElm _str83;
	UPROPERTY(BlueprintReadWrite)
		FElm _str85;


#pragma endregion

#pragma region Ways
#pragma region Pribligenie

	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;


#pragma endregion

#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s19;
	UPROPERTY(BlueprintReadWrite)
		FElm _s21;
	UPROPERTY(BlueprintReadWrite)
		FElm _s23;
	UPROPERTY(BlueprintReadWrite)
		FElm _s25;
	UPROPERTY(BlueprintReadWrite)
		FElm _s27;
	UPROPERTY(BlueprintReadWrite)
		FElm _s29;
	UPROPERTY(BlueprintReadWrite)
		FElm _s31;
	UPROPERTY(BlueprintReadWrite)
		FElm _s33;
	UPROPERTY(BlueprintReadWrite)
		FElm _s35;
	UPROPERTY(BlueprintReadWrite)
		FElm _s37;
	UPROPERTY(BlueprintReadWrite)
		FElm _s39;
	UPROPERTY(BlueprintReadWrite)
		FElm _s41;
	UPROPERTY(BlueprintReadWrite)
		FElm _s43;
	UPROPERTY(BlueprintReadWrite)
		FElm _s45;
	UPROPERTY(BlueprintReadWrite)
		FElm _s47;
	UPROPERTY(BlueprintReadWrite)
		FElm _s51;
	UPROPERTY(BlueprintReadWrite)
		FElm _s53;
	UPROPERTY(BlueprintReadWrite)
		FElm _s55;
	UPROPERTY(BlueprintReadWrite)
		FElm _s57;
	UPROPERTY(BlueprintReadWrite)
		FElm _s59;

	UPROPERTY(BlueprintReadWrite)
		FElm _s61;
	UPROPERTY(BlueprintReadWrite)
		FElm _s63;
	UPROPERTY(BlueprintReadWrite)
		FElm _s65;
	UPROPERTY(BlueprintReadWrite)
		FElm _s67;
	UPROPERTY(BlueprintReadWrite)
		FElm _s69;
	UPROPERTY(BlueprintReadWrite)
		FElm _s71;
	UPROPERTY(BlueprintReadWrite)
		FElm _s73;
	UPROPERTY(BlueprintReadWrite)
		FElm _s75;
	UPROPERTY(BlueprintReadWrite)
		FElm _s77;
	UPROPERTY(BlueprintReadWrite)
		FElm _s79;

	UPROPERTY(BlueprintReadWrite)
		FElm _s81;
	UPROPERTY(BlueprintReadWrite)
		FElm _s83;
	UPROPERTY(BlueprintReadWrite)
		FElm _s85;

#pragma endregion

#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7_M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s9_M8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11_s9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s11_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13_s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13_s39;
	UPROPERTY(BlueprintReadWrite)
		FElm _s17_s23;
	UPROPERTY(BlueprintReadWrite)
		FElm _s19_M8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s21_s23;
	UPROPERTY(BlueprintReadWrite)
		FElm _s21_M9;

	UPROPERTY(BlueprintReadWrite)
		FElm _s19_s25;
	UPROPERTY(BlueprintReadWrite)
		FElm _s25_s27;
	UPROPERTY(BlueprintReadWrite)
		FElm _s27_CHM4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s29_s31;
	UPROPERTY(BlueprintReadWrite)
		FElm _s29_M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s31_CHM5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s33_CHM6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s33_CHM7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s35_M9;
	UPROPERTY(BlueprintReadWrite)
		FElm _s35_CHM3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s37_M11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s37_CHM2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s39_M11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s41_CHM1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s43_M14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s45_M16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s47_M18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s47_M20;

	UPROPERTY(BlueprintReadWrite)
		FElm _s51_s65;
	UPROPERTY(BlueprintReadWrite)
		FElm _s51_NM1B;
	UPROPERTY(BlueprintReadWrite)
		FElm _s51_NM2B;
	UPROPERTY(BlueprintReadWrite)
		FElm _s53_NM1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s53_NM2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s57_s63;
	UPROPERTY(BlueprintReadWrite)
		FElm _s57_NM4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s59_s79;
	UPROPERTY(BlueprintReadWrite)
		FElm _s59_NM5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s61_NM6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s61_NM7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s63_s81;
	UPROPERTY(BlueprintReadWrite)
		FElm _s63_M27;
	UPROPERTY(BlueprintReadWrite)
		FElm _s65_s71;
	UPROPERTY(BlueprintReadWrite)
		FElm _s67_s69;
	UPROPERTY(BlueprintReadWrite)
		FElm _s67_s77;

	UPROPERTY(BlueprintReadWrite)
		FElm _s69_s85;
	UPROPERTY(BlueprintReadWrite)
		FElm _s71_s73;
	UPROPERTY(BlueprintReadWrite)
		FElm _s73_s75;

	UPROPERTY(BlueprintReadWrite)
		FElm _s81_s83;
	UPROPERTY(BlueprintReadWrite)
		FElm _s85_NM3B;
	UPROPERTY(BlueprintReadWrite)
		FElm _s85_NM4B;
	UPROPERTY(BlueprintReadWrite)
		FElm _s55_NM3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_M1;
#pragma endregion

#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _w5;
	UPROPERTY(BlueprintReadWrite)
		FElm _w6;

	UPROPERTY(BlueprintReadWrite)
		FElm _M21_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M27_tupic;

	UPROPERTY(BlueprintReadWrite)
		FElm _wb1;
	UPROPERTY(BlueprintReadWrite)
		FElm _wb2;
	UPROPERTY(BlueprintReadWrite)
		FElm _wb3;
	UPROPERTY(BlueprintReadWrite)
		FElm _wb4;

	UPROPERTY(BlueprintReadWrite)
		FElm _m29p;
	UPROPERTY(BlueprintReadWrite)
		FElm _p1g1p;
	UPROPERTY(BlueprintReadWrite)
		FElm _m31p;
	UPROPERTY(BlueprintReadWrite)
		FElm _p1g2p;
	UPROPERTY(BlueprintReadWrite)
		FElm _w7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15_M21;

#pragma endregion
#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		FElm _PG1;
	UPROPERTY(BlueprintReadWrite)
		FElm _PG2;
	UPROPERTY(BlueprintReadWrite)
		bool trainAutoStart;
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;

#pragma region dop

#pragma region Svetophor

	UPROPERTY(BlueprintReadWrite)
		FElm _M23;
	UPROPERTY(BlueprintReadWrite)
		FElm _M24;
	UPROPERTY(BlueprintReadWrite)
		FElm _M25;
	UPROPERTY(BlueprintReadWrite)
		FElm _M26;

#pragma endregion
#pragma region Strelki


	UPROPERTY(BlueprintReadWrite)
		FElm _str131;
	UPROPERTY(BlueprintReadWrite)
		FElm _str133;
	UPROPERTY(BlueprintReadWrite)
		FElm _str135;
	UPROPERTY(BlueprintReadWrite)
		FElm _str137;


#pragma endregion
#pragma region Ways

#pragma region Strelochnie


	UPROPERTY(BlueprintReadWrite)
		FElm _s131;
	UPROPERTY(BlueprintReadWrite)
		FElm _s133;
	UPROPERTY(BlueprintReadWrite)
		FElm _s135;
	UPROPERTY(BlueprintReadWrite)
		FElm _s137;


#pragma endregion
#pragma region Semafornue

	UPROPERTY(BlueprintReadWrite)
		FElm _M23_s133;
	UPROPERTY(BlueprintReadWrite)
		FElm _M24_s137;
	UPROPERTY(BlueprintReadWrite)
		FElm _M25_s133;
	UPROPERTY(BlueprintReadWrite)
		FElm _M26_s137;

#pragma endregion
#pragma region BetweenStrelki

	UPROPERTY(BlueprintReadWrite)
		FElm _s33_s131;
	UPROPERTY(BlueprintReadWrite)
		FElm _s131_s133;
	/*UPROPERTY(BlueprintReadWrite)
	FElm _s131_s33;*/
	UPROPERTY(BlueprintReadWrite)
		FElm _s135_s137;

#pragma endregion
#pragma region main

	UPROPERTY(BlueprintReadWrite)
		FElm _M23_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M24_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M25_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M26_tupic;

#pragma endregion

#pragma endregion

#pragma endregion
#pragma region dop2
	UPROPERTY(BlueprintReadWrite)
		FElm _M33;
	UPROPERTY(BlueprintReadWrite)
		FElm _M35;
	UPROPERTY(BlueprintReadWrite)
		FElm _M33_s75;
	UPROPERTY(BlueprintReadWrite)
		FElm _M35_s77;
#pragma endregion
};
#pragma endregion
#pragma region Karaganda_2
USTRUCT(BlueprintType)
struct Fst_carg2
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals

		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider2;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool NKGdop;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
#pragma endregion
#pragma region Svetofors

	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;

	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M10;
	UPROPERTY(BlueprintReadWrite)
		FElm _M12;
	UPROPERTY(BlueprintReadWrite)
		FElm _M13;
	UPROPERTY(BlueprintReadWrite)
		FElm _M15;
	UPROPERTY(BlueprintReadWrite)
		FElm _M22;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM1A;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM2A;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM3A;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM4A;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHM5A;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1A;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2A;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3A;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4A;
	UPROPERTY(BlueprintReadWrite)
		FElm _N5A;

	UPROPERTY(BlueprintReadWrite)
		FElm _NM11;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM12;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM13;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM14;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM15;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM16;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM17;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM18;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM19;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM20;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM21;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM22;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM23;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM24;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM25;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM26;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM27;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM28;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM29;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM30;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM31;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM32;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM33;
	UPROPERTY(BlueprintReadWrite)
		FElm _NM34;

#pragma endregion	
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;
	UPROPERTY(BlueprintReadWrite)
		FElm _str10;
	UPROPERTY(BlueprintReadWrite)
		FElm _str12;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
	UPROPERTY(BlueprintReadWrite)
		FElm _str18;
	UPROPERTY(BlueprintReadWrite)
		FElm _str20;
	UPROPERTY(BlueprintReadWrite)
		FElm _str22;
	UPROPERTY(BlueprintReadWrite)
		FElm _str24;
	UPROPERTY(BlueprintReadWrite)
		FElm _str26;
	UPROPERTY(BlueprintReadWrite)
		FElm _str28;
	UPROPERTY(BlueprintReadWrite)
		FElm _str30;
	UPROPERTY(BlueprintReadWrite)
		FElm _str32;
	UPROPERTY(BlueprintReadWrite)
		FElm _str34;
	UPROPERTY(BlueprintReadWrite)
		FElm _str36;
	UPROPERTY(BlueprintReadWrite)
		FElm _str38;
	UPROPERTY(BlueprintReadWrite)
		FElm _str40;
	UPROPERTY(BlueprintReadWrite)
		FElm _str42;
	UPROPERTY(BlueprintReadWrite)
		FElm _str44;
	UPROPERTY(BlueprintReadWrite)
		FElm _str46;
	UPROPERTY(BlueprintReadWrite)
		FElm _str48;
	UPROPERTY(BlueprintReadWrite)
		FElm _str50;
	UPROPERTY(BlueprintReadWrite)
		FElm _str52;
	UPROPERTY(BlueprintReadWrite)
		FElm _str54;
	UPROPERTY(BlueprintReadWrite)
		FElm _str56;
	UPROPERTY(BlueprintReadWrite)
		FElm _str58;
	UPROPERTY(BlueprintReadWrite)
		FElm _str60;
	UPROPERTY(BlueprintReadWrite)
		FElm _str62;
	UPROPERTY(BlueprintReadWrite)
		FElm _str64;
	UPROPERTY(BlueprintReadWrite)
		FElm _str66;
	UPROPERTY(BlueprintReadWrite)
		FElm _str68;
	UPROPERTY(BlueprintReadWrite)
		FElm _str70;
	UPROPERTY(BlueprintReadWrite)
		FElm _str72;
	UPROPERTY(BlueprintReadWrite)
		FElm _str74;
	UPROPERTY(BlueprintReadWrite)
		FElm _str76;
	UPROPERTY(BlueprintReadWrite)
		FElm _str78;
	UPROPERTY(BlueprintReadWrite)
		FElm _str80;
	UPROPERTY(BlueprintReadWrite)
		FElm _str82;
	UPROPERTY(BlueprintReadWrite)
		FElm _str84;
	UPROPERTY(BlueprintReadWrite)
		FElm _str86;
	UPROPERTY(BlueprintReadWrite)
		FElm _str88;
	UPROPERTY(BlueprintReadWrite)
		FElm _str90;
	UPROPERTY(BlueprintReadWrite)
		FElm _str92;
	UPROPERTY(BlueprintReadWrite)
		FElm _str94;
	UPROPERTY(BlueprintReadWrite)
		FElm _str96;
	UPROPERTY(BlueprintReadWrite)
		FElm _str98;
	UPROPERTY(BlueprintReadWrite)
		FElm _str100;

#pragma endregion
#pragma region Ways
#pragma region Pribligenie


	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;


#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _s22;
	UPROPERTY(BlueprintReadWrite)
		FElm _s24;
	UPROPERTY(BlueprintReadWrite)
		FElm _s26;
	UPROPERTY(BlueprintReadWrite)
		FElm _s28;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30;
	UPROPERTY(BlueprintReadWrite)
		FElm _s32;
	UPROPERTY(BlueprintReadWrite)
		FElm _s34;
	UPROPERTY(BlueprintReadWrite)
		FElm _s36;
	UPROPERTY(BlueprintReadWrite)
		FElm _s38;
	UPROPERTY(BlueprintReadWrite)
		FElm _s40;
	UPROPERTY(BlueprintReadWrite)
		FElm _s42;
	UPROPERTY(BlueprintReadWrite)
		FElm _s44;
	UPROPERTY(BlueprintReadWrite)
		FElm _s46;
	UPROPERTY(BlueprintReadWrite)
		FElm _s48;
	UPROPERTY(BlueprintReadWrite)
		FElm _s50;
	UPROPERTY(BlueprintReadWrite)
		FElm _s52;
	UPROPERTY(BlueprintReadWrite)
		FElm _s54;
	UPROPERTY(BlueprintReadWrite)
		FElm _s56;
	UPROPERTY(BlueprintReadWrite)
		FElm _s100;

	UPROPERTY(BlueprintReadWrite)
		FElm _s58_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s60_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s62_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s64_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s66_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s68_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s70_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s72_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s74_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s76_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s78_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s80_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s82_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s84_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s86_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s88_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s90_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s92_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s94_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s96_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s98_s1;

	UPROPERTY(BlueprintReadWrite)
		FElm _s58_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s60_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s62_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s64_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s66_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s68_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s70_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s72_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s74_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s76_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s78_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s80_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s82_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s84_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s86_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s88_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s90_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s92_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s94_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s96_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s98_s2;


	UPROPERTY(BlueprintReadWrite)
		FElm _s98_s3;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8_s10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18_s36;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20_s40;
	UPROPERTY(BlueprintReadWrite)
		FElm _s22_s28;
	UPROPERTY(BlueprintReadWrite)
		FElm _s24_s30;
	UPROPERTY(BlueprintReadWrite)
		FElm _s24_s26;
	UPROPERTY(BlueprintReadWrite)
		FElm _s28_s32;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30_s50;
	UPROPERTY(BlueprintReadWrite)
		FElm _s32_s38;
	UPROPERTY(BlueprintReadWrite)
		FElm _s34_s44;
	UPROPERTY(BlueprintReadWrite)
		FElm _s34_s36;
	UPROPERTY(BlueprintReadWrite)
		FElm _s38_s56;
	UPROPERTY(BlueprintReadWrite)
		FElm _s40_s48;
	UPROPERTY(BlueprintReadWrite)
		FElm _s42_s44;
	UPROPERTY(BlueprintReadWrite)
		FElm _s42_s58;
	UPROPERTY(BlueprintReadWrite)
		FElm _ss46;
	UPROPERTY(BlueprintReadWrite)
		FElm _s46_s74;
	UPROPERTY(BlueprintReadWrite)
		FElm _s46_s48;
	UPROPERTY(BlueprintReadWrite)
		FElm _s50_s52;

	UPROPERTY(BlueprintReadWrite)
		FElm _s98_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s100_s98;
	UPROPERTY(BlueprintReadWrite)
		FElm _ss100;
	UPROPERTY(BlueprintReadWrite)
		FElm _ss74;
	UPROPERTY(BlueprintReadWrite)
		FElm _s100_M22;

#pragma endregion
#pragma region Semafornie


	UPROPERTY(BlueprintReadWrite)
		FElm _s2_M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s52_M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s54_M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s56_M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s83_M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s54_M10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s79_M10;
	UPROPERTY(BlueprintReadWrite)
		FElm _s52_M12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s50_M13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_M15;
	UPROPERTY(BlueprintReadWrite)
		FElm _M15_M22;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20_CHM1A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18_CHM2A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s22_CHM3A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s26_CHM4A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s30_CHM5A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_N1A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14_N2A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s12_N3A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10_N4A;
	UPROPERTY(BlueprintReadWrite)
		FElm _s10_N5A;

	UPROPERTY(BlueprintReadWrite)
		FElm _s58_NM11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s60_NM12;
	UPROPERTY(BlueprintReadWrite)
		FElm _s62_NM13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s64_NM14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s66_NM15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s68_NM16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s70_NM17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s72_NM18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s72_NM19;
	UPROPERTY(BlueprintReadWrite)
		FElm _s74_NM20;
	UPROPERTY(BlueprintReadWrite)
		FElm _s76_NM21;
	UPROPERTY(BlueprintReadWrite)
		FElm _s76_NM22;
	UPROPERTY(BlueprintReadWrite)
		FElm _s78_NM23;
	UPROPERTY(BlueprintReadWrite)
		FElm _s78_NM24;
	UPROPERTY(BlueprintReadWrite)
		FElm _s80_NM25;
	UPROPERTY(BlueprintReadWrite)
		FElm _s82_NM26;
	UPROPERTY(BlueprintReadWrite)
		FElm _s84_NM27;
	UPROPERTY(BlueprintReadWrite)
		FElm _s86_NM28;
	UPROPERTY(BlueprintReadWrite)
		FElm _s88_NM29;
	UPROPERTY(BlueprintReadWrite)
		FElm _s90_NM30;
	UPROPERTY(BlueprintReadWrite)
		FElm _s92_NM31;
	UPROPERTY(BlueprintReadWrite)
		FElm _s94_NM32;
	UPROPERTY(BlueprintReadWrite)
		FElm _s96_NM33;
	UPROPERTY(BlueprintReadWrite)
		FElm _s96_NM34;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _wa1;
	UPROPERTY(BlueprintReadWrite)
		FElm _wa2;
	UPROPERTY(BlueprintReadWrite)
		FElm _wa3;
	UPROPERTY(BlueprintReadWrite)
		FElm _wa4;
	UPROPERTY(BlueprintReadWrite)
		FElm _wa5;


	UPROPERTY(BlueprintReadWrite)
		FElm _M12_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M13_tupic;

	UPROPERTY(BlueprintReadWrite)
		FElm _11GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _12GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _13GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _14GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _15GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _16GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _17GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _18GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _19GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _20GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _21GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _22GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _23GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _24GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _25GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _26GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _27GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _28GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _29GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _30GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _31GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _32GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _33GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _34GP;
	UPROPERTY(BlueprintReadWrite)
		FElm _s98_s100;
#pragma endregion
#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
};
#pragma endregion
#pragma region Karaganda
USTRUCT(BlueprintType)
struct Fst_carg
{
	GENERATED_USTRUCT_BODY()
#pragma region Signals
		UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_ND;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_N;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CH;
	UPROPERTY(BlueprintReadWrite)
		FElm GreenKey_CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider_1;
	UPROPERTY(BlueprintReadWrite)
		FElm Fider_2;
	UPROPERTY(BlueprintReadWrite)
		FElm DU;
	UPROPERTY(BlueprintReadWrite)
		FElm SA;
	UPROPERTY(BlueprintReadWrite)
		FElm IRe;
	UPROPERTY(BlueprintReadWrite)
		bool KPP;
	UPROPERTY(BlueprintReadWrite)
		bool ZS;
	UPROPERTY(BlueprintReadWrite)
		bool IR;
	UPROPERTY(BlueprintReadWrite)
		bool UKSPS;
	UPROPERTY(BlueprintReadWrite)
		bool Vzrez;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG;
	UPROPERTY(BlueprintReadWrite)
		bool NKG;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG;
	UPROPERTY(BlueprintReadWrite)
		bool CHKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool NDKG_dop;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_Direct;
	UPROPERTY(BlueprintReadWrite)
		bool Curator_Direct;
#pragma endregion
#pragma region Svetofors
	UPROPERTY(BlueprintReadWrite)
		FElm _N;
	UPROPERTY(BlueprintReadWrite)
		FElm _ND;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHD;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH1;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4;
	UPROPERTY(BlueprintReadWrite)
		FElm _N1;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8;
#pragma endregion
#pragma region Strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _str1;
	UPROPERTY(BlueprintReadWrite)
		FElm _str2;
	UPROPERTY(BlueprintReadWrite)
		FElm _str3;
	UPROPERTY(BlueprintReadWrite)
		FElm _str4;
	UPROPERTY(BlueprintReadWrite)
		FElm _str5;
	UPROPERTY(BlueprintReadWrite)
		FElm _str6;
	UPROPERTY(BlueprintReadWrite)
		FElm _str7;
	UPROPERTY(BlueprintReadWrite)
		FElm _str8;

	UPROPERTY(BlueprintReadWrite)
		FElm _str11;

	UPROPERTY(BlueprintReadWrite)
		FElm _str13;
	UPROPERTY(BlueprintReadWrite)
		FElm _str14;
	UPROPERTY(BlueprintReadWrite)
		FElm _str15;
	UPROPERTY(BlueprintReadWrite)
		FElm _str16;
	UPROPERTY(BlueprintReadWrite)
		FElm _str17;
	UPROPERTY(BlueprintReadWrite)
		FElm _str18;
	UPROPERTY(BlueprintReadWrite)
		FElm _str20;
#pragma endregion
#pragma region Ways

#pragma region Pribligenie
	UPROPERTY(BlueprintReadWrite)
		FElm _1NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2NP;
	UPROPERTY(BlueprintReadWrite)
		FElm _NP;

	UPROPERTY(BlueprintReadWrite)
		FElm _1UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPN;
	UPROPERTY(BlueprintReadWrite)
		FElm _NAP;

	UPROPERTY(BlueprintReadWrite)
		FElm _1CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _2CHP;
	UPROPERTY(BlueprintReadWrite)
		FElm _CHP;

	UPROPERTY(BlueprintReadWrite)
		FElm _CHAP;
	UPROPERTY(BlueprintReadWrite)
		FElm _1UPCH;
	UPROPERTY(BlueprintReadWrite)
		FElm _2UPCH;


#pragma endregion
#pragma region Strelochnie
	UPROPERTY(BlueprintReadWrite)
		FElm _s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s8;


	UPROPERTY(BlueprintReadWrite)
		FElm _s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16;
	UPROPERTY(BlueprintReadWrite)
		FElm _s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s20;

#pragma endregion
#pragma region Between strelki
	UPROPERTY(BlueprintReadWrite)
		FElm _s1_s7;
	UPROPERTY(BlueprintReadWrite)
		FElm _s2_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _s3_s5;
	UPROPERTY(BlueprintReadWrite)
		FElm _s4_s6;
	UPROPERTY(BlueprintReadWrite)
		FElm _s5_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _s6_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _s15_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _s16_s20;
#pragma endregion
#pragma region Semafornie


	UPROPERTY(BlueprintReadWrite)
		FElm _M1_s3;
	UPROPERTY(BlueprintReadWrite)
		FElm _M2_s2;
	UPROPERTY(BlueprintReadWrite)
		FElm _M3_s1;
	UPROPERTY(BlueprintReadWrite)
		FElm _M4_s4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s16;

	UPROPERTY(BlueprintReadWrite)
		FElm _CH1_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH2_s13;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH3_s11;
	UPROPERTY(BlueprintReadWrite)
		FElm _CH4_s7;

	UPROPERTY(BlueprintReadWrite)
		FElm _N1_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N2_s18;
	UPROPERTY(BlueprintReadWrite)
		FElm _N3_s14;
	UPROPERTY(BlueprintReadWrite)
		FElm _N4_s8;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_s20;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7_s17;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8_s20;

#pragma endregion
#pragma region Mains
	UPROPERTY(BlueprintReadWrite)
		FElm _w1;
	UPROPERTY(BlueprintReadWrite)
		FElm _w2;
	UPROPERTY(BlueprintReadWrite)
		FElm _w3;
	UPROPERTY(BlueprintReadWrite)
		FElm _w4;
	UPROPERTY(BlueprintReadWrite)
		FElm _M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M7_tupic;
	UPROPERTY(BlueprintReadWrite)
		FElm _M8_tupic;

#pragma endregion
#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
};
#pragma endregion
#pragma region DSPG
USTRUCT(BlueprintType)
struct Fst_DSPG
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		RoleSelect Role;
	UPROPERTY(BlueprintReadWrite)
		EDefectName defect;
};
#pragma endregion
#pragma region KaragandaSort
USTRUCT(BlueprintType)
struct Fst_Karaganda3
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		bool DSP_direct = false;
	UPROPERTY(BlueprintReadWrite)
		bool DSC_direct = false;


#pragma region Strelki

	UPROPERTY(BlueprintReadWrite)
		FElm _str87;
	UPROPERTY(BlueprintReadWrite)
		FElm _str89;
	UPROPERTY(BlueprintReadWrite)
		FElm _str91;
	UPROPERTY(BlueprintReadWrite)
		FElm _str93;
	UPROPERTY(BlueprintReadWrite)
		FElm _str95;
	UPROPERTY(BlueprintReadWrite)
		FElm _str97;
	UPROPERTY(BlueprintReadWrite)
		FElm _str99;
	UPROPERTY(BlueprintReadWrite)
		FElm _str101;
	UPROPERTY(BlueprintReadWrite)
		FElm _str103;
	UPROPERTY(BlueprintReadWrite)
		FElm _str105;
	UPROPERTY(BlueprintReadWrite)
		FElm _str107;
	UPROPERTY(BlueprintReadWrite)
		FElm _str109;
	UPROPERTY(BlueprintReadWrite)
		FElm _str111;
	UPROPERTY(BlueprintReadWrite)
		FElm _str113;
	UPROPERTY(BlueprintReadWrite)
		FElm _str115;
	UPROPERTY(BlueprintReadWrite)
		FElm _str117;
	UPROPERTY(BlueprintReadWrite)
		FElm _str119;
	UPROPERTY(BlueprintReadWrite)
		FElm _str121;
	UPROPERTY(BlueprintReadWrite)
		FElm _str123;
	UPROPERTY(BlueprintReadWrite)
		FElm _str125;
	UPROPERTY(BlueprintReadWrite)
		FElm _str127;
	UPROPERTY(BlueprintReadWrite)
		FElm _str129;

	UPROPERTY(BlueprintReadWrite)
		FElm _str301;
	UPROPERTY(BlueprintReadWrite)
		FElm _str303;
	UPROPERTY(BlueprintReadWrite)
		FElm _str305;
	UPROPERTY(BlueprintReadWrite)
		FElm _str307;

#pragma endregion
#pragma region Strelochnie

	UPROPERTY(BlueprintReadWrite)
		FElm _s87;
	UPROPERTY(BlueprintReadWrite)
		FElm _s89;
	UPROPERTY(BlueprintReadWrite)
		FElm _s91;
	UPROPERTY(BlueprintReadWrite)
		FElm _s93;
	UPROPERTY(BlueprintReadWrite)
		FElm _s95;
	UPROPERTY(BlueprintReadWrite)
		FElm _s97;
	UPROPERTY(BlueprintReadWrite)
		FElm _s99;
	UPROPERTY(BlueprintReadWrite)
		FElm _s101;
	UPROPERTY(BlueprintReadWrite)
		FElm _s103;
	UPROPERTY(BlueprintReadWrite)
		FElm _s105;
	UPROPERTY(BlueprintReadWrite)
		FElm _s107;
	UPROPERTY(BlueprintReadWrite)
		FElm _s109;
	UPROPERTY(BlueprintReadWrite)
		FElm _s111;
	UPROPERTY(BlueprintReadWrite)
		FElm _s113;
	UPROPERTY(BlueprintReadWrite)
		FElm _s115;
	UPROPERTY(BlueprintReadWrite)
		FElm _s117;
	UPROPERTY(BlueprintReadWrite)
		FElm _s119;
	UPROPERTY(BlueprintReadWrite)
		FElm _s121;
	UPROPERTY(BlueprintReadWrite)
		FElm _s123;
	UPROPERTY(BlueprintReadWrite)
		FElm _s125;
	UPROPERTY(BlueprintReadWrite)
		FElm _s127;
	UPROPERTY(BlueprintReadWrite)
		FElm _s129;

	UPROPERTY(BlueprintReadWrite)
		FElm _s301;
	UPROPERTY(BlueprintReadWrite)
		FElm _s303;
	UPROPERTY(BlueprintReadWrite)
		FElm _s305;
	UPROPERTY(BlueprintReadWrite)
		FElm _s307;

#pragma endregion
#pragma region Semafornue

	UPROPERTY(BlueprintReadWrite)
		FElm _M31_s77;
	UPROPERTY(BlueprintReadWrite)
		FElm _M29_s75;
	UPROPERTY(BlueprintReadWrite)
		FElm _g1p;
	UPROPERTY(BlueprintReadWrite)
		FElm _M31_s121;
	UPROPERTY(BlueprintReadWrite)
		FElm _M29_s93;
	UPROPERTY(BlueprintReadWrite)
		FElm _g2p;
	UPROPERTY(BlueprintReadWrite)
		FElm _gp;


#pragma endregion
#pragma region other

#pragma region sp

	UPROPERTY(BlueprintReadWrite)
		FElm _301sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _303sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _305sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _307sp;

	UPROPERTY(BlueprintReadWrite)
		FElm _87sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _89sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _91sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _93sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _95sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _97sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _99sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _101sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _103sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _105sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _107sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _109sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _111sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _113sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _115sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _117sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _119sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _121sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _123sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _125sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _127sp;
	UPROPERTY(BlueprintReadWrite)
		FElm _129sp;

#pragma endregion
#pragma region ma

	UPROPERTY(BlueprintReadWrite)
		FElm _305ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _307ma;

	UPROPERTY(BlueprintReadWrite)
		FElm _91ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _97ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _103ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _107ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _111ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _115ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _117ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _119ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _123ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _125ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _127ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _129ma;

#pragma endregion
#pragma region mb

	UPROPERTY(BlueprintReadWrite)
		FElm _305mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _307mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _91mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _97mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _103mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _107mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _111mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _111mv;
	UPROPERTY(BlueprintReadWrite)
		FElm _115mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _117mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _123mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _125mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _127mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _129mb;

#pragma endregion
#pragma region pa
	UPROPERTY(BlueprintReadWrite)
		FElm _305pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _307pa;

	UPROPERTY(BlueprintReadWrite)
		FElm _87pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _89pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _91pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _95pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _97pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _99pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _101pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _103pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _105pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _107pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _109pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _115pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _117pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _119pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _127pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _129pa;

#pragma endregion
#pragma region pb

	UPROPERTY(BlueprintReadWrite)
		FElm _305pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _307pb;

	UPROPERTY(BlueprintReadWrite)
		FElm _89pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _91pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _95pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _95pv;
	UPROPERTY(BlueprintReadWrite)
		FElm _97pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _101pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _103pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _105pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _107pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _115pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _117pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _127pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _129pb;

#pragma endregion
#pragma region pv

	UPROPERTY(BlueprintReadWrite)
		FElm _89pv;
	UPROPERTY(BlueprintReadWrite)
		FElm _101pv;
	UPROPERTY(BlueprintReadWrite)
		FElm _111pv;
	UPROPERTY(BlueprintReadWrite)
		FElm _113pv;
	UPROPERTY(BlueprintReadWrite)
		FElm _113pa;
	UPROPERTY(BlueprintReadWrite)
		FElm _113pb;
	UPROPERTY(BlueprintReadWrite)
		FElm _105ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _105mb;
	UPROPERTY(BlueprintReadWrite)
		FElm _105mv;
	UPROPERTY(BlueprintReadWrite)
		FElm _87ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _123mv;
	UPROPERTY(BlueprintReadWrite)
		FElm _125mv;
#pragma endregion


	UPROPERTY(BlueprintReadWrite)
		FElm _109ma;
	UPROPERTY(BlueprintReadWrite)
		FElm _99ma;

#pragma region TormozPozs

	UPROPERTY(BlueprintReadWrite)
		FElm _1_3zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _2_3zp;

	UPROPERTY(BlueprintReadWrite)
		FElm _11zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _12zp;

	UPROPERTY(BlueprintReadWrite)
		FElm _21zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _22zp;

	UPROPERTY(BlueprintReadWrite)
		FElm _31zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _32zp;

	UPROPERTY(BlueprintReadWrite)
		FElm _41zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _42zp;

	UPROPERTY(BlueprintReadWrite)
		FElm _111zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _121zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _131zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _141zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _151zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _161zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _171zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _181zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _191zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _201zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _211zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _221zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _231zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _241zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _251zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _261zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _271zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _281zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _291zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _301zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _311zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _321zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _331zp;
	UPROPERTY(BlueprintReadWrite)
		FElm _341zp;

#pragma endregion

#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		FElm _MG1;
	UPROPERTY(BlueprintReadWrite)
		FElm _MG3;
	UPROPERTY(BlueprintReadWrite)
		FElm _MG5;
	UPROPERTY(BlueprintReadWrite)
		FElm _MG7;
	UPROPERTY(BlueprintReadWrite)
		FElm _MG9;

};
#pragma endregion

#pragma endregion

USTRUCT(BlueprintType)
struct FRusDefectName
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString Predohranitel;
	UPROPERTY(BlueprintReadWrite)
		FString ControlMiganiya;
	UPROPERTY(BlueprintReadWrite)
		FString Pereezd;
	UPROPERTY(BlueprintReadWrite)
		FString Zemlya;
	UPROPERTY(BlueprintReadWrite)
		FString Batareya;
	UPROPERTY(BlueprintReadWrite)
		FString Ventilyaciya;
	UPROPERTY(BlueprintReadWrite)
		FString Electrostanciya;
	UPROPERTY(BlueprintReadWrite)
		FString Toplivo;
	UPROPERTY(BlueprintReadWrite)
		FString MRC_MN;
	UPROPERTY(BlueprintReadWrite)
		FString Block_NN;
	UPROPERTY(BlueprintReadWrite)
		FString NeispravnoctPereezdov;
	UPROPERTY(BlueprintReadWrite)
		FString UTS;
	UPROPERTY(BlueprintReadWrite)
		FString OgragdenieSostavov;
	UPROPERTY(BlueprintReadWrite)
		FString NeispravnostiGorochnihUstroistv;
	UPROPERTY(BlueprintReadWrite)
		FString Norm;
	UPROPERTY(BlueprintReadWrite)
		FString Fider1;
	UPROPERTY(BlueprintReadWrite)
		FString Fider2;
	UPROPERTY(BlueprintReadWrite)
		FString VzrezStrelki;
	UPROPERTY(BlueprintReadWrite)
		FString LognayaZaniatost_way1;
	UPROPERTY(BlueprintReadWrite)
		FString LognayaSvobodnost_way1;

};




//структура для сохранения в файл
struct DataAllStations
{
	Fst_disp1  d1;
	Fst_disp2 d2;
	Fst_raduzel ru;
	FSt_dbs dbs;
	Fst_mkd mkd;
	Fst_ganaul gu;
	FSt_krgzk krz;
	Fst_krbs krb;
	Fst_raspor rs;
	Fst_gancar gk;
	Fst_carg1 kg1;
	Fst_carg2 kg2;
	Fst_carg kg;
	TrainReestr trainReestr;
	Fst_Karaganda3 kg3;
};

USTRUCT(BlueprintType)
struct FRusStation
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString Karabas;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganozek;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganda;
	UPROPERTY(BlueprintReadWrite)
		FString Maykuduk;
	UPROPERTY(BlueprintReadWrite)
		FString GanaKaraganda;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganda_1;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganda_2;
	UPROPERTY(BlueprintReadWrite)
		FString Rasporiaditelnaya;
	UPROPERTY(BlueprintReadWrite)
		FString Dubovskaya;
	UPROPERTY(BlueprintReadWrite)
		FString GanaAul;
	UPROPERTY(BlueprintReadWrite)
		FString Radiouzel;
	UPROPERTY(BlueprintReadWrite)
		FString notDefine;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganda_DSP;
	UPROPERTY(BlueprintReadWrite)
		FString Karaganda_DSC;


};

USTRUCT(BlueprintType)
struct FRusVagon
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString poluvagon;
	UPROPERTY(BlueprintReadWrite)
		FString cisterna;
	UPROPERTY(BlueprintReadWrite)
		FString platforma;
	UPROPERTY(BlueprintReadWrite)
		FString mukovoz;
	UPROPERTY(BlueprintReadWrite)
		FString hopper;
	UPROPERTY(BlueprintReadWrite)
		FString critiy;
	UPROPERTY(BlueprintReadWrite)
		FString loco;
	UPROPERTY(BlueprintReadWrite)
		FString notDefine;
};

USTRUCT(BlueprintType)
struct FRusWay
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString way_1;
	UPROPERTY(BlueprintReadWrite)
		FString way_2;
	UPROPERTY(BlueprintReadWrite)
		FString way_3;
	UPROPERTY(BlueprintReadWrite)
		FString way_4;
	UPROPERTY(BlueprintReadWrite)
		FString way_5;
	UPROPERTY(BlueprintReadWrite)
		FString way_6;
	UPROPERTY(BlueprintReadWrite)
		FString way_7;
	UPROPERTY(BlueprintReadWrite)
		FString way_1ap;
	UPROPERTY(BlueprintReadWrite)
		FString way_2ap;
	UPROPERTY(BlueprintReadWrite)
		FString way_3ap;
	UPROPERTY(BlueprintReadWrite)
		FString way_4ap;
	UPROPERTY(BlueprintReadWrite)
		FString way_5ap;
	UPROPERTY(BlueprintReadWrite)
		FString way_1bp;
	UPROPERTY(BlueprintReadWrite)
		FString way_2bp;
	UPROPERTY(BlueprintReadWrite)
		FString way_3bp;
	UPROPERTY(BlueprintReadWrite)
		FString way_4bp;
	UPROPERTY(BlueprintReadWrite)
		FString M3_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M4_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M5_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M6_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M7_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M8_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M9_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M10_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M11_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M12_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M13_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M14_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M15_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M16_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M17_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M18_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M19_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M20_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M21_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M22_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M23_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M24_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M25_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M26_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M27_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M28_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M29_tupic;
	UPROPERTY(BlueprintReadWrite)
		FString M30_tupic;


	UPROPERTY(BlueprintReadWrite)
		FString gp1;
	UPROPERTY(BlueprintReadWrite)
		FString gp2;
	UPROPERTY(BlueprintReadWrite)
		FString gp3;
	UPROPERTY(BlueprintReadWrite)
		FString gp4;
	UPROPERTY(BlueprintReadWrite)
		FString gp5;
	UPROPERTY(BlueprintReadWrite)
		FString gp6;
	UPROPERTY(BlueprintReadWrite)
		FString gp7;
	UPROPERTY(BlueprintReadWrite)
		FString gp8;
	UPROPERTY(BlueprintReadWrite)
		FString gp9;
	UPROPERTY(BlueprintReadWrite)
		FString gp10;
	UPROPERTY(BlueprintReadWrite)
		FString gp11;
	UPROPERTY(BlueprintReadWrite)
		FString gp12;
	UPROPERTY(BlueprintReadWrite)
		FString gp13;
	UPROPERTY(BlueprintReadWrite)
		FString gp14;
	UPROPERTY(BlueprintReadWrite)
		FString gp15;
	UPROPERTY(BlueprintReadWrite)
		FString gp16;
	UPROPERTY(BlueprintReadWrite)
		FString gp17;
	UPROPERTY(BlueprintReadWrite)
		FString gp18;
	UPROPERTY(BlueprintReadWrite)
		FString gp19;
	UPROPERTY(BlueprintReadWrite)
		FString gp20;
	UPROPERTY(BlueprintReadWrite)
		FString gp21;
	UPROPERTY(BlueprintReadWrite)
		FString gp22;
	UPROPERTY(BlueprintReadWrite)
		FString gp23;
	UPROPERTY(BlueprintReadWrite)
		FString gp24;
	UPROPERTY(BlueprintReadWrite)
		FString notDefine;
	UPROPERTY(BlueprintReadWrite)
		FString notDefineStation;

	UPROPERTY(BlueprintReadWrite)
		FString M5_HunterGas;
	UPROPERTY(BlueprintReadWrite)
		FString M4_VoennayaChast;
	UPROPERTY(BlueprintReadWrite)
		FString M6_ShahtaImSatpaeva;
	UPROPERTY(BlueprintReadWrite)
		FString M3_ShahtaAbaiskaya;
	UPROPERTY(BlueprintReadWrite)
		FString M5_VagonnoeDepo;
	UPROPERTY(BlueprintReadWrite)
		FString M6_StankostroitelniyZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M5_Lesopilka;
	UPROPERTY(BlueprintReadWrite)
		FString M16_CementniyZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M18_NeftebazaTerminal2;
	UPROPERTY(BlueprintReadWrite)
		FString M20_ShahtaImBaiganova;
	UPROPERTY(BlueprintReadWrite)
		FString M7_ShahtaKaragandinskaya;
	UPROPERTY(BlueprintReadWrite)
		FString M5_ObogatitFabrikaKaragandinskaya;
	UPROPERTY(BlueprintReadWrite)
		FString M6_SkladVzrivIOpasnihVeschestv;
	UPROPERTY(BlueprintReadWrite)
		FString M8_ZavodGBI;
	UPROPERTY(BlueprintReadWrite)
		FString M5_Rudnik;
	UPROPERTY(BlueprintReadWrite)
		FString M6_ChimZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M7_Hlebozavod;
	UPROPERTY(BlueprintReadWrite)
		FString M8_ZavodMetalloizdeliy;
	UPROPERTY(BlueprintReadWrite)
		FString M5_ZavodUdobreniy;
	UPROPERTY(BlueprintReadWrite)
		FString M6_ShahtaSaranskaya;
	UPROPERTY(BlueprintReadWrite)
		FString M7_ObogatitFabrikaVostochnaya;
	UPROPERTY(BlueprintReadWrite)
		FString M9_AvtomobZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M23_Elevator1;
	UPROPERTY(BlueprintReadWrite)
		FString M25_UgolniyKarier;
	UPROPERTY(BlueprintReadWrite)
		FString M26_Neftebaza1;
	UPROPERTY(BlueprintReadWrite)
		FString M24_MashinostroiyZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M3_ZavodRGShO;
	UPROPERTY(BlueprintReadWrite)
		FString M5_ShahtaImKuzenbaeva;
	UPROPERTY(BlueprintReadWrite)
		FString M6_ZavodTeplopribor;
	UPROPERTY(BlueprintReadWrite)
		FString M7_ShinniyZavod;
	UPROPERTY(BlueprintReadWrite)
		FString M4_ZavodMouschihSredstv;
	UPROPERTY(BlueprintReadWrite)
		FString M3_GelezorudniyKarier;
	UPROPERTY(BlueprintReadWrite)
		FString M3_GelezorudniyKarier1;
	UPROPERTY(BlueprintReadWrite)
		FString M5_MiacoKombinat;
	UPROPERTY(BlueprintReadWrite)
		FString M6_ZavodRGTO;
	UPROPERTY(BlueprintReadWrite)
		FString M3_OptoviySklad;
	UPROPERTY(BlueprintReadWrite)
		FString M3_GelezorudniyKarier2;
	UPROPERTY(BlueprintReadWrite)
		FString _1_nadvig;
	UPROPERTY(BlueprintReadWrite)
		FString _2_nadvig;
};

USTRUCT(BlueprintType)
struct FDataOtcepForUpdateTrainReestr
{
	GENERATED_USTRUCT_BODY()

		FOtcep otcep;
	Way wayStart;
	Way wayEnd;

};
//class Router;



UCLASS()
class NEWSTATIONDISPETCHER_API UMyDataOfStations : public UObject
{
	GENERATED_BODY()

};
