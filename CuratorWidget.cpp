// Fill out your copyright notice in the Description page of Project Settings.
//commit

#include "CuratorWidget.h"
#define pathToListRegisteredGroupsFile L"\\namesOfRegisteredGroups.csv"
#define pathToListRegisteredStudentsInGroupFile L"\\namesOfRegisteredStudInThisGroup.csv"

//#define pathToStudentDirectory L"C:\\temp\\"
#define endTxtFile L".txt"
#define endDocFile L".doc"
#define endExelFile L".csv"
#define endFile endExelFile
#define endPathToRegisterFile L"RegisterFile" + endFile



bool UCuratorWidget::Initialize()
{
	Super::Initialize();

	//SetConstComboboxesStart();

	SetDynamicComboboxes();
	
	


#pragma region Set_Delete_Train


	Button_DeleteTrainOnNumberFromStation->OnClicked.AddDynamic(this, &UCuratorWidget::Run_Button_DeleteTrainOnNumberFromStation);

#pragma endregion

#pragma region Gurnal and Saving_Loading Game

	pathToDocuments = GetMyDocumentsFolderPath();
	pathTo__StudentGroups = CreateDirectoryStudentGroups();
	pathTo__DirectorySavedDataGame = CreateDirectiryToSavedDataGame();
	pathTo__StudentLogFiles = CreateDirectoryStudentLogFiles();
	//pathTo__DirectoryStudentsLogsFiles = CreateDirectiryToStudentsLogsFiles();

	//DeleteCreateStudentsLogFiles();

	Combobox_Groups->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxGroup);
	Combobox_GroupsForDeleting->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxDeletingGroup);
	ComboBox_AllGroupsForNewStudent->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxAllGroupForNewStudent);
	ComboBox_GroupForDeletingStudent->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxGroupForDeletingStudent);

	ComboBox_StudentsForDeleting->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForCombox_StudentsForDeleting);

	Combobox_SavedGameForLoad->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxLoadSavedGame);
	Combobox_SavedGameForDeleting->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsForComboxDeletingSavedGame);

	Button_DeleteThisGroup->OnClicked.AddDynamic(this, &UCuratorWidget::DeleteSelectedGroup);
	Button_DeleteThisGroup->OnHovered.AddDynamic(this, &UCuratorWidget::SetWarningColorForSelectedGroupDeleting);
	Button_DeleteThisGroup->OnUnhovered.AddDynamic(this, &UCuratorWidget::SetNormalColorForSelectedGroupDeleting);

	Button_DeleteAllGroup->OnClicked.AddDynamic(this, &UCuratorWidget::DeleteAllGroups);
	Button_DeleteAllGroup->OnHovered.AddDynamic(this, &UCuratorWidget::SetWarningColorForAllGroupDeleting);
	Button_DeleteAllGroup->OnUnhovered.AddDynamic(this, &UCuratorWidget::SetNormalColorForAllGroupDeleting);

	Button_DeleteSelectedStudent->OnClicked.AddDynamic(this, &UCuratorWidget::DeleteSelectedStudent);
	Button_DeleteSelectedStudent->OnHovered.AddDynamic(this, &UCuratorWidget::SetWarningColorForSelectedStudentDeleting);
	Button_DeleteSelectedStudent->OnUnhovered.AddDynamic(this, &UCuratorWidget::SetNormalColorForSelectedStudentDeleting);

	Button_DeleteAllStudents->OnClicked.AddDynamic(this, &UCuratorWidget::DeleteAllStudentsInSelectedGroup);
	Button_DeleteAllStudents->OnHovered.AddDynamic(this, &UCuratorWidget::SetWarningColorForAllStudentDeleting);
	Button_DeleteAllStudents->OnUnhovered.AddDynamic(this, &UCuratorWidget::SetNormalColorForAllStudentDeleting);

	Button_AddingNewStudent->OnClicked.AddDynamic(this, &UCuratorWidget::AddNewStudent);

#pragma endregion

	AActor* FoundDisFawn = UGameplayStatics::GetActorOfClass(GetWorld(), ADisPawn::StaticClass());
	Disp = Cast<ADisPawn>(FoundDisFawn);
	SetSelectedIndexForComboboxSetAnimationSpeed();
	return true;
}

void UCuratorWidget::DeleteCreateStudentsLogFiles()
{
	
	DeleteCreateLogFile(L"Dispetcher_1");
	DeleteCreateLogFile(L"Dispetcher_2");
	DeleteCreateLogFile(L"Radiouzel");
	DeleteCreateLogFile(L"Rasporiaditelnaya");
	DeleteCreateLogFile(L"Karabas");
	DeleteCreateLogFile(L"Karaganozek");
	DeleteCreateLogFile(L"Karaganda");
	DeleteCreateLogFile(L"GanaKaraganda");
	DeleteCreateLogFile(L"Karaganda_1");
	DeleteCreateLogFile(L"Karaganda_2");
	DeleteCreateLogFile(L"GanaAul");
	DeleteCreateLogFile(L"Dudovskaya");
	DeleteCreateLogFile(L"Maykuduk");


}

bool UCuratorWidget::DeleteCreateLogFile(std::wstring stationName)
{
	std::wofstream out(pathTo__StudentLogFiles + stationName);
	if (out.is_open())
	{		
	}
	else
	{
		out.close();
		return false;
	}
	out.close();
	return true;
}

TArray<FString> UCuratorWidget::GetNamesFromFile(std::wifstream& in)
{
	std::wstring name;
	//wchar_t* arr;
	//int size = 0;
	TArray<FString> arrNames;

	while (std::getline(in, name))
	{
		/*size = name.size() + 1;
		arr = new wchar_t[size];
		for (size_t i = 0; i < size; i++)
		{
			if (i < size - 1)
			{
				arr[i] = name[i];
			}
			else
			{
				arr[i] = '\0';
			}
		}
		for (size_t i = 0; i < size; i++)
		{
			Convertor_From_RusASCIIWin1251(arr[i]);
		}
		arrNames.Add(arr);
		delete[] arr;*/	

		name = Convert_wstrASKIIWin1251_To_wstrUnicode(name);
		arrNames.Add(name.c_str());
	}
	return arrNames;
}
TArray<FString> UCuratorWidget::GetNamesFromFile(std::wstring path)
{
	TArray<FString> arrNames;
	std::wifstream in;
	in.open(path);
	if (in.is_open())
	{
		arrNames = GetNamesFromFile(in);
	}
	else
	{
		arrNames.Add(L"Error");
	}
	in.close();
	return arrNames;
}

void UCuratorWidget::RegistrationNewName(FString newName, std::wofstream& app)
{	
	std::wstring wnewName = Convert_FString_To_wstring(newName);
	wnewName = Convert_wstrUnicode_To_wstrASKIIWin1251(wnewName);
	app << wnewName;
	app << std::endl;
	
}
bool UCuratorWidget::RegistrationNewName(FString newName, std::wstring path)
{
	std::wofstream out(path, std::ios::app);
	if (out.is_open())
	{
		RegistrationNewName(newName, out);		
	}
	else
	{
		out.close();
		return false;
	}
	out.close();
	return true;
}

bool UCuratorWidget::UnRegistrationName(FString delName, std::wstring path)
{
	//Получаем массив сохраненных имен
	TArray<FString> arrSavedNames = GetNamesFromFile(path);
	int indexForDel = arrSavedNames.Find(delName);
	arrSavedNames.RemoveAt(indexForDel);
;
	std::wofstream out(path);
	out.close();
	for (size_t i = 0; i < arrSavedNames.Num(); i++)
	{
		if (!RegistrationNewName(arrSavedNames[i], path)) return false;
	}
	return true;
}

void UCuratorWidget::RunComboboxSetAnimationSpeed(FString sItem, ESelectInfo::Type seltype)
{
	int index = ComboBoxString_AnimationSpeed->GetSelectedIndex();

	if (index == 0)
	{
		Disp->SetTimeRouterRun(15);
	}
	else if (index == 1)
	{
		Disp->SetTimeRouterRun(10);
	}
	else if (index == 2)
	{
		Disp->SetTimeRouterRun(5);
	}
	else if (index == 3)
	{
		Disp->SetTimeRouterRun(2);
	}
	else if (index == 4)
	{
		Disp->SetTimeRouterRun(1);
	}
	SetSelectedIndexForComboboxSetAnimationSpeed();

}
void UCuratorWidget::SetSelectedIndexForComboboxSetAnimationSpeed()
{
	if (Disp == nullptr)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(2);
		return;
	}
	if (Disp->cur.timeforRouterRun == 15)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(0);
	}
	else if (Disp->cur.timeforRouterRun == 10)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(1);
	}
	else if (Disp->cur.timeforRouterRun == 5)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(2);
	}
	else if (Disp->cur.timeforRouterRun == 2)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(3);
	}
	else if (Disp->cur.timeforRouterRun == 1)
	{
		ComboBoxString_AnimationSpeed->SetSelectedIndex(4);
	}

}

#pragma region Set Start Variables

std::wstring UCuratorWidget::GetMyDocumentsFolderPath()
{
	wchar_t Folder[1024];
	HRESULT hr = SHGetFolderPathW(0, CSIDL_MYDOCUMENTS, 0, 0, Folder);
	if (SUCCEEDED(hr))
	{
		return Folder;
	}
	else return L"";
}

std::wstring UCuratorWidget::CreateDirectoryStudentGroups()
{
	std::wstring path = pathToDocuments + L"\\StudentGroups";
	if (_wmkdir(path.c_str()))
	{
		return path;
	}
	return path;
}

std::wstring UCuratorWidget::CreateDirectiryToSavedDataGame()
{
	std::wstring path = pathToDocuments + L"\\Dispetcher_SavedData";
	if (_wmkdir(path.c_str()))
	{
		return path;
	}
	return path;
	
}

std::wstring UCuratorWidget::CreateDirectoryStudentLogFiles()
{
	std::wstring path = pathToDocuments + L"\\StudentLogFiles";
	if (_wmkdir(path.c_str()))
	{
		return path;
	}
	return path;
}



bool UCuratorWidget::CreateRegisterFile(std::wstring path)
{
	if (path.empty()) return false;
	std::wofstream out(path, std::ios::app);
	if (out.is_open())
	{
		out.close();
		return true;
	}	
	return false;
}

#pragma endregion

#pragma region Convertors

std::wstring UCuratorWidget::Convert_FString_To_wstring(FString str)
{
	std::wstring wstr;
	wchar_t* arr = new wchar_t[str.Len() + 1];

	int size = str.Len() + 1;
	for (size_t i = 0; i < size; i++)
	{
		if (i < size - 1)
		{
			arr[i] = str[i];
		}
		else
		{
			arr[i] = '\0';
		}
	}
	wstr = arr;
	delete[] arr;
	return wstr;
}
std::wstring UCuratorWidget::Convert_wstrUnicode_To_wstrASKIIWin1251(std::wstring text)
{
	for (size_t i = 0; i < text.size(); i++)
	{
		if (text[i] >= 1040 && text[i] <= 1071) text[i] = text[i] - 848;
		if (text[i] >= 1072 && text[i] <= 1103) text[i] = text[i] - 848;
		if (text[i] == 1025) text[i] = 168;
		if (text[i] == 1105) text[i] = 184;
	}
	return text;
}
std::wstring UCuratorWidget::Convert_wstrASKIIWin1251_To_wstrUnicode(std::wstring text)
{
	for (size_t i = 0; i < text.size(); i++)
	{
		if (text[i] >= 192 && text[i] <= 223) text[i] = text[i] + 848;
		if (text[i] >= 224 && text[i] <= 255) text[i] = text[i] + 848;
		if (text[i] == 168) text[i] = 1025;
		if (text[i] == 184) text[i] = 1105;
	}
	return text;
}

#pragma endregion

#pragma region Add Data To Gurnal

void UCuratorWidget::SetActualDataForPanelToWriteData(FString nameStudent)
{
	FString dateNow = Disp->GetDateNow().c_str();
	FString timeNow = Disp->GetTimeNow().c_str();

	EditableTextBox_DateNow->SetText(FText::FromString(dateNow));
	EditableTextBox_TimeNow->SetText(FText::FromString(timeNow));

	TextBlock_Group->SetText(FText::FromString(Combobox_Groups->GetSelectedOption()));
	TextBlock_Name->SetText(FText::FromString(nameStudent));
}

//std::wstring UCuratorWidget::GetDateNow()
//{
//	//Получить метку времени по Гринвичу
//	time_t now = time(0);
//	struct tm timeinfo;
//	//Локализовать время
//	localtime_s(&timeinfo, &now);
//	//задать формат даты
//	wchar_t format[] = L"%d.%m.%g";
//
//	wchar_t buffer[80];
//	//Вывести время по формату в буфер
//	wcsftime(buffer, 80, format, &timeinfo);
//	//Переписать буфер в объект string
//	std::wstring str_buffer(buffer);
//	return str_buffer;
//}
//
//std::wstring UCuratorWidget::GetTimeNow()
//{
//	//Получить метку времени по Гринвичу
//	time_t now = time(0);
//	struct tm timeinfo;
//	//Локализовать время
//	localtime_s(&timeinfo, &now);
//	//задать формат даты
//	wchar_t format[] = L" %H:%M";
//
//	wchar_t buffer[80];
//	//Вывести время по формату в буфер
//	wcsftime(buffer, 80, format, &timeinfo);
//	//Переписать буфер в объект string
//	std::wstring str_buffer(buffer);
//	return str_buffer;
//}

bool UCuratorWidget::AddDataToGurnal(FString student, FString tema, FString academyassesment)
{
	//получаем путь
	FString group = Combobox_Groups->GetSelectedOption();
		
	std::wstring pathGroup = Convert_FString_To_wstring(group);
	std::wstring pathStudent = Convert_FString_To_wstring(student);
	std::wstring path = pathTo__StudentGroups + L"\\" + pathGroup + L"\\" + pathStudent + endFile;


	//получаем данные для записи
	FString date = EditableTextBox_DateNow->GetText().ToString();
	FString time = EditableTextBox_TimeNow->GetText().ToString();

	std::wstring wwdate = Convert_FString_To_wstring(date);
	std::wstring wwtime = Convert_FString_To_wstring(time);
	std::wstring wacademyassesment = Convert_FString_To_wstring(academyassesment);
	std::wstring wwtema = Convert_FString_To_wstring(tema);
	

	wwdate = Convert_wstrUnicode_To_wstrASKIIWin1251(wwdate);
	wwtime = Convert_wstrUnicode_To_wstrASKIIWin1251(wwtime);
	wacademyassesment = Convert_wstrUnicode_To_wstrASKIIWin1251(wacademyassesment);
	wwtema = Convert_wstrUnicode_To_wstrASKIIWin1251(wwtema);

	
	std::wofstream out(path, std::ios::app);
	if (out.is_open())
	{
		out << wwdate;
		out << L";;";
		out << wwtime;
		out << L";;";
		out << wacademyassesment;
		out << L";;";
		out << wwtema;
		out << std::endl;

		out.close();
		return true;
	}
	out.close();
	return false;
}

bool UCuratorWidget::AllFieldsAreFilledAndGurnalClosed()
{
	if (EditableTextBox_DateNow->GetText().IsEmpty()) return false;
	if (EditableTextBox_TimeNow->GetText().IsEmpty()) return false;
	return true;
}

#pragma endregion

#pragma region AddOptionsToCommboboxes

void UCuratorWidget::AddOptionsForComboxGroup()
{
	Combobox_Groups->ClearOptions();
	TArray <FString> namesOfGroups;
	namesOfGroups = GetNamesOfSavedGroups();
	for (size_t i = 0; i < namesOfGroups.Num(); i++)
	{
		Combobox_Groups->AddOption(namesOfGroups[i]);
	}	
	
}

void UCuratorWidget::AddOptionsForComboxAllGroupForNewStudent()
{
	ComboBox_AllGroupsForNewStudent->ClearOptions();
	TArray <FString> namesOfGroups;
	namesOfGroups = GetNamesOfSavedGroups();
	for (size_t i = 0; i < namesOfGroups.Num(); i++)
	{
		ComboBox_AllGroupsForNewStudent->AddOption(namesOfGroups[i]);
	}

}

void UCuratorWidget::AddOptionsForComboxGroupForDeletingStudent()
{
	ComboBox_GroupForDeletingStudent->ClearOptions();
	TArray <FString> namesOfGroups;
	namesOfGroups = GetNamesOfSavedGroups();
	for (size_t i = 0; i < namesOfGroups.Num(); i++)
	{
		ComboBox_GroupForDeletingStudent->AddOption(namesOfGroups[i]);
	}
}

TArray<FString> UCuratorWidget::GetStudentsInSelectedGroup()
{
	
	FString nameGroup = Combobox_Groups->GetSelectedOption();
	TArray <FString> str;
	if (nameGroup.IsEmpty()) return str;
	return GetNamesOfRegisteredStudentsInThisGroup(nameGroup);
}

void UCuratorWidget::AddOptionsForCombox_StudentsForDeleting()
{
	FString nameGroup = ComboBox_GroupForDeletingStudent->GetSelectedOption();
	if (nameGroup.IsEmpty()) return;
	ComboBox_StudentsForDeleting->ClearOptions();
	TArray<FString> namesStudentInSelectedGroup = GetNamesOfRegisteredStudentsInThisGroup(nameGroup);
	for (size_t i = 0; i < namesStudentInSelectedGroup.Num(); i++)
	{
		ComboBox_StudentsForDeleting->AddOption(namesStudentInSelectedGroup[i]);
	}
}

void UCuratorWidget::AddOptionsForComboxDeletingGroup()
{
	Combobox_GroupsForDeleting->ClearOptions();
	TArray <FString> namesOfGroups;
	namesOfGroups = GetNamesOfSavedGroups();
	for (size_t i = 0; i < namesOfGroups.Num(); i++)
	{
		Combobox_GroupsForDeleting->AddOption(namesOfGroups[i]);
	}
}

void UCuratorWidget::AddOptionsForComboxLoadSavedGame()
{
	Combobox_SavedGameForLoad->ClearOptions();
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame +L"\\" + endPathToRegisterFile;

	TArray<FString> nameSavedGames = GetNamesFromFile(pathRegisterFile);

	for (size_t i = 0; i < nameSavedGames.Num(); i++)
	{
		Combobox_SavedGameForLoad->AddOption(nameSavedGames[i]);
	}

}

void UCuratorWidget::AddOptionsForComboxDeletingSavedGame()
{
	Combobox_SavedGameForDeleting->ClearOptions();
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame + L"\\" + endPathToRegisterFile;

	TArray<FString> nameSavedGames = GetNamesFromFile(pathRegisterFile);

	for (size_t i = 0; i < nameSavedGames.Num(); i++)
	{
		Combobox_SavedGameForDeleting->AddOption(nameSavedGames[i]);
	}
}

#pragma endregion

#pragma region Set_Unset_Warning_Color

void UCuratorWidget::SetWarningColorForSelectedGroupDeleting()
{
	Button_DeleteThisGroup->SetBackgroundColor(FLinearColor(1, 0, 0, 1));
}

void UCuratorWidget::SetNormalColorForSelectedGroupDeleting()
{
	Button_DeleteThisGroup->SetBackgroundColor(FLinearColor(1, 1, 1, 1));
}

void UCuratorWidget::SetWarningColorForAllGroupDeleting()
{
	Button_DeleteAllGroup->SetBackgroundColor(FLinearColor(1, 0, 0, 1));
}

void UCuratorWidget::SetNormalColorForAllGroupDeleting()
{
	Button_DeleteAllGroup->SetBackgroundColor(FLinearColor(1, 1, 1, 1));
}

void UCuratorWidget::SetWarningColorForSelectedStudentDeleting()
{
	Button_DeleteSelectedStudent->SetBackgroundColor(FLinearColor(1, 0, 0, 1));
}

void UCuratorWidget::SetNormalColorForSelectedStudentDeleting()
{
	Button_DeleteSelectedStudent->SetBackgroundColor(FLinearColor(1, 1, 1, 1));
}

void UCuratorWidget::SetWarningColorForAllStudentDeleting()
{
	Button_DeleteAllStudents->SetBackgroundColor(FLinearColor(1, 0, 0, 1));
}

void UCuratorWidget::SetNormalColorForAllStudentDeleting()
{
	Button_DeleteAllStudents->SetBackgroundColor(FLinearColor(1, 1, 1, 1));
}


#pragma endregion

#pragma region Add Delete Groups

TArray<FString> UCuratorWidget::GetNamesOfSavedGroups()
{

	TArray<FString> arrNames;
	std::wstring path = pathTo__StudentGroups + pathToListRegisteredGroupsFile;
	arrNames = GetNamesFromFile(path);
	return 	arrNames;
}

void UCuratorWidget::CreateNewGroup(FString nameNewGroup)
{
	if (nameNewGroup.IsEmpty()) return;
	if (RegistrationNewGroup(nameNewGroup))
	{
		int size = nameNewGroup.Len() + 1;
	
		std::wstring pathName = Convert_FString_To_wstring(nameNewGroup);

		std::wstring path = pathTo__StudentGroups + L"\\" + pathName;
		if (!_wmkdir(path.c_str()))
		{
			Beep(500, 50);
		}
		else
		{
			UnregistrationGroup(nameNewGroup);
			Beep(500, 50);
			Beep(500, 50);
			Beep(500, 50);
		}
		//регистрируем название группы в файле с именами зарегистрированных групп
	}
}
bool UCuratorWidget::RegistrationNewGroup(FString nameNewGroup)
{
	if (nameNewGroup.IsEmpty()) return false;
	TArray<FString> arrSavedNames = GetNamesOfSavedGroups();
	for (size_t i = 0; i < arrSavedNames.Num(); i++)
	{
		if (arrSavedNames[i] == nameNewGroup) return false;
	}
	std::wstring path = pathTo__StudentGroups + pathToListRegisteredGroupsFile;
	return RegistrationNewName(nameNewGroup, path);	
}
void UCuratorWidget::DeleteSelectedGroup()
{
	FString nameSelectedGroup = Combobox_GroupsForDeleting->GetSelectedOption();
	if (nameSelectedGroup.IsEmpty()) return;
	if (!DeleteSelectedGroup(nameSelectedGroup)) return;
	Combobox_GroupsForDeleting->ClearSelection();
	ComboBox_AllGroupsForNewStudent->ClearSelection();
	Combobox_Groups->ClearSelection();
	//Combobox_Students->ClearSelection();
	ComboBox_StudentsForDeleting->ClearSelection();;
}
bool UCuratorWidget::DeleteSelectedGroup(FString nameSelectedGroup)
{
	auto now = time(0);
	std::wstring datasec = std::to_wstring(now);
	



	std::wstring pathName = Convert_FString_To_wstring(nameSelectedGroup);

	//путь переименуемого файла
	std::wstring path = pathTo__StudentGroups + L"\\" + pathName;
	//создаем, если не существует, директорию для нерабочих групп
	std::wstring pathDelDir = pathTo__StudentGroups + L"\\DeletedGroup";
	if (!_wmkdir(pathDelDir.c_str()))
	{
		Beep(500, 50);
	}
	else
	{
		Beep(500, 50);
		Beep(500, 50);
		Beep(500, 50);
	}
	pathDelDir = pathDelDir + L"\\___To__Arhiv__" + pathName + L"__" + datasec;
	//делаем попытку un-регистрации
	if (UnregistrationGroup(nameSelectedGroup))
	{
		if (_wrename(path.c_str(), (pathDelDir).c_str()) == 0)
		{
			return true;
		}
		else
		{
			RegistrationNewGroup(nameSelectedGroup);
			return false;
		}
	}
	return false;
}
bool UCuratorWidget::UnregistrationGroup(FString nameDeletingGroup)
{
	
	//Получаем массив сохраненных групп
	TArray<FString> arrSavedGroups = GetNamesOfSavedGroups();
	int indexForDel = arrSavedGroups.Find(nameDeletingGroup);
	arrSavedGroups.RemoveAt(indexForDel);
	std::wstring path = pathTo__StudentGroups + pathToListRegisteredGroupsFile;
	std::wofstream out(path);
	out.close();
	for (size_t i = 0; i < arrSavedGroups.Num(); i++)
	{
		if (!RegistrationNewName(arrSavedGroups[i], path)) return false;
	}
	return true;
}
void UCuratorWidget::DeleteAllGroups()
{
	//Получаем массив сохраненных групп
	TArray<FString> arrSavedGroups = GetNamesOfSavedGroups();
	for (size_t i = 0; i < arrSavedGroups.Num(); i++)
	{
		DeleteSelectedGroup(arrSavedGroups[i]);
	}
}

#pragma endregion

#pragma region Add Delete Students

TArray<FString> UCuratorWidget::GetNamesOfRegisteredStudentsInThisGroup(FString nameGroup)
{
	TArray<FString> arrNames;

	std::wstring pathGroup = Convert_FString_To_wstring(nameGroup);

	std::wstring path = pathTo__StudentGroups + L"\\" + pathGroup + pathToListRegisteredStudentsInGroupFile;
	arrNames = GetNamesFromFile(path);	
	return arrNames;
}
void UCuratorWidget::AddNewStudent()
{
	FString groupNewStudent = ComboBox_AllGroupsForNewStudent->GetSelectedOption();
	FString nameNewStudent = EditableTextBox_NameStudent->GetText().ToString();
	FString familyNewStudent = EditableTextBox_FamilyStudent->GetText().ToString();

	FString dopData1 = EditableTextBox_DopData1->GetText().ToString();
	FString dopData2 = EditableTextBox_DopData2->GetText().ToString();
	FString dopData3 = EditableTextBox_DopData3->GetText().ToString();


	if (groupNewStudent.IsEmpty() || nameNewStudent.IsEmpty() || familyNewStudent.IsEmpty()) return;


	FString registerName = nameNewStudent + L" " + familyNewStudent;

	if (RegistrationNewStudent(registerName, groupNewStudent))
	{
		EditableTextBox_NameStudent->SetText(FText::FromString(""));
		EditableTextBox_FamilyStudent->SetText(FText::FromString(""));
		EditableTextBox_DopData1->SetText(FText::FromString(""));
		EditableTextBox_DopData2->SetText(FText::FromString(""));
		EditableTextBox_DopData3->SetText(FText::FromString(""));
	}

	SetStartDataForNewStudent( registerName, groupNewStudent, dopData1, dopData2, dopData3);
		
}
bool UCuratorWidget::RegistrationNewStudent(FString nameNewStudent, FString nameGroup)
{

	std::wstring pathGroup = Convert_FString_To_wstring(nameGroup);

	std::wstring path = pathTo__StudentGroups + L"\\" + pathGroup + pathToListRegisteredStudentsInGroupFile;

	return RegistrationNewName(nameNewStudent, path);
}
bool UCuratorWidget::SetStartDataForNewStudent(FString nameNewStudent, FString nameGroup, FString dopData1, FString dopData2, FString dopData3)
{
	std::wstring pathGroup = Convert_FString_To_wstring(nameGroup);
	std::wstring student = Convert_FString_To_wstring(nameNewStudent);
	std::wstring path = pathTo__StudentGroups + L"\\" + pathGroup + L"\\" + student + endFile;

	std::wstring wdata1 = Convert_FString_To_wstring(dopData1);
	std::wstring wdata2 = Convert_FString_To_wstring(dopData2);
	std::wstring wdata3 = Convert_FString_To_wstring(dopData3);
	
	std::wstring wformatChapterStr = Convert_FString_To_wstring(formatChapterStr);

	std::wstring wdata = Convert_wstrUnicode_To_wstrASKIIWin1251(student);
	 wdata1 = Convert_wstrUnicode_To_wstrASKIIWin1251(wdata1);
	 wdata2 = Convert_wstrUnicode_To_wstrASKIIWin1251(wdata2);
	 wdata3 = Convert_wstrUnicode_To_wstrASKIIWin1251(wdata3);

	 wformatChapterStr = Convert_wstrUnicode_To_wstrASKIIWin1251(wformatChapterStr);

	std::wofstream out(path, std::ios::app);
	if (out.is_open())
	{
		out << L";";
		out << wdata;
		out << L";";
		out << std::endl;
		out << std::endl;
		if (!wdata1.empty())
		{
			out << wdata1;
			out << L";";
			out << std::endl;
		}
		if (!wdata2.empty())
		{
			out << wdata2;
			out << L";";
			out << std::endl;
		}
		if (!wdata3.empty())
		{
			out << wdata3;
			out << L";";
			out << std::endl;
		}		
		out << std::endl;

		out << wformatChapterStr;
		out << std::endl;
		out << std::endl;
	
		out.close();
		return true;
	}
	out.close();
	return false;
}
void UCuratorWidget::DeleteSelectedStudent()
{
	FString nameSelectedStudent = ComboBox_StudentsForDeleting->GetSelectedOption();
	if (nameSelectedStudent.IsEmpty()) return;
	FString nameGroup = ComboBox_GroupForDeletingStudent->GetSelectedOption();
	if (nameGroup.IsEmpty()) return;
	if (!DeleteSelectedStudent(nameSelectedStudent, nameGroup)) return;
	//Combobox_Students->ClearSelection();
	ComboBox_StudentsForDeleting->ClearSelection();
	
		
}
bool UCuratorWidget::DeleteSelectedStudent(FString nameDeletedStudent, FString nameGroup)
{
	auto now = time(0);
	std::wstring datasec = std::to_wstring(now);
	/*FString Group = nameGroup;
	FString Student = nameDeletedStudent;
	wchar_t* group = nullptr;
	wchar_t* student = nullptr;
	std::wstring pathGroup = L"";
	std::wstring pathStudent = L"";*/

	//group = new wchar_t[Group.Len()+1];
	//pathGroup = GetConverteredToRus_NameFile_Text(group, Group);
	//delete[] group;
	//group = nullptr;

	std::wstring pathGroup = Convert_FString_To_wstring(nameGroup);


	std::wstring pathStudent = Convert_FString_To_wstring(nameDeletedStudent);
	
	std::wstring path = pathTo__StudentGroups + L"\\" + pathGroup + L"\\" + pathStudent + endExelFile;
	//создаем, если не существует, директорию для нерабочих групп
	std::wstring pathDelDir = pathTo__StudentGroups + L"\\DeletedStudents";
	if (!_wmkdir(pathDelDir.c_str()))
	{
		Beep(500, 50);
		Beep(500, 50);
	}
	else
	{
		Beep(500, 50);
		Beep(500, 50);
		Beep(500, 50);
		Beep(500, 50);
	}
	pathDelDir = pathDelDir + L"\\___To__Arhiv__" + pathStudent + L"__" + datasec + endExelFile;
	//делаем попытку un-регистрации
	if (UnregistrationStudent(nameDeletedStudent, nameGroup))
	{
		if (_wrename(path.c_str(), (pathDelDir).c_str()) == 0)
		{
			return true;
		}
		else
		{
			RegistrationNewStudent(nameDeletedStudent, nameGroup);
			return false;
		}
	}
	return false;
}
bool UCuratorWidget::UnregistrationStudent(FString nameDeletedStudent, FString nameGroup)
{
	FString nameDeletingStudent = nameDeletedStudent;
	//Получаем массив сохраненных групп
	TArray<FString> arrStudentsInGroup = GetNamesOfRegisteredStudentsInThisGroup(nameGroup);
	int indexForDel = arrStudentsInGroup.Find(nameDeletingStudent);
	arrStudentsInGroup.RemoveAt(indexForDel);

	std::wstring Group = Convert_FString_To_wstring(nameGroup);


	std::wstring path = pathTo__StudentGroups + L"\\" + Group + pathToListRegisteredStudentsInGroupFile;
	std::wofstream out(path);
	out.close();

	for (size_t i = 0; i < arrStudentsInGroup.Num(); i++)
	{
		if(!RegistrationNewName(arrStudentsInGroup[i], path)) return false;
	}
	return true;
}
void UCuratorWidget::DeleteAllStudentsInSelectedGroup()
{
	FString nameGroup = ComboBox_GroupForDeletingStudent->GetSelectedOption();
	if (nameGroup.IsEmpty()) return;
	ComboBox_StudentsForDeleting->ClearSelection();
	TArray<FString> arrStudents = GetNamesOfRegisteredStudentsInThisGroup(nameGroup);
	for (size_t i = 0; i < arrStudents.Num(); i++)
	{
		DeleteSelectedStudent(arrStudents[i], nameGroup);
	}
}


#pragma endregion

#pragma region Save Data Game

bool UCuratorWidget::IsNameExixt(FString nameSave)
{
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame + L"\\" + endPathToRegisterFile;
	TArray<FString> arrNamesSavedFiles = GetNamesFromFile(pathRegisterFile);
	for (size_t i = 0; i < arrNamesSavedFiles.Num(); i++)
	{
		if (arrNamesSavedFiles[i] == nameSave)
			{
				return true;
			}
		
	}
	return false;
}
bool UCuratorWidget::SaveCurrentDataAndReestr(FString nameSave)
{
	if (nameSave.IsEmpty()) return false;
	if (IsNameExixt(nameSave)) return false;
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame + L"\\" + endPathToRegisterFile;
	//создаем, если не существует RegisterFile
	if (! CreateRegisterFile(pathRegisterFile)) return false;
	//регистрируем новое имя
	if (!RegistrationNewName(nameSave, pathRegisterFile)) return false;

	//в случае удачной регистрации создаем два сохранения
	DataAllStations dataAllStations = Disp->CreateCurrentDataForSaving();


	//путь к сохраняемому файлу 
	std::wstring pathSaveFileDataStations = pathTo__DirectorySavedDataGame + L"\\" + Convert_FString_To_wstring(nameSave) + L".dst";

	
	std::ofstream out(pathSaveFileDataStations, std::ios::binary);
	if (out.is_open())
	{
		out.write((char*)&dataAllStations, sizeof(DataAllStations));
		out.close();
		return true;
	}
	
	return false;
}

bool UCuratorWidget::DeleteSavedGame()
{
	FString nameDeletingFile = Combobox_SavedGameForDeleting->GetSelectedOption();
	if (nameDeletingFile.IsEmpty()) return false;
	if (DeleteSavedGame(nameDeletingFile))
	{
		Combobox_SavedGameForDeleting->ClearSelection();
		return true;
	}
	return false;
}

bool UCuratorWidget::DeleteSavedGame(FString nameDeletingFile)
{
	
	std::wstring pathDeletingFileDataStations = pathTo__DirectorySavedDataGame + L"\\" + Convert_FString_To_wstring(nameDeletingFile) + L".dst";
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame + L"\\" + endPathToRegisterFile;

	int dataDel = _wremove(pathDeletingFileDataStations.c_str());

	if(dataDel==0)
	{
		return UnRegistrationName(nameDeletingFile, pathRegisterFile);
	}
	return false;
}

bool UCuratorWidget::DeleteAllSavedGame()
{
	std::wstring pathRegisterFile = pathTo__DirectorySavedDataGame + L"\\" + endPathToRegisterFile;
	TArray<FString> arrNamesSavedFiles = GetNamesFromFile(pathRegisterFile);
	for (size_t i = 0; i < arrNamesSavedFiles.Num(); i++)
	{
		if(arrNamesSavedFiles[i].IsEmpty()) continue;
		if(!DeleteSavedGame(arrNamesSavedFiles[i])) return false;
	}
	Combobox_SavedGameForDeleting->ClearSelection();
	

	int dataDel = _wremove(pathRegisterFile.c_str());
	return true;
}

bool UCuratorWidget::LoadSavedGame()
{
	FString pathNameGame = Combobox_SavedGameForLoad->GetSelectedOption();
	if (pathNameGame.IsEmpty()) return false;

	DataAllStations savedData;

	std::wstring pathToSavedFileStationData = pathTo__DirectorySavedDataGame + L"\\" + Convert_FString_To_wstring(pathNameGame) + L".dst";

	std::ifstream in(pathToSavedFileStationData, std::ios::binary);
	if (!in.is_open()) return false;
	in.read((char*)&savedData, sizeof(DataAllStations));
	in.close();

	Disp->LoadSavedDataToStructuries(savedData);

	std::thread t(&ADisPawn::SendDataAllStationToAll, Disp);
	t.detach();

	return true;
}

#pragma endregion


#pragma region SetUnsetTrain

#pragma region First Declaration

void UCuratorWidget::AddOptionsTo_ComboBox_FreeTrainNumbers()
{
	ComboBox_FreeTrainNumbers->ClearOptions();
	TArray<FString> arrNumber = Disp->trainReestr.GetNumbersReadyTrain();
	for (size_t i = 0; i < arrNumber.Num(); i++)
	{
		ComboBox_FreeTrainNumbers->AddOption(arrNumber[i]);
	}
}
void UCuratorWidget::AddOptionsTo_ComboBox_SettedTrainNumbers()
{
	ComboBox_SettedTrainNumbers->ClearOptions();
	TArray<FString> arrNumber = Disp->trainReestr.GetNumbersOnRelsTrain();
	for (size_t i = 0; i < arrNumber.Num(); i++)
	{
		ComboBox_SettedTrainNumbers->AddOption(arrNumber[i]);
	}
}

#pragma endregion

#pragma region Run Elements

void UCuratorWidget::Run_Button_DeleteTrainOnNumberFromStation()
{

#pragma region Get and Check

	FString delTrain = ComboBox_SettedTrainNumbers->GetSelectedOption();
	if (delTrain.IsEmpty()) return;

	int numDelTrain = Disp->Convert_FString_To_Int(delTrain);
	Train* train = Disp->trainReestr.GetTrain(numDelTrain);
	if (train == nullptr) return;

	Station station = Station::Unknown;

	FElm* way = Disp->GetWayOnNumberTrain(numDelTrain,station);	
	if (way == nullptr) return;
	if (station == Station::Unknown) return;

#pragma endregion
	
	way->num = 0;
	way->stat = EAStat::Free;
	train->OnRels = false;

	ComboBox_SettedTrainNumbers->ClearSelection();

	Disp->SendDataStationToAll(station);
	Disp->SendDataStationToAll(Station::TrainReestr);
		
}

bool UCuratorWidget::MakeOnRelsSelectedTrainOrAddLoco(FString way, int numLoco)
{
#pragma region Get and Check

	if (way.IsEmpty()) return false;

	//наличие станции для установки поезда или локомотива
	FString nameStation = ComboBox_SelectedStation->GetSelectedOption();
	if (nameStation.IsEmpty()) return false;

	Station station = Disp->Convert_RusStationTo_Station(nameStation);
	if (station == Station::Unknown) return false;

	
	//номер поезда или номер Loco
	FString numTrain = ComboBox_FreeTrainNumbers->GetSelectedOption();
	if (numTrain.IsEmpty() && numLoco == 0) return false;

	//получаем поезд из реестра
	Train* train = Disp->trainReestr.GetTrain(numTrain);
	if (train == nullptr && numLoco == 0) return false;
	if (train->GetNumber()==0 && numLoco == 0) return false;

	//если есть объект для установки, то получаем указать на требуемый путь станции
	FElm* wayPtr = Disp->GetWay(nameStation, way);
	if (wayPtr == nullptr) return false;

#pragma endregion
	
	//если только локомотив
	if (train->GetNumber() == 0)
	{
		wayPtr->dopn = numLoco;
		wayPtr->stat = EAStat::Busy;

		Disp->SendDataStationToAll(station);

		return true;
	}
	
	wayPtr->num = train->GetNumber();
	wayPtr->stat = EAStat::Busy;
	train->OnRels = true;
	if (train->GetNumber() % 2 != 0)
	{
		train->SetNumberLocoOdd(numLoco);
	}
	else
	{
		train->SetNumberLocoEven(numLoco);
	}
	ComboBox_FreeTrainNumbers->ClearSelection();
	ComboBox_SelectedStation->ClearSelection();

	Disp->SendDataStationToAll(station);
	Disp->SendDataStationToAll(Station::TrainReestr);

	return true;
}

bool UCuratorWidget::MakeReadySelectedTrainOrRemoveLoco(FString way)
{
#pragma region Get and Check

	if (way.IsEmpty()) return false;

	FString nameStation = ComboBox_SelectedStation_1->GetSelectedOption();
	if (nameStation.IsEmpty()) return false;
	

	FElm* wayPtr = Disp->GetWay(nameStation, way);
	if (wayPtr == nullptr) return false;

	Station station = Disp->Convert_RusStationTo_Station(nameStation);
	if (station == Station::Unknown) return false;

#pragma endregion
	
	if (wayPtr->num != 0)
	{
		int numTrain = wayPtr->num;
		Train* train = Disp->trainReestr.GetTrain(numTrain);
		if (train == nullptr) return false;

		wayPtr->num = 0;
		wayPtr->stat = EAStat::Free;
		train->OnRels = false;
		train->SetNumberLocoEven(0);
		train->SetNumberLocoOdd(0);

		Disp->SendDataStationToAll(station);
		Disp->SendDataStationToAll(Station::TrainReestr);
		return true;
	}
	else if (wayPtr->dopn != 0)
	{
		wayPtr->dopn = 0;
		wayPtr->stat = EAStat::Free;
		Disp->SendDataStationToAll(station);
		return true;
	}

	return false;
}


TArray<FString> UCuratorWidget::arrFreeWayOnSelectetedStation()
{
	TArray<FString> arrWay;
	FString nameStation = ComboBox_SelectedStation->GetSelectedOption();
	if (nameStation.IsEmpty()) return arrWay;

    arrWay = Disp->GetRusWay(nameStation, false);


	return Disp->RemoveBuzy(nameStation, arrWay);
}

TArray<FString> UCuratorWidget::arrBuzyWayOnSelectetedStation()
{
	TArray<FString> arrWay;
	FString nameStation = ComboBox_SelectedStation_1->GetSelectedOption();
	if (nameStation.IsEmpty()) return arrWay;

	arrWay = Disp->GetRusWay(nameStation, false);


	return Disp->RemoveFree(nameStation, arrWay);
}

#pragma endregion

#pragma region TrainRedactor



bool UCuratorWidget::Run_Button_odd_Even(FString strain)
{

	if (strain.IsEmpty()) return false;
	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return false;
	int num = train->GetNumber();
	if (num == 0) return false;
	
	if (num % 2 != 0) num = num + 1;
	else num = num - 1;

	bool rez = ChangerNumber(strain, std::to_string(num).c_str());
	if (rez == false) return false;
	
	return true;
}

bool UCuratorWidget::IsTrainOnRels(FString strain)
{
	if (strain.IsEmpty()) return false;
	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return false;

	return train->IsTrainOnRels();
}

Station UCuratorWidget::GetThisTrainStationNow(FString strain)
{
	if (strain.IsEmpty()) return Station::Unknown;
	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return Station::Unknown;
	

	if (Disp->krb._w1.num == train->GetNumber()
		|| Disp->krb._w2.num == train->GetNumber()
		|| Disp->krb._w3.num == train->GetNumber()
		|| Disp->krb._w4.num == train->GetNumber()
		|| Disp->krb._w5.num == train->GetNumber()
		)
	{
		return Station::Karabas;
	}
	else if (Disp->krz._w1.num == train->GetNumber()
		|| Disp->krz._w2.num == train->GetNumber()
		|| Disp->krz._w3.num == train->GetNumber()
		|| Disp->krz._w4.num == train->GetNumber()
		|| Disp->krz._w5.num == train->GetNumber()
		|| Disp->krz._w6.num == train->GetNumber()
		|| Disp->krz._w7.num == train->GetNumber()
		)
	{
		return Station::Karaganozek;
	}
	else if (Disp->mkd._w1.num == train->GetNumber()
		|| Disp->mkd._w2.num == train->GetNumber()
		|| Disp->mkd._w3.num == train->GetNumber()
		|| Disp->mkd._w4.num == train->GetNumber()
		|| Disp->mkd._w5.num == train->GetNumber()
		|| Disp->mkd._w6.num == train->GetNumber()
		
		)
	{
		return Station::Maykuduk;
	}
	else if (Disp->kg._w1.num == train->GetNumber()
		|| Disp->kg._w2.num == train->GetNumber()
		|| Disp->kg._w3.num == train->GetNumber()
		|| Disp->kg._w4.num == train->GetNumber()
		)
	{
		return Station::Karaganda;
	}
	else if (Disp->dbs._w1.num == train->GetNumber()
		|| Disp->dbs._w2.num == train->GetNumber()
		|| Disp->dbs._w3.num == train->GetNumber()
		)
	{
		return Station::Dubovskaya;
	}
	else if (Disp->kg1._w1.num == train->GetNumber()
		|| Disp->kg1._w2.num == train->GetNumber()
		|| Disp->kg1._w3.num == train->GetNumber()
		|| Disp->kg1._w4.num == train->GetNumber()
		|| Disp->kg1._w5.num == train->GetNumber()
		|| Disp->kg1._w6.num == train->GetNumber()
		|| Disp->kg1._w7.num == train->GetNumber()
		)
	{
		return Station::Karaganda_1;
	}
	else if (Disp->kg2._wa1.num == train->GetNumber()
		|| Disp->kg2._wa2.num == train->GetNumber()
		|| Disp->kg2._wa3.num == train->GetNumber()
		|| Disp->kg2._wa4.num == train->GetNumber()
		|| Disp->kg2._wa5.num == train->GetNumber()

		)
	{
		return Station::Karaganda_2;
	}
	else if (Disp->gk._w1.num == train->GetNumber()
		|| Disp->gk._w2.num == train->GetNumber()
		|| Disp->gk._w3.num == train->GetNumber()
		|| Disp->gk._w4.num == train->GetNumber()
		|| Disp->gk._w5.num == train->GetNumber()

		)
	{
		return Station::GanaKaraganda;
	}
	else if (Disp->gu._w1.num == train->GetNumber()
		|| Disp->gu._w2.num == train->GetNumber()
		|| Disp->gu._w3.num == train->GetNumber()
		|| Disp->gu._w4.num == train->GetNumber()
		|| Disp->gu._w5.num == train->GetNumber()

		)
	{
		return Station::GanaAul;
	}
	else if (Disp->ru._w1.num == train->GetNumber()
		|| Disp->ru._w2.num == train->GetNumber()
		|| Disp->ru._w3.num == train->GetNumber()
		)
	{
		return Station::Radiouzel;
	}
	else if (Disp->rs._w1.num == train->GetNumber()
		|| Disp->rs._w2.num == train->GetNumber()
		|| Disp->rs._w3.num == train->GetNumber()
		)
	{
		return Station::Rasporiaditelnaya;
	}
	return Station::Unknown;
}

bool UCuratorWidget::Run_Button_trainClear(FString strain)
{
	if (strain.IsEmpty()) return false;
	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return false;

	train->SetTrainFree();

	SetComboboxesTrainRedactor(nullptr);

	Disp->SendDataStationToAll(Station::TrainReestr);
	

	return true;
}

bool UCuratorWidget::Run_Button_SwapHead_Tail(FString strain)
{
	if (strain.IsEmpty()) return false;
	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return false;
	train->SwapHeadAndTail();

	SetComboboxesTrainRedactor(train);


	Disp->SendDataStationToAll(Station::TrainReestr);

	return true;
}

bool UCuratorWidget::ChangerNumber(FString strain, FString newNumTrain)
{
#pragma region Get and Check

	if (strain.IsEmpty()) return false;
	if (newNumTrain.IsEmpty()) return false;
	int newNum = Disp->Convert_FString_To_Int(newNumTrain);
	if (newNum <= 0) return false;

	Train* train = Disp->trainReestr.GetTrain(strain);
	if (train == nullptr) return false;
	int oldNum = train->GetNumber();

	//если поезд onRels - вычисляем станцию
	Station station = Station::Unknown;
	FElm* way = nullptr;

	if (train->IsTrainOnRels())
	{		
		way = Disp->GetWayOnNumberTrain(oldNum, station);

		if(way == nullptr) return false;
		if (station == Station::Unknown) return false;
	}
	
	
#pragma endregion

	bool rez = Disp->trainReestr.SetNumberTrain(oldNum, newNum);
	if (rez == false) return false;
	
	if (station != Station::Unknown)
	{
		way->num = newNum;
		Disp->SendDataStationToAll(station);
	}
	Disp->SendDataStationToAll(Station::TrainReestr);



	return true;
}

void UCuratorWidget::SetConstComboboxesStart()
{

	SetOptions(ComboBox_SelectedStation, Disp->GetRusStationNames());
	SetOptions(ComboBox_SelectedStation_1, Disp->GetRusStationNames());

	SetOptions(ComboBox_TypeVagon_1, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_2, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_3, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_4, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_5, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_6, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_7, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_8, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_9, Disp->GetRusVagonNames());
	SetOptions(ComboBox_TypeVagon_10, Disp->GetRusVagonNames());


	SetOptions(ComboBox_CountVagon_1, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_2, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_3, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_4, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_5, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_6, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_7, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_8, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_9, Disp->GetCountFString(MaxCountVagonInOtcep));
	SetOptions(ComboBox_CountVagon_10, Disp->GetCountFString(MaxCountVagonInOtcep));

	SetOptions(ComboBox_TargetStation_1, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_2, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_3, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_4, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_5, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_6, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_7, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_8, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_9, Disp->GetRusStationNames());
	SetOptions(ComboBox_TargetStation_10, Disp->GetRusStationNames());

}

void UCuratorWidget::SetDynamicComboboxes()
{
	ComboBoxString_AnimationSpeed->OnSelectionChanged.AddDynamic(this, &UCuratorWidget::RunComboboxSetAnimationSpeed);

	ComboBox_FreeTrainNumbers->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_ComboBox_FreeTrainNumbers);
	ComboBox_SettedTrainNumbers->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_ComboBox_SettedTrainNumbers);
	//ComboBox_AllTrainsOfReestr->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_ComboBox_AllTrainsOfReestr);

	ComboBox_EndWayTarget_1->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep1);
	ComboBox_EndWayTarget_2->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep2);
	ComboBox_EndWayTarget_3->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep3);
	ComboBox_EndWayTarget_4->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep4);
	ComboBox_EndWayTarget_5->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep5);
	ComboBox_EndWayTarget_6->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep6);
	ComboBox_EndWayTarget_7->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep7);
	ComboBox_EndWayTarget_8->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep8);
	ComboBox_EndWayTarget_9->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep9);
	ComboBox_EndWayTarget_10->OnOpening.AddDynamic(this, &UCuratorWidget::AddOptionsTo_WayEnd_otcep10);

}

void UCuratorWidget::SetOptions(UComboBoxString* combobox, TArray<FString> arrRusName)
{
	if (combobox == nullptr || arrRusName.Num() == 0) return;

	for (size_t i = 0; i < arrRusName.Num(); i++)
	{
		combobox->AddOption(arrRusName[i]);
	}
}

#pragma region Add options commboboxes way End


void UCuratorWidget::AddOptionsTo_WayEnd_otcep1()
{
	ComboBox_EndWayTarget_1->ClearOptions();
	FString station = ComboBox_TargetStation_1->GetSelectedOption();
	if (station.IsEmpty()) return;
	
	SetOptions(ComboBox_EndWayTarget_1, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep2()
{
	ComboBox_EndWayTarget_2->ClearOptions();
	FString station = ComboBox_TargetStation_2->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_2, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep3()
{
	ComboBox_EndWayTarget_3->ClearOptions();
	FString station = ComboBox_TargetStation_3->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_3, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep4()
{
	ComboBox_EndWayTarget_4->ClearOptions();
	FString station = ComboBox_TargetStation_4->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_4, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep5()
{
	ComboBox_EndWayTarget_5->ClearOptions();
	FString station = ComboBox_TargetStation_5->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_5, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep6()
{
	ComboBox_EndWayTarget_6->ClearOptions();
	FString station = ComboBox_TargetStation_6->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_6, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep7()
{
	ComboBox_EndWayTarget_7->ClearOptions();
	FString station = ComboBox_TargetStation_7->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_7, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep8()
{
	ComboBox_EndWayTarget_8->ClearOptions();
	FString station = ComboBox_TargetStation_8->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_8, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep9()
{
	ComboBox_EndWayTarget_9->ClearOptions();
	FString station = ComboBox_TargetStation_9->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_9, Disp->GetRusWay(station, true));
}

void UCuratorWidget::AddOptionsTo_WayEnd_otcep10()
{
	ComboBox_EndWayTarget_10->ClearOptions();
	FString station = ComboBox_TargetStation_10->GetSelectedOption();
	if (station.IsEmpty()) return;

	SetOptions(ComboBox_EndWayTarget_10, Disp->GetRusWay(station, true));
}

bool UCuratorWidget::SaveTrainToReestrAndSendToAll(FString sTrain)
{

	if (sTrain.IsEmpty()) return false;

	Train* train = Disp->trainReestr.GetTrain(sTrain);

	Train newTrain;

	if (train == nullptr) return false;

	train->SetAllOtcepFree();

	if (IsOtcepReady(1))
	{
		AddOtcepToTrain(train, 1);
	}
	if (IsOtcepReady(2)) AddOtcepToTrain(train, 2);
	if (IsOtcepReady(3)) AddOtcepToTrain(train, 3);
	if (IsOtcepReady(4)) AddOtcepToTrain(train, 4);
	if (IsOtcepReady(5)) AddOtcepToTrain(train, 5);
	if (IsOtcepReady(6)) AddOtcepToTrain(train, 6);
	if (IsOtcepReady(7)) AddOtcepToTrain(train, 7);
	if (IsOtcepReady(8)) AddOtcepToTrain(train, 8);
	if (IsOtcepReady(9)) AddOtcepToTrain(train, 9);
	if (IsOtcepReady(10)) AddOtcepToTrain(train, 10);

	
	Disp->SendDataStationToAll(Station::TrainReestr);

	SetComboboxesTrainRedactor(nullptr);


	return true;
}

bool UCuratorWidget::IsOtcepReady(int numOtcep)
{

	Otcep otcep = GetComboboxesOtcep(numOtcep);



	FString vagonType = otcep.ComboBox_TypeVagon->GetSelectedOption();
	if(vagonType.IsEmpty()) return false;

	FString count = otcep.ComboBox_CountVagon->GetSelectedOption();
	if (count.IsEmpty()) return false;

	FString station = otcep.ComboBox_TargetStation->GetSelectedOption();
	if (station.IsEmpty()) return false;

	FString way = otcep.ComboBox_EndWayTarget->GetSelectedOption();
	if (way.IsEmpty()) return false;

	/*if (numberOtcep == 1
		&& ComboBox_TypeVagon_1->IsSelected()
		&& ComboBox_CountVagon_1->IsSelected()
		&& ComboBox_TargetStation_1->IsSelected()
		&& ComboBox_EndWayTarget_1->IsSelected()
		) return true;

	if (numberOtcep == 2
		&& ComboBox_TypeVagon_2->IsSelected()
		&& ComboBox_CountVagon_2->IsSelected()
		&& ComboBox_TargetStation_2->IsSelected()
		&& ComboBox_EndWayTarget_2->IsSelected()
		) return true;

	if (numberOtcep == 3
		&& ComboBox_TypeVagon_3->IsSelected()
		&& ComboBox_CountVagon_3->IsSelected()
		&& ComboBox_TargetStation_3->IsSelected()
		&& ComboBox_EndWayTarget_3->IsSelected()
		) return true;

	if (numberOtcep == 4
		&& ComboBox_TypeVagon_4->IsSelected()
		&& ComboBox_CountVagon_4->IsSelected()
		&& ComboBox_TargetStation_4->IsSelected()
		&& ComboBox_EndWayTarget_4->IsSelected()
		) return true;

	if (numberOtcep == 5
		&& ComboBox_TypeVagon_5->IsSelected()
		&& ComboBox_CountVagon_5->IsSelected()
		&& ComboBox_TargetStation_5->IsSelected()
		&& ComboBox_EndWayTarget_5->IsSelected()
		) return true;

	if (numberOtcep == 6
		&& ComboBox_TypeVagon_6->IsSelected()
		&& ComboBox_CountVagon_6->IsSelected()
		&& ComboBox_TargetStation_6->IsSelected()
		&& ComboBox_EndWayTarget_6->IsSelected()
		) return true;

	if (numberOtcep == 7
		&& ComboBox_TypeVagon_7->IsSelected()
		&& ComboBox_CountVagon_7->IsSelected()
		&& ComboBox_TargetStation_7->IsSelected()
		&& ComboBox_EndWayTarget_7->IsSelected()
		) return true;

	if (numberOtcep == 8
		&& ComboBox_TypeVagon_8->IsSelected()
		&& ComboBox_CountVagon_8->IsSelected()
		&& ComboBox_TargetStation_8->IsSelected()
		&& ComboBox_EndWayTarget_8->IsSelected()
		) return true;

	if (numberOtcep == 9
		&& ComboBox_TypeVagon_9->IsSelected()
		&& ComboBox_CountVagon_9->IsSelected()
		&& ComboBox_TargetStation_9->IsSelected()
		&& ComboBox_EndWayTarget_9->IsSelected()
		) return true;

	if (numberOtcep == 10
		&& ComboBox_TypeVagon_10->IsSelected()
		&& ComboBox_CountVagon_10->IsSelected()
		&& ComboBox_TargetStation_10->IsSelected()
		&& ComboBox_EndWayTarget_10->IsSelected()
		) return true;*/

	return true;
}

bool UCuratorWidget::AddOtcepToTrain(Train * train, int numOtcep)
{
	if (train== nullptr) return false;

	ETypeVagon typeVagon = ETypeVagon::notDefine;
	int countVagon = 0;
	Station station = Station::Unknown;
	TargetEndWay way = TargetEndWay::no;

	Otcep otcep = GetComboboxesOtcep(numOtcep);

	if (otcep.IsValid() == false) return false;
	

	/*if (numberOtcep == 1)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_1->GetSelectedOption());
		countVagon = ComboBox_CountVagon_1->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus( ComboBox_TargetStation_1->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_1->GetSelectedOption());
	}
	else if (numberOtcep == 2)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_2->GetSelectedOption());
		countVagon = ComboBox_CountVagon_2->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_2->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_2->GetSelectedOption());
	}
	else if (numberOtcep == 3)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_3->GetSelectedOption());
		countVagon = ComboBox_CountVagon_3->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_3->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_3->GetSelectedOption());
	}
	else if (numberOtcep == 4)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_4->GetSelectedOption());
		countVagon = ComboBox_CountVagon_4->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_4->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_4->GetSelectedOption());
	}
	else if (numberOtcep == 5)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_5->GetSelectedOption());
		countVagon = ComboBox_CountVagon_5->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_5->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_5->GetSelectedOption());
	}
	else if (numberOtcep == 6)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_6->GetSelectedOption());
		countVagon = ComboBox_CountVagon_6->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_6->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_6->GetSelectedOption());
	}
	else if (numberOtcep == 7)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_7->GetSelectedOption());
		countVagon = ComboBox_CountVagon_7->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_7->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_7->GetSelectedOption());
	}
	else if (numberOtcep == 8)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_8->GetSelectedOption());
		countVagon = ComboBox_CountVagon_8->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_8->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_8->GetSelectedOption());
	}
	else if (numberOtcep == 9)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_9->GetSelectedOption());
		countVagon = ComboBox_CountVagon_9->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_9->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_9->GetSelectedOption());
	}
	else if (numberOtcep == 10)
	{
		typeVagon = Disp->GetTypeVagon_FromRus(ComboBox_TypeVagon_10->GetSelectedOption());
		countVagon = ComboBox_CountVagon_10->GetSelectedIndex() + 1;
		station = Disp->GetStation_FromRus(ComboBox_TargetStation_10->GetSelectedOption());
		way = Disp->GetWay_FromRus(ComboBox_EndWayTarget_10->GetSelectedOption());
	}*/
	typeVagon = Disp->GetTypeVagon_FromRus(otcep.ComboBox_TypeVagon->GetSelectedOption());
	countVagon = otcep.ComboBox_CountVagon->GetSelectedIndex() + 1;
	station = Disp->GetStation_FromRus(otcep.ComboBox_TargetStation->GetSelectedOption());
	way = Disp->GetWay_FromRus(otcep.ComboBox_EndWayTarget->GetSelectedOption());


	if (typeVagon != ETypeVagon::notDefine
		&& countVagon != 0
		&& station != Station::Unknown
		&& way != TargetEndWay::no)
	{
		return	train->SetOtcep(typeVagon, countVagon, station, way);		
	}
	return false;
}

void UCuratorWidget::SetComboboxesTrainRedactor(FString sTrain)
{

	if (sTrain.IsEmpty()) return ;

	Train* train = Disp->trainReestr.GetTrain(sTrain);
	SetComboboxesTrainRedactor(train);
}

void UCuratorWidget::SetComboboxesTrainRedactor(Train* train)
{
	SetComboboxesOtcep(train, 1);
	SetComboboxesOtcep(train, 2);
	SetComboboxesOtcep(train, 3);
	SetComboboxesOtcep(train, 4);
	SetComboboxesOtcep(train, 5);
	SetComboboxesOtcep(train, 6);
	SetComboboxesOtcep(train, 7);
	SetComboboxesOtcep(train, 8);
	SetComboboxesOtcep(train, 9);
	SetComboboxesOtcep(train, 10);
}

void UCuratorWidget::SetComboboxesOtcep(Train* train, int numOtcep)
{
	Otcep otcep = GetComboboxesOtcep(numOtcep);
	if (otcep.ComboBox_CountVagon == nullptr
		|| otcep.ComboBox_EndWayTarget == nullptr
		|| otcep.ComboBox_TargetStation == nullptr
		|| otcep.ComboBox_TypeVagon == nullptr)
		return;


	otcep.ComboBox_CountVagon->ClearSelection();
	otcep.ComboBox_EndWayTarget->ClearSelection();
	otcep.ComboBox_TargetStation->ClearSelection();
	otcep.ComboBox_TypeVagon->ClearSelection();

	if (train == nullptr) return;
	if (train->GetOtcepFromNumber(numOtcep)->GetVagonCount() == 0) return;
 
	FString vagonType = Disp->GetRus_VagonType(train, numOtcep).ToString();
	FString vagonCount =std::to_string(train->GetOtcepFromNumber(numOtcep)->GetVagonCount()).c_str();
	FString station = Disp->GetRus_StationTarget(train, numOtcep).ToString();
	FString way = Disp->GetRus_WayTarget(train, numOtcep).ToString();
		
	otcep.ComboBox_TypeVagon->SetSelectedOption(vagonType);
	otcep.ComboBox_CountVagon->SetSelectedOption(vagonCount);
	otcep.ComboBox_TargetStation->SetSelectedOption(station);

	otcep.ComboBox_EndWayTarget->ClearOptions();

	SetOptions(otcep.ComboBox_EndWayTarget, Disp->GetRusWay(station, false));

	otcep.ComboBox_EndWayTarget->SetSelectedOption(way);
}

Otcep UCuratorWidget::GetComboboxesOtcep(int numOtcep)
{
	Otcep otcep;
	if (numOtcep == 1)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_1;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_1;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_1;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_1;
	}
	else if (numOtcep == 2)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_2;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_2;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_2;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_2;
	}
	else if (numOtcep == 3)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_3;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_3;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_3;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_3;
	}
	else if (numOtcep == 4)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_4;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_4;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_4;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_4;
	}
	else if (numOtcep == 5)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_5;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_5;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_5;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_5;
	}
	else if (numOtcep == 6)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_6;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_6;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_6;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_6;
	}
	else if (numOtcep == 7)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_7;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_7;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_7;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_7;
	}
	else if (numOtcep == 8)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_8;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_8;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_8;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_8;
	}
	else if (numOtcep == 9)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_9;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_9;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_9;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_9;
	}
	else if (numOtcep == 10)
	{
		otcep.ComboBox_CountVagon = ComboBox_CountVagon_10;
		otcep.ComboBox_EndWayTarget = ComboBox_EndWayTarget_10;
		otcep.ComboBox_TargetStation = ComboBox_TargetStation_10;
		otcep.ComboBox_TypeVagon = ComboBox_TypeVagon_10;
	}


	return otcep;
}

bool UCuratorWidget::ClearTrainToReestrAndSendToAll()
{
	return false;
}

#pragma endregion

#pragma endregion

#pragma endregion
