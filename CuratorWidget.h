// Fill out your copyright notice in the Description page of Project Settings.
//commit
#pragma once
//
#include "DisPawn.h"
#include "Components/EditableTextBox.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/TextBlock.h"
//#include "Components/ComboBoxString.h"
#include "Components/Button.h"
#include "Components/SizeBox.h"
#define WIN32_LEAN_AND_MEAN
#include<fstream>
#include<string>

//#include <time.h>




#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CuratorWidget.generated.h"

struct Otcep
{
	UComboBoxString* ComboBox_TypeVagon;
	UComboBoxString* ComboBox_CountVagon;
	UComboBoxString* ComboBox_TargetStation;
	UComboBoxString* ComboBox_EndWayTarget;

	Otcep()
	{
		ComboBox_TypeVagon = nullptr;
		ComboBox_CountVagon = nullptr;
		ComboBox_TargetStation = nullptr;
		ComboBox_EndWayTarget = nullptr;
	}

	bool IsValid()
	{
		if (ComboBox_TypeVagon != nullptr
			&& ComboBox_CountVagon != nullptr
			&& ComboBox_TargetStation != nullptr
			&& ComboBox_EndWayTarget != nullptr)
			return true;
		return false;
	}
};


UCLASS()
class NEWSTATIONDISPETCHER_API UCuratorWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	

	int sizerr;
	//первичная инициализация
	virtual bool Initialize();

	void DeleteCreateStudentsLogFiles();
	bool DeleteCreateLogFile(std::wstring stationName);

	ADisPawn* Disp;

	UPROPERTY(BlueprintReadWrite)
		//переменная имени новойгруппы
		FString textAddGroup;
	UPROPERTY(BlueprintReadWrite)
		//переменная имени нового студента
		FString nameAddStudent;
	UPROPERTY(BlueprintReadWrite)
		FString formatChapterStr;

	UPROPERTY(BlueprintReadWrite)
		//переменная фамилии нового студента
		FString familyAddStudent;
	//читает имена (+соответствующая конвертация для кириллицы) из указанного файла и помещает их в массив 
	//при ошибке в массив помещается слово "Error"
	TArray <FString> GetNamesFromFile(std::wifstream& in);
	TArray <FString> GetNamesFromFile(std::wstring path);
	void RegistrationNewName(FString newName, std::wofstream& app);
	bool RegistrationNewName(FString newName, std::wstring path);
	bool UnRegistrationName(FString newName, std::wstring path);
#pragma region WidgetElements

	UPROPERTY(meta = (BindWidget))
		class  UComboBoxString* ComboBoxString_AnimationSpeed;
	UFUNCTION()
	void RunComboboxSetAnimationSpeed(FString sItem, ESelectInfo::Type seltype);

	void SetSelectedIndexForComboboxSetAnimationSpeed();

	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_DateNow;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_TimeNow;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextBlock_Group;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextBlock_Name;


#pragma region Adding Deleting Group

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* Combobox_Groups;	
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* Combobox_GroupsForDeleting;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_AllGroupsForNewStudent;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_GroupForDeletingStudent;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_DeleteThisGroup;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_DeleteAllGroup;

#pragma endregion
#pragma region Adding Deleting Student
	
	/*UPROPERTY(meta = (BindWidget))
		class UComboBoxString* Combobox_Students;*/

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_StudentsForDeleting;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_NameStudent;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_FamilyStudent;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_DopData1;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_DopData2;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* EditableTextBox_DopData3;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_AddingNewStudent;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_DeleteSelectedStudent;
	UPROPERTY(meta = (BindWidget))
		class UButton* Button_DeleteAllStudents;

#pragma endregion

#pragma endregion

#pragma region Set Start Variables


	//установка переменной пути к папке с документами
	std::wstring pathToDocuments = L"";
	std::wstring GetMyDocumentsFolderPath();
	
	//создание  директории  StudentGroups при необходимости 
	std::wstring CreateDirectoryStudentGroups();
	//путь к директории с папками групп
	std::wstring pathTo__StudentGroups = L"";
	//создание директории для сохранения DataGame
	std::wstring CreateDirectiryToSavedDataGame();
	std::wstring pathTo__DirectorySavedDataGame;

	//создание  директории  StudentLogFiles при необходимости 
	std::wstring CreateDirectoryStudentLogFiles();
	//путь к директории с папками групп
	std::wstring pathTo__StudentLogFiles = L"";

	//создание регистрационного файла
	bool CreateRegisterFile(std::wstring path);

#pragma endregion

#pragma region Convertors

	std::wstring Convert_FString_To_wstring(FString name);
	std::wstring Convert_wstrUnicode_To_wstrASKIIWin1251(std::wstring text);
	std::wstring Convert_wstrASKIIWin1251_To_wstrUnicode(std::wstring text);


#pragma endregion

#pragma region Add Data To Gurnal

	UFUNCTION(BlueprintCallable)
		void SetActualDataForPanelToWriteData(FString nameStudent);


	/*std::wstring GetDateNow();
	std::wstring GetTimeNow();*/
	UFUNCTION(BlueprintCallable)
		//возвращает true при всех заполненых полях и закрытом файле журнала
	bool AddDataToGurnal(FString student, FString tema, FString academyassesment);
	UFUNCTION(BlueprintCallable)
	bool AllFieldsAreFilledAndGurnalClosed();
	/*UFUNCTION(BlueprintCallable)
		void OpenGurnal(FString nameStudent);*/

#pragma endregion
#pragma region AddOptionsToCommboboxes

	UFUNCTION()
		void AddOptionsForComboxDeletingGroup();
	UFUNCTION()
	void AddOptionsForComboxLoadSavedGame();
	UFUNCTION()
	void AddOptionsForComboxDeletingSavedGame();
	UFUNCTION()
		void AddOptionsForComboxGroup();
	UFUNCTION()
		void AddOptionsForComboxAllGroupForNewStudent();
	UFUNCTION()
		void AddOptionsForComboxGroupForDeletingStudent();

	UFUNCTION(BlueprintCallable)
		TArray<FString> GetStudentsInSelectedGroup();
	//UFUNCTION()
	//	void AddOptionsForCombox_Students();
	UFUNCTION()
		void AddOptionsForCombox_StudentsForDeleting();
#pragma endregion

#pragma region Set_Unset_Warning_Color
	UFUNCTION()
		void SetWarningColorForSelectedGroupDeleting();
	UFUNCTION()
		void SetNormalColorForSelectedGroupDeleting();
	UFUNCTION()
		void SetWarningColorForAllGroupDeleting();
	UFUNCTION()
		void SetNormalColorForAllGroupDeleting();
	UFUNCTION()
		void SetWarningColorForSelectedStudentDeleting();
	UFUNCTION()
		void SetNormalColorForSelectedStudentDeleting();
	UFUNCTION()
		void SetWarningColorForAllStudentDeleting();
	UFUNCTION()
		void SetNormalColorForAllStudentDeleting();
	/*UFUNCTION()
		void SetWarningColorForAllSavedGamesDeleting();
	UFUNCTION()
		void SetNormalColorForAllSavedGamesDeleting();*/
#pragma endregion

#pragma region Add Delete Groups

	UFUNCTION(BlueprintCallable)
		TArray <FString>  GetNamesOfSavedGroups();
	
	UFUNCTION(BlueprintCallable)
		//создает новую папку с именем группы
		void CreateNewGroup(FString nameNewGroup);
	//регистрирует имя в файле namesOfRegisteredGroups.csv
	bool RegistrationNewGroup(FString nameNewGroup);

	UFUNCTION()
		//папка с группой не удаляется, а переименовывается по дате времени с добавлением "не рабочая"
		void DeleteSelectedGroup();
	bool DeleteSelectedGroup(FString nameDeletedGroup);
	bool UnregistrationGroup(FString nameDeletedGroup);
	UFUNCTION()
		void DeleteAllGroups();

#pragma endregion

#pragma region Add Delete Students

	UFUNCTION(BlueprintCallable)
		TArray <FString>  GetNamesOfRegisteredStudentsInThisGroup(FString nameGroup);
	
	UFUNCTION()
		void AddNewStudent();

	bool RegistrationNewStudent(FString nameNewStudent, FString nameGroup);
	bool SetStartDataForNewStudent(FString nameNewStudent, FString nameGroup, FString dopData1, FString dopData2, FString dopData3);
	UFUNCTION()
		void DeleteSelectedStudent();
	bool DeleteSelectedStudent(FString nameDeletedStudent, FString nameGroup);
	bool UnregistrationStudent(FString nameDeletedStudent, FString nameGroup);
	UFUNCTION(BlueprintCallable)
		void DeleteAllStudentsInSelectedGroup(); 
	//UFUNCTION(BlueprintImplementableEvent)
	//	void DelSelStudent();
#pragma endregion


#pragma region Save Data Game

	//UPROPERTY(meta = (BindWidget))
		//class UButton* Button_DeleteAllSavedGame;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* Combobox_SavedGameForLoad;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* Combobox_SavedGameForDeleting;

	UFUNCTION(BlueprintCallable)
		bool SaveCurrentDataAndReestr(FString nameSave);
	bool IsNameExixt(FString nameSave);
	
	UFUNCTION(BlueprintCallable)
	bool DeleteSavedGame();
	bool DeleteSavedGame(FString delName);
	UFUNCTION(BlueprintCallable)
		bool DeleteAllSavedGame();
	UFUNCTION(BlueprintCallable)
	bool LoadSavedGame();

#pragma endregion




#pragma region SetUnsetTrain

#pragma region FirstDeclaration


	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_SelectedStation;	
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_SelectedStation_1;
	
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_FreeTrainNumbers;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_SettedTrainNumbers;
	UPROPERTY(meta = (BindWidget))
	class UButton* Button_DeleteTrainOnNumberFromStation;





	UFUNCTION()
		void AddOptionsTo_ComboBox_FreeTrainNumbers();
	UFUNCTION()
		void AddOptionsTo_ComboBox_SettedTrainNumbers();	
	

#pragma endregion

#pragma region Run Elements

	UFUNCTION()
		void Run_Button_DeleteTrainOnNumberFromStation();
	UFUNCTION(BlueprintCallable)
		bool MakeOnRelsSelectedTrainOrAddLoco(FString way, int numLoco);
	UFUNCTION(BlueprintCallable)
		bool MakeReadySelectedTrainOrRemoveLoco(FString way);

#pragma endregion

	UFUNCTION(BlueprintCallable)
		TArray<FString> arrFreeWayOnSelectetedStation();
	UFUNCTION(BlueprintCallable)
		TArray<FString> arrBuzyWayOnSelectetedStation();

#pragma endregion

#pragma region TrainRedactor

	UFUNCTION(BlueprintCallable)
		bool IsTrainOnRels(FString strain);
	UFUNCTION(BlueprintCallable)
		Station GetThisTrainStationNow(FString strain);

	UFUNCTION(BlueprintCallable)
		bool Run_Button_trainClear(FString strain);
	UFUNCTION(BlueprintCallable)
		bool Run_Button_odd_Even(FString strain);
	UFUNCTION(BlueprintCallable)
		bool Run_Button_SwapHead_Tail(FString strain);
	UFUNCTION(BlueprintCallable)
		bool ChangerNumber(FString strain, FString newNumTrain);

#pragma endregion

#pragma region Otcep Redactor

#pragma region first declaration

#pragma region Vagon Type Comboboxes

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_1;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_2;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_3;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_4;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_5;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_6;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_7;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_8;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_9;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TypeVagon_10;

#pragma endregion

#pragma region Vagon Count Comboboxes

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_1;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_2;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_3;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_4;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_5;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_6;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_7;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_8;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_9;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_CountVagon_10;

#pragma endregion

#pragma region Target Station Comboboxes

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_1;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_2;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_3;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_4;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_5;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_6;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_7;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_8;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_9;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_TargetStation_10;


#pragma endregion

#pragma region Target Station Comboboxes

	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_1;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_2;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_3;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_4;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_5;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_6;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_7;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_8;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_9;
	UPROPERTY(meta = (BindWidget))
		class UComboBoxString* ComboBox_EndWayTarget_10;


#pragma endregion

#pragma endregion

	UFUNCTION(BlueprintCallable)
	void SetConstComboboxesStart();

	void SetDynamicComboboxes();

	void SetOptions(UComboBoxString* combobox, TArray<FString> arrRusName);

#pragma region Add Options To Comboboxes EndWay

	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep1();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep2();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep3();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep4();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep5();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep6();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep7();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep8();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep9();
	UFUNCTION()
	void AddOptionsTo_WayEnd_otcep10();

#pragma endregion

	UFUNCTION(BlueprintCallable)
		bool SaveTrainToReestrAndSendToAll(FString sTrain);

	bool IsOtcepReady(int numberOtcep);
	bool AddOtcepToTrain(Train* train, int numberOtcep);

	UFUNCTION(BlueprintCallable)
		void SetComboboxesTrainRedactor(FString sTrain);

	void SetComboboxesTrainRedactor(Train* train);
	void SetComboboxesOtcep(Train* train, int numOtcep);

	Otcep GetComboboxesOtcep(int numOtcep);

	UFUNCTION(BlueprintCallable)
		bool ClearTrainToReestrAndSendToAll();


#pragma endregion


};
