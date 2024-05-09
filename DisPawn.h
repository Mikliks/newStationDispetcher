//commit

#pragma once

#include "MyDataOfStations.h"
//#include <time.h>
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DisPawn.generated.h"



UCLASS()
class NEWSTATIONDISPETCHER_API ADisPawn : public APawn
{
	GENERATED_BODY()


		Train* selectedTrain = nullptr;


	std::mutex mtxForSendToServer;
	std::mutex onlyOneChanger;
public:

	//установка переменной пути к папке с документами
	std::wstring wpathToDocuments = L"";
	std::string spathToDocuments = "";
	FString fpathToDocuments = "";
	std::wstring GetMyDocumentsFolderPath();

	std::string CreateDirectiryToStudentsLogsFiles();
	void ClearDirectoryToStudentsLogsFiles();
	void RemoveFile(std::string path);
	std::string spathTo__DirectoryStudentsLogsFiles;

	//пересоздает файл с логом действий студента
	//std::string GreateStudentsLogFiles(Station station);

	UFUNCTION(BlueprintCallable)
		bool GetIStatusComPort();
	bool AddOtcepFromZapros(int gp_way, ETypeVagon vagonType, int vadonCount, Station stationTarget, TargetEndWay endWay);



	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetKaraganozekVoice(bool Set);
	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetKaraganozekVoiceLoadToPult(bool Set);
	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetKarabasVoice(bool Set);
	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetKarabasVoiceLoadToPult(bool Set);
	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetDSPGVoice(bool Set);
	UFUNCTION(BlueprintCallable)
		//voice check for pult
		void SetDSPGVoiceLoadToPult(bool Set);

	UPROPERTY(blueprintReadWrite)
		int pauseBetweenCommand = 10;

	UPROPERTY(blueprintReadWrite)
		bool cicleRun = true;

	UPROPERTY(blueprintReadWrite)
		int pauseAutoUpdate = 3000;

	UPROPERTY(blueprintReadWrite)
		bool autoUpdateSet = false;


	bool Swap_Head_Tail(Train* train);

	FText GetRus_VagonType(Train* train, int numOtcep);
	FText GetRus_StationTarget(Train* train, int numOtcep);
	FText GetRus_WayTarget(Train* train, int numOtcep);

	ETypeVagon GetTypeVagon_FromRus(FString vagonType);
	Station GetStation_FromRus(FString station);
	TargetEndWay GetWay_FromRus(FString way);
	FString GetStationName(Station station);
	Station GetConnectionStation(SOCKET* connection);
	bool IsWayFree(FElm& way);

	//возвращает массив названий свободных путей
	TArray<FString> RemoveBuzy(FString station, TArray<FString> arrWay);
	//возвращает массив названий занятых путей
	TArray<FString> RemoveFree(FString station, TArray<FString> arrWayy);

	Station Convert_RusStationTo_Station(FString station);
	//указатель на путь станции
	FElm* GetWay(FString station, FString way);

	UPROPERTY(blueprintReadWrite)
		FRusDefectName rusDefectName;

	UPROPERTY(blueprintReadWrite)
		FRusStation rusStation;
	UPROPERTY(blueprintReadWrite)
		FRusVagon rusVagon;
	UPROPERTY(blueprintReadWrite)
		FRusWay rusWay;
	UFUNCTION(BlueprintCallable)
		TArray<FString>GetRusStationNames();
	UFUNCTION(BlueprintCallable)
	TArray<FString> GetRusWay(FString station, bool onlyTupics);

	UFUNCTION(BlueprintCallable)
		TArray<FString>GetCountFString(int count);
	UFUNCTION(BlueprintCallable)
		TArray<FString>GetRusVagonNames();

	UFUNCTION(BlueprintCallable)
		TArray<FString> GetArrRusDefectNames();

	UFUNCTION(BlueprintCallable)
		void RunDefect(FString selectOpt, Station station);

	UFUNCTION(BlueprintCallable)
		FString GetRusDefectNameFromEnum(EDefectName enumDefect);

	UFUNCTION(BlueprintCallable)
		EDefectName GetEnumRusDefectNameFrom(FString rusDefName);

	//создает структуру для сохранения
	DataAllStations CreateCurrentDataForSaving();
	void LoadSavedDataToStructuries(DataAllStations savedData);

	//устанавливает переменную trainAutoStart на ДСПГ
	UFUNCTION(BlueprintCallable)
		void SetTrainAutoStartDSPG(bool stat);
	//уведомляет сервер о взятии управления
	void ZaprosSetDispetcherDirect(Station forDirect);
	void ZaprosSetOperatorDirect(Station forDirect);

	void ZaprosSortirovka(ZaprosFromSortirovka zapros);
	// 11-34 парковый путь на kg2
	FElm* GetParkWay(int parkWay);

	void ZaprosSetTrainFree(int NumberTrain, int numberWay);
	void ZaprosUpdateTrainReestr(FDataZaprosAddOtcep zaprosAddOtcep);
	void ZaprosUpdateTrainReestr(FDataZaprosMinusOtcep zaprosMinusOtcep);
	FElm* GetParkWayFromZaprosSort(int numEndWay);
	UFUNCTION(BlueprintCallable)
		void OpenTelefon();
	UFUNCTION(BlueprintCallable)
		void OpenJoyToKey();
	void OpenTelefonInThread();
	bool CheckJoyToKey();
	void OpenJoyToKeyInThread();
	UPROPERTY(blueprintReadWrite)
		FStudent student;
	UFUNCTION(BlueprintCallable)
		bool SetDataStudent(FString nameStud, FString familyStud, FString groupStud);
	UFUNCTION(BlueprintCallable)
		FString GetStringStudentInfo(Station station);
	UFUNCTION(BlueprintCallable)
		FString GetStringExpert();

	UFUNCTION(BlueprintCallable)
		//очищает рабочий реестр
		void SetAllTrainsFree();

	UFUNCTION(BlueprintCallable)
		//создает примеры поездов на первые десять номеров редактируемого реестра
		//и делает их готовыми для установки
		void CreateExampleTrains_C_0_0();
	UFUNCTION(BlueprintCallable)
	void CreateExampleTrains_C_1_1();

	UFUNCTION(BlueprintCallable)
		void CreateExampleTrains_C_2_1();

	UFUNCTION(BlueprintCallable)
		void CreateExampleTrains_C_2_1_and_Loco();
	
	UFUNCTION(BlueprintCallable)
		void CreateExampleTrainsOnSortStation();


	UFUNCTION(BlueprintCallable)
		//расставляет примеры поездов по-порядку по станциям 
		//Карабас-Караганозек-Караганда-Майкудук-ЖанаКараганда-Караганда 1-Караганда 2
		//Распорядительная-Дубовская-ЖанаАул-Радиоузел
		void SetExamplTrainOnStations();
	//ставит указаный поезд на указанный путь
	void SetTrainOnRels(Train* train, FElm* way);

	UFUNCTION(BlueprintCallable)
		//расставляет локомотивы по станциям
		void SetLocomotivesOnStations();
	//ставит локомотив на указаный путь
	void SetLocoOnRels(int num, FElm* way);


	Commd GetCommFromDopStat(EdopStat dopstat);
	EdopStat GetDopstatFromCommd(Commd com);

	Commd GetCommFromRoleSelect(RoleSelect role);
	RoleSelect GetRoleFromCommd(Commd com);



#pragma region forMenuCReateTrain

	FString GetNameForSaving(int name);
	UFUNCTION(BlueprintCallable)
		//сохраняет файл реестра поездов в файл
		//преполагается 10 сохранений
		bool TrainReestrSave(int name);
	bool TrainReestrSave(FString name, TrainReestr reestrForSave);
	UFUNCTION(BlueprintCallable)
		//открывает сохраненный  файл реестра поездов и инициализирует trainReestr
		//преполагается 10 сохранений
		int TrainReestrOpen(int name);
	bool TrainReestrOpen(FString name, TrainReestr* reestrForOpenFromSave);






	UFUNCTION(BlueprintCallable)
		bool SetOtcepForSelectedTrain(int indexSelectedTypeVagon, int indexSelectedcount, int indexSelectedStation, int  indexSelectedEndWay);
	UFUNCTION(BlueprintCallable)
		bool ChangerOddEvenSelectedTrain();


	UFUNCTION(BlueprintCallable)
		bool SetAllOtcepFreeSelectedTrain();
	UFUNCTION(BlueprintCallable)
		bool SwapHeadAndTailSelectedTrain();
	UFUNCTION(BlueprintCallable)
		bool SetFreeSelectedTrain();


	UFUNCTION(BlueprintCallable)
		bool SetOtcep(FString trainNumber, int ivagonType, int vagonCount, int stationTarget, int endWayTarget);

	UFUNCTION(BlueprintCallable)
		int GetVagonsCountInTrain(FString trainNumber);

#pragma region ForOtcepComboboxes

	UFUNCTION(BlueprintCallable)
		//возвращает тип вагонов отцепа для редактора поездов
		ETypeVagon GetTypeVagon(FString trainNumber, ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает количество вагонов отцепа для редактора поездов
		int GetVagonCount(FString trainNumber, ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает станцию прибытия отцепа для редактора поездов
		Station GetStation(FString trainNumber, ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает путь станции прибытия для редактора поездов
		TargetEndWay GetTargetWay(FString trainNumber, ENumberOtcep numberOtcep);

	UFUNCTION(BlueprintCallable)
		//возвращает тип вагонов отцепа для редактора поездов
		ETypeVagon GetTypeVagonForSelectedTrain(ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает количество вагонов отцепа для редактора поездов
		int GetVagonCountForSelectedTrain(ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает станцию прибытия отцепа для редактора поездов
		Station GetStationForSelectedTrain(ENumberOtcep numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает путь станции прибытия для редактора поездов
		TargetEndWay GetTargetWayForSelectedTrain(ENumberOtcep numberOtcep);


	UFUNCTION(BlueprintCallable)
		//возвращает тип вагонов от индекса комбобокса редактора
		ETypeVagon GetVagonTypeFromSelectedIndex(int index);
	UFUNCTION(BlueprintCallable)
		//возвращает станцию от индекса комбобокса редактора
		Station GetStationFromSelectedIndex(int index);
	UFUNCTION(BlueprintCallable)
		//возвращает путь прибытия от индекса комбобокса редактора
		TargetEndWay GetTargetEndWayFromSelectedIndex(int index);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса типа вагона редактора поездов
		int GetSelectedIndexFromVagonType(ETypeVagon typeVagon);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса станции прибытия редактора поездов
		int  GetSelectedIndexFromStation(Station station);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса пути прибытия редактора поездов
		int GetSelectedIndexFromTargetEndWay(TargetEndWay targetWay);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса количества вагонов редактора поездов
		int GetSelectedIndexFromVagonCount(int vagonCount);

	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса типа вагона редактора поездов
		int GetSelectedIndexVagonTypeForSelectedTrain(int numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса станции прибытия редактора поездов
		int  GetSelectedIndexStationForSelectedTrain(int numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса пути прибытия редактора поездов
		int GetSelectedIndexTargetEndWayForSelectedTrain(int numberOtcep);
	UFUNCTION(BlueprintCallable)
		//возвращает индекс для комбобокса количества вагонов редактора поездов
		int GetSelectedIndexVagonCountForSelectedTrain(int numberOtcep);
#pragma endregion

	UFUNCTION(BlueprintCallable)
		//инициализирует указатель SelectedTrain
		bool SetTrainSelected(FString numTrain);
	UFUNCTION(BlueprintCallable)
		//освобождает указатель SelectedTrain
		bool SetTrainUnSelected(FString numTrain);


	//получить -way- с заданным -num-
	FElm* GetWayOnNumberTrain(int num, Station& station);
	//получить -way- с заданным -dopn-
	FElm* GetWayOnNumberLoco(int dopn, Station& station);

	FElm* GetWayOnNumberTrain(int num, std::vector<FElm*> arrWay);
	FElm* GetWayOnNumberLoco(int dopn, std::vector<FElm*> arrWay);

	int Convert_FString_To_Int(FString number);


	UFUNCTION(BlueprintCallable)
		TArray<FString> GetFreeNumbers();
	UFUNCTION(BlueprintCallable)
		TArray<FString> GetReadyNumbers();
	UFUNCTION(BlueprintCallable)
		TArray<FString> GetOnRelsNumbers();
	UFUNCTION(BlueprintCallable)
		//выдает массив номеров поездов данного реестра
		TArray<FString> GetAllNumbers();

	UFUNCTION(BlueprintCallable)
		bool SetTrainReady();
	UFUNCTION(BlueprintCallable)
		bool SetTrainFree();

	UFUNCTION(BlueprintCallable)
		bool SetSelectedTrain(FString numTrain);

	
	std::wstring GetDateNow();
	std::wstring GetTimeNow();
	UFUNCTION(BlueprintCallable)
	void SetAutoUpdate(bool set);
	void SetPauseAutoUpdate(int pause);
	UFUNCTION(BlueprintCallable)
		void StartAutoUpdate();
	void AutoUpdatePultInThread();
	UFUNCTION(BlueprintCallable)
		FString CreatePortHandler();

	bool IsPortWorkable();

	void ClosePort();
	Train* GetSelectedTrain();
	bool SostavOnWay(FElm* way);
	bool LocoOnWay(FElm* way);
	//добавить нечетный локомотив к поезду с этим номером
	UFUNCTION(BlueprintCallable)
		bool AddLocoOdd(int numTrain);
	//добавить четный локомотив к поезду с этим номером
	UFUNCTION(BlueprintCallable)
		bool AddLocoEven(int numTrain);
	//отнять нечетный локомотив от поезда с этим номером
	UFUNCTION(BlueprintCallable)
		int MinusLocoOdd(int numTrain);
	//отнять четный локомотив от поезда с этим номером
	UFUNCTION(BlueprintCallable)
		int MinusLocoEven(int numTrain);
#pragma endregion

#pragma region Ceneral 

#pragma region DefaultPawnDefinitions//BaginPlay инициализирует массивы и уст. по дефолту.// Com порты, массивы и чекеры для них запускаются соотв. виджетами
public:
	// Sets default values for this pawn's properties
	ADisPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void krz_StartLoadPult();
	UFUNCTION(BlueprintCallable)
		void krb_StartLoadPult();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	////главный чекер участника симуляции запускается при старте в бесконечный ежесекундный цикл
	////он запускает чекеры станций в зависимости от переменных - идентификаторов участников
	//void GeneralChecker();
#pragma endregion
#pragma region Variables
#pragma region StationOnline

	UPROPERTY(BlueprintReadWrite)
		bool Curator = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_1 = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dispetcher_2 = false;
	UPROPERTY(BlueprintReadWrite)
		bool Radiouzel = false;
	UPROPERTY(BlueprintReadWrite)
		bool Dubovskaya = false;
	UPROPERTY(BlueprintReadWrite)
		bool Maykuduk = false;
	UPROPERTY(BlueprintReadWrite)
		bool GanaAul = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganozek = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karabas = false;
	UPROPERTY(BlueprintReadWrite)
		bool KarabasPult = false;
	UPROPERTY(BlueprintReadWrite)
		bool Rasporiaditelnaya = false;
	UPROPERTY(BlueprintReadWrite)
		bool GanaKaraganda = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_1 = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_2 = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda = false;
	UPROPERTY(BlueprintReadWrite)
		bool DSPG = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_DSP = false;
	UPROPERTY(BlueprintReadWrite)
		bool Karaganda_DSC = false;
	UPROPERTY(BlueprintReadWrite)
		bool OSG_3 = false;
	UPROPERTY(BlueprintReadWrite)
		FStationsOnline stationOnline;
#pragma endregion
#pragma region Dates of Stations 

	//реестр для реальной работы станций
	TrainReestr trainReestr;

	OperDataFromStation operDataStations;

	

	UPROPERTY(BlueprintReadWrite)
		Fst_curat cur;
	UPROPERTY(BlueprintReadWrite)
		Fst_disp1 d1;
	UPROPERTY(BlueprintReadWrite)
		Fst_disp2 d2;
	UPROPERTY(BlueprintReadWrite)
		Fst_raduzel ru;
	UPROPERTY(BlueprintReadWrite)
		FSt_dbs dbs;
	UPROPERTY(BlueprintReadWrite)
		Fst_mkd mkd;
	UPROPERTY(BlueprintReadWrite)
		Fst_ganaul gu;
	UPROPERTY(BlueprintReadWrite)
		FSt_krgzk krz;
	UPROPERTY(BlueprintReadWrite)
		Fst_krbs krb;
	UPROPERTY(BlueprintReadWrite)
		Fst_raspor rs;
	UPROPERTY(BlueprintReadWrite)
		Fst_gancar gk;
	UPROPERTY(BlueprintReadWrite)
		Fst_carg1 kg1;
	UPROPERTY(BlueprintReadWrite)
		Fst_carg2 kg2;
	UPROPERTY(BlueprintReadWrite)
		Fst_carg kg;
	UPROPERTY(BlueprintReadWrite)
		Fst_DSPG _dspg;
	UPROPERTY(BlueprintReadWrite)
		Fst_Karaganda3 kg3;

#pragma endregion
	UPROPERTY(BlueprintReadWrite)
		FDataStudents dataStudents;

	UPROPERTY(BlueprintReadWrite)
		RoleSelect thisStationRole = RoleSelect::NoRole;


	UPROPERTY(blueprintReadWrite)
		FString address;

	UPROPERTY(blueprintReadWrite)
		bool RunChecker_Karaganozek;

	UPROPERTY(blueprintReadWrite)
		bool RunChecker_Karabas;


#pragma endregion
#pragma region Voice Definitions
	UFUNCTION(BlueprintCallable)
		void BeeperGood1();//одиночный звуковой сигнал удачного действия
	UFUNCTION(BlueprintCallable)
		void BeeperGood2();//двойной звуковой сигнал удачного действия
	UFUNCTION(BlueprintCallable)
		void BeeperGood3();//тройной звуковой сигнал удачного действия
	UFUNCTION(BlueprintCallable)
		void BeeperBad(int a);//при неудачном действии
	UFUNCTION(BlueprintCallable)
		void MyBeep(int a, int b);//
	void BeepTest1();
	void BeepTest2();
#pragma endregion
#pragma region First Definitions
	UFUNCTION(BlueprintCallable)
		bool LoadLibrFillAddress();
	UFUNCTION(BlueprintCallable)
		FString GetIPAddressFromDisk();
	UFUNCTION(BlueprintCallable)
		FString WriteAddressFromUser(FString ipaddr);
	UFUNCTION(BlueprintCallable)
		void DeleteWrongAddress();
	UFUNCTION(BlueprintCallable)
		Station GetStationName();//возвращает имя текущей станции в формате перечисления
	UFUNCTION(BlueprintCallable)
		FString GetStationNameString();//возвращает имя текущей станции в формате string
	UFUNCTION(BlueprintCallable)
		bool CloseSocket();
	void PrintLog(int firstCode);
	void Printogg(std::string str);
#pragma endregion
#pragma region Server Definitions
#pragma region For Console
	//void ServerKeyboardListen();//прослушка клавиатуры (для консольной версии сервера)
	//void PrintInformationServer();//вывод информации в консоль (сервер)
#pragma endregion
	UFUNCTION(BlueprintCallable)
		bool GetIsServer();
	UFUNCTION(BlueprintCallable)
		bool GetIsClient();
	void SetIsServer(bool set);
	void SetIsClient(bool set);

	UFUNCTION(BlueprintCallable)
		void CloseNetWork();

	UFUNCTION(BlueprintCallable)
		bool CreateServerCPP();//создает сервер

	UFUNCTION(BlueprintCallable)
		void ServerStart();//стартует сервер
	UFUNCTION(BlueprintCallable)
		void DefaultSetting();//установить все данные по умолчанию на сервере 
	Station AskNameStation(SOCKET connect);
	void AddDataStudentToDatesStudent(Station station, FStudent stud);
	//запрашивает имя клиента для помещения его в массив соединений
	bool RegisterStation(Station station);//регистрирует станцию, с которой установлено соединение
	void Notify_everyone_about_Newregistration();//сообщить всем участникам сети о регистрации/снятии с нее участника
	FString UnregisterStation(Station station);//снимает с регистрации станцию с которой утрачено соединение
	void DeleteConnections(SOCKET connect);//удаление указанного клиента из массива соединений

	//void ClientHandler(/*int index*/);//(запускается в отдельном потоке для каждого присоединенного клиента) обработчик соединения с клиентами
	void ClientHandler(SOCKET connect);
	bool Receiving_and_sending_data_for_stations(SOCKET connect);//вызывается при получении первичного кода 111 (принимает данные с клиента и синхронизирует у себя и  остальных )



	int MySend(SOCKET connect, char* buf, int len);
	int MyRecv(SOCKET connect, char* buf, int len);
	int GetSizeDataOfStation(Station station);
	void SendData(SOCKET connect, Station station);
	UFUNCTION(BlueprintCallable)
		void SendDataStationToAll(Station station);
	void SendDataAllStationToOne(SOCKET connect);
	UFUNCTION(BlueprintCallable)
		void SendDataAllStationToAll();
	UFUNCTION(BlueprintCallable)
		void SendDataTwoStationToAll(Station station1, Station station2);


	//void GeneralCheckerSetter();
	void CheckSetGreenKeys();
	void SetTwoGreenKeys(FElm& GreenKey1, FElm& way1, FElm& way2, FElm& way3, FElm& way4, FElm& GreenKey2);
	//установить все данные всех станций поумолчанию
#pragma region RunCommandFromClients

	Commd GetCommdForStrelka(int numStr);

	void RunCommandFromClient(Station station, Commd comm);
	void RunCommandFrom_Karabas(Commd comm);
	void RunCommandFrom_Karaganozek(Commd comm);
	bool IsCommandPultExpert(Commd comm);
	void RunCommandFrom_Karaganda(Commd comm);
	void RunCommandFrom_Maykuduk(Commd comm);
	void RunCommandFrom_GanaKaraganda(Commd comm);
	void RunCommandFrom_Karaganda_1(Commd comm);
	void RunCommandFrom_Karaganda_2(Commd comm);
	void RunCommandFrom_KaragandaSort(Commd comm);
	void RunCommandFrom_DSPG(Commd comm);
	void RunCommandFrom_Radiouzel(Commd comm);
	void RunCommandFrom_GanaAul(Commd comm);
	void RunCommandFrom_Dubovskaya(Commd comm);
	void RunCommandFrom_Rasporiaditelnaya(Commd comm);

	void PrintCommandToLog(Station station, Commd comm);
	void PrintDataStudentToLog(Station station, FStudent studentData);
	std::wstring Convert_wstrUnicode_To_wstrASKIIWin1251(std::wstring text);
#pragma endregion

#pragma endregion
#pragma region Client Definitions


	//void SetStationName();//выбор имени станции
	UFUNCTION(BlueprintCallable)
		void CreateClientCPP();//создает клиента (станцию)

	UFUNCTION(BlueprintCallable)
		bool ConnectToServer();//старт клиента
	void SendNameToServer();//послать свое станционное имя (представиться серверу по его запросу кодом 100 в ServerHandler)
	void ServerHandler();//(запускается в отдельном потоке) обработчик соединения с сервером
	void Get_data_about_network_members();

	//void SendToServer_TrainReestr();
	//получить данные от сервера об  участниках сети
	bool Receiving_data_for_stations(Station station);//для приема данных состояния станций с проверкой
	UFUNCTION(BlueprintCallable)
		void SendToServerTrainReestr();
	UFUNCTION(BlueprintCallable)
		void SendCommForGreenKey(Station station, EdopStat greenKey);
	void SendCommForGreenKeyMain(Station station, EdopStat greenKey);
	void SendCommToServer(Station station, Commd com);


	UFUNCTION(BlueprintCallable)
		int GetOperCountVagForMinus(Station station);
	//задает для сервера количество вагонов для текущего расцепа определенной станции
	UFUNCTION(BlueprintCallable)
		void SendOperCountVagToServer(Station station, int operCountVag);
	void SendMeData(Station station);
#pragma region Registratura
	//посылает на сервер именованый сигнал для регистрации выхода станции в сеть
	void Curator_ON();
	void Dispetcher_1_ON();
	void Dispetcher_2_ON();
	void Radiouzel_ON();
	void Dubovskaya_ON();
	void Maykuduk_ON();
	void GanaAul_ON();
	void Karaganozek_ON();
	void Karabas_ON();
	void KarabasPult_ON();
	void Karaganda_ON();
	void Rasporiaditelnaya_ON();
	void GanaKaraganda_ON();
	void Karaganda_1_ON();
	void Karaganda_2_ON();
	void DSPG_ON();
	void Karaganda_DSP_ON();
	void Karaganda_DSC_ON();
	void OSG_3_ON();

#pragma endregion
#pragma endregion

#pragma endregion

#pragma region Ceneral Station Definitions

	bool IsConturKeyReady(Station station, Direction direct);

	UFUNCTION(BlueprintCallable)
		void Set_Flip_Flop_ConturKey(Station station, Direction direct);

	bool IsConturKeySet(Station station, Direction direct);
	void SetConturKey(Station station, Direction direct);
	void UnSetConturKey(Station station, Direction direct);

	void ConturKey_Set_UnSet(Station station, Commd comm);
	void DopConturKey_Unset(Station station, EdopStat outSvetofor);
	bool IsSvetoforEnterExit(EdopStat svetofor);

#pragma region Signals
	bool IsOutRouterFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4);
	bool ChangeGreenKey(FElm& greenKey);
	bool CheckAndSetGreenKey(Station station, Commd comm);
	bool CheckAndSetGreenKey(FElm& greenKeyLeft, FElm& way1, FElm& way2, FElm& way3, FElm& way4, FElm& greenKeyRight);

#pragma endregion
#pragma region GetRouters

	Router* krb_GetReadyRouter(EdopStat dopstat);
	Router* krz_GetReadyRouter(EdopStat dopstat);
	Router* mkd_GetReadyRouter(EdopStat dopstat);
	Router* gk_GetReadyRouter(EdopStat dopstat);
	Router* kg_GetReadyRouter(EdopStat dopstat);
	Router* kg1_GetReadyRouter(EdopStat dopstat);
	//Router* kg2_GetReadyRouter(EdopStat dopstat);
	Router* ru_GetReadyRouter(EdopStat dopstat);
	Router* dbs_GetReadyRouter(EdopStat dopstat);
	Router* rs_GetReadyRouter(EdopStat dopstat);
	Router* gu_GetReadyRouter(EdopStat dopstat);


	FElm* GetEndRouter(Router* router);

#pragma endregion

	UFUNCTION(BlueprintCallable)
		bool CanIDirect(Station station);
	UFUNCTION(BlueprintCallable)
		void CuratorDirect(Station station);
	UFUNCTION(BlueprintCallable)
		void DispetcherDirect(Station station);
	UFUNCTION(BlueprintCallable)
		void OperatorDirect(Station station);
	void IskusstvennayaRazdelka(Station station);
	void IskusstvennayaRazdelkaInThread(Station station);
	void ZaprosIscusstRazdelka(Station station);

#pragma region FoosForCheckingFreeWays

	bool WayFree(FElm& way1, FElm& way2);
	bool WayFree(FElm& way1, FElm& way2, FElm& way3);
	bool WayFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4);
	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4, FElm& way5);
	bool WayFree(FElm& way1, FElm& way2, FElm& way3, FElm& way4, FElm& way5, FElm& way6);
	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4, FElm& Way5, FElm& way6, FElm& way7, FElm& way8);
	bool WayFree(FElm& way1, FElm& way2, FElm& Way3, FElm& Way4, FElm& Way5, FElm& way6, FElm& way7, FElm& way8, FElm& way9, FElm& way10, FElm& way11, FElm& way12);

	UFUNCTION(BlueprintCallable)
		void RunSmartOutRouter();
	UFUNCTION(BlueprintCallable)
		void CheckStartStationRouter();

	void CheckStartStationRouterInThread();

#pragma endregion
	void ToPlus(FElm& str);
	void ToMinus(FElm& str);


	//#pragma region Roles
	//
	//	UFUNCTION(BlueprintCallable)
	//		void SetRole(Station station, RoleSelect rol);
	//	UFUNCTION(BlueprintCallable)
	//		RoleSelect GetRole();
	//
	//#pragma endregion

	void DestroyOneRouterInThread(Router* rout, Station station);
	void DestroyOneRouterInThreadSortirovka(Router* rout);


	UFUNCTION(BlueprintCallable)
		void SetTimeRouterRun(int timeRouterRun);
	//маршрут нечетный - ?
	bool IsRouter_Odd(EdopStat dopstat);

	//маршрут, допускающий разделение поезда по заданному числу вагонов
	bool IsRouter_FromPO(Router* rout, Station station);
	// есть ли хоть какой-то локомотив
	bool IsThereLocoForMoving(FElm* startWay);
	FString GetNumbersLocoInSostav(int dopn);

	//возвращает указатель на первый элемент маршрута
	FElm* GetWayStart(Router* rout);
	//возвращает указатель на последний элемент маршрута
	FElm* GetWayEnd(Router* rout);
	//свободен ли этот участок
	bool IsWayFree(FElm* way);

#pragma region RoutersRunWithThread



	void LocoReadyForRun(FElm* startWay, FElm* svetofor, Station station);
	void LocoReadyForRunOut(FElm* startWay, FElm* greenKey, Station station);
	//главный селектор выполняемых маршрутов / разделяет маршруты по цвету светофора на маневровые и поездные
	void RunGeneralRouterSelector(Router* router, Station station);
	//выбирает маневровый маршрут по станции в зависимости от trainReestr
	//void RunSmartManevrRouter(Router* router, Station station);
	//движение локомотива к свободному участку
	void RunFreeLocoToFreeWay(Router* router, Station station);
	//движение локомотива к поезду
	void RunFreeLocoToTrain(Router* router, Station station);

	//движение локомотива от поезда к поезду
	void RunLocoFromTrainToTrain(Router* router, Station station);
	//движение группы к свободному пути
	void RunTrainToFreeWay(Router* router, Station station);
	bool IsStartWayNotCHAPorCHPorTD(Router* router);
	//движение группы  к поезду 
	void RunTrainToTrain(Router* router, Station station);

	void RunPoezdRouter(Router* router, Station station);
	void RunOUTRouter(Router* router, Station from, Station to);
	void Run_OUT_Router_InThread(Router* router, Station from, Station to);

	void Run_Smart_Out_RouterInThread();
	bool One_Step_Smart_Router(Station from, Router* router);

#pragma endregion

	//используется для передачи на сервер данных другой станции в Run_OUT...
	Station GetStationForSendServerSpecial(EdopStat dopstat);
	Station GetStationForSendFromRole(RoleSelect role);

	void IscusstvennayaRazdelkaInThread(std::vector<FElm*> ways);

#pragma endregion


#pragma region STATIONS: Definition

#pragma region Dispetcher_1
	std::vector<FElm*>d1_arrSign;
	std::vector<FElm*>d1_arrWay;
	std::vector<FElm*>d1_arrStr;
	std::vector<FElm*>d1_arrSvetor;
#pragma endregion
#pragma region Dispetcher_2
	std::vector<FElm*>d2_arrSign;
	std::vector<FElm*>d2_arrWay;
	std::vector<FElm*>d2_arrStr;
	std::vector<FElm*>d2_arrSvetor;
#pragma endregion
#pragma region Radiouzel
#pragma region vars
	std::vector<FElm*>ru_arrSign;
	std::vector<FElm*>ru_arrWay;
	std::vector<FElm*>ru_arrStr;
	std::vector<FElm*>ru_arrSvetofor;
	std::vector<Router*>ru_arrRouter;

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router ru_N_1P;
	Router ru_N_2P;
	Router ru_N_3P;
#pragma endregion

#pragma region from CH
	Router ru_CH_1P;
	Router ru_CH_2P;
	Router ru_CH_3P;
#pragma endregion

#pragma region from M1
	Router ru_M1_CH1;
	Router ru_M1_CH2;
	Router ru_M1_CH3;
#pragma endregion
#pragma region from M2
	Router ru_M2_N1;
	Router ru_M2_N2;
	Router ru_M2_N3;

#pragma endregion
#pragma region from M3

	Router ru_M3_M4;
	Router ru_M3_CH1;
	Router ru_M3_CH2;
	Router ru_M3_CH3;

#pragma endregion
#pragma region from M4

	Router ru_M4_M1;
	Router ru_M4_M3;

#pragma endregion


#pragma region to N
	Router ru_CH1_N;
	Router ru_CH2_N;
	Router ru_CH3_N;

#pragma endregion
#pragma region to  M1


	Router ru_CH1_M1;
	Router ru_CH2_M1;
	Router ru_CH3_M1;

#pragma endregion

#pragma region to  M3
	Router ru_CH1_M3;
	Router ru_CH2_M3;
	Router ru_CH3_M3;


#pragma endregion
#pragma region to CH
	Router ru_N1_CH;
	Router ru_N2_CH;
	Router ru_N3_CH;

#pragma endregion
#pragma region to  M2
	Router ru_N1_M2;
	Router ru_N2_M2;
	Router ru_N3_M2;


#pragma endregion

#pragma region to  M4
	Router ru_M1_M4;

#pragma endregion

	Router ru_M5_CH3;
	Router ru_CH3_M5;
	Router ru_M6_M1;
	Router ru_M6_M3;
	Router ru_M1_M6;
	Router ru_M3_M6;

#pragma region OUT_Routers
	Router ru_1NP_GanaAul;
	Router ru_1CHP_Karaganozek;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create

	void ru_M5_CH3_Create();
	void ru_CH3_M5_Create();
	void ru_M6_M1_Create();
	void ru_M6_M3_Create();
	void ru_M1_M6_Create();
	void ru_M3_M6_Create();

	void ru_M5_CH3_CreateEnd();
	void ru_CH3_M5_CreateEnd();
	void ru_M6_M1_CreateEnd();
	void ru_M6_M3_CreateEnd();
	void ru_M1_M6_CreateEnd();
	void ru_M3_M6_CreateEnd();


#pragma region from N
	UFUNCTION(BlueprintCallable)
		void ru_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void ru_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void ru_N_3P_Create();



#pragma endregion

#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void ru_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH_3P_Create();



#pragma endregion


#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void ru_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M1_M4_Create();



#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void ru_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M2_N3_Create();

#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void ru_M3_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M3_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M3_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M3_M4_Create();

#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void ru_M4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_M4_M3_Create();

#pragma endregion


#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void ru_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH1_M3_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH1_N_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void ru_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH2_N_Create();

#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void ru_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH3_M3_Create();
	UFUNCTION(BlueprintCallable)
		void ru_CH3_N_Create();

#pragma endregion



#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void ru_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void ru_N1_CH_Create();


#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void ru_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void ru_N2_CH_Create();


#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void ru_N3_M2_Create();

	UFUNCTION(BlueprintCallable)
		void ru_N3_CH_Create();

#pragma endregion



#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void ru_N_1P_CreateEnd();
	void ru_N_2P_CreateEnd();
	void ru_N_3P_CreateEnd();


#pragma endregion

#pragma region from CH
	void ru_CH_1P_CreateEnd();
	void ru_CH_2P_CreateEnd();
	void ru_CH_3P_CreateEnd();


#pragma endregion


#pragma region from M1
	void ru_M1_CH1_CreateEnd();
	void ru_M1_CH2_CreateEnd();
	void ru_M1_CH3_CreateEnd();
	void ru_M1_M4_CreateEnd();



#pragma endregion
#pragma region from M2
	void ru_M2_N1_CreateEnd();
	void ru_M2_N2_CreateEnd();
	void ru_M2_N3_CreateEnd();

#pragma endregion
#pragma region from M3
	void ru_M3_CH1_CreateEnd();
	void ru_M3_CH2_CreateEnd();
	void ru_M3_CH3_CreateEnd();
	void ru_M3_M4_CreateEnd();



#pragma endregion
#pragma region from M4
	void ru_M4_M1_CreateEnd();
	void ru_M4_M3_CreateEnd();

#pragma endregion


#pragma region from CH1
	void ru_CH1_M1_CreateEnd();
	void ru_CH1_M3_CreateEnd();
	void ru_CH1_N_CreateEnd();

#pragma endregion
#pragma region from CH2
	void ru_CH2_M1_CreateEnd();
	void ru_CH2_M3_CreateEnd();
	void ru_CH2_N_CreateEnd();

#pragma endregion
#pragma region from CH3
	void ru_CH3_M1_CreateEnd();
	void ru_CH3_M3_CreateEnd();
	void ru_CH3_N_CreateEnd();

#pragma endregion



#pragma region from N1
	void ru_N1_M2_CreateEnd();
	void ru_N1_CH_CreateEnd();

#pragma endregion
#pragma region from N2
	void ru_N2_M2_CreateEnd();
	void ru_N2_CH_CreateEnd();


#pragma endregion
#pragma region from N3
	void ru_N3_M2_CreateEnd();
	void ru_N3_CH_CreateEnd();

#pragma endregion




#pragma endregion
#pragma region FOO

	void ru_InitIArraysStart();
	void ru_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void ru_InitRouters();
#pragma region Strelki


	void ru_ToMinus(FElm* str);
	void ru_ToPlus(FElm* str);

	void ru_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* ru_GetStrelka(int str);

	bool ru_IsMinus();
	bool ru_IsMinus(int str1);
	bool ru_IsMinus(int str1, int str2);
	bool ru_IsMinus(int str1, int str2, int str3);
	bool ru_IsMinus(int str1, int str2, int str3, int str4);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool ru_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool ru_IsPlus();
	bool ru_IsPlus(int str1);
	bool ru_IsPlus(int str1, int str2);
	bool ru_IsPlus(int str1, int str2, int str3);
	bool ru_IsPlus(int str1, int str2, int str3, int str4);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool ru_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void ru_ToMinus();
	void ru_ToMinus(int str1);
	void ru_ToMinus(int str1, int str2);
	void ru_ToMinus(int str1, int str2, int str3);
	void ru_ToMinus(int str1, int str2, int str3, int str4);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void ru_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void ru_ToPlus();
	void ru_ToPlus(int str1);
	void ru_ToPlus(int str1, int str2);
	void ru_ToPlus(int str1, int str2, int str3);
	void ru_ToPlus(int str1, int str2, int str3, int str4);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void ru_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void ru_ToMinusInThread(FElm* str);
	void ru_ToPlusInThread(FElm* str);

	bool ru_IsStrelkaFree(FElm* elm);


#pragma endregion



#pragma endregion
#pragma endregion
#pragma region  Dubovskaya
#pragma region vars
	std::vector<FElm*>dbs_arrSign;
	std::vector<FElm*>dbs_arrWay;
	std::vector<FElm*>dbs_arrStr;
	std::vector<FElm*>dbs_arrSvetofor;
	std::vector<Router*>dbs_arrRouter;

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router dbs_N_1P;
	Router dbs_N_2P;
	Router dbs_N_3P;
#pragma endregion

#pragma region from CH
	Router dbs_CH_1P;
	Router dbs_CH_2P;
	Router dbs_CH_3P;
#pragma endregion

#pragma region from M1
	Router dbs_M1_CH1;
	Router dbs_M1_CH2;
	Router dbs_M1_CH3;
	Router dbs_M1_M3;
#pragma endregion
#pragma region from M2
	Router dbs_M2_N1;
	Router dbs_M2_N2;
	Router dbs_M2_N3;
	Router dbs_M2_M4;
#pragma endregion
#pragma region from M3

	Router dbs_M3_M1;


#pragma endregion
#pragma region from M4

	Router dbs_M4_M2;


#pragma endregion


#pragma region to N
	Router dbs_CH1_N;
	Router dbs_CH2_N;
	Router dbs_CH3_N;

#pragma endregion
#pragma region to  M1


	Router dbs_CH1_M1;
	Router dbs_CH2_M1;
	Router dbs_CH3_M1;

#pragma endregion


#pragma region to CH
	Router dbs_N1_CH;
	Router dbs_N2_CH;
	Router dbs_N3_CH;

#pragma endregion
#pragma region to  M2
	Router dbs_N1_M2;
	Router dbs_N2_M2;
	Router dbs_N3_M2;


#pragma endregion




#pragma region OUT_Routers
	Router dbs_1NP_Rasporiaditelnaya;
	Router dbs_1CHP_GanaAul;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void dbs_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_N_3P_Create();



#pragma endregion

#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void dbs_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_CH_3P_Create();



#pragma endregion


#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void dbs_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M1_M3_Create();



#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void dbs_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_M2_M4_Create();
#pragma endregion
#pragma region from M3

	UFUNCTION(BlueprintCallable)
		void dbs_M3_M1_Create();

#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void dbs_M4_M2_Create();


#pragma endregion


#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void dbs_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_CH1_N_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void dbs_CH2_M1_Create();

	UFUNCTION(BlueprintCallable)
		void dbs_CH2_N_Create();

#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void dbs_CH3_M1_Create();

	UFUNCTION(BlueprintCallable)
		void dbs_CH3_N_Create();

#pragma endregion



#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void dbs_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_N1_CH_Create();


#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void dbs_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void dbs_N2_CH_Create();


#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void dbs_N3_M2_Create();

	UFUNCTION(BlueprintCallable)
		void dbs_N3_CH_Create();

#pragma endregion



#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void dbs_N_1P_CreateEnd();
	void dbs_N_2P_CreateEnd();
	void dbs_N_3P_CreateEnd();


#pragma endregion

#pragma region from CH
	void dbs_CH_1P_CreateEnd();
	void dbs_CH_2P_CreateEnd();
	void dbs_CH_3P_CreateEnd();


#pragma endregion


#pragma region from M1
	void dbs_M1_CH1_CreateEnd();
	void dbs_M1_CH2_CreateEnd();
	void dbs_M1_CH3_CreateEnd();
	void dbs_M1_M3_CreateEnd();



#pragma endregion
#pragma region from M2
	void dbs_M2_N1_CreateEnd();
	void dbs_M2_N2_CreateEnd();
	void dbs_M2_N3_CreateEnd();
	void dbs_M2_M4_CreateEnd();
#pragma endregion
#pragma region from M3
	void dbs_M3_M1_CreateEnd();




#pragma endregion
#pragma region from M4
	void dbs_M4_M2_CreateEnd();


#pragma endregion


#pragma region from CH1
	void dbs_CH1_M1_CreateEnd();

	void dbs_CH1_N_CreateEnd();

#pragma endregion
#pragma region from CH2
	void dbs_CH2_M1_CreateEnd();

	void dbs_CH2_N_CreateEnd();

#pragma endregion
#pragma region from CH3
	void dbs_CH3_M1_CreateEnd();

	void dbs_CH3_N_CreateEnd();

#pragma endregion



#pragma region from N1
	void dbs_N1_M2_CreateEnd();
	void dbs_N1_CH_CreateEnd();

#pragma endregion
#pragma region from N2
	void dbs_N2_M2_CreateEnd();
	void dbs_N2_CH_CreateEnd();


#pragma endregion
#pragma region from N3
	void dbs_N3_M2_CreateEnd();
	void dbs_N3_CH_CreateEnd();

#pragma endregion




#pragma endregion
#pragma region FOO

	void dbs_InitIArraysStart();
	void dbs_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void dbs_InitRouters();
#pragma region Strelki


	void dbs_ToMinus(FElm* str);
	void dbs_ToPlus(FElm* str);

	void dbs_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* dbs_GetStrelka(int str);

	bool dbs_IsMinus();
	bool dbs_IsMinus(int str1);
	bool dbs_IsMinus(int str1, int str2);
	bool dbs_IsMinus(int str1, int str2, int str3);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool dbs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool dbs_IsPlus();
	bool dbs_IsPlus(int str1);
	bool dbs_IsPlus(int str1, int str2);
	bool dbs_IsPlus(int str1, int str2, int str3);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool dbs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void dbs_ToMinus();
	void dbs_ToMinus(int str1);
	void dbs_ToMinus(int str1, int str2);
	void dbs_ToMinus(int str1, int str2, int str3);
	void dbs_ToMinus(int str1, int str2, int str3, int str4);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void dbs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void dbs_ToPlus();
	void dbs_ToPlus(int str1);
	void dbs_ToPlus(int str1, int str2);
	void dbs_ToPlus(int str1, int str2, int str3);
	void dbs_ToPlus(int str1, int str2, int str3, int str4);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void dbs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void dbs_ToMinusInThread(FElm* str);
	void dbs_ToPlusInThread(FElm* str);

	bool dbs_IsStrelkaFree(FElm* elm);


#pragma endregion



#pragma endregion
#pragma endregion
#pragma region Rasporiaditelnaya
#pragma region vars
	std::vector<FElm*>rs_arrSign;
	std::vector<FElm*>rs_arrWay;
	std::vector<FElm*>rs_arrStr;
	std::vector<FElm*>rs_arrSvetofor;
	std::vector<Router*>rs_arrRouter;

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router rs_N_1P;
	Router rs_N_2P;
	Router rs_N_3P;
#pragma endregion
#pragma region from ND
	Router rs_ND_1P;
	Router rs_ND_2P;
	Router rs_ND_3P;
#pragma endregion

#pragma region from CH
	Router rs_CH_1P;
	Router rs_CH_2P;
	Router rs_CH_3P;
#pragma endregion

#pragma region from M1
	Router rs_M1_CH1;
	Router rs_M1_CH2;
	Router rs_M1_CH3;
#pragma endregion
#pragma region from M2
	Router rs_M2_N1;
	Router rs_M2_N2;
	Router rs_M2_N3;
	Router rs_M2_M3;
	Router rs_M2_M5;

#pragma endregion
#pragma region from M3

	Router rs_M3_M2;


#pragma endregion
#pragma region from M5

	Router rs_M5_M2;


#pragma endregion


#pragma region to N
	Router rs_CH1_N;
	Router rs_CH2_N;
	Router rs_CH3_N;

#pragma endregion
#pragma region to ND
	Router rs_CH1_ND;
	Router rs_CH2_ND;
	Router rs_CH3_ND;

#pragma endregion
#pragma region to  M1


	Router rs_CH1_M1;
	Router rs_CH2_M1;
	Router rs_CH3_M1;

#pragma endregion


#pragma region to CH
	Router rs_N1_CH;
	Router rs_N2_CH;
	Router rs_N3_CH;

#pragma endregion
#pragma region to  M2
	Router rs_N1_M2;
	Router rs_N2_M2;
	Router rs_N3_M2;



#pragma endregion

	Router rs_N3_M6;
	Router rs_CH3_M7;
	Router rs_M6_N3;
	Router rs_M7_CH3;

#pragma region OUT_Routers
	Router rs_1UPN_Karaganda_2;
	Router rs_1NP_Karaganda_2;
	Router rs_1CHP_Dubovskaya;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void rs_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void rs_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void rs_N_3P_Create();

#pragma endregion
#pragma region from ND

	void rs_ND_1P_Create();

	void rs_ND_2P_Create();

	void rs_ND_3P_Create();



#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void rs_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH_3P_Create();

#pragma endregion


#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH3_Create();


#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void rs_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M2_M5_Create();

#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void rs_M3_M2_Create();


#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		void rs_M5_M2_Create();

#pragma endregion


#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void rs_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH1_N_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH1_ND_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void rs_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH2_N_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH2_ND_Create();

#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void rs_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_N_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_ND_Create();

#pragma endregion



#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void rs_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void rs_N1_CH_Create();


#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void rs_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void rs_N2_CH_Create();


#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void rs_N3_M2_Create();

	UFUNCTION(BlueprintCallable)
		void rs_N3_CH_Create();

#pragma endregion

	UFUNCTION(BlueprintCallable)
		void rs_M7_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_M7_Create();
	UFUNCTION(BlueprintCallable)
		void rs_M6_N3_Create();
	UFUNCTION(BlueprintCallable)
		void rs_N3_M6_Create();

#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void rs_N_1P_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_N_2P_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_N_3P_CreateEnd();

#pragma endregion
#pragma region from ND

	void rs_ND_1P_CreateEnd();

	void rs_ND_2P_CreateEnd();

	void rs_ND_3P_CreateEnd();



#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void rs_CH_1P_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH_2P_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH_3P_CreateEnd();

#pragma endregion


#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH1_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH2_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M1_CH3_CreateEnd();


#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void rs_M2_N1_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M2_N2_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M2_N3_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M2_M3_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M2_M5_CreateEnd();

#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void rs_M3_M2_CreateEnd();


#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		void rs_M5_M2_CreateEnd();

#pragma endregion


#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void rs_CH1_M1_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH1_N_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH1_ND_CreateEnd();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void rs_CH2_M1_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH2_N_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH2_ND_CreateEnd();

#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void rs_CH3_M1_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_N_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_ND_CreateEnd();

#pragma endregion



#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void rs_N1_M2_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_N1_CH_CreateEnd();


#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void rs_N2_M2_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_N2_CH_CreateEnd();


#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void rs_N3_M2_CreateEnd();

	UFUNCTION(BlueprintCallable)
		void rs_N3_CH_CreateEnd();

#pragma endregion

	UFUNCTION(BlueprintCallable)
		void rs_M7_CH3_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_CH3_M7_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_M6_N3_CreateEnd();
	UFUNCTION(BlueprintCallable)
		void rs_N3_M6_CreateEnd();

#pragma endregion
#pragma region FOO

	void rs_InitIArraysStart();
	void rs_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void rs_InitRouters();
#pragma region Strelki


	void rs_ToMinus(FElm* str);
	void rs_ToPlus(FElm* str);

	void rs_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* rs_GetStrelka(int str);

	bool rs_IsMinus();
	bool rs_IsMinus(int str1);
	bool rs_IsMinus(int str1, int str2);
	bool rs_IsMinus(int str1, int str2, int str3);
	bool rs_IsMinus(int str1, int str2, int str3, int str4);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool rs_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool rs_IsPlus();
	bool rs_IsPlus(int str1);
	bool rs_IsPlus(int str1, int str2);
	bool rs_IsPlus(int str1, int str2, int str3);
	bool rs_IsPlus(int str1, int str2, int str3, int str4);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool rs_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void rs_ToMinus();
	void rs_ToMinus(int str1);
	void rs_ToMinus(int str1, int str2);
	void rs_ToMinus(int str1, int str2, int str3);
	void rs_ToMinus(int str1, int str2, int str3, int str4);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void rs_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void rs_ToPlus();
	void rs_ToPlus(int str1);
	void rs_ToPlus(int str1, int str2);
	void rs_ToPlus(int str1, int str2, int str3);
	void rs_ToPlus(int str1, int str2, int str3, int str4);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void rs_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void rs_ToMinusInThread(FElm* str);
	void rs_ToPlusInThread(FElm* str);

	bool rs_IsStrelkaFree(FElm* elm);


#pragma endregion



#pragma endregion
#pragma endregion
#pragma region GanaAul
#pragma region vars

	std::vector<FElm*>gu_arrSign;
	std::vector<FElm*>gu_arrWay;
	std::vector<FElm*>gu_arrStr;
	std::vector<FElm*>gu_arrSvetofor;
	std::vector<Router*>gu_arrRouter;
#pragma region Pult

	std::vector<Pelm>gu_arrPelmStr;
	std::vector<Pelm>gu_arrPelmSvetofor;
	std::vector<Pelm>gu_arrPelmWay;

	std::vector<FElm>gu_arrStrDub;
	std::vector<FElm>gu_arrSvetoforDub;
	std::vector<FElm>gu_arrWayDub;


#pragma endregion

#pragma endregion
#pragma region Routers: Def

#pragma region from N

	Router gu_N_1P;
	Router gu_N_2P;
	Router gu_N_3P;
	Router gu_N_4P;
	Router gu_N_5P;

#pragma endregion
#pragma region from CH

	Router gu_CH_1P;
	Router gu_CH_2P;
	Router gu_CH_3P;
	Router gu_CH_4P;
	Router gu_CH_5P;

#pragma endregion
#pragma region from CHD

	Router gu_CHD_1P;
	Router gu_CHD_2P;
	Router gu_CHD_3P;
	Router gu_CHD_4P;
	Router gu_CHD_5P;

#pragma endregion
#pragma region from M1
	Router gu_M1_CH1;
	Router gu_M1_CH2;
	Router gu_M1_CH3;
	Router gu_M1_CH4;
	Router gu_M1_CH5;
	Router gu_M1_M5;
#pragma endregion
#pragma region from M2

	Router gu_M2_N1;
	Router gu_M2_N2;
	Router gu_M2_N3;
	Router gu_M2_N4;
	Router gu_M2_N5;
	;
#pragma endregion
#pragma region from M3

	Router gu_M3_CH4;
	Router gu_M3_CH5;

#pragma endregion
#pragma region from M4
	Router gu_M4_N1;
	Router gu_M4_N2;
	Router gu_M4_N3;
	Router gu_M4_N4;
	Router gu_M4_N5;
#pragma endregion
#pragma region from M5

	Router gu_M5_M1;

#pragma endregion
#pragma region from M6

	Router gu_M6_N1;
	Router gu_M6_N2;

#pragma endregion
#pragma region from CH1

	Router gu_CH1_M1;
	Router gu_CH1_N;

#pragma endregion
#pragma region from CH2

	Router gu_CH2_M1;
	Router gu_CH2_N;

#pragma endregion
#pragma region from CH3

	Router gu_CH3_M1;
	Router gu_CH3_N;

#pragma endregion
#pragma region from CH4

	Router gu_CH4_M1;
	Router gu_CH4_M3;
	Router gu_CH4_N;

#pragma endregion
#pragma region from CH5

	Router gu_CH5_M1;
	Router gu_CH5_M3;
	Router gu_CH5_N;

#pragma endregion
#pragma region from N1

	Router gu_N1_M2;
	Router gu_N1_M4;
	Router gu_N1_M6;
	Router gu_N1_CH;
	Router gu_N1_CHD;

#pragma endregion
#pragma region from N2

	Router gu_N2_M2;
	Router gu_N2_M4;
	Router gu_N2_M6;
	Router gu_N2_CH;
	Router gu_N2_CHD;

#pragma endregion
#pragma region from N3

	Router gu_N3_M2;
	Router gu_N3_M4;
	Router gu_N3_CH;
	Router gu_N3_CHD;

#pragma endregion
#pragma region from N4

	Router gu_N4_M2;
	Router gu_N4_M4;
	Router gu_N4_CH;
	Router gu_N4_CHD;

#pragma endregion
#pragma region from N5

	Router gu_N5_M2;
	Router gu_N5_M4;
	Router gu_N5_CH;
	Router gu_N5_CHD;

#pragma endregion
#pragma region OUT_Routers

	Router gu_1UPCH_Radiouzel;
	Router gu_1CHP_Karabas;
	Router gu_1NP_Dubovskaya;

#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N

	UFUNCTION(BlueprintCallable)
		void gu_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N_5P_Create();

#pragma endregion
#pragma region from CH

	UFUNCTION(BlueprintCallable)
		void gu_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH_5P_Create();

#pragma endregion
#pragma region from CHD

	UFUNCTION(BlueprintCallable)
		void gu_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CHD_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CHD_5P_Create();

#pragma endregion
#pragma region from M1

	UFUNCTION(BlueprintCallable)
		void gu_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M1_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M1_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M1_M5_Create();

#pragma endregion
#pragma region from M2

	UFUNCTION(BlueprintCallable)
		void gu_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M2_N4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M2_N5_Create();

#pragma endregion
#pragma region from M3

	UFUNCTION(BlueprintCallable)
		void gu_M3_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M3_CH5_Create();

#pragma endregion
#pragma region from M4

	UFUNCTION(BlueprintCallable)
		void gu_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M4_N4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M4_N5_Create();

#pragma endregion
#pragma region from M5

	UFUNCTION(BlueprintCallable)
		void gu_M5_M1_Create();

#pragma endregion
#pragma region from M6

	UFUNCTION(BlueprintCallable)
		void gu_M6_N1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_M6_N2_Create();
#pragma endregion
#pragma region from CH1

	UFUNCTION(BlueprintCallable)
		void gu_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH1_N_Create();

#pragma endregion
#pragma region from CH2

	UFUNCTION(BlueprintCallable)
		void gu_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH2_N_Create();

#pragma endregion
#pragma region from CH3

	UFUNCTION(BlueprintCallable)
		void gu_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH3_N_Create();

#pragma endregion
#pragma region from CH4

	UFUNCTION(BlueprintCallable)
		void gu_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH4_N_Create();

#pragma endregion
#pragma region from CH5

	UFUNCTION(BlueprintCallable)
		void gu_CH5_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH5_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH5_N_Create();

#pragma endregion
#pragma region from N1

	UFUNCTION(BlueprintCallable)
		void gu_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N1_M6_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N1_CHD_Create();

#pragma endregion
#pragma region from N2

	UFUNCTION(BlueprintCallable)
		void gu_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N2_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N2_M6_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N2_CHD_Create();

#pragma endregion
#pragma region from N3

	UFUNCTION(BlueprintCallable)
		void gu_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N3_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N3_CHD_Create();

#pragma endregion
#pragma region from N4

	UFUNCTION(BlueprintCallable)
		void gu_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N4_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N4_CHD_Create();

#pragma endregion
#pragma region from N5

	UFUNCTION(BlueprintCallable)
		void gu_N5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N5_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N5_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_N5_CHD_Create();

#pragma endregion
#pragma region OUT_UFUNCTION(BlueprintCallable)


	UFUNCTION(BlueprintCallable)
		void gu_N_RASPORIADIT_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CH_KARAGANOZEK_Create();
	UFUNCTION(BlueprintCallable)
		void gu_CHD_KARAGANOZEK_Create();
	UFUNCTION(BlueprintCallable)
		void gu_RASPORIADIT_N_Create();
	UFUNCTION(BlueprintCallable)
		void gu_KARAGANOZEK_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gu_KARAGANOZEK_CHD_Create();

#pragma endregion

#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N

	void gu_N_1P_CreateEnd();
	void gu_N_2P_CreateEnd();
	void gu_N_3P_CreateEnd();
	void gu_N_4P_CreateEnd();
	void gu_N_5P_CreateEnd();

#pragma endregion
#pragma region from CH

	void gu_CH_1P_CreateEnd();
	void gu_CH_2P_CreateEnd();
	void gu_CH_3P_CreateEnd();
	void gu_CH_4P_CreateEnd();
	void gu_CH_5P_CreateEnd();

#pragma endregion
#pragma region from CHD

	void gu_CHD_1P_CreateEnd();
	void gu_CHD_2P_CreateEnd();
	void gu_CHD_3P_CreateEnd();
	void gu_CHD_4P_CreateEnd();
	void gu_CHD_5P_CreateEnd();

#pragma endregion
#pragma region from M1

	void gu_M1_CH1_CreateEnd();
	void gu_M1_CH2_CreateEnd();
	void gu_M1_CH3_CreateEnd();
	void gu_M1_CH4_CreateEnd();
	void gu_M1_CH5_CreateEnd();
	void gu_M1_M5_CreateEnd();

#pragma endregion
#pragma region from M2

	void gu_M2_N1_CreateEnd();
	void gu_M2_N2_CreateEnd();
	void gu_M2_N3_CreateEnd();
	void gu_M2_N4_CreateEnd();
	void gu_M2_N5_CreateEnd();

#pragma endregion
#pragma region from M3

	void gu_M3_CH4_CreateEnd();
	void gu_M3_CH5_CreateEnd();

#pragma endregion
#pragma region from M4

	void gu_M4_N1_CreateEnd();
	void gu_M4_N2_CreateEnd();
	void gu_M4_N3_CreateEnd();
	void gu_M4_N4_CreateEnd();
	void gu_M4_N5_CreateEnd();

#pragma endregion
#pragma region from M5

	void gu_M5_M1_CreateEnd();

#pragma endregion
#pragma region from M6

	void gu_M6_N1_CreateEnd();
	void gu_M6_N2_CreateEnd();

#pragma endregion
#pragma region from CH1

	void gu_CH1_M1_CreateEnd();
	void gu_CH1_N_CreateEnd();

#pragma endregion
#pragma region from CH2

	void gu_CH2_M1_CreateEnd();
	void gu_CH2_N_CreateEnd();

#pragma endregion
#pragma region from CH3

	void gu_CH3_M1_CreateEnd();
	void gu_CH3_N_CreateEnd();

#pragma endregion
#pragma region from CH4

	void gu_CH4_M1_CreateEnd();
	void gu_CH4_M3_CreateEnd();
	void gu_CH4_N_CreateEnd();

#pragma endregion
#pragma region from CH5

	void gu_CH5_M1_CreateEnd();
	void gu_CH5_M3_CreateEnd();
	void gu_CH5_N_CreateEnd();

#pragma endregion
#pragma region from N1

	void gu_N1_M2_CreateEnd();
	void gu_N1_M4_CreateEnd();
	void gu_N1_M6_CreateEnd();
	void gu_N1_CH_CreateEnd();
	void gu_N1_CHD_CreateEnd();

#pragma endregion
#pragma region from N2

	void gu_N2_M2_CreateEnd();
	void gu_N2_M4_CreateEnd();
	void gu_N2_M6_CreateEnd();
	void gu_N2_CH_CreateEnd();
	void gu_N2_CHD_CreateEnd();

#pragma endregion
#pragma region from N3

	void gu_N3_M2_CreateEnd();
	void gu_N3_M4_CreateEnd();
	void gu_N3_CH_CreateEnd();
	void gu_N3_CHD_CreateEnd();

#pragma endregion
#pragma region from N4

	void gu_N4_M2_CreateEnd();
	void gu_N4_M4_CreateEnd();
	void gu_N4_CH_CreateEnd();
	void gu_N4_CHD_CreateEnd();

#pragma endregion
#pragma region from N5

	void gu_N5_M2_CreateEnd();
	void gu_N5_M4_CreateEnd();
	void gu_N5_CH_CreateEnd();
	void gu_N5_CHD_CreateEnd();

#pragma endregion
#pragma region OUT_

	//void gu_N_RASPORIADIT_CreateEnd();
	//void gu_CH_KARAGANOZEK_CreateEnd();
	//void gu_CHD_KARAGANOZEK_CreateEnd();
	//void gu_RASPORIADIT_N_CreateEnd();
	//void gu_KARAGANOZEK_CH_CreateEnd();
	//void gu_KARAGANOZEK_CHD_CreateEnd();

#pragma endregion

#pragma endregion
#pragma region FOO

	void gu_InitArraysStart();
	void gu_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void gu_InitRouters();
#pragma region Strelki





#pragma region fstr

	FElm* gu_GetStrelka(int str);

	void gu_ToMinus(int str1);
	void gu_ToMinus(int str1, int str2);
	void gu_ToMinus(int str1, int str2, int str3);
	void gu_ToMinus(int str1, int str2, int str3, int str4);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void gu_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void gu_ToPlus(int str1);
	void gu_ToPlus(int str1, int str2);
	void gu_ToPlus(int str1, int str2, int str3);
	void gu_ToPlus(int str1, int str2, int str3, int str4);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void gu_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

#pragma endregion

	void gu_ToMinus(FElm* str);
	void gu_ToPlus(FElm* str);

	void gu_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	void gu_ToMinusInThread(FElm* str);
	void gu_ToPlusInThread(FElm* str);


	bool gu_IsStrelkaFree(FElm* elm);






#pragma endregion

#pragma endregion
#pragma endregion
#pragma region Karabas

#pragma region vars

	std::vector<FElm*>krb_arrSign;
	std::vector<FElm*>krb_arrWay;
	std::vector<FElm*>krb_arrStr;
	std::vector<FElm*>krb_arrSvetofor;
	std::vector<Router*>krb_arrRouter;
#pragma region Pult

	std::vector<Pelm>krb_pult_arrPelmStr;
	std::vector<Pelm>krb_pult_arrPelmSvetofor;
	std::vector<Pelm>krb_pult_arrPelmWay;
	std::vector<Pelm>krb_pult_arrPelmSignals;
	std::vector<Pbool>krb_pult_arrBoolSignals;

	std::vector<FElm>krb_pult_arrStrDub;
	std::vector<FElm>krb_pult_arrSvetoforDub;
	std::vector<FElm>krb_pult_arrWayDub;
	std::vector<FElm>krb_pult_arrEFlmSignalsDub;
	std::vector<bool>krb_pult_arrBoolSignalsDub;

	std::vector<std::string> krb_pult_arrComm;

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

#pragma endregion

#pragma endregion
#pragma region Routers: Def

#pragma region from N

	Router krb_N_1P;
	Router krb_N_2P;
	Router krb_N_3P;
	Router krb_N_4P;
	Router krb_N_5P;

#pragma endregion
#pragma region from CH

	Router krb_CH_1P;
	Router krb_CH_2P;
	Router krb_CH_3P;
	Router krb_CH_4P;
	Router krb_CH_5P;

#pragma endregion
#pragma region from CHD

	Router krb_CHD_1P;
	Router krb_CHD_2P;
	Router krb_CHD_3P;
	Router krb_CHD_4P;
	Router krb_CHD_5P;

#pragma endregion
#pragma region from M1
	Router krb_M1_CH1;
	Router krb_M1_CH2;
	Router krb_M1_CH3;
	Router krb_M1_CH4;
	Router krb_M1_CH5;
	Router krb_M1_M5;
#pragma endregion
#pragma region from M2

	Router krb_M2_N1;
	Router krb_M2_N2;
	Router krb_M2_N3;
	Router krb_M2_N4;
	Router krb_M2_N5;
	;
#pragma endregion
#pragma region from M3

	Router krb_M3_CH4;
	Router krb_M3_CH5;

#pragma endregion
#pragma region from M4
	Router krb_M4_N1;
	Router krb_M4_N2;
	Router krb_M4_N3;
	Router krb_M4_N4;
	Router krb_M4_N5;
#pragma endregion
#pragma region from M5

	Router krb_M5_M1;

#pragma endregion
#pragma region from M6

	Router krb_M6_N1;
	Router krb_M6_N2;

#pragma endregion
#pragma region from CH1

	Router krb_CH1_M1;
	Router krb_CH1_N;

#pragma endregion
#pragma region from CH2

	Router krb_CH2_M1;
	Router krb_CH2_N;

#pragma endregion
#pragma region from CH3

	Router krb_CH3_M1;
	Router krb_CH3_N;

#pragma endregion
#pragma region from CH4

	Router krb_CH4_M1;
	Router krb_CH4_M3;
	Router krb_CH4_N;

#pragma endregion
#pragma region from CH5

	Router krb_CH5_M1;
	Router krb_CH5_M3;
	Router krb_CH5_N;

#pragma endregion
#pragma region from N1

	Router krb_N1_M2;
	Router krb_N1_M4;
	Router krb_N1_M6;
	Router krb_N1_CH;
	Router krb_N1_CHD;

#pragma endregion
#pragma region from N2

	Router krb_N2_M2;
	Router krb_N2_M4;
	Router krb_N2_M6;
	Router krb_N2_CH;
	Router krb_N2_CHD;

#pragma endregion
#pragma region from N3

	Router krb_N3_M2;
	Router krb_N3_M4;
	Router krb_N3_CH;
	Router krb_N3_CHD;

#pragma endregion
#pragma region from N4

	Router krb_N4_M2;
	Router krb_N4_M4;
	Router krb_N4_CH;
	Router krb_N4_CHD;

#pragma endregion
#pragma region from N5

	Router krb_N5_M2;
	Router krb_N5_M4;
	Router krb_N5_CH;
	Router krb_N5_CHD;

#pragma endregion
#pragma region OUT_Routers

	Router krb_1NP_GanaAul;
	Router krb_1CHP_Karaganozek;
	Router krb_1UPCH_Karaganozek;

#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N

	UFUNCTION(BlueprintCallable)
		void krb_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N_5P_Create();

#pragma endregion
#pragma region from CH

	UFUNCTION(BlueprintCallable)
		void krb_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH_5P_Create();

#pragma endregion
#pragma region from CHD

	UFUNCTION(BlueprintCallable)
		void krb_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CHD_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CHD_5P_Create();

#pragma endregion
#pragma region from M1

	UFUNCTION(BlueprintCallable)
		void krb_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M1_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M1_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M1_M5_Create();

#pragma endregion
#pragma region from M2

	UFUNCTION(BlueprintCallable)
		void krb_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M2_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M2_N5_Create();

#pragma endregion
#pragma region from M3

	UFUNCTION(BlueprintCallable)
		void krb_M3_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M3_CH5_Create();

#pragma endregion
#pragma region from M4

	UFUNCTION(BlueprintCallable)
		void krb_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M4_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M4_N5_Create();

#pragma endregion
#pragma region from M5

	UFUNCTION(BlueprintCallable)
		void krb_M5_M1_Create();

#pragma endregion
#pragma region from M6

	UFUNCTION(BlueprintCallable)
		void krb_M6_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_M6_N2_Create();
#pragma endregion
#pragma region from CH1

	UFUNCTION(BlueprintCallable)
		void krb_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH1_N_Create();

#pragma endregion
#pragma region from CH2

	UFUNCTION(BlueprintCallable)
		void krb_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH2_N_Create();

#pragma endregion
#pragma region from CH3

	UFUNCTION(BlueprintCallable)
		void krb_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH3_N_Create();

#pragma endregion
#pragma region from CH4

	UFUNCTION(BlueprintCallable)
		void krb_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH4_N_Create();

#pragma endregion
#pragma region from CH5

	UFUNCTION(BlueprintCallable)
		void krb_CH5_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH5_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH5_N_Create();

#pragma endregion
#pragma region from N1

	UFUNCTION(BlueprintCallable)
		void krb_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N1_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N1_CHD_Create();

#pragma endregion
#pragma region from N2

	UFUNCTION(BlueprintCallable)
		void krb_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N2_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N2_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N2_CHD_Create();

#pragma endregion
#pragma region from N3

	UFUNCTION(BlueprintCallable)
		void krb_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N3_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N3_CHD_Create();

#pragma endregion
#pragma region from N4

	UFUNCTION(BlueprintCallable)
		void krb_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N4_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N4_CHD_Create();

#pragma endregion
#pragma region from N5

	UFUNCTION(BlueprintCallable)
		void krb_N5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N5_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N5_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_N5_CHD_Create();

#pragma endregion
#pragma region OUT_UFUNCTION(BlueprintCallable)


	UFUNCTION(BlueprintCallable)
		void krb_N_RASPORIADIT_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CH_KARAGANOZEK_Create();
	UFUNCTION(BlueprintCallable)
		void krb_CHD_KARAGANOZEK_Create();
	UFUNCTION(BlueprintCallable)
		void krb_RASPORIADIT_N_Create();
	UFUNCTION(BlueprintCallable)
		void krb_KARAGANOZEK_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krb_KARAGANOZEK_CHD_Create();

#pragma endregion

#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N

	void krb_N_1P_CreateEnd();
	void krb_N_2P_CreateEnd();
	void krb_N_3P_CreateEnd();
	void krb_N_4P_CreateEnd();
	void krb_N_5P_CreateEnd();

#pragma endregion
#pragma region from CH

	void krb_CH_1P_CreateEnd();
	void krb_CH_2P_CreateEnd();
	void krb_CH_3P_CreateEnd();
	void krb_CH_4P_CreateEnd();
	void krb_CH_5P_CreateEnd();

#pragma endregion
#pragma region from CHD

	void krb_CHD_1P_CreateEnd();
	void krb_CHD_2P_CreateEnd();
	void krb_CHD_3P_CreateEnd();
	void krb_CHD_4P_CreateEnd();
	void krb_CHD_5P_CreateEnd();

#pragma endregion
#pragma region from M1

	void krb_M1_CH1_CreateEnd();
	void krb_M1_CH2_CreateEnd();
	void krb_M1_CH3_CreateEnd();
	void krb_M1_CH4_CreateEnd();
	void krb_M1_CH5_CreateEnd();
	void krb_M1_M5_CreateEnd();

#pragma endregion
#pragma region from M2

	void krb_M2_N1_CreateEnd();
	void krb_M2_N2_CreateEnd();
	void krb_M2_N3_CreateEnd();
	void krb_M2_N4_CreateEnd();
	void krb_M2_N5_CreateEnd();

#pragma endregion
#pragma region from M3

	void krb_M3_CH4_CreateEnd();
	void krb_M3_CH5_CreateEnd();

#pragma endregion
#pragma region from M4

	void krb_M4_N1_CreateEnd();
	void krb_M4_N2_CreateEnd();
	void krb_M4_N3_CreateEnd();
	void krb_M4_N4_CreateEnd();
	void krb_M4_N5_CreateEnd();

#pragma endregion
#pragma region from M5

	void krb_M5_M1_CreateEnd();

#pragma endregion
#pragma region from M6

	void krb_M6_N1_CreateEnd();
	void krb_M6_N2_CreateEnd();

#pragma endregion
#pragma region from CH1

	void krb_CH1_M1_CreateEnd();
	void krb_CH1_N_CreateEnd();

#pragma endregion
#pragma region from CH2

	void krb_CH2_M1_CreateEnd();
	void krb_CH2_N_CreateEnd();

#pragma endregion
#pragma region from CH3

	void krb_CH3_M1_CreateEnd();
	void krb_CH3_N_CreateEnd();

#pragma endregion
#pragma region from CH4

	void krb_CH4_M1_CreateEnd();
	void krb_CH4_M3_CreateEnd();
	void krb_CH4_N_CreateEnd();

#pragma endregion
#pragma region from CH5

	void krb_CH5_M1_CreateEnd();
	void krb_CH5_M3_CreateEnd();
	void krb_CH5_N_CreateEnd();

#pragma endregion
#pragma region from N1

	void krb_N1_M2_CreateEnd();
	void krb_N1_M4_CreateEnd();
	void krb_N1_M6_CreateEnd();
	void krb_N1_CH_CreateEnd();
	void krb_N1_CHD_CreateEnd();

#pragma endregion
#pragma region from N2

	void krb_N2_M2_CreateEnd();
	void krb_N2_M4_CreateEnd();
	void krb_N2_M6_CreateEnd();
	void krb_N2_CH_CreateEnd();
	void krb_N2_CHD_CreateEnd();

#pragma endregion
#pragma region from N3

	void krb_N3_M2_CreateEnd();
	void krb_N3_M4_CreateEnd();
	void krb_N3_CH_CreateEnd();
	void krb_N3_CHD_CreateEnd();

#pragma endregion
#pragma region from N4

	void krb_N4_M2_CreateEnd();
	void krb_N4_M4_CreateEnd();
	void krb_N4_CH_CreateEnd();
	void krb_N4_CHD_CreateEnd();

#pragma endregion
#pragma region from N5

	void krb_N5_M2_CreateEnd();
	void krb_N5_M4_CreateEnd();
	void krb_N5_CH_CreateEnd();
	void krb_N5_CHD_CreateEnd();

#pragma endregion
#pragma region OUT_

	//void krb_N_RASPORIADIT_CreateEnd();
	//void krb_CH_KARAGANOZEK_CreateEnd();
	//void krb_CHD_KARAGANOZEK_CreateEnd();
	//void krb_RASPORIADIT_N_CreateEnd();
	//void krb_KARAGANOZEK_CH_CreateEnd();
	//void krb_KARAGANOZEK_CHD_CreateEnd();

#pragma endregion

#pragma endregion
#pragma region FOO

	void krb_InitArraysStart();
	void krb_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void krb_InitRouters();
#pragma region Strelki





#pragma region fstr

	FElm* krb_GetStrelka(int str);

	void krb_ToMinus(int str1);
	void krb_ToMinus(int str1, int str2);
	void krb_ToMinus(int str1, int str2, int str3);
	void krb_ToMinus(int str1, int str2, int str3, int str4);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void krb_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void krb_ToPlus(int str1);
	void krb_ToPlus(int str1, int str2);
	void krb_ToPlus(int str1, int str2, int str3);
	void krb_ToPlus(int str1, int str2, int str3, int str4);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void krb_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

#pragma endregion

	void krb_ToMinus(FElm* str);
	void krb_ToPlus(FElm* str);

	void krb_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	void krb_ToMinusInThread(FElm* str);
	void krb_ToPlusInThread(FElm* str);


	bool krb_IsStrelkaFree(FElm* elm);






#pragma endregion

#pragma endregion

#pragma region Pult

	UFUNCTION(BlueprintCallable)
		int krb_GetSizeArrCommandToPult();
	UFUNCTION(BlueprintCallable)
		void krb_For_Pult_Clear_Data();

	UFUNCTION(BlueprintCallable)
		void krb_For_Pult_Init_DataFirst();

	void krb_SetDataForUpdate();

	void krb_Pult_CheckerChanger();

	void krb_Pult_LoaderTo();
	UFUNCTION(BlueprintCallable)
		void krb_Pult_FirstInitArrPelm();

	void krb_Pult_SenderTo_LoaderTo(Pelm elm);

	void krb_Pult_SenderTo_LoaderTo(Pbool boo);

	void krb_Pult_CheckerInThread();

	void krb_pult_CheckerSetterDirectRouter();





#pragma endregion
#pragma endregion
#pragma region  Karaganozek

#pragma region  vars

	std::vector<FElm*>krz_arrSign;
	std::vector<FElm*>krz_arrWay;
	std::vector<FElm*>krz_arrStr;
	std::vector<FElm*>krz_arrSvetofor;
	std::vector<Router*>krz_arrRouter;

#pragma region Pult

	std::vector<Pelm>krz_pult_arrPelmStr;
	std::vector<Pelm>krz_pult_arrPelmSvetofor;
	std::vector<Pelm>krz_pult_arrPelmWay;
	std::vector<Pelm>krz_pult_arrPelmSignals;
	std::vector<Pbool>krz_pult_arrBoolSignals;

	std::vector<FElm>krz_pult_arrWayDub;
	std::vector<FElm>krz_pult_arrStrDub;
	std::vector<FElm>krz_pult_arrSvetoforDub;
	std::vector<FElm>krz_pult_arrEFlmSignalsDub;
	std::vector<bool>krz_pult_arrBoolSignalsDub;

	std::vector<std::string> krz_pult_arrComm;
	std::vector<std::string> krz_pult_arrCommDub;

	bool krz_pult_IsChetManRouterSet = false;
	bool krz_pult_IsNeChetManRouterSet = false;
	bool krz_pult_IsChetTrainRouterSet = false;
	bool krz_pult_IsNeChetTrainRouterSet = false;

	bool krz_pult_IsChetManRouterSetDop = false;
	bool krz_pult_IsNeChetManRouterSetDop = false;
	bool krz_pult_IsChetTrainRouterSetDop = false;
	bool krz_pult_IsNeChetTrainRouterSetDop = false;

#pragma endregion


#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router krz_N_1P;
	Router krz_N_2P;
	Router krz_N_3P;
	Router krz_N_4P;
	Router krz_N_5P;
	Router krz_N_6P;
	Router krz_N_7P;
#pragma endregion
#pragma region from ND
	Router krz_ND_1P;
	Router krz_ND_2P;
	Router krz_ND_3P;
	Router krz_ND_4P;
	Router krz_ND_5P;
	Router krz_ND_6P;
	Router krz_ND_7P;
#pragma endregion
#pragma region from CH
	Router krz_CH_1P;
	Router krz_CH_2P;
	Router krz_CH_3P;
	Router krz_CH_4P;
	Router krz_CH_5P;
	Router krz_CH_6P;
	Router krz_CH_7P;
#pragma endregion
#pragma region from CHD
	Router krz_CHD_1P;
	Router krz_CHD_2P;
	Router krz_CHD_3P;
	Router krz_CHD_4P;
	Router krz_CHD_5P;
	Router krz_CHD_6P;
	Router krz_CHD_7P;
#pragma endregion
#pragma region from CHR
	Router krz_CHR_1P;
	Router krz_CHR_2P;
	Router krz_CHR_3P;
	Router krz_CHR_4P;
	Router krz_CHR_5P;
	Router krz_CHR_6P;
	Router krz_CHR_7P;
#pragma endregion
#pragma region from M1
	Router krz_M1_CH1;
	Router krz_M1_CH2;
	Router krz_M1_CH3;
	Router krz_M1_CH4;
	Router krz_M1_CH5;
	Router krz_M1_CH6;
	Router krz_M1_CH7;
#pragma endregion
#pragma region from M2
	Router krz_M2_N1;
	Router krz_M2_N2;
	Router krz_M2_N3;
	Router krz_M2_N4;
	Router krz_M2_N5;
	Router krz_M2_N6;
	Router krz_M2_N7;
	Router krz_M2_M5;
#pragma endregion
#pragma region from M3
	Router krz_M3_CH1;
	Router krz_M3_CH2;
	Router krz_M3_CH3;
	Router krz_M3_CH4;
	Router krz_M3_CH5;
	Router krz_M3_CH6;
	Router krz_M3_CH7;
#pragma endregion
#pragma region from M4
	Router krz_M4_N1;
	Router krz_M4_N2;
	Router krz_M4_N3;
	Router krz_M4_N4;
	Router krz_M4_N5;
	Router krz_M4_N6;
	Router krz_M4_N7;
	Router krz_M4_M5;
#pragma endregion
#pragma region from M5
	Router krz_M5_M2;
	Router krz_M5_M4;
	Router krz_M5_M6;
	Router krz_M5_M8;
	Router krz_M5_M10;
	Router krz_M5_M12;
	Router krz_M5_M14;
	Router krz_M5_M16;
	Router krz_M5_M18;
	Router krz_M5_M20;
#pragma endregion
#pragma region from M6
	Router krz_M6_N1;
	Router krz_M6_N2;
	Router krz_M6_N3;
	Router krz_M6_N4;
	Router krz_M6_N5;
	Router krz_M6_N6;
	Router krz_M6_N7;
	Router krz_M6_M5;
#pragma endregion
#pragma region from M10
	Router krz_M10_N1;
	Router krz_M10_N2;
	Router krz_M10_N3;
	Router krz_M10_N4;
	Router krz_M10_N5;
	Router krz_M10_N6;
	Router krz_M10_N7;
	Router krz_M10_M5;
#pragma endregion
#pragma region from M12
	Router krz_M12_N1;
	Router krz_M12_N2;
	Router krz_M12_N3;
	Router krz_M12_N4;
	Router krz_M12_N5;
	Router krz_M12_N6;
	Router krz_M12_N7;
	Router krz_M12_M5;
#pragma endregion
#pragma region from M14
	Router krz_M14_N1;
	Router krz_M14_N2;
	Router krz_M14_N3;
	Router krz_M14_N4;
	Router krz_M14_N5;
	Router krz_M14_N6;
	Router krz_M14_N7;
	Router krz_M14_M5;
#pragma endregion
#pragma region from M16
	Router krz_M16_N1;
	Router krz_M16_N2;
	Router krz_M16_M5;
#pragma endregion
#pragma region from M18
	Router krz_M18_M5;
	Router krz_M18_N1;
	Router krz_M18_N2;
#pragma endregion
#pragma region from M20
	Router krz_M20_M5;
	Router krz_M20_N1;
	Router krz_M20_N2;
#pragma endregion
#pragma region from M8
	Router krz_M8_N1;
	Router krz_M8_N2;
	Router krz_M8_N3;
	Router krz_M8_N4;
	Router krz_M8_N5;
	Router krz_M8_N6;
	Router krz_M8_N7;
	Router krz_M8_M5;
#pragma endregion
#pragma region from CH1
	Router krz_CH1_M1;
	Router krz_CH1_M3;
	Router krz_CH1_N;
	Router krz_CH1_ND;
#pragma endregion
#pragma region from CH2
	Router krz_CH2_M1;
	Router krz_CH2_M3;
	Router krz_CH2_N;
	Router krz_CH2_ND;
#pragma endregion
#pragma region from CH3
	Router krz_CH3_M1;
	Router krz_CH3_M3;
	Router krz_CH3_N;
	Router krz_CH3_ND;
#pragma endregion
#pragma region from CH4
	Router krz_CH4_M1;
	Router krz_CH4_M3;
	Router krz_CH4_N;
	Router krz_CH4_ND;
#pragma endregion
#pragma region from CH5
	Router krz_CH5_M1;
	Router krz_CH5_M3;
	Router krz_CH5_N;
	Router krz_CH5_ND;
#pragma endregion
#pragma region from CH6
	Router krz_CH6_M1;
	Router krz_CH6_M3;
	Router krz_CH6_N;
	Router krz_CH6_ND;
#pragma endregion
#pragma region from CH7
	Router krz_CH7_M1;
	Router krz_CH7_M3;
	Router krz_CH7_N;
	Router krz_CH7_ND;
#pragma endregion
#pragma region from N1
	Router krz_N1_M2;
	Router krz_N1_M4;
	Router krz_N1_M6;
	Router krz_N1_M8;
	Router krz_N1_M10;
	Router krz_N1_M12;
	Router krz_N1_M14;
	Router krz_N1_M16;
	Router krz_N1_M18;
	Router krz_N1_M20;
	Router krz_N1_CH;
	Router krz_N1_CHD;
	Router krz_N1_CHR;
#pragma endregion
#pragma region from N2
	Router krz_N2_M2;
	Router krz_N2_M4;
	Router krz_N2_M6;
	Router krz_N2_M8;
	Router krz_N2_M10;
	Router krz_N2_M12;
	Router krz_N2_M14;
	Router krz_N2_M16;
	Router krz_N2_M18;
	Router krz_N2_M20;
	Router krz_N2_CH;
	Router krz_N2_CHD;
	Router krz_N2_CHR;
#pragma endregion
#pragma region from N3
	Router krz_N3_M2;
	Router krz_N3_M4;
	Router krz_N3_M6;
	Router krz_N3_M8;
	Router krz_N3_M10;
	Router krz_N3_M12;
	Router krz_N3_M14;
	Router krz_N3_CH;
	Router krz_N3_CHD;
	Router krz_N3_CHR;
#pragma endregion
#pragma region from N4
	Router krz_N4_M2;
	Router krz_N4_M4;
	Router krz_N4_M6;
	Router krz_N4_M8;
	Router krz_N4_M10;
	Router krz_N4_M12;
	Router krz_N4_M14;
	Router krz_N4_CH;
	Router krz_N4_CHD;
	Router krz_N4_CHR;
#pragma endregion
#pragma region from N5
	Router krz_N5_M2;
	Router krz_N5_M4;
	Router krz_N5_M6;
	Router krz_N5_M8;
	Router krz_N5_M10;
	Router krz_N5_M12;
	Router krz_N5_M14;
	Router krz_N5_CH;
	Router krz_N5_CHD;
	Router krz_N5_CHR;
#pragma endregion
#pragma region from N6
	Router krz_N6_M2;
	Router krz_N6_M4;
	Router krz_N6_M6;
	Router krz_N6_M8;
	Router krz_N6_M10;
	Router krz_N6_M12;
	Router krz_N6_M14;
	Router krz_N6_CH;
	Router krz_N6_CHD;
	Router krz_N6_CHR;
#pragma endregion
#pragma region from N7
	Router krz_N7_M2;
	Router krz_N7_M4;
	Router krz_N7_M6;
	Router krz_N7_M8;
	Router krz_N7_M10;
	Router krz_N7_M12;
	Router krz_N7_M14;
	Router krz_N7_CH;
	Router krz_N7_CHD;
	Router krz_N7_CHR;
#pragma endregion
#pragma region OUT_Routers
	Router krz_1NP_Karabas;
	Router krz_2UP_Karabas;
	Router krz_1CHP_Karaganda;
	Router krz_1UPCH_Karaganda;
	Router krz_1PP_Radiouzel;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void krz_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_5P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_6P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N_7P_Create();

#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		void krz_ND_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_5P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_6P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_ND_7P_Create();

#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void krz_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_5P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_6P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH_7P_Create();
#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		void krz_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_5P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_6P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHD_7P_Create();
#pragma endregion
#pragma region from CHR
	UFUNCTION(BlueprintCallable)
		void krz_CHR_1P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_2P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_3P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_4P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_5P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_6P_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CHR_7P_Create();
#pragma endregion
#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M1_CH7_Create();
#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void krz_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M2_M5_Create();
#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M3_CH7_Create();
#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void krz_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M4_M5_Create();
#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		void krz_M5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M16_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M18_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M5_M20_Create();
#pragma endregion
#pragma region from M6
	UFUNCTION(BlueprintCallable)
		void krz_M6_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M6_M5_Create();
#pragma endregion
#pragma region from M10
	UFUNCTION(BlueprintCallable)
		void krz_M10_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M10_M5_Create();
#pragma endregion
#pragma region from M12
	UFUNCTION(BlueprintCallable)
		void krz_M12_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M12_M5_Create();
#pragma endregion
#pragma region from M14
	UFUNCTION(BlueprintCallable)
		void krz_M14_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M14_M5_Create();
#pragma endregion
#pragma region from M16
	UFUNCTION(BlueprintCallable)
		void krz_M16_M5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M16_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M16_N2_Create();
#pragma endregion
#pragma region from M18

	UFUNCTION(BlueprintCallable)
		void krz_M18_M5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M18_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M18_N2_Create();
#pragma endregion
#pragma region from M20

	UFUNCTION(BlueprintCallable)
		void krz_M20_M5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M20_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M20_N2_Create();
#pragma endregion
#pragma region from M8
	UFUNCTION(BlueprintCallable)
		void krz_M8_N1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N5_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_N7_Create();
	UFUNCTION(BlueprintCallable)
		void krz_M8_M5_Create();
#pragma endregion
#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void krz_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH1_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH1_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH1_ND_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void krz_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH2_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH2_ND_Create();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void krz_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH3_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH3_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH3_ND_Create();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		void krz_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH4_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH4_ND_Create();
#pragma endregion
#pragma region from CH5
	UFUNCTION(BlueprintCallable)
		void krz_CH5_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH5_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH5_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH5_ND_Create();
#pragma endregion
#pragma region from CH6
	UFUNCTION(BlueprintCallable)
		void krz_CH6_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH6_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH6_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH6_ND_Create();
#pragma endregion
#pragma region from CH7
	UFUNCTION(BlueprintCallable)
		void krz_CH7_M1_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH7_M3_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH7_N_Create();
	UFUNCTION(BlueprintCallable)
		void krz_CH7_ND_Create();
#pragma endregion
#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void krz_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M16_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M18_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_M20_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N1_CHR_Create();
#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void krz_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M16_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M18_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_M20_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N2_CHR_Create();
#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void krz_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N3_CHR_Create();
#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		void krz_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N4_CHR_Create();
#pragma endregion
#pragma region from N5
	UFUNCTION(BlueprintCallable)
		void krz_N5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N5_CHR_Create();
#pragma endregion
#pragma region from N6
	UFUNCTION(BlueprintCallable)
		void krz_N6_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N6_CHR_Create();
#pragma endregion
#pragma region from N7
	UFUNCTION(BlueprintCallable)
		void krz_N7_M2_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M4_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M6_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M8_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M10_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M12_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_M14_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_CH_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_CHD_Create();
	UFUNCTION(BlueprintCallable)
		void krz_N7_CHR_Create();
#pragma endregion
#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void krz_N_1P_CreateEnd();
	void krz_N_2P_CreateEnd();
	void krz_N_3P_CreateEnd();
	void krz_N_4P_CreateEnd();
	void krz_N_5P_CreateEnd();
	void krz_N_6P_CreateEnd();
	void krz_N_7P_CreateEnd();

#pragma endregion
#pragma region from ND
	void krz_ND_1P_CreateEnd();
	void krz_ND_2P_CreateEnd();
	void krz_ND_3P_CreateEnd();
	void krz_ND_4P_CreateEnd();
	void krz_ND_5P_CreateEnd();
	void krz_ND_6P_CreateEnd();
	void krz_ND_7P_CreateEnd();

#pragma endregion
#pragma region from CH
	void krz_CH_1P_CreateEnd();
	void krz_CH_2P_CreateEnd();
	void krz_CH_3P_CreateEnd();
	void krz_CH_4P_CreateEnd();
	void krz_CH_5P_CreateEnd();
	void krz_CH_6P_CreateEnd();
	void krz_CH_7P_CreateEnd();
#pragma endregion
#pragma region from CHD
	void krz_CHD_1P_CreateEnd();
	void krz_CHD_2P_CreateEnd();
	void krz_CHD_3P_CreateEnd();
	void krz_CHD_4P_CreateEnd();
	void krz_CHD_5P_CreateEnd();
	void krz_CHD_6P_CreateEnd();
	void krz_CHD_7P_CreateEnd();
#pragma endregion
#pragma region from CHR
	void krz_CHR_1P_CreateEnd();
	void krz_CHR_2P_CreateEnd();
	void krz_CHR_3P_CreateEnd();
	void krz_CHR_4P_CreateEnd();
	void krz_CHR_5P_CreateEnd();
	void krz_CHR_6P_CreateEnd();
	void krz_CHR_7P_CreateEnd();
#pragma endregion
#pragma region from M1
	void krz_M1_CH1_CreateEnd();
	void krz_M1_CH2_CreateEnd();
	void krz_M1_CH3_CreateEnd();
	void krz_M1_CH4_CreateEnd();
	void krz_M1_CH5_CreateEnd();
	void krz_M1_CH6_CreateEnd();
	void krz_M1_CH7_CreateEnd();
#pragma endregion
#pragma region from M2
	void krz_M2_N1_CreateEnd();
	void krz_M2_N2_CreateEnd();
	void krz_M2_N3_CreateEnd();
	void krz_M2_N4_CreateEnd();
	void krz_M2_N5_CreateEnd();
	void krz_M2_N6_CreateEnd();
	void krz_M2_N7_CreateEnd();
	void krz_M2_M5_CreateEnd();
#pragma endregion
#pragma region from M3
	void krz_M3_CH1_CreateEnd();
	void krz_M3_CH2_CreateEnd();
	void krz_M3_CH3_CreateEnd();
	void krz_M3_CH4_CreateEnd();
	void krz_M3_CH5_CreateEnd();
	void krz_M3_CH6_CreateEnd();
	void krz_M3_CH7_CreateEnd();
#pragma endregion
#pragma region from M4
	void krz_M4_N1_CreateEnd();
	void krz_M4_N2_CreateEnd();
	void krz_M4_N3_CreateEnd();
	void krz_M4_N4_CreateEnd();
	void krz_M4_N5_CreateEnd();
	void krz_M4_N6_CreateEnd();
	void krz_M4_N7_CreateEnd();
	void krz_M4_M5_CreateEnd();
#pragma endregion
#pragma region from M5
	void krz_M5_M2_CreateEnd();
	void krz_M5_M4_CreateEnd();
	void krz_M5_M6_CreateEnd();
	void krz_M5_M8_CreateEnd();
	void krz_M5_M10_CreateEnd();
	void krz_M5_M12_CreateEnd();
	void krz_M5_M14_CreateEnd();
	void krz_M5_M16_CreateEnd();
	void krz_M5_M18_CreateEnd();
	void krz_M5_M20_CreateEnd();
#pragma endregion
#pragma region from M6
	void krz_M6_N1_CreateEnd();
	void krz_M6_N2_CreateEnd();
	void krz_M6_N3_CreateEnd();
	void krz_M6_N4_CreateEnd();
	void krz_M6_N5_CreateEnd();
	void krz_M6_N6_CreateEnd();
	void krz_M6_N7_CreateEnd();
	void krz_M6_M5_CreateEnd();
#pragma endregion
#pragma region from M10
	void krz_M10_N1_CreateEnd();
	void krz_M10_N2_CreateEnd();
	void krz_M10_N3_CreateEnd();
	void krz_M10_N4_CreateEnd();
	void krz_M10_N5_CreateEnd();
	void krz_M10_N6_CreateEnd();
	void krz_M10_N7_CreateEnd();
	void krz_M10_M5_CreateEnd();
#pragma endregion
#pragma region from M12
	void krz_M12_N1_CreateEnd();
	void krz_M12_N2_CreateEnd();
	void krz_M12_N3_CreateEnd();
	void krz_M12_N4_CreateEnd();
	void krz_M12_N5_CreateEnd();
	void krz_M12_N6_CreateEnd();
	void krz_M12_N7_CreateEnd();
	void krz_M12_M5_CreateEnd();
#pragma endregion
#pragma region from M14
	void krz_M14_N1_CreateEnd();
	void krz_M14_N2_CreateEnd();
	void krz_M14_N3_CreateEnd();
	void krz_M14_N4_CreateEnd();
	void krz_M14_N5_CreateEnd();
	void krz_M14_N6_CreateEnd();
	void krz_M14_N7_CreateEnd();
	void krz_M14_M5_CreateEnd();
#pragma endregion
#pragma region from M16

	void krz_M16_M5_CreateEnd();
	void krz_M16_N1_CreateEnd();
	void krz_M16_N2_CreateEnd();
#pragma endregion
#pragma region from M18

	void krz_M18_M5_CreateEnd();
	void krz_M18_N1_CreateEnd();
	void krz_M18_N2_CreateEnd();
#pragma endregion
#pragma region from M20

	void krz_M20_M5_CreateEnd();
	void krz_M20_N1_CreateEnd();
	void krz_M20_N2_CreateEnd();
#pragma endregion
#pragma region from M8
	void krz_M8_N1_CreateEnd();
	void krz_M8_N2_CreateEnd();
	void krz_M8_N3_CreateEnd();
	void krz_M8_N4_CreateEnd();
	void krz_M8_N5_CreateEnd();
	void krz_M8_N6_CreateEnd();
	void krz_M8_N7_CreateEnd();
	void krz_M8_M5_CreateEnd();
#pragma endregion
#pragma region from CH1
	void krz_CH1_M1_CreateEnd();
	void krz_CH1_M3_CreateEnd();
	void krz_CH1_N_CreateEnd();
	void krz_CH1_ND_CreateEnd();
#pragma endregion
#pragma region from CH2
	void krz_CH2_M1_CreateEnd();
	void krz_CH2_M3_CreateEnd();
	void krz_CH2_N_CreateEnd();
	void krz_CH2_ND_CreateEnd();
#pragma endregion
#pragma region from CH3
	void krz_CH3_M1_CreateEnd();
	void krz_CH3_M3_CreateEnd();
	void krz_CH3_N_CreateEnd();
	void krz_CH3_ND_CreateEnd();
#pragma endregion
#pragma region from CH4
	void krz_CH4_M1_CreateEnd();
	void krz_CH4_M3_CreateEnd();
	void krz_CH4_N_CreateEnd();
	void krz_CH4_ND_CreateEnd();
#pragma endregion
#pragma region from CH5
	void krz_CH5_M1_CreateEnd();
	void krz_CH5_M3_CreateEnd();
	void krz_CH5_N_CreateEnd();
	void krz_CH5_ND_CreateEnd();
#pragma endregion
#pragma region from CH6
	void krz_CH6_M1_CreateEnd();
	void krz_CH6_M3_CreateEnd();
	void krz_CH6_N_CreateEnd();
	void krz_CH6_ND_CreateEnd();
#pragma endregion
#pragma region from CH7
	void krz_CH7_M1_CreateEnd();
	void krz_CH7_M3_CreateEnd();
	void krz_CH7_N_CreateEnd();
	void krz_CH7_ND_CreateEnd();
#pragma endregion
#pragma region from N1
	void krz_N1_M2_CreateEnd();
	void krz_N1_M4_CreateEnd();
	void krz_N1_M6_CreateEnd();
	void krz_N1_M8_CreateEnd();
	void krz_N1_M10_CreateEnd();
	void krz_N1_M12_CreateEnd();
	void krz_N1_M14_CreateEnd();
	void krz_N1_M16_CreateEnd();
	void krz_N1_M18_CreateEnd();
	void krz_N1_M20_CreateEnd();
	void krz_N1_CH_CreateEnd();
	void krz_N1_CHD_CreateEnd();
	void krz_N1_CHR_CreateEnd();
#pragma endregion
#pragma region from N2
	void krz_N2_M2_CreateEnd();
	void krz_N2_M4_CreateEnd();
	void krz_N2_M6_CreateEnd();
	void krz_N2_M8_CreateEnd();
	void krz_N2_M10_CreateEnd();
	void krz_N2_M12_CreateEnd();
	void krz_N2_M14_CreateEnd();
	void krz_N2_M16_CreateEnd();
	void krz_N2_M18_CreateEnd();
	void krz_N2_M20_CreateEnd();
	void krz_N2_CH_CreateEnd();
	void krz_N2_CHD_CreateEnd();
	void krz_N2_CHR_CreateEnd();
#pragma endregion
#pragma region from N3
	void krz_N3_M2_CreateEnd();
	void krz_N3_M4_CreateEnd();
	void krz_N3_M6_CreateEnd();
	void krz_N3_M8_CreateEnd();
	void krz_N3_M10_CreateEnd();
	void krz_N3_M12_CreateEnd();
	void krz_N3_M14_CreateEnd();
	void krz_N3_CH_CreateEnd();
	void krz_N3_CHD_CreateEnd();
	void krz_N3_CHR_CreateEnd();
#pragma endregion
#pragma region from N4
	void krz_N4_M2_CreateEnd();
	void krz_N4_M4_CreateEnd();
	void krz_N4_M6_CreateEnd();
	void krz_N4_M8_CreateEnd();
	void krz_N4_M10_CreateEnd();
	void krz_N4_M12_CreateEnd();
	void krz_N4_M14_CreateEnd();
	void krz_N4_CH_CreateEnd();
	void krz_N4_CHD_CreateEnd();
	void krz_N4_CHR_CreateEnd();
#pragma endregion
#pragma region from N5
	void krz_N5_M2_CreateEnd();
	void krz_N5_M4_CreateEnd();
	void krz_N5_M6_CreateEnd();
	void krz_N5_M8_CreateEnd();
	void krz_N5_M10_CreateEnd();
	void krz_N5_M12_CreateEnd();
	void krz_N5_M14_CreateEnd();
	void krz_N5_CH_CreateEnd();
	void krz_N5_CHD_CreateEnd();
	void krz_N5_CHR_CreateEnd();
#pragma endregion
#pragma region from N6
	void krz_N6_M2_CreateEnd();
	void krz_N6_M4_CreateEnd();
	void krz_N6_M6_CreateEnd();
	void krz_N6_M8_CreateEnd();
	void krz_N6_M10_CreateEnd();
	void krz_N6_M12_CreateEnd();
	void krz_N6_M14_CreateEnd();
	void krz_N6_CH_CreateEnd();
	void krz_N6_CHD_CreateEnd();
	void krz_N6_CHR_CreateEnd();
#pragma endregion
#pragma region from N7
	void krz_N7_M2_CreateEnd();
	void krz_N7_M4_CreateEnd();
	void krz_N7_M6_CreateEnd();
	void krz_N7_M8_CreateEnd();
	void krz_N7_M10_CreateEnd();
	void krz_N7_M12_CreateEnd();
	void krz_N7_M14_CreateEnd();
	void krz_N7_CH_CreateEnd();
	void krz_N7_CHD_CreateEnd();
	void krz_N7_CHR_CreateEnd();
#pragma endregion

#pragma endregion
#pragma region FOO

	void krz_InitIArraysStart();
	void krz_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void krz_InitRouters();
#pragma region Strelki





#pragma region fstr

	FElm* krz_GetStrelka(int str);

	void krz_ToMinus(int str1);
	void krz_ToMinus(int str1, int str2);
	void krz_ToMinus(int str1, int str2, int str3);
	void krz_ToMinus(int str1, int str2, int str3, int str4);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void krz_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void krz_ToPlus(int str1);
	void krz_ToPlus(int str1, int str2);
	void krz_ToPlus(int str1, int str2, int str3);
	void krz_ToPlus(int str1, int str2, int str3, int str4);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void krz_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

#pragma endregion

	void krz_ToMinus(FElm* str);
	void krz_ToPlus(FElm* str);

	void krz_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	void krz_ToMinusInThread(FElm* str);
	void krz_ToPlusInThread(FElm* str);


	bool krz_IsStrelkaFree(FElm* elm);






#pragma endregion

#pragma endregion

#pragma region Pult

	UFUNCTION(BlueprintCallable)
		int GetSizeArrCommandToPult();
	UFUNCTION(BlueprintCallable)
		int GetSizeArrCommandDopToPult();

	UFUNCTION(BlueprintCallable)
		void krz_Pult_Init_Data();
	void krz_SetDataForUpdate();
	void krz_Pult_SetAllSvetoforOperNorm();
	void krz_Pult_CheckerChanger();
	void krz_pult_CheckerSetterDirectRouter();
	void DopCheckerForPult();
	void krz_Pult_LoaderTo();
	void krz_Pult_SenderTo_LoaderTo(Pelm elm);
	void krz_Pult_SenderTo_LoaderTo(Pbool boo);
	UFUNCTION(BlueprintCallable)
		void krz_Pult_FirstInitArrPelm();
	void krz_Pult_CheckerInThread();
	/*void krz_Pult_Reload_InThread();*/
#pragma endregion

#pragma endregion
#pragma region Karaganda
#pragma region vars
	std::vector<FElm*>kg_arrSign;
	std::vector<FElm*>kg_arrWay;
	std::vector<FElm*>kg_arrStr;
	std::vector<FElm*>kg_arrSvetofor;
	std::vector<Router*>kg_arrRouter;
#pragma endregion
#pragma region FOO
	void kg_InitArraysStart();
	void kg_DefaultSetting();
	void kg_InitRouters();
#pragma region Strelki

	void kg_ToMinus(FElm* str);
	void kg_ToPlus(FElm* str);

	void kg_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* kg_GetStrelka(int str);

	bool kg_IsMinus();
	bool kg_IsMinus(int str1);
	bool kg_IsMinus(int str1, int str2);
	bool kg_IsMinus(int str1, int str2, int str3);
	bool kg_IsMinus(int str1, int str2, int str3, int str4);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool kg_IsPlus();
	bool kg_IsPlus(int str1);
	bool kg_IsPlus(int str1, int str2);
	bool kg_IsPlus(int str1, int str2, int str3);
	bool kg_IsPlus(int str1, int str2, int str3, int str4);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void kg_ToMinus();
	void kg_ToMinus(int str1);
	void kg_ToMinus(int str1, int str2);
	void kg_ToMinus(int str1, int str2, int str3);
	void kg_ToMinus(int str1, int str2, int str3, int str4);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void kg_ToPlus();
	void kg_ToPlus(int str1);
	void kg_ToPlus(int str1, int str2);
	void kg_ToPlus(int str1, int str2, int str3);
	void kg_ToPlus(int str1, int str2, int str3, int str4);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void kg_ToMinusInThread(FElm* str);
	void kg_ToPlusInThread(FElm* str);

	bool kg_IsStrelkaFree(FElm* elm);

#pragma endregion

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router kg_N_1P;
	Router kg_N_2P;
	Router kg_N_3P;
	Router kg_N_4P;

#pragma endregion
#pragma region from ND
	Router kg_ND_1P;
	Router kg_ND_2P;
	Router kg_ND_3P;
	Router kg_ND_4P;
#pragma endregion
#pragma region from CH
	Router kg_CH_1P;
	Router kg_CH_2P;
	Router kg_CH_3P;
	Router kg_CH_4P;
#pragma endregion
#pragma region from CHD
	Router kg_CHD_1P;
	Router kg_CHD_2P;
	Router kg_CHD_3P;
	Router kg_CHD_4P;
#pragma endregion
#pragma region from M1
	Router kg_M1_CH1;
	Router kg_M1_CH2;
	Router kg_M1_CH3;
	Router kg_M1_CH4;
#pragma endregion
#pragma region from M2
	Router kg_M2_N1;
	Router kg_M2_N2;
	Router kg_M2_N3;
	Router kg_M2_N4;
#pragma endregion
#pragma region from M3
	Router kg_M3_CH1;
	Router kg_M3_CH2;
	Router kg_M3_CH3;
	Router kg_M3_CH4;
#pragma endregion
#pragma region from M4
	Router kg_M4_N1;
	Router kg_M4_N2;
	Router kg_M4_N3;
	Router kg_M4_N4;
#pragma endregion
#pragma region from M6
	Router kg_M6_N1;

#pragma endregion
#pragma region from M5
	Router kg_M5_CH1;

#pragma endregion
#pragma region from M7
	Router kg_M7_CH1;

#pragma endregion
#pragma region from M8
	Router kg_M8_N1;

#pragma endregion

#pragma region from CH1
	Router kg_CH1_M1;
	Router kg_CH1_M5;
	Router kg_CH1_M7;
	Router kg_CH1_M3;
	Router kg_CH1_N;
	Router kg_CH1_ND;
#pragma endregion
#pragma region from CH2
	Router kg_CH2_M1;
	Router kg_CH2_M3;
	Router kg_CH2_N;
	Router kg_CH2_ND;
#pragma endregion
#pragma region from CH3
	Router kg_CH3_M1;
	Router kg_CH3_M3;
	Router kg_CH3_N;
	Router kg_CH3_ND;
#pragma endregion
#pragma region from CH4
	Router kg_CH4_M1;
	Router kg_CH4_M3;
	Router kg_CH4_N;
	Router kg_CH4_ND;
#pragma endregion
#pragma region from N1
	Router kg_N1_M2;
	Router kg_N1_M6;
	Router kg_N1_M8;
	Router kg_N1_M4;

	Router kg_N1_CH;
	Router kg_N1_CHD;

#pragma endregion
#pragma region from N2
	Router kg_N2_M2;
	Router kg_N2_M4;
	Router kg_N2_M6;
	Router kg_N2_CH;
	Router kg_N2_CHD;
#pragma endregion
#pragma region from N3
	Router kg_N3_M2;
	Router kg_N3_M4;
	Router kg_N3_CH;
	Router kg_N3_CHD;
#pragma endregion
#pragma region from N4
	Router kg_N4_M2;
	Router kg_N4_M4;
	Router kg_N4_CH;
	Router kg_N4_CHD;
#pragma endregion
#pragma region OUT_Routers
	Router kg_1UPN_Karaganozek;
	Router kg_1NP_Karaganozek;

	Router kg_1CHP_Maykuduk;
	Router kg_1UPCH_Maykuduk;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void kg_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N_4P_Create();


#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		void kg_ND_1P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_ND_2P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_ND_3P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_ND_4P_Create();


#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void kg_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH_4P_Create();


#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		void kg_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CHD_4P_Create();


#pragma endregion

#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void kg_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M1_CH4_Create();


#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void kg_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M2_N4_Create();


#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void kg_M3_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M3_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M3_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M3_CH4_Create();


#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void kg_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_M4_N4_Create();


#pragma endregion

#pragma region from M6
	UFUNCTION(BlueprintCallable)
		void kg_M6_N1_Create();

#pragma endregion
#pragma region dop

	void kg_M8_N1_Create();
	void kg_M5_CH1_Create();
	void kg_M7_CH1_Create();

	void kg_N1_M8_Create();
	void kg_CH1_M5_Create();
	void kg_CH1_M7_Create();

	void kg_M8_N1_CreateEnd();
	void kg_M5_CH1_CreateEnd();
	void kg_M7_CH1_CreateEnd();

	void kg_N1_M8_CreateEnd();
	void kg_CH1_M5_CreateEnd();
	void kg_CH1_M7_CreateEnd();

#pragma endregion


#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void kg_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH1_M3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH1_N_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH1_ND_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void kg_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH2_N_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH2_ND_Create();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void kg_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH3_M3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH3_N_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH3_ND_Create();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		void kg_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH4_N_Create();
	UFUNCTION(BlueprintCallable)
		void kg_CH4_ND_Create();
#pragma endregion


#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void kg_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N1_M6_Create();

	UFUNCTION(BlueprintCallable)
		void kg_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N1_CHD_Create();

#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void kg_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N2_M4_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N2_M6_Create();

	UFUNCTION(BlueprintCallable)
		void kg_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N2_CHD_Create();

#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void kg_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N3_M4_Create();

	UFUNCTION(BlueprintCallable)
		void kg_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N3_CHD_Create();

#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		void kg_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N4_M4_Create();

	UFUNCTION(BlueprintCallable)
		void kg_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void kg_N4_CHD_Create();

#pragma endregion


#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void kg_N_1P_CreateEnd();
	void kg_N_2P_CreateEnd();
	void kg_N_3P_CreateEnd();
	void kg_N_4P_CreateEnd();



#pragma endregion
#pragma region from ND
	void kg_ND_1P_CreateEnd();
	void kg_ND_2P_CreateEnd();
	void kg_ND_3P_CreateEnd();
	void kg_ND_4P_CreateEnd();



#pragma endregion
#pragma region from CH
	void kg_CH_1P_CreateEnd();
	void kg_CH_2P_CreateEnd();
	void kg_CH_3P_CreateEnd();
	void kg_CH_4P_CreateEnd();


#pragma endregion
#pragma region from CHD
	void kg_CHD_1P_CreateEnd();
	void kg_CHD_2P_CreateEnd();
	void kg_CHD_3P_CreateEnd();
	void kg_CHD_4P_CreateEnd();


#pragma endregion

#pragma region from M1
	void kg_M1_CH1_CreateEnd();
	void kg_M1_CH2_CreateEnd();
	void kg_M1_CH3_CreateEnd();
	void kg_M1_CH4_CreateEnd();


#pragma endregion
#pragma region from M2
	void kg_M2_N1_CreateEnd();
	void kg_M2_N2_CreateEnd();
	void kg_M2_N3_CreateEnd();
	void kg_M2_N4_CreateEnd();


#pragma endregion
#pragma region from M3
	void kg_M3_CH1_CreateEnd();
	void kg_M3_CH2_CreateEnd();
	void kg_M3_CH3_CreateEnd();
	void kg_M3_CH4_CreateEnd();


#pragma endregion
#pragma region from M4
	void kg_M4_N1_CreateEnd();
	void kg_M4_N2_CreateEnd();
	void kg_M4_N3_CreateEnd();
	void kg_M4_N4_CreateEnd();



#pragma endregion

#pragma region from M6
	void kg_M6_N1_CreateEnd();



#pragma endregion

#pragma region from CH1
	void kg_CH1_M1_CreateEnd();
	void kg_CH1_M3_CreateEnd();
	void kg_CH1_N_CreateEnd();
	void kg_CH1_ND_CreateEnd();
#pragma endregion
#pragma region from CH2
	void kg_CH2_M1_CreateEnd();
	void kg_CH2_M3_CreateEnd();
	void kg_CH2_N_CreateEnd();
	void kg_CH2_ND_CreateEnd();
#pragma endregion
#pragma region from CH3
	void kg_CH3_M1_CreateEnd();
	void kg_CH3_M3_CreateEnd();
	void kg_CH3_N_CreateEnd();
	void kg_CH3_ND_CreateEnd();
#pragma endregion
#pragma region from CH4
	void kg_CH4_M1_CreateEnd();
	void kg_CH4_M3_CreateEnd();
	void kg_CH4_N_CreateEnd();
	void kg_CH4_ND_CreateEnd();
#pragma endregion


#pragma region from N1
	void kg_N1_M2_CreateEnd();
	void kg_N1_M4_CreateEnd();
	void kg_N1_M6_CreateEnd();

	void kg_N1_CH_CreateEnd();
	void kg_N1_CHD_CreateEnd();

#pragma endregion
#pragma region from N2
	void kg_N2_M2_CreateEnd();
	void kg_N2_M4_CreateEnd();
	void kg_N2_M6_CreateEnd();

	void kg_N2_CH_CreateEnd();
	void kg_N2_CHD_CreateEnd();

#pragma endregion
#pragma region from N3
	void kg_N3_M2_CreateEnd();
	void kg_N3_M4_CreateEnd();

	void kg_N3_CH_CreateEnd();
	void kg_N3_CHD_CreateEnd();

#pragma endregion
#pragma region from N4
	void kg_N4_M2_CreateEnd();
	void kg_N4_M4_CreateEnd();

	void kg_N4_CH_CreateEnd();
	void kg_N4_CHD_CreateEnd();

#pragma endregion



#pragma endregion
#pragma endregion
#pragma region Maykuduk


#pragma region vars
	std::vector<FElm*>mkd_arrSign;
	std::vector<FElm*>mkd_arrWay;
	std::vector<FElm*>mkd_arrStr;
	std::vector<FElm*>mkd_arrSvetofor;
	std::vector<Router*>mkd_arrRouter;

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router mkd_N_1P;
	Router mkd_N_2P;
	Router mkd_N_3P;
	Router mkd_N_4P;
	Router mkd_N_5P;
	Router mkd_N_6P;

#pragma endregion
#pragma region from ND
	Router mkd_ND_1P;
	Router mkd_ND_2P;
	Router mkd_ND_3P;
	Router mkd_ND_4P;
	Router mkd_ND_5P;
	Router mkd_ND_6P;

#pragma endregion
#pragma region from CH
	Router mkd_CH_1P;
	Router mkd_CH_2P;
	Router mkd_CH_3P;
	Router mkd_CH_4P;
	Router mkd_CH_5P;
	Router mkd_CH_6P;

#pragma endregion
#pragma region from CHD
	Router mkd_CHD_1P;
	Router mkd_CHD_2P;
	Router mkd_CHD_3P;
	Router mkd_CHD_4P;
	Router mkd_CHD_5P;
	Router mkd_CHD_6P;

#pragma endregion
#pragma region from M1
	Router mkd_M1_CH1;
	Router mkd_M1_CH2;
	Router mkd_M1_CH3;
	Router mkd_M1_CH4;
	Router mkd_M1_CH5;
	Router mkd_M1_CH6;

#pragma endregion
#pragma region from M2
	Router mkd_M2_N1;
	Router mkd_M2_N2;
	Router mkd_M2_N3;
	Router mkd_M2_N4;
	Router mkd_M2_N5;
	Router mkd_M2_N6;

#pragma endregion
#pragma region from M3
	Router mkd_M3_CH1;
	Router mkd_M3_CH2;
	Router mkd_M3_CH3;
	Router mkd_M3_CH4;
	Router mkd_M3_CH5;
	Router mkd_M3_CH6;

#pragma endregion
#pragma region from M4
	Router mkd_M4_N1;
	Router mkd_M4_N2;
	Router mkd_M4_N3;
	Router mkd_M4_N4;
	Router mkd_M4_N5;
	Router mkd_M4_N6;

#pragma endregion
#pragma region from M5
	Router mkd_M5_CH5;
	Router mkd_M5_CH6;
#pragma endregion
#pragma region from M6
	Router mkd_M6_N1;
	Router mkd_M6_N2;
#pragma endregion

#pragma region to N
	Router mkd_CH1_N;
	Router mkd_CH2_N;
	Router mkd_CH3_N;
	Router mkd_CH4_N;
	Router mkd_CH5_N;
	Router mkd_CH6_N;
#pragma endregion
#pragma region to  M1
	Router mkd_CH1_M1;
	Router mkd_CH2_M1;
	Router mkd_CH3_M1;
	Router mkd_CH4_M1;
	Router mkd_CH5_M1;
	Router mkd_CH6_M1;
#pragma endregion
#pragma region to ND
	Router mkd_CH1_ND;
	Router mkd_CH2_ND;
	Router mkd_CH3_ND;
	Router mkd_CH4_ND;
	Router mkd_CH5_ND;
	Router mkd_CH6_ND;
#pragma endregion
#pragma region to  M3
	Router mkd_CH1_M3;
	Router mkd_CH2_M3;
	Router mkd_CH3_M3;
	Router mkd_CH4_M3;
	Router mkd_CH5_M3;
	Router mkd_CH6_M3;
#pragma endregion
#pragma region to CH
	Router mkd_N1_CH;
	Router mkd_N2_CH;
	Router mkd_N3_CH;
	Router mkd_N4_CH;
	Router mkd_N5_CH;
	Router mkd_N6_CH;
#pragma endregion
#pragma region to  M2
	Router mkd_N1_M2;
	Router mkd_N2_M2;
	Router mkd_N3_M2;
	Router mkd_N4_M2;
	Router mkd_N5_M2;
	Router mkd_N6_M2;
#pragma endregion
#pragma region to CHD
	Router mkd_N1_CHD;
	Router mkd_N2_CHD;
	Router mkd_N3_CHD;
	Router mkd_N4_CHD;
	Router mkd_N5_CHD;
	Router mkd_N6_CHD;
#pragma endregion
#pragma region to  M4
	Router mkd_N1_M4;
	Router mkd_N2_M4;
	Router mkd_N3_M4;
	Router mkd_N4_M4;
	Router mkd_N5_M4;
	Router mkd_N6_M4;
#pragma endregion
#pragma region to  M5

	Router mkd_CH5_M5;
	Router mkd_CH6_M5;
#pragma endregion
#pragma region to  M6

	Router mkd_N1_M6;
	Router mkd_N2_M6;
#pragma endregion

#pragma region dop
	Router mkd_CH1_M7;
	Router mkd_M7_CH1;
	Router mkd_N6_M8;
	Router mkd_M8_N6;


#pragma endregion


#pragma region OUT_Routers
	Router mkd_1NP_Karaganda;
	Router mkd_1UPN_Karaganda;
	Router mkd_1CHP_GanaKaraganda;
	Router mkd_1UPCH_GanaKaraganda;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void mkd_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N_4P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N_5P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N_6P_Create();

#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		void mkd_ND_1P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_ND_2P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_ND_3P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_ND_4P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_ND_5P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_ND_6P_Create();

#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void mkd_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH_4P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH_5P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH_6P_Create();

#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_4P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_5P_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CHD_6P_Create();

#pragma endregion

#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M1_CH6_Create();

#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M2_N6_Create();

#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M3_CH6_Create();

#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M4_N6_Create();

#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		void mkd_M5_CH5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M5_CH6_Create();

#pragma endregion
#pragma region from M6
	UFUNCTION(BlueprintCallable)
		void mkd_M6_N1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_M6_N2_Create();

#pragma endregion

#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void mkd_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH1_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH1_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH1_ND_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void mkd_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH2_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH2_ND_Create();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void mkd_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH3_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH3_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH3_ND_Create();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		void mkd_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH4_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH4_ND_Create();
#pragma endregion
#pragma region from CH5
	UFUNCTION(BlueprintCallable)
		void mkd_CH5_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH5_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH5_M5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH5_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH5_ND_Create();
#pragma endregion
#pragma region from CH6
	UFUNCTION(BlueprintCallable)
		void mkd_CH6_M1_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH6_M3_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH6_M5_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH6_N_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_CH6_ND_Create();
#pragma endregion

#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void mkd_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N1_M6_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N1_CHD_Create();

#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void mkd_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N2_M4_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N2_M6_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N2_CHD_Create();

#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void mkd_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N3_M4_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N3_CHD_Create();

#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		void mkd_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N4_M4_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N4_CHD_Create();

#pragma endregion
#pragma region from N5
	UFUNCTION(BlueprintCallable)
		void mkd_N5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N5_M4_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N5_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N5_CHD_Create();

#pragma endregion
#pragma region from N6
	UFUNCTION(BlueprintCallable)
		void mkd_N6_M2_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N6_M4_Create();

	UFUNCTION(BlueprintCallable)
		void mkd_N6_CH_Create();
	UFUNCTION(BlueprintCallable)
		void mkd_N6_CHD_Create();

#pragma endregion


#pragma region dop

	void mkd_CH1_M7_Create();
	void mkd_M7_CH1_Create();
	void mkd_N6_M8_Create();
	void  mkd_M8_N6_Create();

	void mkd_CH1_M7_CreateEnd();
	void mkd_M7_CH1_CreateEnd();
	void mkd_N6_M8_CreateEnd();
	void  mkd_M8_N6_CreateEnd();

#pragma endregion


#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void mkd_N_1P_CreateEnd();
	void mkd_N_2P_CreateEnd();
	void mkd_N_3P_CreateEnd();
	void mkd_N_4P_CreateEnd();
	void mkd_N_5P_CreateEnd();
	void mkd_N_6P_CreateEnd();


#pragma endregion
#pragma region from ND
	void mkd_ND_1P_CreateEnd();
	void mkd_ND_2P_CreateEnd();
	void mkd_ND_3P_CreateEnd();
	void mkd_ND_4P_CreateEnd();
	void mkd_ND_5P_CreateEnd();
	void mkd_ND_6P_CreateEnd();


#pragma endregion
#pragma region from CH
	void mkd_CH_1P_CreateEnd();
	void mkd_CH_2P_CreateEnd();
	void mkd_CH_3P_CreateEnd();
	void mkd_CH_4P_CreateEnd();
	void mkd_CH_5P_CreateEnd();
	void mkd_CH_6P_CreateEnd();

#pragma endregion
#pragma region from CHD
	void mkd_CHD_1P_CreateEnd();
	void mkd_CHD_2P_CreateEnd();
	void mkd_CHD_3P_CreateEnd();
	void mkd_CHD_4P_CreateEnd();
	void mkd_CHD_5P_CreateEnd();
	void mkd_CHD_6P_CreateEnd();

#pragma endregion

#pragma region from M1
	void mkd_M1_CH1_CreateEnd();
	void mkd_M1_CH2_CreateEnd();
	void mkd_M1_CH3_CreateEnd();
	void mkd_M1_CH4_CreateEnd();
	void mkd_M1_CH5_CreateEnd();
	void mkd_M1_CH6_CreateEnd();

#pragma endregion
#pragma region from M2
	void mkd_M2_N1_CreateEnd();
	void mkd_M2_N2_CreateEnd();
	void mkd_M2_N3_CreateEnd();
	void mkd_M2_N4_CreateEnd();
	void mkd_M2_N5_CreateEnd();
	void mkd_M2_N6_CreateEnd();

#pragma endregion
#pragma region from M3
	void mkd_M3_CH1_CreateEnd();
	void mkd_M3_CH2_CreateEnd();
	void mkd_M3_CH3_CreateEnd();
	void mkd_M3_CH4_CreateEnd();
	void mkd_M3_CH5_CreateEnd();
	void mkd_M3_CH6_CreateEnd();

#pragma endregion
#pragma region from M4
	void mkd_M4_N1_CreateEnd();
	void mkd_M4_N2_CreateEnd();
	void mkd_M4_N3_CreateEnd();
	void mkd_M4_N4_CreateEnd();
	void mkd_M4_N5_CreateEnd();
	void mkd_M4_N6_CreateEnd();


#pragma endregion
#pragma region from M5
	void mkd_M5_CH5_CreateEnd();
	void mkd_M5_CH6_CreateEnd();

#pragma endregion
#pragma region from M6
	void mkd_M6_N1_CreateEnd();
	void mkd_M6_N2_CreateEnd();


#pragma endregion

#pragma region from CH1
	void mkd_CH1_M1_CreateEnd();
	void mkd_CH1_M3_CreateEnd();
	void mkd_CH1_N_CreateEnd();
	void mkd_CH1_ND_CreateEnd();
#pragma endregion
#pragma region from CH2
	void mkd_CH2_M1_CreateEnd();
	void mkd_CH2_M3_CreateEnd();
	void mkd_CH2_N_CreateEnd();
	void mkd_CH2_ND_CreateEnd();
#pragma endregion
#pragma region from CH3
	void mkd_CH3_M1_CreateEnd();
	void mkd_CH3_M3_CreateEnd();
	void mkd_CH3_N_CreateEnd();
	void mkd_CH3_ND_CreateEnd();
#pragma endregion
#pragma region from CH4
	void mkd_CH4_M1_CreateEnd();
	void mkd_CH4_M3_CreateEnd();
	void mkd_CH4_N_CreateEnd();
	void mkd_CH4_ND_CreateEnd();
#pragma endregion
#pragma region from CH5
	void mkd_CH5_M1_CreateEnd();
	void mkd_CH5_M3_CreateEnd();
	void mkd_CH5_M5_CreateEnd();
	void mkd_CH5_N_CreateEnd();
	void mkd_CH5_ND_CreateEnd();
#pragma endregion
#pragma region from CH6
	void mkd_CH6_M1_CreateEnd();
	void mkd_CH6_M3_CreateEnd();
	void mkd_CH6_M5_CreateEnd();
	void mkd_CH6_N_CreateEnd();
	void mkd_CH6_ND_CreateEnd();
#pragma endregion

#pragma region from N1
	void mkd_N1_M2_CreateEnd();
	void mkd_N1_M4_CreateEnd();
	void mkd_N1_M6_CreateEnd();

	void mkd_N1_CH_CreateEnd();
	void mkd_N1_CHD_CreateEnd();

#pragma endregion
#pragma region from N2
	void mkd_N2_M2_CreateEnd();
	void mkd_N2_M4_CreateEnd();
	void mkd_N2_M6_CreateEnd();

	void mkd_N2_CH_CreateEnd();
	void mkd_N2_CHD_CreateEnd();

#pragma endregion
#pragma region from N3
	void mkd_N3_M2_CreateEnd();
	void mkd_N3_M4_CreateEnd();

	void mkd_N3_CH_CreateEnd();
	void mkd_N3_CHD_CreateEnd();

#pragma endregion
#pragma region from N4
	void mkd_N4_M2_CreateEnd();
	void mkd_N4_M4_CreateEnd();

	void mkd_N4_CH_CreateEnd();
	void mkd_N4_CHD_CreateEnd();

#pragma endregion
#pragma region from N5
	void mkd_N5_M2_CreateEnd();
	void mkd_N5_M4_CreateEnd();

	void mkd_N5_CH_CreateEnd();
	void mkd_N5_CHD_CreateEnd();

#pragma endregion
#pragma region from N6
	void mkd_N6_M2_CreateEnd();
	void mkd_N6_M4_CreateEnd();

	void mkd_N6_CH_CreateEnd();
	void mkd_N6_CHD_CreateEnd();

#pragma endregion


#pragma endregion
#pragma region FOO

	void mkd_InitIArraysStart();
	void mkd_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void mkd_InitRouters();
#pragma region Strelki


	void mkd_ToMinus(FElm* str);
	void mkd_ToPlus(FElm* str);

	void mkd_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* mkd_GetStrelka(int str);

	bool mkd_IsMinus();
	bool mkd_IsMinus(int str1);
	bool mkd_IsMinus(int str1, int str2);
	bool mkd_IsMinus(int str1, int str2, int str3);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool mkd_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool mkd_IsPlus();
	bool mkd_IsPlus(int str1);
	bool mkd_IsPlus(int str1, int str2);
	bool mkd_IsPlus(int str1, int str2, int str3);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool mkd_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void mkd_ToMinus();
	void mkd_ToMinus(int str1);
	void mkd_ToMinus(int str1, int str2);
	void mkd_ToMinus(int str1, int str2, int str3);
	void mkd_ToMinus(int str1, int str2, int str3, int str4);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void mkd_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void mkd_ToPlus();
	void mkd_ToPlus(int str1);
	void mkd_ToPlus(int str1, int str2);
	void mkd_ToPlus(int str1, int str2, int str3);
	void mkd_ToPlus(int str1, int str2, int str3, int str4);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void mkd_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void mkd_mkd_ToMinusInThread(FElm* str);
	void mkd_mkd_ToPlusInThread(FElm* str);

	bool mkd_IsStrelkaFree(FElm* elm);


#pragma endregion

#pragma endregion


#pragma endregion
#pragma region GanaKaraganda

#pragma region vars
	std::vector<FElm*>gk_arrSign;
	std::vector<FElm*>gk_arrWay;
	std::vector<FElm*>gk_arrStr;
	std::vector<FElm*>gk_arrSvetofor;
	std::vector<Router*>gk_arrRouter;

#pragma endregion
#pragma region Routers: Def

#pragma region from N
	Router gk_N_1P;
	Router gk_N_2P;
	Router gk_N_3P;
	Router gk_N_4P;
	Router gk_N_5P;


#pragma endregion
#pragma region from ND
	Router gk_ND_1P;
	Router gk_ND_2P;
	Router gk_ND_3P;
	Router gk_ND_4P;
	Router gk_ND_5P;


#pragma endregion
#pragma region from CH
	Router gk_CH_1P;
	Router gk_CH_2P;
	Router gk_CH_3P;
	Router gk_CH_4P;
	Router gk_CH_5P;


#pragma endregion
#pragma region from CHD
	Router gk_CHD_1P;
	Router gk_CHD_2P;
	Router gk_CHD_3P;
	Router gk_CHD_4P;
	Router gk_CHD_5P;


#pragma endregion
#pragma region from M1
	Router gk_M1_CH1;
	Router gk_M1_CH2;
	Router gk_M1_CH3;
	Router gk_M1_CH4;
	Router gk_M1_CH5;


#pragma endregion
#pragma region from M2
	Router gk_M2_N1;
	Router gk_M2_N2;
	Router gk_M2_N3;
	Router gk_M2_N4;
	Router gk_M2_N5;


#pragma endregion
#pragma region from M3
	Router gk_M3_CH1;
	Router gk_M3_CH2;
	Router gk_M3_CH3;
	Router gk_M3_CH4;
	Router gk_M3_CH5;


#pragma endregion
#pragma region from M4
	Router gk_M4_N1;
	Router gk_M4_N2;
	Router gk_M4_N3;
	Router gk_M4_N4;
	Router gk_M4_N5;


#pragma endregion
#pragma region from M5
	Router gk_M5_CH5;
	Router gk_M5_CH6;
#pragma endregion
#pragma region from M6
	Router gk_M6_N5;

#pragma endregion

#pragma region to N
	Router gk_CH1_N;
	Router gk_CH2_N;
	Router gk_CH3_N;
	Router gk_CH4_N;
	Router gk_CH5_N;

#pragma endregion
#pragma region to  M1
	Router gk_CH1_M1;
	Router gk_CH2_M1;
	Router gk_CH3_M1;
	Router gk_CH4_M1;
	Router gk_CH5_M1;

#pragma endregion
#pragma region to ND
	Router gk_CH1_ND;
	Router gk_CH2_ND;
	Router gk_CH3_ND;
	Router gk_CH4_ND;
	Router gk_CH5_ND;

#pragma endregion
#pragma region to  M3
	Router gk_CH1_M3;
	Router gk_CH2_M3;
	Router gk_CH3_M3;
	Router gk_CH4_M3;
	Router gk_CH5_M3;

#pragma endregion
#pragma region to CH
	Router gk_N1_CH;
	Router gk_N2_CH;
	Router gk_N3_CH;
	Router gk_N4_CH;
	Router gk_N5_CH;

#pragma endregion
#pragma region to  M2
	Router gk_N1_M2;
	Router gk_N2_M2;
	Router gk_N3_M2;
	Router gk_N4_M2;
	Router gk_N5_M2;

#pragma endregion
#pragma region to CHD
	Router gk_N1_CHD;
	Router gk_N2_CHD;
	Router gk_N3_CHD;
	Router gk_N4_CHD;
	Router gk_N5_CHD;

#pragma endregion
#pragma region to  M4
	Router gk_N1_M4;
	Router gk_N2_M4;
	Router gk_N3_M4;
	Router gk_N4_M4;
	Router gk_N5_M4;

#pragma endregion
#pragma region to  M5

	Router gk_CH5_M5;
	Router gk_CH6_M5;
#pragma endregion
#pragma region to  M6

	Router gk_N5_M6;

#pragma endregion

#pragma region dop

	Router gk_M7_CH1;
	Router gk_CH1_M7;

	Router gk_M9_M2;
	Router gk_M2_M9;
	Router gk_M9_M4;
	Router gk_M4_M9;

#pragma endregion


#pragma region OUT_Routers
	Router gk_1NP_Maykuduk;
	Router gk_1UPN_Maykuduk;
	Router gk_1CHP_Karaganda_1;
	Router gk_1UPCH_Karaganda_1;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create
#pragma region from N
	UFUNCTION(BlueprintCallable)
		void gk_N_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N_5P_Create();


#pragma endregion
#pragma region from ND
	UFUNCTION(BlueprintCallable)
		void gk_ND_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_ND_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_ND_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_ND_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_ND_5P_Create();


#pragma endregion
#pragma region from CH
	UFUNCTION(BlueprintCallable)
		void gk_CH_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH_5P_Create();


#pragma endregion
#pragma region from CHD
	UFUNCTION(BlueprintCallable)
		void gk_CHD_1P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CHD_2P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CHD_3P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CHD_4P_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CHD_5P_Create();


#pragma endregion

#pragma region from M1
	UFUNCTION(BlueprintCallable)
		void gk_M1_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M1_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M1_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M1_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M1_CH5_Create();


#pragma endregion
#pragma region from M2
	UFUNCTION(BlueprintCallable)
		void gk_M2_N1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M2_N2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M2_N3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M2_N4_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M2_N5_Create();


#pragma endregion
#pragma region from M3
	UFUNCTION(BlueprintCallable)
		void gk_M3_CH1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M3_CH2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M3_CH3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M3_CH4_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M3_CH5_Create();


#pragma endregion
#pragma region from M4
	UFUNCTION(BlueprintCallable)
		void gk_M4_N1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M4_N2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M4_N3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M4_N4_Create();
	UFUNCTION(BlueprintCallable)
		void gk_M4_N5_Create();


#pragma endregion
#pragma region from M5
	UFUNCTION(BlueprintCallable)
		void gk_M5_CH5_Create();


#pragma endregion
#pragma region from M6
	UFUNCTION(BlueprintCallable)
		void gk_M6_N5_Create();


#pragma endregion

#pragma region from CH1
	UFUNCTION(BlueprintCallable)
		void gk_CH1_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH1_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH1_N_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH1_ND_Create();
#pragma endregion
#pragma region from CH2
	UFUNCTION(BlueprintCallable)
		void gk_CH2_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH2_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH2_N_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH2_ND_Create();
#pragma endregion
#pragma region from CH3
	UFUNCTION(BlueprintCallable)
		void gk_CH3_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH3_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH3_N_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH3_ND_Create();
#pragma endregion
#pragma region from CH4
	UFUNCTION(BlueprintCallable)
		void gk_CH4_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH4_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH4_N_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH4_ND_Create();
#pragma endregion
#pragma region from CH5
	UFUNCTION(BlueprintCallable)
		void gk_CH5_M1_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH5_M3_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH5_M5_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH5_N_Create();
	UFUNCTION(BlueprintCallable)
		void gk_CH5_ND_Create();
#pragma endregion


#pragma region from N1
	UFUNCTION(BlueprintCallable)
		void gk_N1_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N1_M4_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N5_M6_Create();

	UFUNCTION(BlueprintCallable)
		void gk_N1_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N1_CHD_Create();

#pragma endregion
#pragma region from N2
	UFUNCTION(BlueprintCallable)
		void gk_N2_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N2_M4_Create();


	UFUNCTION(BlueprintCallable)
		void gk_N2_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N2_CHD_Create();

#pragma endregion
#pragma region from N3
	UFUNCTION(BlueprintCallable)
		void gk_N3_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N3_M4_Create();

	UFUNCTION(BlueprintCallable)
		void gk_N3_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N3_CHD_Create();

#pragma endregion
#pragma region from N4
	UFUNCTION(BlueprintCallable)
		void gk_N4_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N4_M4_Create();

	UFUNCTION(BlueprintCallable)
		void gk_N4_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N4_CHD_Create();

#pragma endregion
#pragma region from N5
	UFUNCTION(BlueprintCallable)
		void gk_N5_M2_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N5_M4_Create();

	UFUNCTION(BlueprintCallable)
		void gk_N5_CH_Create();
	UFUNCTION(BlueprintCallable)
		void gk_N5_CHD_Create();

#pragma endregion

#pragma region dop

	void gk_M7_CH1_Create();
	void gk_CH1_M7_Create();

	void gk_M9_M2_Create();
	void gk_M2_M9_Create();
	void gk_M9_M4_Create();
	void gk_M4_M9_Create();

	void gk_M7_CH1_CreateEnd();
	void gk_CH1_M7_CreateEnd();

	void gk_M9_M2_CreateEnd();
	void gk_M2_M9_CreateEnd();
	void gk_M9_M4_CreateEnd();
	void gk_M4_M9_CreateEnd();

#pragma endregion


#pragma endregion
#pragma region Routers: Def: CreateEnd
#pragma region from N
	void gk_N_1P_CreateEnd();
	void gk_N_2P_CreateEnd();
	void gk_N_3P_CreateEnd();
	void gk_N_4P_CreateEnd();
	void gk_N_5P_CreateEnd();

#pragma endregion
#pragma region from ND
	void gk_ND_1P_CreateEnd();
	void gk_ND_2P_CreateEnd();
	void gk_ND_3P_CreateEnd();
	void gk_ND_4P_CreateEnd();
	void gk_ND_5P_CreateEnd();


#pragma endregion
#pragma region from CH
	void gk_CH_1P_CreateEnd();
	void gk_CH_2P_CreateEnd();
	void gk_CH_3P_CreateEnd();
	void gk_CH_4P_CreateEnd();
	void gk_CH_5P_CreateEnd();

#pragma endregion
#pragma region from CHD
	void gk_CHD_1P_CreateEnd();
	void gk_CHD_2P_CreateEnd();
	void gk_CHD_3P_CreateEnd();
	void gk_CHD_4P_CreateEnd();
	void gk_CHD_5P_CreateEnd();


#pragma endregion

#pragma region from M1
	void gk_M1_CH1_CreateEnd();
	void gk_M1_CH2_CreateEnd();
	void gk_M1_CH3_CreateEnd();
	void gk_M1_CH4_CreateEnd();
	void gk_M1_CH5_CreateEnd();


#pragma endregion
#pragma region from M2
	void gk_M2_N1_CreateEnd();
	void gk_M2_N2_CreateEnd();
	void gk_M2_N3_CreateEnd();
	void gk_M2_N4_CreateEnd();
	void gk_M2_N5_CreateEnd();


#pragma endregion
#pragma region from M3
	void gk_M3_CH1_CreateEnd();
	void gk_M3_CH2_CreateEnd();
	void gk_M3_CH3_CreateEnd();
	void gk_M3_CH4_CreateEnd();
	void gk_M3_CH5_CreateEnd();


#pragma endregion
#pragma region from M4
	void gk_M4_N1_CreateEnd();
	void gk_M4_N2_CreateEnd();
	void gk_M4_N3_CreateEnd();
	void gk_M4_N4_CreateEnd();
	void gk_M4_N5_CreateEnd();



#pragma endregion
#pragma region from M5
	void gk_M5_CH5_CreateEnd();


#pragma endregion
#pragma region from M6
	void gk_M6_N5_CreateEnd();



#pragma endregion

#pragma region from CH1
	void gk_CH1_M1_CreateEnd();
	void gk_CH1_M3_CreateEnd();
	void gk_CH1_N_CreateEnd();
	void gk_CH1_ND_CreateEnd();
#pragma endregion
#pragma region from CH2
	void gk_CH2_M1_CreateEnd();
	void gk_CH2_M3_CreateEnd();
	void gk_CH2_N_CreateEnd();
	void gk_CH2_ND_CreateEnd();
#pragma endregion
#pragma region from CH3
	void gk_CH3_M1_CreateEnd();
	void gk_CH3_M3_CreateEnd();
	void gk_CH3_N_CreateEnd();
	void gk_CH3_ND_CreateEnd();
#pragma endregion
#pragma region from CH4
	void gk_CH4_M1_CreateEnd();
	void gk_CH4_M3_CreateEnd();
	void gk_CH4_N_CreateEnd();
	void gk_CH4_ND_CreateEnd();
#pragma endregion
#pragma region from CH5
	void gk_CH5_M1_CreateEnd();
	void gk_CH5_M3_CreateEnd();
	void gk_CH5_M5_CreateEnd();
	void gk_CH5_N_CreateEnd();
	void gk_CH5_ND_CreateEnd();
#pragma endregion


#pragma region from N1
	void gk_N1_M2_CreateEnd();
	void gk_N1_M4_CreateEnd();
	void gk_N5_M6_CreateEnd();

	void gk_N1_CH_CreateEnd();
	void gk_N1_CHD_CreateEnd();

#pragma endregion
#pragma region from N2
	void gk_N2_M2_CreateEnd();
	void gk_N2_M4_CreateEnd();


	void gk_N2_CH_CreateEnd();
	void gk_N2_CHD_CreateEnd();

#pragma endregion
#pragma region from N3
	void gk_N3_M2_CreateEnd();
	void gk_N3_M4_CreateEnd();

	void gk_N3_CH_CreateEnd();
	void gk_N3_CHD_CreateEnd();

#pragma endregion
#pragma region from N4
	void gk_N4_M2_CreateEnd();
	void gk_N4_M4_CreateEnd();

	void gk_N4_CH_CreateEnd();
	void gk_N4_CHD_CreateEnd();

#pragma endregion
#pragma region from N5
	void gk_N5_M2_CreateEnd();
	void gk_N5_M4_CreateEnd();

	void gk_N5_CH_CreateEnd();
	void gk_N5_CHD_CreateEnd();

#pragma endregion



#pragma endregion
#pragma region FOO

	void gk_InitIArraysStart();
	void gk_DefaultSetting();
	UFUNCTION(BlueprintCallable)
		void gk_InitRouters();
#pragma region Strelki


	void gk_ToMinus(FElm* str);
	void gk_ToPlus(FElm* str);

	void gk_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	FElm* gk_GetStrelka(int str);

	bool gk_IsMinus();
	bool gk_IsMinus(int str1);
	bool gk_IsMinus(int str1, int str2);
	bool gk_IsMinus(int str1, int str2, int str3);
	bool gk_IsMinus(int str1, int str2, int str3, int str4);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool gk_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool gk_IsPlus();
	bool gk_IsPlus(int str1);
	bool gk_IsPlus(int str1, int str2);
	bool gk_IsPlus(int str1, int str2, int str3);
	bool gk_IsPlus(int str1, int str2, int str3, int str4);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool gk_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void gk_ToMinus();
	void gk_ToMinus(int str1);
	void gk_ToMinus(int str1, int str2);
	void gk_ToMinus(int str1, int str2, int str3);
	void gk_ToMinus(int str1, int str2, int str3, int str4);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void gk_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void gk_ToPlus();
	void gk_ToPlus(int str1);
	void gk_ToPlus(int str1, int str2);
	void gk_ToPlus(int str1, int str2, int str3);
	void gk_ToPlus(int str1, int str2, int str3, int str4);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void gk_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void gk_ToMinusInThread(FElm* str);
	void gk_ToPlusInThread(FElm* str);

	bool gk_IsStrelkaFree(FElm* elm);


#pragma endregion



#pragma endregion

#pragma endregion


#pragma region Karaganda_1
#pragma region vars
	std::vector<FElm*>kg1_arrSign;
	std::vector<FElm*>kg1_arrWay;
	std::vector<FElm*>kg1_arrStr;
	std::vector<FElm*>kg1_arrSvetofor;
	std::vector<Router*>kg1_arrRouter;
#pragma endregion
#pragma region FOO

#pragma region dopCheckCrossedStr

	bool dopCheckCrossing(int _s1);
	bool dopCheckCrossing(int _s1, int _s2);
	bool dopCheckCrossing(int _s1, int _s2, int _s3);

	bool kg1_IsCrossFree(int _ss);
	bool kg1_IsCrossingFree(FElm* _s1, FElm* _s2, FElm* _s3, FElm* _s4);

#pragma endregion


	void kg1_InitRoutersDop();
	void kg1_InitArraysStart();
	void kg1_DefaultSetting();
	void kg1_InitRouters();
#pragma region Strelki

	void kg1_ToMinus(FElm* str);
	void kg1_ToPlus(FElm* str);

	void kg1_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	void kg1_ToMinusInThread(FElm* str);
	void kg1_ToPlusInThread(FElm* str);


	bool kg1_IsStrelkaFree(FElm* elm);



#pragma region fstr

	FElm* kg1_GetStrelka(int number);

	void kg1_ToMinus(int str1);
	void kg1_ToMinus(int str1, int str2);
	void kg1_ToMinus(int str1, int str2, int str3);
	void kg1_ToMinus(int str1, int str2, int str3, int str4);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg1_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void kg1_ToPlus(int str1);
	void kg1_ToPlus(int str1, int str2);
	void kg1_ToPlus(int str1, int str2, int str3);
	void kg1_ToPlus(int str1, int str2, int str3, int str4);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg1_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool kg1_IsMinus();
	bool kg1_IsMinus(int str1);
	bool kg1_IsMinus(int str1, int str2);
	bool kg1_IsMinus(int str1, int str2, int str3);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg1_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool kg1_IsPlus();
	bool kg1_IsPlus(int str1);
	bool kg1_IsPlus(int str1, int str2);
	bool kg1_IsPlus(int str1, int str2, int str3);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg1_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

#pragma endregion

#pragma endregion

#pragma endregion
#pragma region Routers: Def

#pragma region dop

	Router kg1_CHM6_M23;
	Router kg1_CHM6_M25;
	Router kg1_CHM7_M23;
	Router kg1_CHM7_M25;

	Router kg1_NM7_M24;
	Router kg1_NM7_M26;

	Router kg1_M23_CHM6;
	Router kg1_M23_CHM7;
	Router kg1_M25_CHM6;
	Router kg1_M25_CHM7;

	Router kg1_M24_NM7;
	Router kg1_M26_NM7;

#pragma endregion

#pragma region dop2

	Router kg1_M33_NM1B;
	Router kg1_M33_NM2B;
	Router kg1_M33_NM3B;
	Router kg1_M33_NM4B;


	Router kg1_M35_NM1B;
	Router kg1_M35_NM2B;
	Router kg1_M35_NM3B;
	Router kg1_M35_NM4B;

	Router kg1_NM1B_CHM2A;
	Router kg1_NM1B_CHM3A;
	Router kg1_NM1B_CHM4A;
	Router kg1_NM1B_CHM5A;

	Router kg1_NM2B_CHM2A;
	Router kg1_NM2B_CHM3A;
	Router kg1_NM2B_CHM4A;
	Router kg1_NM2B_CHM5A;

	Router kg1_NM3B_CHM2A;
	Router kg1_NM3B_CHM3A;
	Router kg1_NM3B_CHM4A;
	Router kg1_NM3B_CHM5A;

	Router kg1_NM4B_CHM2A;
	Router kg1_NM4B_CHM3A;
	Router kg1_NM4B_CHM4A;
	Router kg1_NM4B_CHM5A;


#pragma endregion

#pragma region from N
	Router kg1_N_1P;
	Router kg1_N_2P;
	Router kg1_N_3P;
	Router kg1_N_4P;
	Router kg1_N_5P;
	Router kg1_N_6P;
	Router kg1_N_7P;
	Router kg1_N_1BP;
	Router kg1_N_2BP;
	Router kg1_N_3BP;
	Router kg1_N_4BP;
#pragma endregion
#pragma region from ND
	Router kg1_ND_1P;
	Router kg1_ND_2P;
	Router kg1_ND_3P;
	Router kg1_ND_4P;
	Router kg1_ND_5P;
	Router kg1_ND_6P;
	Router kg1_ND_7P;
	Router kg1_ND_1BP;
	Router kg1_ND_2BP;
	Router kg1_ND_3BP;
	Router kg1_ND_4BP;
#pragma endregion

#pragma region from M1
	Router kg1_M1_CHM1;
	Router kg1_M1_CHM2;
	Router kg1_M1_CHM3;
	Router kg1_M1_CHM4;
	Router kg1_M1_CHM5;
	Router kg1_M1_CHM6;
	Router kg1_M1_CHM7;
	Router kg1_M1_M14;
	Router kg1_M1_M16;
	Router kg1_M1_M18;
	Router kg1_M1_M20;
#pragma endregion
#pragma region from M3
	Router kg1_M3_CHM1;
	Router kg1_M3_CHM2;
	Router kg1_M3_CHM3;
	Router kg1_M3_CHM4;
	Router kg1_M3_CHM5;
	Router kg1_M3_CHM6;
	Router kg1_M3_CHM7;
	Router kg1_M3_M14;
	Router kg1_M3_M16;
	Router kg1_M3_M18;
	Router kg1_M3_M20;
#pragma endregion

#pragma region to N
	Router kg1_M14_N;
	Router kg1_M16_N;
	Router kg1_M18_N;
	Router kg1_M20_N;
	Router kg1_CHM1_N;
	Router kg1_CHM2_N;
	Router kg1_CHM3_N;
	Router kg1_CHM4_N;
	Router kg1_CHM5_N;
	Router kg1_CHM6_N;
	Router kg1_CHM7_N;
#pragma endregion
#pragma region to M1
	Router kg1_M14_M1;
	Router kg1_M16_M1;
	Router kg1_M18_M1;
	Router kg1_M20_M1;
	Router kg1_CHM1_M1;
	Router kg1_CHM2_M1;
	Router kg1_CHM3_M1;
	Router kg1_CHM4_M1;
	Router kg1_CHM5_M1;
	Router kg1_CHM6_M1;
	Router kg1_CHM7_M1;
#pragma endregion

#pragma region to ND
	Router kg1_M14_ND;
	Router kg1_M16_ND;
	Router kg1_M18_ND;
	Router kg1_M20_ND;
	Router kg1_CHM1_ND;
	Router kg1_CHM2_ND;
	Router kg1_CHM3_ND;
	Router kg1_CHM4_ND;
	Router kg1_CHM5_ND;
	Router kg1_CHM6_ND;
	Router kg1_CHM7_ND;
#pragma endregion
#pragma region to M3
	Router kg1_M14_M3;
	Router kg1_M16_M3;
	Router kg1_M18_M3;
	Router kg1_M20_M3;
	Router kg1_CHM1_M3;
	Router kg1_CHM2_M3;
	Router kg1_CHM3_M3;
	Router kg1_CHM4_M3;
	Router kg1_CHM5_M3;
	Router kg1_CHM6_M3;
	Router kg1_CHM7_M3;
#pragma endregion

#pragma region to M6
	Router kg1_NM1_M6;
	Router kg1_NM2_M6;
	Router kg1_NM3_M6;
	Router kg1_NM4_M6;
	Router kg1_NM5_M6;
	Router kg1_NM6_M6;
	Router kg1_NM7_M6;
	Router kg1_NM1B_M6;
	Router kg1_NM2B_M6;
	Router kg1_NM3B_M6;
	Router kg1_NM4B_M6;
	Router kg1_M27_M6;
#pragma endregion
#pragma region to CHM2A


	Router kg1_NM1_CHM2A;
	Router kg1_NM2_CHM2A;
	Router kg1_NM3_CHM2A;
	Router kg1_NM4_CHM2A;
	Router kg1_NM5_CHM2A;
	Router kg1_NM6_CHM2A;
	Router kg1_NM7_CHM2A;

	Router kg1_M27_CHM2A;

#pragma endregion
#pragma region to CHM3A


	Router kg1_NM1_CHM3A;
	Router kg1_NM2_CHM3A;
	Router kg1_NM3_CHM3A;
	Router kg1_NM4_CHM3A;
	Router kg1_NM5_CHM3A;
	Router kg1_NM6_CHM3A;
	Router kg1_NM7_CHM3A;

	Router kg1_M27_CHM3A;

#pragma endregion
#pragma region to CHM4A


	Router kg1_NM1_CHM4A;
	Router kg1_NM2_CHM4A;
	Router kg1_NM3_CHM4A;
	Router kg1_NM4_CHM4A;
	Router kg1_NM5_CHM4A;
	Router kg1_NM6_CHM4A;
	Router kg1_NM7_CHM4A;

	Router kg1_M27_CHM4A;

#pragma endregion
#pragma region to CHM5A


	Router kg1_NM1_CHM5A;
	Router kg1_NM2_CHM5A;
	Router kg1_NM3_CHM5A;
	Router kg1_NM4_CHM5A;
	Router kg1_NM5_CHM5A;
	Router kg1_NM6_CHM5A;
	Router kg1_NM7_CHM5A;

	Router kg1_M27_CHM5A;
#pragma endregion
#pragma region to M12
	Router kg1_NM1_M12;
	Router kg1_NM2_M12;
	Router kg1_NM3_M12;
	Router kg1_NM4_M12;
	Router kg1_NM5_M12;
	Router kg1_NM6_M12;
	Router kg1_NM7_M12;

	Router kg1_M27_M12;

	Router kg1_NM1B_M12;
	Router kg1_NM2B_M12;
	Router kg1_NM3B_M12;
	Router kg1_NM4B_M12;
#pragma endregion
#pragma region to M21

	Router kg1_CHM1_M21;
	Router kg1_CHM2_M21;
	Router kg1_CHM3_M21;
	Router kg1_CHM4_M21;
	Router kg1_CHM5_M21;
	Router kg1_CHM6_M21;
	Router kg1_CHM7_M21;

	Router kg1_M14_M21;
	Router kg1_M16_M21;
	Router kg1_M18_M21;
	Router kg1_M20_M21;

#pragma endregion

#pragma region from M21

	Router kg1_M21_CHM1;
	Router kg1_M21_CHM2;
	Router kg1_M21_CHM3;
	Router kg1_M21_CHM4;
	Router kg1_M21_CHM5;
	Router kg1_M21_CHM6;
	Router kg1_M21_CHM7;

	Router kg1_M21_M14;
	Router kg1_M21_M16;
	Router kg1_M21_M18;
	Router kg1_M21_M20;

#pragma endregion


#pragma region to PG1

	Router kg1_NM1B_PG1;
	Router kg1_NM2B_PG1;
	Router kg1_NM3B_PG1;
	Router kg1_NM4B_PG1;

#pragma endregion
#pragma region to PG2

	Router kg1_NM1B_PG2;
	Router kg1_NM2B_PG2;
	Router kg1_NM3B_PG2;
	Router kg1_NM4B_PG2;



#pragma endregion
//#pragma region dop
//
//	Router kg1_NM1B_M6;
//	Router kg1_NM2B_M6;
//	Router kg1_NM3B_M6;
//	Router kg1_NM4B_M6;
//
//	Router kg1_NM1B_M12;
//	Router kg1_NM2B_M12;
//	Router kg1_NM3B_M12;
//	Router kg1_NM4B_M12;
//
//#pragma endregion

#pragma region OUT_Routers
	Router kg1_1UPN_GanaKaraganda;
	Router kg1_1NP_GanaKaraganda;
#pragma endregion

#pragma endregion
#pragma region Routers: Def: Create

#pragma region from N
	void kg1_N_1P_Create();
	void kg1_N_2P_Create();
	void kg1_N_3P_Create();
	void kg1_N_4P_Create();
	void kg1_N_5P_Create();
	void kg1_N_6P_Create();
	void kg1_N_7P_Create();
	void kg1_N_1BP_Create();
	void kg1_N_2BP_Create();
	void kg1_N_3BP_Create();
	void kg1_N_4BP_Create();
#pragma endregion
#pragma region from ND
	void kg1_ND_1P_Create();
	void kg1_ND_2P_Create();
	void kg1_ND_3P_Create();
	void kg1_ND_4P_Create();
	void kg1_ND_5P_Create();
	void kg1_ND_6P_Create();
	void kg1_ND_7P_Create();
	void kg1_ND_1BP_Create();
	void kg1_ND_2BP_Create();
	void kg1_ND_3BP_Create();
	void kg1_ND_4BP_Create();
#pragma endregion

#pragma region from M1
	void kg1_M1_CHM1_Create();
	void kg1_M1_CHM2_Create();
	void kg1_M1_CHM3_Create();
	void kg1_M1_CHM4_Create();
	void kg1_M1_CHM5_Create();
	void kg1_M1_CHM6_Create();
	void kg1_M1_CHM7_Create();
	void kg1_M1_M14_Create();
	void kg1_M1_M16_Create();
	void kg1_M1_M18_Create();
	void kg1_M1_M20_Create();
#pragma endregion
#pragma region from M3
	void kg1_M3_CHM1_Create();
	void kg1_M3_CHM2_Create();
	void kg1_M3_CHM3_Create();
	void kg1_M3_CHM4_Create();
	void kg1_M3_CHM5_Create();
	void kg1_M3_CHM6_Create();
	void kg1_M3_CHM7_Create();
	void kg1_M3_M14_Create();
	void kg1_M3_M16_Create();
	void kg1_M3_M18_Create();
	void kg1_M3_M20_Create();
#pragma endregion

#pragma region to N
	void kg1_M14_N_Create();
	void kg1_M16_N_Create();
	void kg1_M18_N_Create();
	void kg1_M20_N_Create();
	void kg1_CHM1_N_Create();
	void kg1_CHM2_N_Create();
	void kg1_CHM3_N_Create();
	void kg1_CHM4_N_Create();
	void kg1_CHM5_N_Create();
	void kg1_CHM6_N_Create();
	void kg1_CHM7_N_Create();
#pragma endregion
#pragma region to M1
	void kg1_M14_M1_Create();
	void kg1_M16_M1_Create();
	void kg1_M18_M1_Create();
	void kg1_M20_M1_Create();
	void kg1_CHM1_M1_Create();
	void kg1_CHM2_M1_Create();
	void kg1_CHM3_M1_Create();
	void kg1_CHM4_M1_Create();
	void kg1_CHM5_M1_Create();
	void kg1_CHM6_M1_Create();
	void kg1_CHM7_M1_Create();
#pragma endregion

#pragma region to ND
	void kg1_M14_ND_Create();
	void kg1_M16_ND_Create();
	void kg1_M18_ND_Create();
	void kg1_M20_ND_Create();
	void kg1_CHM1_ND_Create();
	void kg1_CHM2_ND_Create();
	void kg1_CHM3_ND_Create();
	void kg1_CHM4_ND_Create();
	void kg1_CHM5_ND_Create();
	void kg1_CHM6_ND_Create();
	void kg1_CHM7_ND_Create();
#pragma endregion
#pragma region to M3
	void kg1_M14_M3_Create();
	void kg1_M16_M3_Create();
	void kg1_M18_M3_Create();
	void kg1_M20_M3_Create();
	void kg1_CHM1_M3_Create();
	void kg1_CHM2_M3_Create();
	void kg1_CHM3_M3_Create();
	void kg1_CHM4_M3_Create();
	void kg1_CHM5_M3_Create();
	void kg1_CHM6_M3_Create();
	void kg1_CHM7_M3_Create();
#pragma endregion

#pragma region to M6
	void kg1_NM1_M6_Create();
	void kg1_NM2_M6_Create();
	void kg1_NM3_M6_Create();
	void kg1_NM4_M6_Create();
	void kg1_NM5_M6_Create();
	void kg1_NM6_M6_Create();
	void kg1_NM7_M6_Create();
	void kg1_NM1B_M6_Create();
	void kg1_NM2B_M6_Create();
	void kg1_NM3B_M6_Create();
	void kg1_NM4B_M6_Create();

	void kg1_M6_NM1B_Create();
	void kg1_M6_NM2B_Create();
	void kg1_M6_NM3B_Create();
	void kg1_M6_NM4B_Create();

	void kg1_M27_M6_Create();
#pragma endregion
#pragma region to CHM2A

	//void kg1_NM1_2AP_Create();
	//void kg1_NM2_2AP_Create();
	//void kg1_NM3_2AP_Create();
	//void kg1_NM4_2AP_Create();
	//void kg1_NM5_2AP_Create();
	//void kg1_NM6_2AP_Create();
	//void kg1_NM7_2AP_Create();

	void kg1_NM1_CHM2A_Create();
	void kg1_NM2_CHM2A_Create();
	void kg1_NM3_CHM2A_Create();
	void kg1_NM4_CHM2A_Create();
	void kg1_NM5_CHM2A_Create();
	void kg1_NM6_CHM2A_Create();
	void kg1_NM7_CHM2A_Create();

	void kg1_M27_CHM2A_Create();

#pragma endregion
#pragma region to CHM3A

	//void kg1_NM1_3AP_Create();
	//void kg1_NM2_3AP_Create();
	//void kg1_NM3_3AP_Create();
	//void kg1_NM4_3AP_Create();
	//void kg1_NM5_3AP_Create();
	//void kg1_NM6_3AP_Create();
	//void kg1_NM7_3AP_Create();

	void kg1_NM1_CHM3A_Create();
	void kg1_NM2_CHM3A_Create();
	void kg1_NM3_CHM3A_Create();
	void kg1_NM4_CHM3A_Create();
	void kg1_NM5_CHM3A_Create();
	void kg1_NM6_CHM3A_Create();
	void kg1_NM7_CHM3A_Create();

	void kg1_M27_CHM3A_Create();

#pragma endregion
#pragma region to CHM4A

	//void kg1_NM1_4AP_Create();
	//void kg1_NM2_4AP_Create();
	//void kg1_NM3_4AP_Create();
	//void kg1_NM4_4AP_Create();
	//void kg1_NM5_4AP_Create();
	//void kg1_NM6_4AP_Create();
	//void kg1_NM7_4AP_Create();

	void kg1_NM1_CHM4A_Create();
	void kg1_NM2_CHM4A_Create();
	void kg1_NM3_CHM4A_Create();
	void kg1_NM4_CHM4A_Create();
	void kg1_NM5_CHM4A_Create();
	void kg1_NM6_CHM4A_Create();
	void kg1_NM7_CHM4A_Create();

	void kg1_M27_CHM4A_Create();

#pragma endregion
#pragma region to CHM5A


	//void kg1_NM1_5AP_Create();
	//void kg1_NM2_5AP_Create();
	//void kg1_NM3_5AP_Create();
	//void kg1_NM4_5AP_Create();
	//void kg1_NM5_5AP_Create();
	//void kg1_NM6_5AP_Create();
	//void kg1_NM7_5AP_Create();

	void kg1_NM1_CHM5A_Create();
	void kg1_NM2_CHM5A_Create();
	void kg1_NM3_CHM5A_Create();
	void kg1_NM4_CHM5A_Create();
	void kg1_NM5_CHM5A_Create();
	void kg1_NM6_CHM5A_Create();
	void kg1_NM7_CHM5A_Create();

	void kg1_M27_CHM5A_Create();
#pragma region fromM33

	void kg1_M33_NM1B_Create();
	void kg1_M33_NM2B_Create();
	void kg1_M33_NM3B_Create();
	void kg1_M33_NM4B_Create();

#pragma endregion
#pragma region fromM35

	void kg1_M35_NM1B_Create();
	void kg1_M35_NM2B_Create();
	void kg1_M35_NM3B_Create();
	void kg1_M35_NM4B_Create();

#pragma endregion

#pragma endregion
#pragma region to M12
	void kg1_NM1_M12_Create();
	void kg1_NM2_M12_Create();
	void kg1_NM3_M12_Create();
	void kg1_NM4_M12_Create();
	void kg1_NM5_M12_Create();
	void kg1_NM6_M12_Create();
	void kg1_NM7_M12_Create();

	void kg1_M12_NM1_Create();
	void kg1_M12_NM2_Create();
	void kg1_M12_NM3_Create();
	void kg1_M12_NM4_Create();
	void kg1_M12_NM5_Create();
	void kg1_M12_NM6_Create();
	void kg1_M12_NM7_Create();

	void kg1_M27_M12_Create();

	void kg1_NM1B_M12_Create();
	void kg1_NM2B_M12_Create();
	void kg1_NM3B_M12_Create();
	void kg1_NM4B_M12_Create();

	void kg1_M12_M27_Create();

	void kg1_M12_NM1B_Create();
	void kg1_M12_NM2B_Create();
	void kg1_M12_NM3B_Create();
	void kg1_M12_NM4B_Create();
#pragma endregion
#pragma region to M21

	void kg1_CHM1_M21_Create();
	void kg1_CHM2_M21_Create();
	void kg1_CHM3_M21_Create();
	void kg1_CHM4_M21_Create();
	void kg1_CHM5_M21_Create();
	void kg1_CHM6_M21_Create();
	void kg1_CHM7_M21_Create();

	void kg1_M14_M21_Create();
	void kg1_M16_M21_Create();
	void kg1_M18_M21_Create();
	void kg1_M20_M21_Create();

#pragma endregion
#pragma region from M21

	void kg1_M21_CHM1_Create();
	void kg1_M21_CHM2_Create();
	void kg1_M21_CHM3_Create();
	void kg1_M21_CHM4_Create();
	void kg1_M21_CHM5_Create();
	void kg1_M21_CHM6_Create();
	void kg1_M21_CHM7_Create();

	void kg1_M21_M14_Create();
	void kg1_M21_M16_Create();
	void kg1_M21_M18_Create();
	void kg1_M21_M20_Create();

#pragma endregion
#pragma region to PG1

	void kg1_NM1B_PG1_Create();
	void kg1_NM2B_PG1_Create();
	void kg1_NM3B_PG1_Create();
	void kg1_NM4B_PG1_Create();

#pragma endregion
#pragma region to PG2

	void kg1_NM1B_PG2_Create();
	void kg1_NM2B_PG2_Create();
	void kg1_NM3B_PG2_Create();
	void kg1_NM4B_PG2_Create();

#pragma region dop

	void kg1_M23_CHM6_Create();
	void kg1_M25_CHM6_Create();
	void kg1_M23_CHM7_Create();
	void kg1_M25_CHM7_Create();
	void kg1_M24_NM7_Create();
	void kg1_M26_NM7_Create();

	void kg1_CHM6_M23_Create();
	void kg1_CHM6_M25_Create();
	void kg1_CHM7_M23_Create();
	void kg1_CHM7_M25_Create();
	void kg1_NM7_M24_Create();
	void kg1_NM7_M26_Create();

	void kg1_NM1B_CHM5A_Create();
	void kg1_NM1B_CHM4A_Create();
	void kg1_NM1B_CHM3A_Create();
	void kg1_NM1B_CHM2A_Create();

	void kg1_NM2B_CHM5A_Create();
	void kg1_NM2B_CHM4A_Create();
	void kg1_NM2B_CHM3A_Create();
	void kg1_NM2B_CHM2A_Create();

	void kg1_NM3B_CHM5A_Create();
	void kg1_NM3B_CHM4A_Create();
	void kg1_NM3B_CHM3A_Create();
	void kg1_NM3B_CHM2A_Create();

	void kg1_NM4B_CHM5A_Create();
	void kg1_NM4B_CHM4A_Create();
	void kg1_NM4B_CHM3A_Create();
	void kg1_NM4B_CHM2A_Create();



#pragma endregion


#pragma endregion

#pragma endregion
#pragma region Routers: Def: CreateEnd

#pragma region dop

	void kg1_M23_CHM6_CreateEnd();
	void kg1_M25_CHM6_CreateEnd();
	void kg1_M23_CHM7_CreateEnd();
	void kg1_M25_CHM7_CreateEnd();
	void kg1_M24_NM7_CreateEnd();
	void kg1_M26_NM7_CreateEnd();

	void kg1_CHM6_M23_CreateEnd();
	void kg1_CHM6_M25_CreateEnd();
	void kg1_CHM7_M23_CreateEnd();
	void kg1_CHM7_M25_CreateEnd();
	void kg1_NM7_M24_CreateEnd();
	void kg1_NM7_M26_CreateEnd();

	void kg1_NM1B_CHM5A_CreateEnd();
	void kg1_NM1B_CHM4A_CreateEnd();
	void kg1_NM1B_CHM3A_CreateEnd();
	void kg1_NM1B_CHM2A_CreateEnd();

	void kg1_NM2B_CHM5A_CreateEnd();
	void kg1_NM2B_CHM4A_CreateEnd();
	void kg1_NM2B_CHM3A_CreateEnd();
	void kg1_NM2B_CHM2A_CreateEnd();

	void kg1_NM3B_CHM5A_CreateEnd();
	void kg1_NM3B_CHM4A_CreateEnd();
	void kg1_NM3B_CHM3A_CreateEnd();
	void kg1_NM3B_CHM2A_CreateEnd();

	void kg1_NM4B_CHM5A_CreateEnd();
	void kg1_NM4B_CHM4A_CreateEnd();
	void kg1_NM4B_CHM3A_CreateEnd();
	void kg1_NM4B_CHM2A_CreateEnd();



#pragma endregion

#pragma region from N

	void kg1_N_1P_CreateEnd();
	void kg1_N_2P_CreateEnd();
	void kg1_N_3P_CreateEnd();
	void kg1_N_4P_CreateEnd();
	void kg1_N_5P_CreateEnd();
	void kg1_N_6P_CreateEnd();
	void kg1_N_7P_CreateEnd();
	void kg1_N_1BP_CreateEnd();
	void kg1_N_2BP_CreateEnd();
	void kg1_N_3BP_CreateEnd();
	void kg1_N_4BP_CreateEnd();
#pragma endregion
#pragma region from ND
	void kg1_ND_1P_CreateEnd();
	void kg1_ND_2P_CreateEnd();
	void kg1_ND_3P_CreateEnd();
	void kg1_ND_4P_CreateEnd();
	void kg1_ND_5P_CreateEnd();
	void kg1_ND_6P_CreateEnd();
	void kg1_ND_7P_CreateEnd();
	void kg1_ND_1BP_CreateEnd();
	void kg1_ND_2BP_CreateEnd();
	void kg1_ND_3BP_CreateEnd();
	void kg1_ND_4BP_CreateEnd();
#pragma endregion

#pragma region from M1
	void kg1_M1_CHM1_CreateEnd();
	void kg1_M1_CHM2_CreateEnd();
	void kg1_M1_CHM3_CreateEnd();
	void kg1_M1_CHM4_CreateEnd();
	void kg1_M1_CHM5_CreateEnd();
	void kg1_M1_CHM6_CreateEnd();
	void kg1_M1_CHM7_CreateEnd();
	void kg1_M1_M14_CreateEnd();
	void kg1_M1_M16_CreateEnd();
	void kg1_M1_M18_CreateEnd();
	void kg1_M1_M20_CreateEnd();
#pragma endregion
#pragma region from M3
	void kg1_M3_CHM1_CreateEnd();
	void kg1_M3_CHM2_CreateEnd();
	void kg1_M3_CHM3_CreateEnd();
	void kg1_M3_CHM4_CreateEnd();
	void kg1_M3_CHM5_CreateEnd();
	void kg1_M3_CHM6_CreateEnd();
	void kg1_M3_CHM7_CreateEnd();
	void kg1_M3_M14_CreateEnd();
	void kg1_M3_M16_CreateEnd();
	void kg1_M3_M18_CreateEnd();
	void kg1_M3_M20_CreateEnd();
#pragma endregion

#pragma region to N
	void kg1_M14_N_CreateEnd();
	void kg1_M16_N_CreateEnd();
	void kg1_M18_N_CreateEnd();
	void kg1_M20_N_CreateEnd();
	void kg1_CHM1_N_CreateEnd();
	void kg1_CHM2_N_CreateEnd();
	void kg1_CHM3_N_CreateEnd();
	void kg1_CHM4_N_CreateEnd();
	void kg1_CHM5_N_CreateEnd();
	void kg1_CHM6_N_CreateEnd();
	void kg1_CHM7_N_CreateEnd();
#pragma endregion
#pragma region to M1
	void kg1_M14_M1_CreateEnd();
	void kg1_M16_M1_CreateEnd();
	void kg1_M18_M1_CreateEnd();
	void kg1_M20_M1_CreateEnd();
	void kg1_CHM1_M1_CreateEnd();
	void kg1_CHM2_M1_CreateEnd();
	void kg1_CHM3_M1_CreateEnd();
	void kg1_CHM4_M1_CreateEnd();
	void kg1_CHM5_M1_CreateEnd();
	void kg1_CHM6_M1_CreateEnd();
	void kg1_CHM7_M1_CreateEnd();
#pragma endregion

#pragma region to ND
	void kg1_M14_ND_CreateEnd();
	void kg1_M16_ND_CreateEnd();
	void kg1_M18_ND_CreateEnd();
	void kg1_M20_ND_CreateEnd();
	void kg1_CHM1_ND_CreateEnd();
	void kg1_CHM2_ND_CreateEnd();
	void kg1_CHM3_ND_CreateEnd();
	void kg1_CHM4_ND_CreateEnd();
	void kg1_CHM5_ND_CreateEnd();
	void kg1_CHM6_ND_CreateEnd();
	void kg1_CHM7_ND_CreateEnd();
#pragma endregion
#pragma region to M3
	void kg1_M14_M3_CreateEnd();
	void kg1_M16_M3_CreateEnd();
	void kg1_M18_M3_CreateEnd();
	void kg1_M20_M3_CreateEnd();
	void kg1_CHM1_M3_CreateEnd();
	void kg1_CHM2_M3_CreateEnd();
	void kg1_CHM3_M3_CreateEnd();
	void kg1_CHM4_M3_CreateEnd();
	void kg1_CHM5_M3_CreateEnd();
	void kg1_CHM6_M3_CreateEnd();
	void kg1_CHM7_M3_CreateEnd();
#pragma endregion

#pragma region to M6
	void kg1_NM1_M6_CreateEnd();
	void kg1_NM2_M6_CreateEnd();
	void kg1_NM3_M6_CreateEnd();
	void kg1_NM4_M6_CreateEnd();
	void kg1_NM5_M6_CreateEnd();
	void kg1_NM6_M6_CreateEnd();
	void kg1_NM7_M6_CreateEnd();

	void kg1_NM1B_M6_CreateEnd();
	void kg1_NM2B_M6_CreateEnd();
	void kg1_NM3B_M6_CreateEnd();
	void kg1_NM4B_M6_CreateEnd();

	void kg1_M6_NM1B_CreateEnd();
	void kg1_M6_NM2B_CreateEnd();
	void kg1_M6_NM3B_CreateEnd();
	void kg1_M6_NM4B_CreateEnd();

	void kg1_M27_M6_CreateEnd();
#pragma endregion
#pragma region to M12
	void kg1_NM1_M12_CreateEnd();
	void kg1_NM2_M12_CreateEnd();
	void kg1_NM3_M12_CreateEnd();
	void kg1_NM4_M12_CreateEnd();
	void kg1_NM5_M12_CreateEnd();
	void kg1_NM6_M12_CreateEnd();
	void kg1_NM7_M12_CreateEnd();

	void kg1_M12_NM1_CreateEnd();
	void kg1_M12_NM2_CreateEnd();
	void kg1_M12_NM3_CreateEnd();
	void kg1_M12_NM4_CreateEnd();
	void kg1_M12_NM5_CreateEnd();
	void kg1_M12_NM6_CreateEnd();
	void kg1_M12_NM7_CreateEnd();

	void kg1_NM1B_M12_CreateEnd();
	void kg1_NM2B_M12_CreateEnd();
	void kg1_NM3B_M12_CreateEnd();
	void kg1_NM4B_M12_CreateEnd();
	void kg1_M27_M12_CreateEnd();

	void kg1_M12_NM1B_CreateEnd();
	void kg1_M12_NM2B_CreateEnd();
	void kg1_M12_NM3B_CreateEnd();
	void kg1_M12_NM4B_CreateEnd();
	void kg1_M12_M27_CreateEnd();
#pragma endregion
#pragma region to CHM2A

	//void kg1_NM1_2AP_CreateEnd();
	//void kg1_NM2_2AP_CreateEnd();
	//void kg1_NM3_2AP_CreateEnd();
	//void kg1_NM4_2AP_CreateEnd();
	//void kg1_NM5_2AP_CreateEnd();
	//void kg1_NM6_2AP_CreateEnd();
	//void kg1_NM7_2AP_CreateEnd();

	void kg1_NM1_CHM2A_CreateEnd();
	void kg1_NM2_CHM2A_CreateEnd();
	void kg1_NM3_CHM2A_CreateEnd();
	void kg1_NM4_CHM2A_CreateEnd();
	void kg1_NM5_CHM2A_CreateEnd();
	void kg1_NM6_CHM2A_CreateEnd();
	void kg1_NM7_CHM2A_CreateEnd();

	void kg1_M27_CHM2A_CreateEnd();

#pragma endregion
#pragma region to CHM3A

	//void kg1_NM1_3AP_CreateEnd();
	//void kg1_NM2_3AP_CreateEnd();
	//void kg1_NM3_3AP_CreateEnd();
	//void kg1_NM4_3AP_CreateEnd();
	//void kg1_NM5_3AP_CreateEnd();
	//void kg1_NM6_3AP_CreateEnd();
	//void kg1_NM7_3AP_CreateEnd();

	void kg1_NM1_CHM3A_CreateEnd();
	void kg1_NM2_CHM3A_CreateEnd();
	void kg1_NM3_CHM3A_CreateEnd();
	void kg1_NM4_CHM3A_CreateEnd();
	void kg1_NM5_CHM3A_CreateEnd();
	void kg1_NM6_CHM3A_CreateEnd();
	void kg1_NM7_CHM3A_CreateEnd();

	void kg1_M27_CHM3A_CreateEnd();

#pragma endregion
#pragma region to CHM4A

	//void kg1_NM1_4AP_CreateEnd();
	//void kg1_NM2_4AP_CreateEnd();
	//void kg1_NM3_4AP_CreateEnd();
	//void kg1_NM4_4AP_CreateEnd();
	//void kg1_NM5_4AP_CreateEnd();
	//void kg1_NM6_4AP_CreateEnd();
	//void kg1_NM7_4AP_CreateEnd();

	void kg1_NM1_CHM4A_CreateEnd();
	void kg1_NM2_CHM4A_CreateEnd();
	void kg1_NM3_CHM4A_CreateEnd();
	void kg1_NM4_CHM4A_CreateEnd();
	void kg1_NM5_CHM4A_CreateEnd();
	void kg1_NM6_CHM4A_CreateEnd();
	void kg1_NM7_CHM4A_CreateEnd();

	void kg1_M27_CHM4A_CreateEnd();

#pragma endregion
#pragma region to CHM5A


	//void kg1_NM1_5AP_CreateEnd();
	//void kg1_NM2_5AP_CreateEnd();
	//void kg1_NM3_5AP_CreateEnd();
	//void kg1_NM4_5AP_CreateEnd();
	//void kg1_NM5_5AP_CreateEnd();
	//void kg1_NM6_5AP_CreateEnd();
	//void kg1_NM7_5AP_CreateEnd();

	void kg1_NM1_CHM5A_CreateEnd();
	void kg1_NM2_CHM5A_CreateEnd();
	void kg1_NM3_CHM5A_CreateEnd();
	void kg1_NM4_CHM5A_CreateEnd();
	void kg1_NM5_CHM5A_CreateEnd();
	void kg1_NM6_CHM5A_CreateEnd();
	void kg1_NM7_CHM5A_CreateEnd();

	void kg1_M27_CHM5A_CreateEnd();


#pragma region from M33

	void kg1_M33_NM1B_CreateEnd();
	void kg1_M33_NM2B_CreateEnd();
	void kg1_M33_NM3B_CreateEnd();
	void kg1_M33_NM4B_CreateEnd();

#pragma endregion
#pragma region from M35

	void kg1_M35_NM1B_CreateEnd();
	void kg1_M35_NM2B_CreateEnd();
	void kg1_M35_NM3B_CreateEnd();
	void kg1_M35_NM4B_CreateEnd();

#pragma endregion
	//#pragma region to M12
	//	void kg1_NM1_M12_CreateEnd();
	//	void kg1_NM2_M12_CreateEnd();
	//	void kg1_NM3_M12_CreateEnd();
	//	void kg1_NM4_M12_CreateEnd();
	//	void kg1_NM5_M12_CreateEnd();
	//	void kg1_NM6_M12_CreateEnd();
	//	void kg1_NM7_M12_CreateEnd();
	//
	//	void kg1_M27_M12_CreateEnd();
	//
	//	void kg1_NM1B_M12_CreateEnd();
	//	void kg1_NM2B_M12_CreateEnd();
	//	void kg1_NM3B_M12_CreateEnd();
	//	void kg1_NM4B_M12_CreateEnd();
	//#pragma endregion
#pragma region to M21

	void kg1_CHM1_M21_CreateEnd();
	void kg1_CHM2_M21_CreateEnd();
	void kg1_CHM3_M21_CreateEnd();
	void kg1_CHM4_M21_CreateEnd();
	void kg1_CHM5_M21_CreateEnd();
	void kg1_CHM6_M21_CreateEnd();
	void kg1_CHM7_M21_CreateEnd();

	void kg1_M14_M21_CreateEnd();
	void kg1_M16_M21_CreateEnd();
	void kg1_M18_M21_CreateEnd();
	void kg1_M20_M21_CreateEnd();

#pragma endregion
#pragma region from M21

	void kg1_M21_CHM1_CreateEnd();
	void kg1_M21_CHM2_CreateEnd();
	void kg1_M21_CHM3_CreateEnd();
	void kg1_M21_CHM4_CreateEnd();
	void kg1_M21_CHM5_CreateEnd();
	void kg1_M21_CHM6_CreateEnd();
	void kg1_M21_CHM7_CreateEnd();

	void kg1_M21_M14_CreateEnd();
	void kg1_M21_M16_CreateEnd();
	void kg1_M21_M18_CreateEnd();
	void kg1_M21_M20_CreateEnd();

#pragma endregion
#pragma region to PG1

	void kg1_NM1B_PG1_CreateEnd();
	void kg1_NM2B_PG1_CreateEnd();
	void kg1_NM3B_PG1_CreateEnd();
	void kg1_NM4B_PG1_CreateEnd();

#pragma endregion
#pragma region to PG2

	void kg1_NM1B_PG2_CreateEnd();
	void kg1_NM2B_PG2_CreateEnd();
	void kg1_NM3B_PG2_CreateEnd();
	void kg1_NM4B_PG2_CreateEnd();

#pragma endregion

#pragma endregion
#pragma endregion
#pragma endregion
#pragma region Karaganda_2

#pragma region vars
	std::vector<FElm*>kg2_arrSign;
	std::vector<FElm*>kg2_arrWay;
	std::vector<FElm*>kg2_arrStr;
	std::vector<FElm*>kg2_arrSvetofor;
	std::vector<Router*>kg2_arrRouter;
#pragma endregion
#pragma region FOO
	void kg2_InitArraysStart();
	void kg2_DefaultSetting();
	void kg2_InitRouters();
#pragma region Strelki


	//void ToMinus(FElm* str);
	//void ToPlus(FElm* str);

	void kg2_ToMinus(FElm* str);

	void kg2_ToPlus(FElm* str);

	void kg2_GetTwiceStrelka(FElm*& str1, FElm*& str2);

	void kg2_ToMinusInThread(FElm* str);
	void kg2_ToPlusInThread(FElm* str);


	bool kg2_IsStrelkaFree(FElm* elm);



#pragma region fstr

	FElm* kg2_GetStrelka(int number);

	void kg2_ToMinus(int str1);
	void kg2_ToMinus(int str1, int str2);
	void kg2_ToMinus(int str1, int str2, int str3);
	void kg2_ToMinus(int str1, int str2, int str3, int str4);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11);

	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12);

	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12, int str13);

	void kg2_ToMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12, int str13, int str14);

	void kg2_ToPlus(int str1);
	void kg2_ToPlus(int str1, int str2);
	void kg2_ToPlus(int str1, int str2, int str3);
	void kg2_ToPlus(int str1, int str2, int str3, int str4);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	void kg2_ToPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool kg2_IsMinus();
	bool kg2_IsMinus(int str1);
	bool kg2_IsMinus(int str1, int str2);
	bool kg2_IsMinus(int str1, int str2, int str3);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11);

	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12);

	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12, int str13);

	bool kg2_IsMinus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10, int str11, int str12, int str13, int str14);

	bool kg2_IsPlus();
	bool kg2_IsPlus(int str1);
	bool kg2_IsPlus(int str1, int str2);
	bool kg2_IsPlus(int str1, int str2, int str3);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9);
	bool kg2_IsPlus(int str1, int str2, int str3, int str4, int str5, int str6, int str7, int str8, int str9, int str10);

#pragma endregion






#pragma endregion

#pragma endregion
#pragma region Routers: Def

#pragma region from CH
	Router kg2_CH_N1A;
	Router kg2_CH_N2A;
	Router kg2_CH_N3A;
	Router kg2_CH_N4A;
	Router kg2_CH_N5A;

#pragma endregion
#pragma region from M2
	Router kg2_M2_M15;

	Router kg2_M2_N1A;
	Router kg2_M2_N2A;
	Router kg2_M2_N3A;
	Router kg2_M2_N4A;
	Router kg2_M2_N5A;
#pragma endregion

#pragma region from CHD
	Router kg2_CHD_N1A;
	Router kg2_CHD_N2A;
	Router kg2_CHD_N3A;
	Router kg2_CHD_N4A;
	Router kg2_CHD_N5A;

#pragma endregion
#pragma region from M4
	Router kg2_M4_M15;

	Router kg2_M4_N1A;
	Router kg2_M4_N2A;
	Router kg2_M4_N3A;
	Router kg2_M4_N4A;
	Router kg2_M4_N5A;
#pragma endregion

#pragma region to CHM1A

	Router kg2_NM20_CHM1A;
	Router kg2_NM21_CHM1A;
	Router kg2_NM22_CHM1A;

	Router kg2_NM23_CHM1A;
	Router kg2_NM24_CHM1A;
	Router kg2_NM25_CHM1A;
	Router kg2_NM26_CHM1A;
	Router kg2_NM27_CHM1A;
	Router kg2_NM28_CHM1A;
	Router kg2_NM29_CHM1A;
	Router kg2_NM30_CHM1A;
	Router kg2_NM31_CHM1A;
	Router kg2_NM32_CHM1A;
	Router kg2_NM33_CHM1A;
	Router kg2_NM34_CHM1A;

#pragma endregion
#pragma region from CHM1A

	Router kg2_CHM1A_NM20;
	Router kg2_CHM1A_NM21;
	Router kg2_CHM1A_NM22;

	Router kg2_CHM1A_NM23;
	Router kg2_CHM1A_NM24;
	Router kg2_CHM1A_NM25;
	Router kg2_CHM1A_NM26;
	Router kg2_CHM1A_NM27;
	Router kg2_CHM1A_NM28;
	Router kg2_CHM1A_NM29;
	Router kg2_CHM1A_NM30;
	Router kg2_CHM1A_NM31;
	Router kg2_CHM1A_NM32;
	Router kg2_CHM1A_NM33;
	Router kg2_CHM1A_NM34;


#pragma endregion

#pragma region to CHM2A
	Router kg2_NM11_CHM2A;
	Router kg2_NM12_CHM2A;
	Router kg2_NM13_CHM2A;
	Router kg2_NM14_CHM2A;
	Router kg2_NM15_CHM2A;
	Router kg2_NM16_CHM2A;
	Router kg2_NM17_CHM2A;
	Router kg2_NM18_CHM2A;
	Router kg2_NM19_CHM2A;

	Router kg2_NM20_CHM2A;
	Router kg2_NM21_CHM2A;
	Router kg2_NM22_CHM2A;

	Router kg2_NM23_CHM2A;
	Router kg2_NM24_CHM2A;
	Router kg2_NM25_CHM2A;
	Router kg2_NM26_CHM2A;
	Router kg2_NM27_CHM2A;
	Router kg2_NM28_CHM2A;
	Router kg2_NM29_CHM2A;
	Router kg2_NM30_CHM2A;
	Router kg2_NM31_CHM2A;
	Router kg2_NM32_CHM2A;
	Router kg2_NM33_CHM2A;
	Router kg2_NM34_CHM2A;

#pragma endregion
#pragma region from CHM2A

	Router kg2_CHM2A_NM11;
	Router kg2_CHM2A_NM12;
	Router kg2_CHM2A_NM13;
	Router kg2_CHM2A_NM14;
	Router kg2_CHM2A_NM15;
	Router kg2_CHM2A_NM16;
	Router kg2_CHM2A_NM17;
	Router kg2_CHM2A_NM18;
	Router kg2_CHM2A_NM19;

	Router kg2_CHM2A_NM20;
	Router kg2_CHM2A_NM21;
	Router kg2_CHM2A_NM22;

	Router kg2_CHM2A_NM23;
	Router kg2_CHM2A_NM24;
	Router kg2_CHM2A_NM25;
	Router kg2_CHM2A_NM26;
	Router kg2_CHM2A_NM27;
	Router kg2_CHM2A_NM28;
	Router kg2_CHM2A_NM29;
	Router kg2_CHM2A_NM30;
	Router kg2_CHM2A_NM31;
	Router kg2_CHM2A_NM32;
	Router kg2_CHM2A_NM33;
	Router kg2_CHM2A_NM34;

	Router kg2_CHM2A_NM1;
	Router kg2_CHM2A_NM2;
	Router kg2_CHM2A_NM3;
	Router kg2_CHM2A_NM4;
	Router kg2_CHM2A_NM5;
	Router kg2_CHM2A_NM6;
	Router kg2_CHM2A_NM7;

	
	Router kg2_CHM2A_M27;
	Router kg2_CHM2A_NM1B;
	Router kg2_CHM2A_NM2B;
	Router kg2_CHM2A_NM3B;
	Router kg2_CHM2A_NM4B;

#pragma endregion

#pragma region to CHM3A

	Router kg2_NM11_CHM3A;
	Router kg2_NM12_CHM3A;
	Router kg2_NM13_CHM3A;
	Router kg2_NM14_CHM3A;
	Router kg2_NM15_CHM3A;
	Router kg2_NM16_CHM3A;
	Router kg2_NM17_CHM3A;
	Router kg2_NM18_CHM3A;
	Router kg2_NM19_CHM3A;

	Router kg2_NM20_CHM3A;
	Router kg2_NM21_CHM3A;
	Router kg2_NM22_CHM3A;

#pragma endregion
#pragma region from CHM3A

	Router kg2_CHM3A_NM11;
	Router kg2_CHM3A_NM12;
	Router kg2_CHM3A_NM13;
	Router kg2_CHM3A_NM14;
	Router kg2_CHM3A_NM15;
	Router kg2_CHM3A_NM16;
	Router kg2_CHM3A_NM17;
	Router kg2_CHM3A_NM18;
	Router kg2_CHM3A_NM19;

	Router kg2_CHM3A_NM20;
	Router kg2_CHM3A_NM21;
	Router kg2_CHM3A_NM22;

	Router kg2_CHM3A_NM1;
	Router kg2_CHM3A_NM2;
	Router kg2_CHM3A_NM3;
	Router kg2_CHM3A_NM4;
	Router kg2_CHM3A_NM5;
	Router kg2_CHM3A_NM6;
	Router kg2_CHM3A_NM7;

	Router kg2_CHM3A_M13;
	Router kg2_CHM3A_M5;
	Router kg2_CHM3A_M27;
	Router kg2_CHM3A_NM1B;
	Router kg2_CHM3A_NM2B;
	Router kg2_CHM3A_NM3B;
	Router kg2_CHM3A_NM4B;

#pragma endregion

#pragma region to CHM4A

	Router kg2_NM11_CHM4A;
	Router kg2_NM12_CHM4A;
	Router kg2_NM13_CHM4A;
	Router kg2_NM14_CHM4A;
	Router kg2_NM15_CHM4A;
	Router kg2_NM16_CHM4A;
	Router kg2_NM17_CHM4A;
	Router kg2_NM18_CHM4A;
	Router kg2_NM19_CHM4A;

	Router kg2_NM20_CHM4A;
	Router kg2_NM21_CHM4A;
	Router kg2_NM22_CHM4A;

#pragma endregion
#pragma region from CHM4A

	Router kg2_CHM4A_NM11;
	Router kg2_CHM4A_NM12;
	Router kg2_CHM4A_NM13;
	Router kg2_CHM4A_NM14;
	Router kg2_CHM4A_NM15;
	Router kg2_CHM4A_NM16;
	Router kg2_CHM4A_NM17;
	Router kg2_CHM4A_NM18;
	Router kg2_CHM4A_NM19;

	Router kg2_CHM4A_NM20;
	Router kg2_CHM4A_NM21;
	Router kg2_CHM4A_NM22;

	Router kg2_CHM4A_NM1;
	Router kg2_CHM4A_NM2;
	Router kg2_CHM4A_NM3;
	Router kg2_CHM4A_NM4;
	Router kg2_CHM4A_NM5;
	Router kg2_CHM4A_NM6;
	Router kg2_CHM4A_NM7;

	Router kg2_CHM4A_M13;
	Router kg2_CHM4A_M5;
	Router kg2_CHM4A_M27;
	Router kg2_CHM4A_NM1B;
	Router kg2_CHM4A_NM2B;
	Router kg2_CHM4A_NM3B;
	Router kg2_CHM4A_NM4B;

#pragma endregion

#pragma region to CHM5A

	Router kg2_M13_CHM5A;

#pragma endregion
#pragma region from CHM5A

	Router kg2_CHM5A_NM1;
	Router kg2_CHM5A_NM2;
	Router kg2_CHM5A_NM3;
	Router kg2_CHM5A_NM4;
	Router kg2_CHM5A_NM5;
	Router kg2_CHM5A_NM6;
	Router kg2_CHM5A_NM7;

	Router kg2_CHM5A_M13;
	Router kg2_CHM5A_M5;
	Router kg2_CHM5A_M27;
	Router kg2_CHM5A_NM1B;
	Router kg2_CHM5A_NM2B;
	Router kg2_CHM5A_NM3B;
	Router kg2_CHM5A_NM4B;

#pragma endregion

#pragma region to M22

	Router kg2_NM23_M22;
	Router kg2_NM24_M22;
	Router kg2_NM25_M22;
	Router kg2_NM26_M22;
	Router kg2_NM27_M22;
	Router kg2_NM28_M22;
	Router kg2_NM29_M22;
	Router kg2_NM30_M22;
	Router kg2_NM31_M22;
	Router kg2_NM32_M22;
	Router kg2_NM33_M22;
	Router kg2_NM34_M22;

#pragma endregion
#pragma region from M22

	Router kg2_M22_NM23;
	Router kg2_M22_NM24;
	Router kg2_M22_NM25;
	Router kg2_M22_NM26;
	Router kg2_M22_NM27;
	Router kg2_M22_NM28;
	Router kg2_M22_NM29;
	Router kg2_M22_NM30;
	Router kg2_M22_NM31;
	Router kg2_M22_NM32;
	Router kg2_M22_NM33;
	Router kg2_M22_NM34;

#pragma endregion

#pragma region to CH
	Router kg2_N1A_CH;
	Router kg2_N2A_CH;
	Router kg2_N3A_CH;
	Router kg2_N4A_CH;
	Router kg2_N5A_CH;

#pragma endregion
#pragma region to M2
	Router kg2_M15_M2;

	Router kg2_N1A_M2;
	Router kg2_N2A_M2;
	Router kg2_N3A_M2;
	Router kg2_N4A_M2;
	Router kg2_N5A_M2;
#pragma endregion

#pragma region to CHD
	Router kg2_N1A_CHD;
	Router kg2_N2A_CHD;
	Router kg2_N3A_CHD;
	Router kg2_N4A_CHD;
	Router kg2_N5A_CHD;

#pragma endregion
#pragma region to M4
	Router kg2_M15_M4;

	Router kg2_N1A_M4;
	Router kg2_N2A_M4;
	Router kg2_N3A_M4;
	Router kg2_N4A_M4;
	Router kg2_N5A_M4;
#pragma endregion

#pragma region from M6

	Router kg2_M6_NM1;
	Router kg2_M6_NM2;
	Router kg2_M6_NM3;
	Router kg2_M6_NM4;
	Router kg2_M6_NM5;
	Router kg2_M6_NM6;
	Router kg2_M6_NM7;

	Router kg2_M6_M27;

	Router kg2_M6_NM1B;
	Router kg2_M6_NM2B;
	Router kg2_M6_NM3B;
	Router kg2_M6_NM4B;

#pragma endregion

#pragma region from M12

	Router kg2_M12_NM1;
	Router kg2_M12_NM2;
	Router kg2_M12_NM3;
	Router kg2_M12_NM4;
	Router kg2_M12_NM5;
	Router kg2_M12_NM6;
	Router kg2_M12_NM7;

	Router kg2_M12_M27;
	Router kg2_M12_M5;

	Router kg2_M12_NM1B;
	Router kg2_M12_NM2B;
	Router kg2_M12_NM3B;
	Router kg2_M12_NM4B;

#pragma endregion

#pragma region from M5

	Router kg2_M5_M12;
	Router kg2_M5_CHM3A;
	Router kg2_M5_CHM4A;
	Router kg2_M5_CHM5A;

#pragma endregion

#pragma region from M13

	//Router kg2_M13_M12;
	Router kg2_M13_CHM3A;
	Router kg2_M13_CHM4A;
	Router kg2_M13_CHM13A;

#pragma endregion



#pragma region to M13



#pragma endregion



	Router kg1_M6_NM1B;
	Router kg1_M6_NM2B;
	Router kg1_M6_NM3B;
	Router kg1_M6_NM4B;

	//Router kg2_M12_NM1B;
	//Router kg2_M12_NM2B;
	//Router kg2_M12_NM3B;
	//Router kg2_M12_NM4B;

	//Router kg2_M12_M5;
	//Router kg2_M12_M27;

	//Router kg2_M12_NM7;
	//Router kg2_M12_NM6;
	//Router kg2_M12_NM5;
	//Router kg2_M12_NM4;
	//Router kg2_M12_NM3;
	//Router kg2_M12_NM2;
	//Router kg2_M12_NM1;


#pragma region OUT_Routers

	Router kg2_1CHP_Rasporiaditelnaya;
	Router kg2_1UPCH_Rasporiaditelnaya;

#pragma endregion

#pragma endregion
#pragma region Create

#pragma region from M13
	void kg2_M13_CHM4A_Create();
	void kg2_M13_CHM3A_Create();
#pragma endregion

#pragma region  M5

	void kg2_M5_M12_Create();
	void kg2_M5_CHM5A_Create();
	void kg2_M5_CHM4A_Create();
	void kg2_M5_CHM3A_Create();

	void kg2_M12_M5_Create();
	void kg2_CHM5A_M5_Create();
	void kg2_CHM4A_M5_Create();
	void kg2_CHM3A_M5_Create();

#pragma endregion

#pragma region from CH
	void kg2_CH_N1A_Create();
	void kg2_CH_N2A_Create();
	void kg2_CH_N3A_Create();
	void kg2_CH_N4A_Create();
	void kg2_CH_N5A_Create();

#pragma endregion
#pragma region from M2
	void kg2_M2_M15_Create();

	void kg2_M2_N1A_Create();
	void kg2_M2_N2A_Create();
	void kg2_M2_N3A_Create();
	void kg2_M2_N4A_Create();
	void kg2_M2_N5A_Create();
#pragma endregion

#pragma region from CHD
	void kg2_CHD_N1A_Create();
	void kg2_CHD_N2A_Create();
	void kg2_CHD_N3A_Create();
	void kg2_CHD_N4A_Create();
	void kg2_CHD_N5A_Create();

#pragma endregion
#pragma region from M4
	void kg2_M4_M15_Create();

	void kg2_M4_N1A_Create();
	void kg2_M4_N2A_Create();
	void kg2_M4_N3A_Create();
	void kg2_M4_N4A_Create();
	void kg2_M4_N5A_Create();
#pragma endregion

#pragma region to CHM1A

	void kg2_NM20_CHM1A_Create();
	void kg2_NM21_CHM1A_Create();
	void kg2_NM22_CHM1A_Create();

	void kg2_NM23_CHM1A_Create();
	void kg2_NM24_CHM1A_Create();
	void kg2_NM25_CHM1A_Create();
	void kg2_NM26_CHM1A_Create();
	void kg2_NM27_CHM1A_Create();
	void kg2_NM28_CHM1A_Create();
	void kg2_NM29_CHM1A_Create();
	void kg2_NM30_CHM1A_Create();
	void kg2_NM31_CHM1A_Create();
	void kg2_NM32_CHM1A_Create();
	void kg2_NM33_CHM1A_Create();
	void kg2_NM34_CHM1A_Create();



#pragma endregion
#pragma region from CHM1A

	void kg2_CHM1A_NM20_Create();
	void kg2_CHM1A_NM21_Create();
	void kg2_CHM1A_NM22_Create();

	void kg2_CHM1A_NM23_Create();
	void kg2_CHM1A_NM24_Create();
	void kg2_CHM1A_NM25_Create();
	void kg2_CHM1A_NM26_Create();
	void kg2_CHM1A_NM27_Create();
	void kg2_CHM1A_NM28_Create();
	void kg2_CHM1A_NM29_Create();
	void kg2_CHM1A_NM30_Create();
	void kg2_CHM1A_NM31_Create();
	void kg2_CHM1A_NM32_Create();
	void kg2_CHM1A_NM33_Create();
	void kg2_CHM1A_NM34_Create();


#pragma endregion

#pragma region to CHM2A
	void kg2_NM11_CHM2A_Create();
	void kg2_NM12_CHM2A_Create();
	void kg2_NM13_CHM2A_Create();
	void kg2_NM14_CHM2A_Create();
	void kg2_NM15_CHM2A_Create();
	void kg2_NM16_CHM2A_Create();
	void kg2_NM17_CHM2A_Create();
	void kg2_NM18_CHM2A_Create();
	void kg2_NM19_CHM2A_Create();

	void kg2_NM20_CHM2A_Create();
	void kg2_NM21_CHM2A_Create();
	void kg2_NM22_CHM2A_Create();

	void kg2_NM23_CHM2A_Create();
	void kg2_NM24_CHM2A_Create();
	void kg2_NM25_CHM2A_Create();
	void kg2_NM26_CHM2A_Create();
	void kg2_NM27_CHM2A_Create();
	void kg2_NM28_CHM2A_Create();
	void kg2_NM29_CHM2A_Create();
	void kg2_NM30_CHM2A_Create();
	void kg2_NM31_CHM2A_Create();
	void kg2_NM32_CHM2A_Create();
	void kg2_NM33_CHM2A_Create();
	void kg2_NM34_CHM2A_Create();




#pragma endregion
#pragma region from CHM2A

	void kg2_CHM2A_NM11_Create();
	void kg2_CHM2A_NM12_Create();
	void kg2_CHM2A_NM13_Create();
	void kg2_CHM2A_NM14_Create();
	void kg2_CHM2A_NM15_Create();
	void kg2_CHM2A_NM16_Create();
	void kg2_CHM2A_NM17_Create();
	void kg2_CHM2A_NM18_Create();
	void kg2_CHM2A_NM19_Create();

	void kg2_CHM2A_NM20_Create();
	void kg2_CHM2A_NM21_Create();
	void kg2_CHM2A_NM22_Create();

	void kg2_CHM2A_NM23_Create();
	void kg2_CHM2A_NM24_Create();
	void kg2_CHM2A_NM25_Create();
	void kg2_CHM2A_NM26_Create();
	void kg2_CHM2A_NM27_Create();
	void kg2_CHM2A_NM28_Create();
	void kg2_CHM2A_NM29_Create();
	void kg2_CHM2A_NM30_Create();
	void kg2_CHM2A_NM31_Create();
	void kg2_CHM2A_NM32_Create();
	void kg2_CHM2A_NM33_Create();
	void kg2_CHM2A_NM34_Create();

	void kg2_CHM2A_NM1_Create();
	void kg2_CHM2A_NM2_Create();
	void kg2_CHM2A_NM3_Create();
	void kg2_CHM2A_NM4_Create();
	void kg2_CHM2A_NM5_Create();
	void kg2_CHM2A_NM6_Create();
	void kg2_CHM2A_NM7_Create();

	void kg2_CHM2A_M27_Create();

#pragma endregion

#pragma region to CHM3A

	void kg2_NM11_CHM3A_Create();
	void kg2_NM12_CHM3A_Create();
	void kg2_NM13_CHM3A_Create();
	void kg2_NM14_CHM3A_Create();
	void kg2_NM15_CHM3A_Create();
	void kg2_NM16_CHM3A_Create();
	void kg2_NM17_CHM3A_Create();
	void kg2_NM18_CHM3A_Create();
	void kg2_NM19_CHM3A_Create();

	void kg2_NM20_CHM3A_Create();
	void kg2_NM21_CHM3A_Create();
	void kg2_NM22_CHM3A_Create();



#pragma endregion
#pragma region from CHM3A

	void kg2_CHM3A_NM11_Create();
	void kg2_CHM3A_NM12_Create();
	void kg2_CHM3A_NM13_Create();
	void kg2_CHM3A_NM14_Create();
	void kg2_CHM3A_NM15_Create();
	void kg2_CHM3A_NM16_Create();
	void kg2_CHM3A_NM17_Create();
	void kg2_CHM3A_NM18_Create();
	void kg2_CHM3A_NM19_Create();

	void kg2_CHM3A_NM20_Create();
	void kg2_CHM3A_NM21_Create();
	void kg2_CHM3A_NM22_Create();

	void kg2_CHM3A_NM1_Create();
	void kg2_CHM3A_NM2_Create();
	void kg2_CHM3A_NM3_Create();
	void kg2_CHM3A_NM4_Create();
	void kg2_CHM3A_NM5_Create();
	void kg2_CHM3A_NM6_Create();
	void kg2_CHM3A_NM7_Create();

	void kg2_CHM3A_M13_Create();
	void kg2_CHM3A_M27_Create();

#pragma endregion

#pragma region to CHM4A

	void kg2_NM11_CHM4A_Create();
	void kg2_NM12_CHM4A_Create();
	void kg2_NM13_CHM4A_Create();
	void kg2_NM14_CHM4A_Create();
	void kg2_NM15_CHM4A_Create();
	void kg2_NM16_CHM4A_Create();
	void kg2_NM17_CHM4A_Create();
	void kg2_NM18_CHM4A_Create();
	void kg2_NM19_CHM4A_Create();

	void kg2_NM20_CHM4A_Create();
	void kg2_NM21_CHM4A_Create();
	void kg2_NM22_CHM4A_Create();




#pragma endregion
#pragma region from CHM4A

	void kg2_CHM4A_NM11_Create();
	void kg2_CHM4A_NM12_Create();
	void kg2_CHM4A_NM13_Create();
	void kg2_CHM4A_NM14_Create();
	void kg2_CHM4A_NM15_Create();
	void kg2_CHM4A_NM16_Create();
	void kg2_CHM4A_NM17_Create();
	void kg2_CHM4A_NM18_Create();
	void kg2_CHM4A_NM19_Create();

	void kg2_CHM4A_NM20_Create();
	void kg2_CHM4A_NM21_Create();
	void kg2_CHM4A_NM22_Create();

	void kg2_CHM4A_NM1_Create();
	void kg2_CHM4A_NM2_Create();
	void kg2_CHM4A_NM3_Create();
	void kg2_CHM4A_NM4_Create();
	void kg2_CHM4A_NM5_Create();
	void kg2_CHM4A_NM6_Create();
	void kg2_CHM4A_NM7_Create();

	void kg2_CHM4A_M13_Create();
	void kg2_CHM4A_M27_Create();

#pragma endregion

#pragma region to CHM5A

	void kg2_M13_CHM5A_Create();

#pragma endregion
#pragma region from CHM5A

	void kg2_CHM5A_NM1_Create();
	void kg2_CHM5A_NM2_Create();
	void kg2_CHM5A_NM3_Create();
	void kg2_CHM5A_NM4_Create();
	void kg2_CHM5A_NM5_Create();
	void kg2_CHM5A_NM6_Create();
	void kg2_CHM5A_NM7_Create();

	void kg2_CHM5A_M13_Create();
	void kg2_CHM5A_M27_Create();

#pragma endregion

#pragma region to M22

	void kg2_NM23_M22_Create();
	void kg2_NM24_M22_Create();
	void kg2_NM25_M22_Create();
	void kg2_NM26_M22_Create();
	void kg2_NM27_M22_Create();
	void kg2_NM28_M22_Create();
	void kg2_NM29_M22_Create();
	void kg2_NM30_M22_Create();
	void kg2_NM31_M22_Create();
	void kg2_NM32_M22_Create();
	void kg2_NM33_M22_Create();
	void kg2_NM34_M22_Create();

#pragma endregion
#pragma region from M22

	void kg2_M22_NM23_Create();
	void kg2_M22_NM24_Create();
	void kg2_M22_NM25_Create();
	void kg2_M22_NM26_Create();
	void kg2_M22_NM27_Create();
	void kg2_M22_NM28_Create();
	void kg2_M22_NM29_Create();
	void kg2_M22_NM30_Create();
	void kg2_M22_NM31_Create();
	void kg2_M22_NM32_Create();
	void kg2_M22_NM33_Create();
	void kg2_M22_NM34_Create();

#pragma endregion

#pragma region to CH
	void kg2_N1A_CH_Create();
	void kg2_N2A_CH_Create();
	void kg2_N3A_CH_Create();
	void kg2_N4A_CH_Create();
	void kg2_N5A_CH_Create();

#pragma endregion
#pragma region to M2
	void kg2_M15_M2_Create();

	void kg2_N1A_M2_Create();
	void kg2_N2A_M2_Create();
	void kg2_N3A_M2_Create();
	void kg2_N4A_M2_Create();
	void kg2_N5A_M2_Create();
#pragma endregion

#pragma region to CHD
	void kg2_N1A_CHD_Create();
	void kg2_N2A_CHD_Create();
	void kg2_N3A_CHD_Create();
	void kg2_N4A_CHD_Create();
	void kg2_N5A_CHD_Create();

#pragma endregion
#pragma region to M4
	void kg2_M15_M4_Create();

	void kg2_N1A_M4_Create();
	void kg2_N2A_M4_Create();
	void kg2_N3A_M4_Create();
	void kg2_N4A_M4_Create();
	void kg2_N5A_M4_Create();
#pragma endregion

#pragma region from M6

	void kg2_M6_NM1_Create();
	void kg2_M6_NM2_Create();
	void kg2_M6_NM3_Create();
	void kg2_M6_NM4_Create();
	void kg2_M6_NM5_Create();
	void kg2_M6_NM6_Create();
	void kg2_M6_NM7_Create();

	void kg2_M6_M27_Create();

	void kg2_M6_NM1B_Create();
	void kg2_M6_NM2B_Create();
	void kg2_M6_NM3B_Create();
	void kg2_M6_NM4B_Create();

#pragma region dop

	void kg2_CHM2A_NM1B_Create();
	void kg2_CHM2A_NM2B_Create();
	void kg2_CHM2A_NM3B_Create();
	void kg2_CHM2A_NM4B_Create();

	void kg2_CHM3A_NM1B_Create();
	void kg2_CHM3A_NM2B_Create();
	void kg2_CHM3A_NM3B_Create();
	void kg2_CHM3A_NM4B_Create();

	void kg2_CHM4A_NM1B_Create();
	void kg2_CHM4A_NM2B_Create();
	void kg2_CHM4A_NM3B_Create();
	void kg2_CHM4A_NM4B_Create();

	void kg2_CHM5A_NM1B_Create();
	void kg2_CHM5A_NM2B_Create();
	void kg2_CHM5A_NM3B_Create();
	void kg2_CHM5A_NM4B_Create();



#pragma endregion

#pragma endregion


#pragma region OUT_voids

	//void kg2_1CHP_RADIOUZEL_Create();
	//void kg2_1UPCH_RADIOUZEL_Create();

#pragma endregion

#pragma endregion
#pragma region CreateEnd


#pragma region from M13

	void kg2_M13_CHM4A_CreateEnd();
	void kg2_M13_CHM3A_CreateEnd();

#pragma endregion

#pragma region  M5
	void kg2_M5_M12_CreateEnd();
	void kg2_M5_CHM5A_CreateEnd();
	void kg2_M5_CHM4A_CreateEnd();
	void kg2_M5_CHM3A_CreateEnd();

	void kg2_M12_M5_CreateEnd();
	void kg2_CHM5A_M5_CreateEnd();
	void kg2_CHM4A_M5_CreateEnd();
	void kg2_CHM3A_M5_CreateEnd();
#pragma endregion

#pragma region from CH

	void kg2_CH_N1A_CreateEnd();
	void kg2_CH_N2A_CreateEnd();
	void kg2_CH_N3A_CreateEnd();
	void kg2_CH_N4A_CreateEnd();
	void kg2_CH_N5A_CreateEnd();

#pragma endregion
#pragma region from M2
	void kg2_M2_M15_CreateEnd();

	void kg2_M2_N1A_CreateEnd();
	void kg2_M2_N2A_CreateEnd();
	void kg2_M2_N3A_CreateEnd();
	void kg2_M2_N4A_CreateEnd();
	void kg2_M2_N5A_CreateEnd();
#pragma endregion

#pragma region from CHD
	void kg2_CHD_N1A_CreateEnd();
	void kg2_CHD_N2A_CreateEnd();
	void kg2_CHD_N3A_CreateEnd();
	void kg2_CHD_N4A_CreateEnd();
	void kg2_CHD_N5A_CreateEnd();

#pragma endregion
#pragma region from M4
	void kg2_M4_M15_CreateEnd();

	void kg2_M4_N1A_CreateEnd();
	void kg2_M4_N2A_CreateEnd();
	void kg2_M4_N3A_CreateEnd();
	void kg2_M4_N4A_CreateEnd();
	void kg2_M4_N5A_CreateEnd();
#pragma endregion

#pragma region to CHM1A

	void kg2_NM20_CHM1A_CreateEnd();
	void kg2_NM21_CHM1A_CreateEnd();
	void kg2_NM22_CHM1A_CreateEnd();

	void kg2_NM23_CHM1A_CreateEnd();
	void kg2_NM24_CHM1A_CreateEnd();
	void kg2_NM25_CHM1A_CreateEnd();
	void kg2_NM26_CHM1A_CreateEnd();
	void kg2_NM27_CHM1A_CreateEnd();
	void kg2_NM28_CHM1A_CreateEnd();
	void kg2_NM29_CHM1A_CreateEnd();
	void kg2_NM30_CHM1A_CreateEnd();
	void kg2_NM31_CHM1A_CreateEnd();
	void kg2_NM32_CHM1A_CreateEnd();
	void kg2_NM33_CHM1A_CreateEnd();
	void kg2_NM34_CHM1A_CreateEnd();

	void kg2_NM20_1AP_CreateEnd();
	void kg2_NM21_1AP_CreateEnd();
	void kg2_NM22_1AP_CreateEnd();

	void kg2_NM23_1AP_CreateEnd();
	void kg2_NM24_1AP_CreateEnd();
	void kg2_NM25_1AP_CreateEnd();
	void kg2_NM26_1AP_CreateEnd();
	void kg2_NM27_1AP_CreateEnd();
	void kg2_NM28_1AP_CreateEnd();
	void kg2_NM29_1AP_CreateEnd();
	void kg2_NM30_1AP_CreateEnd();
	void kg2_NM31_1AP_CreateEnd();
	void kg2_NM32_1AP_CreateEnd();
	void kg2_NM33_1AP_CreateEnd();
	void kg2_NM34_1AP_CreateEnd();

#pragma endregion
#pragma region from CHM1A

	void kg2_CHM1A_NM20_CreateEnd();
	void kg2_CHM1A_NM21_CreateEnd();
	void kg2_CHM1A_NM22_CreateEnd();

	void kg2_CHM1A_NM23_CreateEnd();
	void kg2_CHM1A_NM24_CreateEnd();
	void kg2_CHM1A_NM25_CreateEnd();
	void kg2_CHM1A_NM26_CreateEnd();
	void kg2_CHM1A_NM27_CreateEnd();
	void kg2_CHM1A_NM28_CreateEnd();
	void kg2_CHM1A_NM29_CreateEnd();
	void kg2_CHM1A_NM30_CreateEnd();
	void kg2_CHM1A_NM31_CreateEnd();
	void kg2_CHM1A_NM32_CreateEnd();
	void kg2_CHM1A_NM33_CreateEnd();
	void kg2_CHM1A_NM34_CreateEnd();


#pragma endregion

#pragma region to CHM2A
	void kg2_NM11_CHM2A_CreateEnd();
	void kg2_NM12_CHM2A_CreateEnd();
	void kg2_NM13_CHM2A_CreateEnd();
	void kg2_NM14_CHM2A_CreateEnd();
	void kg2_NM15_CHM2A_CreateEnd();
	void kg2_NM16_CHM2A_CreateEnd();
	void kg2_NM17_CHM2A_CreateEnd();
	void kg2_NM18_CHM2A_CreateEnd();
	void kg2_NM19_CHM2A_CreateEnd();

	void kg2_NM20_CHM2A_CreateEnd();
	void kg2_NM21_CHM2A_CreateEnd();
	void kg2_NM22_CHM2A_CreateEnd();

	void kg2_NM23_CHM2A_CreateEnd();
	void kg2_NM24_CHM2A_CreateEnd();
	void kg2_NM25_CHM2A_CreateEnd();
	void kg2_NM26_CHM2A_CreateEnd();
	void kg2_NM27_CHM2A_CreateEnd();
	void kg2_NM28_CHM2A_CreateEnd();
	void kg2_NM29_CHM2A_CreateEnd();
	void kg2_NM30_CHM2A_CreateEnd();
	void kg2_NM31_CHM2A_CreateEnd();
	void kg2_NM32_CHM2A_CreateEnd();
	void kg2_NM33_CHM2A_CreateEnd();
	void kg2_NM34_CHM2A_CreateEnd();



#pragma endregion
#pragma region from CHM2A

	void kg2_CHM2A_NM11_CreateEnd();
	void kg2_CHM2A_NM12_CreateEnd();
	void kg2_CHM2A_NM13_CreateEnd();
	void kg2_CHM2A_NM14_CreateEnd();
	void kg2_CHM2A_NM15_CreateEnd();
	void kg2_CHM2A_NM16_CreateEnd();
	void kg2_CHM2A_NM17_CreateEnd();
	void kg2_CHM2A_NM18_CreateEnd();
	void kg2_CHM2A_NM19_CreateEnd();

	void kg2_CHM2A_NM20_CreateEnd();
	void kg2_CHM2A_NM21_CreateEnd();
	void kg2_CHM2A_NM22_CreateEnd();

	void kg2_CHM2A_NM23_CreateEnd();
	void kg2_CHM2A_NM24_CreateEnd();
	void kg2_CHM2A_NM25_CreateEnd();
	void kg2_CHM2A_NM26_CreateEnd();
	void kg2_CHM2A_NM27_CreateEnd();
	void kg2_CHM2A_NM28_CreateEnd();
	void kg2_CHM2A_NM29_CreateEnd();
	void kg2_CHM2A_NM30_CreateEnd();
	void kg2_CHM2A_NM31_CreateEnd();
	void kg2_CHM2A_NM32_CreateEnd();
	void kg2_CHM2A_NM33_CreateEnd();
	void kg2_CHM2A_NM34_CreateEnd();

	void kg2_CHM2A_NM1_CreateEnd();
	void kg2_CHM2A_NM2_CreateEnd();
	void kg2_CHM2A_NM3_CreateEnd();
	void kg2_CHM2A_NM4_CreateEnd();
	void kg2_CHM2A_NM5_CreateEnd();
	void kg2_CHM2A_NM6_CreateEnd();
	void kg2_CHM2A_NM7_CreateEnd();

	void kg2_CHM2A_M27_CreateEnd();

#pragma endregion

#pragma region to CHM3A

	void kg2_NM11_CHM3A_CreateEnd();
	void kg2_NM12_CHM3A_CreateEnd();
	void kg2_NM13_CHM3A_CreateEnd();
	void kg2_NM14_CHM3A_CreateEnd();
	void kg2_NM15_CHM3A_CreateEnd();
	void kg2_NM16_CHM3A_CreateEnd();
	void kg2_NM17_CHM3A_CreateEnd();
	void kg2_NM18_CHM3A_CreateEnd();
	void kg2_NM19_CHM3A_CreateEnd();

	void kg2_NM20_CHM3A_CreateEnd();
	void kg2_NM21_CHM3A_CreateEnd();
	void kg2_NM22_CHM3A_CreateEnd();




#pragma endregion
#pragma region from CHM3A

	void kg2_CHM3A_NM11_CreateEnd();
	void kg2_CHM3A_NM12_CreateEnd();
	void kg2_CHM3A_NM13_CreateEnd();
	void kg2_CHM3A_NM14_CreateEnd();
	void kg2_CHM3A_NM15_CreateEnd();
	void kg2_CHM3A_NM16_CreateEnd();
	void kg2_CHM3A_NM17_CreateEnd();
	void kg2_CHM3A_NM18_CreateEnd();
	void kg2_CHM3A_NM19_CreateEnd();

	void kg2_CHM3A_NM20_CreateEnd();
	void kg2_CHM3A_NM21_CreateEnd();
	void kg2_CHM3A_NM22_CreateEnd();

	void kg2_CHM3A_NM1_CreateEnd();
	void kg2_CHM3A_NM2_CreateEnd();
	void kg2_CHM3A_NM3_CreateEnd();
	void kg2_CHM3A_NM4_CreateEnd();
	void kg2_CHM3A_NM5_CreateEnd();
	void kg2_CHM3A_NM6_CreateEnd();
	void kg2_CHM3A_NM7_CreateEnd();

	void kg2_CHM3A_M13_CreateEnd();
	void kg2_CHM3A_M27_CreateEnd();

#pragma endregion

#pragma region to CHM4A

	void kg2_NM11_CHM4A_CreateEnd();
	void kg2_NM12_CHM4A_CreateEnd();
	void kg2_NM13_CHM4A_CreateEnd();
	void kg2_NM14_CHM4A_CreateEnd();
	void kg2_NM15_CHM4A_CreateEnd();
	void kg2_NM16_CHM4A_CreateEnd();
	void kg2_NM17_CHM4A_CreateEnd();
	void kg2_NM18_CHM4A_CreateEnd();
	void kg2_NM19_CHM4A_CreateEnd();

	void kg2_NM20_CHM4A_CreateEnd();
	void kg2_NM21_CHM4A_CreateEnd();
	void kg2_NM22_CHM4A_CreateEnd();




#pragma endregion
#pragma region from CHM4A

	void kg2_CHM4A_NM11_CreateEnd();
	void kg2_CHM4A_NM12_CreateEnd();
	void kg2_CHM4A_NM13_CreateEnd();
	void kg2_CHM4A_NM14_CreateEnd();
	void kg2_CHM4A_NM15_CreateEnd();
	void kg2_CHM4A_NM16_CreateEnd();
	void kg2_CHM4A_NM17_CreateEnd();
	void kg2_CHM4A_NM18_CreateEnd();
	void kg2_CHM4A_NM19_CreateEnd();

	void kg2_CHM4A_NM20_CreateEnd();
	void kg2_CHM4A_NM21_CreateEnd();
	void kg2_CHM4A_NM22_CreateEnd();

	void kg2_CHM4A_NM1_CreateEnd();
	void kg2_CHM4A_NM2_CreateEnd();
	void kg2_CHM4A_NM3_CreateEnd();
	void kg2_CHM4A_NM4_CreateEnd();
	void kg2_CHM4A_NM5_CreateEnd();
	void kg2_CHM4A_NM6_CreateEnd();
	void kg2_CHM4A_NM7_CreateEnd();

	void kg2_CHM4A_M13_CreateEnd();
	void kg2_CHM4A_M27_CreateEnd();

#pragma endregion

#pragma region to CHM5A

	void kg2_M13_CHM5A_CreateEnd();

#pragma endregion
#pragma region from CHM5A

	void kg2_CHM5A_NM1_CreateEnd();
	void kg2_CHM5A_NM2_CreateEnd();
	void kg2_CHM5A_NM3_CreateEnd();
	void kg2_CHM5A_NM4_CreateEnd();
	void kg2_CHM5A_NM5_CreateEnd();
	void kg2_CHM5A_NM6_CreateEnd();
	void kg2_CHM5A_NM7_CreateEnd();

	void kg2_CHM5A_M13_CreateEnd();
	void kg2_CHM5A_M27_CreateEnd();

#pragma endregion

#pragma region to M22

	void kg2_NM23_M22_CreateEnd();
	void kg2_NM24_M22_CreateEnd();
	void kg2_NM25_M22_CreateEnd();
	void kg2_NM26_M22_CreateEnd();
	void kg2_NM27_M22_CreateEnd();
	void kg2_NM28_M22_CreateEnd();
	void kg2_NM29_M22_CreateEnd();
	void kg2_NM30_M22_CreateEnd();
	void kg2_NM31_M22_CreateEnd();
	void kg2_NM32_M22_CreateEnd();
	void kg2_NM33_M22_CreateEnd();
	void kg2_NM34_M22_CreateEnd();

#pragma endregion
#pragma region from M22

	void kg2_M22_NM23_CreateEnd();
	void kg2_M22_NM24_CreateEnd();
	void kg2_M22_NM25_CreateEnd();
	void kg2_M22_NM26_CreateEnd();
	void kg2_M22_NM27_CreateEnd();
	void kg2_M22_NM28_CreateEnd();
	void kg2_M22_NM29_CreateEnd();
	void kg2_M22_NM30_CreateEnd();
	void kg2_M22_NM31_CreateEnd();
	void kg2_M22_NM32_CreateEnd();
	void kg2_M22_NM33_CreateEnd();
	void kg2_M22_NM34_CreateEnd();

#pragma endregion

#pragma region to CH
	void kg2_N1A_CH_CreateEnd();
	void kg2_N2A_CH_CreateEnd();
	void kg2_N3A_CH_CreateEnd();
	void kg2_N4A_CH_CreateEnd();
	void kg2_N5A_CH_CreateEnd();

#pragma endregion
#pragma region to M2
	void kg2_M15_M2_CreateEnd();

	void kg2_N1A_M2_CreateEnd();
	void kg2_N2A_M2_CreateEnd();
	void kg2_N3A_M2_CreateEnd();
	void kg2_N4A_M2_CreateEnd();
	void kg2_N5A_M2_CreateEnd();
#pragma endregion

#pragma region to CHD
	void kg2_N1A_CHD_CreateEnd();
	void kg2_N2A_CHD_CreateEnd();
	void kg2_N3A_CHD_CreateEnd();
	void kg2_N4A_CHD_CreateEnd();
	void kg2_N5A_CHD_CreateEnd();

#pragma endregion
#pragma region to M4
	void kg2_M15_M4_CreateEnd();

	void kg2_N1A_M4_CreateEnd();
	void kg2_N2A_M4_CreateEnd();
	void kg2_N3A_M4_CreateEnd();
	void kg2_N4A_M4_CreateEnd();
	void kg2_N5A_M4_CreateEnd();
#pragma endregion

#pragma region from M6

	void kg2_M6_NM1_CreateEnd();
	void kg2_M6_NM2_CreateEnd();
	void kg2_M6_NM3_CreateEnd();
	void kg2_M6_NM4_CreateEnd();
	void kg2_M6_NM5_CreateEnd();
	void kg2_M6_NM6_CreateEnd();
	void kg2_M6_NM7_CreateEnd();

	void kg2_M6_M27_CreateEnd();

	void kg2_M6_NM1B_CreateEnd();
	void kg2_M6_NM2B_CreateEnd();
	void kg2_M6_NM3B_CreateEnd();
	void kg2_M6_NM4B_CreateEnd();

#pragma region dop

	void kg2_CHM2A_NM1B_CreateEnd();
	void kg2_CHM2A_NM2B_CreateEnd();
	void kg2_CHM2A_NM3B_CreateEnd();
	void kg2_CHM2A_NM4B_CreateEnd();

	void kg2_CHM3A_NM1B_CreateEnd();
	void kg2_CHM3A_NM2B_CreateEnd();
	void kg2_CHM3A_NM3B_CreateEnd();
	void kg2_CHM3A_NM4B_CreateEnd();

	void kg2_CHM4A_NM1B_CreateEnd();
	void kg2_CHM4A_NM2B_CreateEnd();
	void kg2_CHM4A_NM3B_CreateEnd();
	void kg2_CHM4A_NM4B_CreateEnd();

	void kg2_CHM5A_NM1B_CreateEnd();
	void kg2_CHM5A_NM2B_CreateEnd();
	void kg2_CHM5A_NM3B_CreateEnd();
	void kg2_CHM5A_NM4B_CreateEnd();





#pragma endregion

#pragma endregion


#pragma region OUT_voids

	//void kg2_1CHP_RADIOUZEL_CreateEnd();
	//void kg2_1UPCH_RADIOUZEL_CreateEnd();

#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Karaganda_3

#pragma region Routers:Def

	Router kg3_PG1_MG1;
	Router kg3_PG1_MG3;
	Router kg3_PG1_MG5;
	Router kg3_PG1_MG7;
	Router kg3_PG1_MG9;

	Router kg3_PG2_MG1;
	Router kg3_PG2_MG3;
	Router kg3_PG2_MG5;
	Router kg3_PG2_MG7;
	Router kg3_PG2_MG9;

	Router kg3_MG1_PG1;
	Router kg3_MG3_PG1;
	Router kg3_MG5_PG1;
	Router kg3_MG7_PG1;
	Router kg3_MG9_PG1;

	Router kg3_MG1_PG2;
	Router kg3_MG3_PG2;
	Router kg3_MG5_PG2;
	Router kg3_MG7_PG2;
	Router kg3_MG9_PG2;

	Router kg3_PG1_gp11;
	Router kg3_PG1_gp12;
	Router kg3_PG1_gp13;
	Router kg3_PG1_gp14;
	Router kg3_PG1_gp15;
	Router kg3_PG1_gp16;
	Router kg3_PG1_gp17;
	Router kg3_PG1_gp18;
	Router kg3_PG1_gp19;
	Router kg3_PG1_gp20;
	Router kg3_PG1_gp21;
	Router kg3_PG1_gp22;
	Router kg3_PG1_gp23;
	Router kg3_PG1_gp24;
	Router kg3_PG1_gp25;
	Router kg3_PG1_gp26;
	Router kg3_PG1_gp27;
	Router kg3_PG1_gp28;
	Router kg3_PG1_gp29;
	Router kg3_PG1_gp30;
	Router kg3_PG1_gp31;
	Router kg3_PG1_gp32;
	Router kg3_PG1_gp33;
	Router kg3_PG1_gp34;

	Router kg3_PG2_gp11;
	Router kg3_PG2_gp12;
	Router kg3_PG2_gp13;
	Router kg3_PG2_gp14;
	Router kg3_PG2_gp15;
	Router kg3_PG2_gp16;
	Router kg3_PG2_gp17;
	Router kg3_PG2_gp18;
	Router kg3_PG2_gp19;
	Router kg3_PG2_gp20;
	Router kg3_PG2_gp21;
	Router kg3_PG2_gp22;
	Router kg3_PG2_gp23;
	Router kg3_PG2_gp24;
	Router kg3_PG2_gp25;
	Router kg3_PG2_gp26;
	Router kg3_PG2_gp27;
	Router kg3_PG2_gp28;
	Router kg3_PG2_gp29;
	Router kg3_PG2_gp30;
	Router kg3_PG2_gp31;
	Router kg3_PG2_gp32;
	Router kg3_PG2_gp33;
	Router kg3_PG2_gp34;

#pragma endregion

	bool IsPaintRouterEnd = true;
	std::vector<FElm*> kg3_arrWay;
	void Init_kg3_arrWay();
	void SetFree_kg3_arrway();
	void kg3_SetRouters();
	
	void kg3_MakeRouter();
	void kg3_PaintRouterEnd(FElm* busy);
#pragma region 87sp
	void pnt_from_97sp();
	void pnt_from_91sp();
	void pnt_from_95sp();
	void pnt_from_89sp();
	void pnt_from_87sp();
#pragma endregion
#pragma region 99sp
	void pnt_from_103sp();
	void pnt_from_101sp();
	void pnt_from_107sp();
	void pnt_from_105sp();
	void pnt_from_99sp();
#pragma endregion
#pragma region 109sp
	void pnt_from_115sp();
	void pnt_from_113sp();
	void pnt_from_117sp();
	void pnt_from_111sp();
	void pnt_from_109sp();
#pragma endregion
#pragma region 119sp
	void pnt_from_127sp();
	void pnt_from_125sp();
	void pnt_from_129sp();
	void pnt_from_123sp();
	void pnt_from_119sp();
#pragma endregion
#pragma region from 303sp

	void pnt_from_307sp();
	void pnt_from_305sp();
	void pnt_from_303sp();

#pragma endregion
	void  kg3_PaintWay(FElm* elm1, FElm* elm2 = nullptr, FElm* elm3 = nullptr, FElm* elm4 = nullptr, FElm* elm5 = nullptr, FElm* elm6 = nullptr, FElm* elm7 = nullptr, FElm* elm8 = nullptr, FElm* elm9 = nullptr, FElm* elm10 = nullptr);



#pragma region CheckSTr



#pragma endregion

#pragma region Routers:Create

#pragma endregion
#pragma region Routers:CreateEnd

#pragma endregion

#pragma endregion


#pragma endregion

};


