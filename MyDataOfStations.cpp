// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDataOfStations.h"


#pragma region class Router Implementation

Router::Router()
{
	sizeRouter = 0;
	arrRouter = new FElm * [0];
}
Router::~Router()
{
	delete[]arrRouter;
}
#pragma region SET ROUTER

void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2)
{
	delete[] arrRouter;
	sizeRouter = 3;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3)
{
	delete[] arrRouter;
	sizeRouter = 4;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4)
{
	delete[] arrRouter;
	sizeRouter = 5;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5)
{
	delete[] arrRouter;
	sizeRouter = 6;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6)
{
	delete[] arrRouter;
	sizeRouter = 7;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7)
{
	delete[] arrRouter;
	sizeRouter = 8;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8)
{
	delete[] arrRouter;
	sizeRouter = 9;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9)
{
	delete[] arrRouter;
	sizeRouter = 10;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10)
{
	delete[] arrRouter;
	sizeRouter = 11;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11)
{
	delete[] arrRouter;
	sizeRouter = 12;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12)
{
	delete[] arrRouter;
	sizeRouter = 13;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13)
{
	delete[] arrRouter;
	sizeRouter = 14;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14)
{
	delete[] arrRouter;
	sizeRouter = 15;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15)
{
	delete[] arrRouter;
	sizeRouter = 16;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14, & elm15 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16)
{
	delete[] arrRouter;
	sizeRouter = 17;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17)
{
	delete[] arrRouter;
	sizeRouter = 18;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18)
{
	delete[] arrRouter;
	sizeRouter = 19;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18};
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19)
{
	delete[] arrRouter;
	sizeRouter = 20;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9, & elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20)
{
	delete[] arrRouter;
	sizeRouter = 21;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21)
{
	delete[] arrRouter;
	sizeRouter = 22;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22)
{
	delete[] arrRouter;
	sizeRouter = 23;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23)
{
	delete[] arrRouter;
	sizeRouter = 24;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24)
{
	delete[] arrRouter;
	sizeRouter = 25;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25)
{
	delete[] arrRouter;
	sizeRouter = 26;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24, & elm25 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26)
{
	delete[] arrRouter;
	sizeRouter = 27;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24, & elm25, & elm26 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27)
{
	delete[] arrRouter;
	sizeRouter = 28;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24, & elm25, & elm26, & elm27 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27, FElm& elm28)
{
	delete[] arrRouter;
	sizeRouter = 29;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24, & elm25, & elm26, & elm27, & elm28 };
}
void Router::SetRouter(FElm& elm0, FElm& elm1, FElm& elm2, FElm& elm3, FElm& elm4, FElm& elm5, FElm& elm6, FElm& elm7, FElm& elm8, FElm& elm9, FElm& elm10, FElm& elm11, FElm& elm12, FElm& elm13, FElm& elm14, FElm& elm15, FElm& elm16, FElm& elm17, FElm& elm18, FElm& elm19, FElm& elm20, FElm& elm21, FElm& elm22, FElm& elm23, FElm& elm24, FElm& elm25, FElm& elm26, FElm& elm27, FElm& elm28, FElm& elm29)
{
	delete[] arrRouter;
	sizeRouter = 30;
	arrRouter = new FElm * [] { &elm0, & elm1, & elm2, & elm3, & elm4, & elm5, & elm6, & elm7, & elm8, & elm9,
		& elm10, & elm11, & elm12, & elm13, & elm14, & elm15, & elm16, & elm17, & elm18, & elm19,
		& elm20, & elm21, & elm22, & elm23, & elm24, & elm25, & elm26, & elm27, & elm28, & elm29 };
}
#pragma endregion
void Router::SetSvetoforDefault()
{
	if (arrRouter[1]->dopstat != EdopStat::Norm)
	{
		if (arrRouter[1]->dopstat == EdopStat::CH
			|| arrRouter[1]->dopstat == EdopStat::CHD
			|| arrRouter[1]->dopstat == EdopStat::CHR
			|| arrRouter[1]->dopstat == EdopStat::N
			|| arrRouter[1]->dopstat == EdopStat::ND)
		{
			arrRouter[1]->stat = EAStat::Red;
			arrRouter[1]->dopstat = EdopStat::Norm;
		}
		else
		{
			arrRouter[1]->stat = EAStat::Grey;
			arrRouter[1]->dopstat = EdopStat::Norm;
		}
	}
}
void Router::ToRouted(EdopStat dopstat)
{
	std::thread t(&Router::ToRoutedInThread, this, dopstat);
	t.detach();
	//for (int i = 0; i < sizeRouter; i++)
	//{
	//	if (i == 0 && arrRouter[i]->stat == EAStat::Busy) continue;
	//	(*arrRouter[i]).dopstat = dopstat;
	//	if (i == 1) continue;
	//	(*arrRouter[i]).stat = EAStat::ToRouted;
	//}
}

void Router::ToRoutedInThread(EdopStat dopstat)
{
	Sleep(5);
	//FElm* elm = nullptr;
	for (int i = 1; i < sizeRouter; i++)
	{
	/*	if (i == 0 && arrRouter[i]->stat != EAStat::Free) continue;
		if (i == 0 && dopstat == EdopStat::N) continue;
		if (i == 0 && dopstat == EdopStat::ND) continue;
		if (i == 0 && dopstat == EdopStat::CH) continue;
		if (i == 0 && dopstat == EdopStat::CHD) continue;
		if (i == 0 && dopstat == EdopStat::CHR) continue;*/
		
		//elm = arrRouter[i];
		(*arrRouter[i]).dopstat = dopstat;
		if (i == 1) continue;
		(*arrRouter[i]).stat = EAStat::ToRouted;
	}
}

void Router::ToRoutedToWayBusyInThread(EdopStat dopstat)
{
	Sleep(5);
	for (int i = 1; i < sizeRouter; i++)
	{

	/*	if (i == 0 && arrRouter[i]->stat != EAStat::Free) continue;
		if (i == 0 && dopstat == EdopStat::N) continue;
		if (i == 0 && dopstat == EdopStat::ND) continue;
		if (i == 0 && dopstat == EdopStat::CH) continue;
		if (i == 0 && dopstat == EdopStat::CHD) continue;
		if (i == 0 && dopstat == EdopStat::CHR) continue;*/
		(*arrRouter[i]).dopstat = dopstat;
		if (i == 1 || i == sizeRouter - 1) continue;
		(*arrRouter[i]).stat = EAStat::ToRouted;
	}
}
void Router::ToRoutedToWayBusy(EdopStat dopstat)
{
	std::thread t(&Router::ToRoutedToWayBusyInThread, this, dopstat);
	t.detach();
}
void Router::Routed()
{

	for (int i = 1; i < sizeRouter; i++)
	{
		//if (i == 0 && arrRouter[i]->stat != EAStat::Free) continue;
		if (i == 1)
		{
			arrRouter[i]->stat = EAStat::Green;
			continue;
		}
		(*arrRouter[i]).stat = EAStat::Routed;
	}
}
void Router::ManRouted()
{
	for (int i = 1; i < sizeRouter; i++)
	{
		//if (i == 0 && arrRouter[i]->stat != EAStat::Free) continue;
		if (i == 1)
		{
			arrRouter[i]->stat = EAStat::White;
			continue;
		}
		(*arrRouter[i]).stat = EAStat::ManRouted;
	}
}
void Router::ManSortRouted()
{

	for (int i = 0; i < sizeRouter; i++)
	{
		if (arrRouter[i]->stat == EAStat::Busy) continue;
		arrRouter[i]->stat = EAStat::ManRouted;
	}
}
EdopStat Router::GetRouterDopstat()
{
	for (int i = 0; i < sizeRouter; i++)
	{
		if (i == sizeRouter - 2) return arrRouter[i]->dopstat;
	}
	return EdopStat::Norm;
}
void Router::DeleteDopStat()
{
	for (int i = 0; i < sizeRouter; i++)
	{
		//у выходного маршрута из станции сохраняем допстат последнего элемента
		//для run_router_out
		if (i == sizeRouter - 1)
		{
			if (arrRouter[i]->dopstat != EdopStat::N
				|| arrRouter[i]->dopstat != EdopStat::ND
				|| arrRouter[i]->dopstat != EdopStat::CH
				|| arrRouter[i]->dopstat != EdopStat::CHD
				|| arrRouter[i]->dopstat != EdopStat::CHR)
				break;
		}
		(*arrRouter[i]).dopstat = EdopStat::Norm;
	}
}
void Router::ManRoutedToWayBusy()
{
	for (int i = 0; i < sizeRouter - 1; i++)
	{
		if (i == 0 && arrRouter[i]->stat == EAStat::Busy) continue;
		if (i == 1)
		{
			arrRouter[i]->stat = EAStat::White;
			continue;
		}
		(*arrRouter[i]).stat = EAStat::ManRouted;
	}
}

bool Router::IsFree()
{
	if (arrRouter[0]->dopstat != EdopStat::Norm)
	{
		return false;
	}
	for (int i = 2; i < sizeRouter; i++)
	{
		if ((*arrRouter[i]).stat != EAStat::Free)
		{
			return false;
		}
	}
	return true;
}
bool Router::IsManevrFreeToBusyWay()
{
	if (arrRouter[0]->dopstat != EdopStat::Norm)
	{
		return false;
	}
	FElm endWay = *arrRouter[sizeRouter - 1];
	if (
		endWay.stat == EAStat::Routed
		|| endWay.stat == EAStat::ManRouted
		|| endWay.stat == EAStat::ToRouted
		|| endWay.stat == EAStat::ToManRouted
		)
	{
		return false;
	}
	for (int i = 2; i < sizeRouter - 1; i++)
	{
		if ((*arrRouter[i]).stat != EAStat::Free)
		{
			return false;
		}
	}
	return true;
}
void Router::ToDestroy()
{
	for (int i = 1; i < sizeRouter; i++)
	{
		//if (i == 0 && arrRouter[i]->stat == EAStat::Busy) continue;
		if (i == 1)
		{
			if (arrRouter[i]->dopstat == EdopStat::N
				|| arrRouter[i]->dopstat == EdopStat::ND
				|| arrRouter[i]->dopstat == EdopStat::CH
				|| arrRouter[i]->dopstat == EdopStat::CHD
				|| arrRouter[i]->dopstat == EdopStat::CHR)
				arrRouter[i]->stat = EAStat::Red;
			else arrRouter[i]->stat = EAStat::Grey;
			continue;
		}
		arrRouter[i]->stat = EAStat::ToFree;
	}
}
void Router::Destroy()
{
	for (int i = 1; i < sizeRouter; i++)
	{
		//if (i == 0 && arrRouter[i]->stat == EAStat::Busy) continue;
		arrRouter[i]->dopstat = EdopStat::Norm;
		if (i == 1)
		{
			continue;
		}
		arrRouter[i]->stat = EAStat::Free;
	}
	if (arrRouter[0]->num != 0 || arrRouter[0]->dopn != 0) arrRouter[0]->stat = EAStat::Busy;
	if (arrRouter[sizeRouter - 1]->num != 0 || arrRouter[sizeRouter - 1]->dopn != 0) arrRouter[sizeRouter - 1]->stat = EAStat::Busy;
}

#pragma endregion
#pragma region class TrainReestr

FOtcep* Train::GetOtcepFromNumber(int numberOtcep)
{

	if (numberOtcep == 1) return &otcep_1;
	if (numberOtcep == 2) return &otcep_2;
	if (numberOtcep == 3) return &otcep_3;
	if (numberOtcep == 4) return &otcep_4;
	if (numberOtcep == 5) return &otcep_5;
	if (numberOtcep == 6) return &otcep_6;
	if (numberOtcep == 7) return &otcep_7;
	if (numberOtcep == 8) return &otcep_8;
	if (numberOtcep == 9) return &otcep_9;
	if (numberOtcep == 10) return &otcep_10;

	return nullptr;
}

FOtcep* Train::GetFreeOtcep()
{
	if (otcep_1.IsOtcepFree()) return &otcep_1;
	if (otcep_2.IsOtcepFree()) return &otcep_2;
	if (otcep_3.IsOtcepFree()) return &otcep_3;
	if (otcep_4.IsOtcepFree()) return &otcep_4;
	if (otcep_5.IsOtcepFree()) return &otcep_5;
	if (otcep_6.IsOtcepFree()) return &otcep_6;
	if (otcep_7.IsOtcepFree()) return &otcep_7;
	if (otcep_8.IsOtcepFree()) return &otcep_8;
	if (otcep_9.IsOtcepFree()) return &otcep_9;
	if (otcep_10.IsOtcepFree()) return &otcep_10;

	return nullptr;
}

FOtcep* Train::GetHeadOtcep()
{
	if (otcep_1.GetVagonCount() != 0) return &otcep_1;
	return nullptr;
}

FOtcep* Train::GetTailOtcep()
{
	if (otcep_10.GetVagonCount() != 0) return &otcep_10;
	if (otcep_9.GetVagonCount() != 0) return &otcep_9;
	if (otcep_8.GetVagonCount() != 0) return &otcep_8;
	if (otcep_7.GetVagonCount() != 0) return &otcep_7;
	if (otcep_6.GetVagonCount() != 0) return &otcep_6;
	if (otcep_5.GetVagonCount() != 0) return &otcep_5;
	if (otcep_4.GetVagonCount() != 0) return &otcep_4;
	if (otcep_3.GetVagonCount() != 0) return &otcep_3;
	if (otcep_2.GetVagonCount() != 0) return &otcep_2;
	if (otcep_1.GetVagonCount() != 0) return &otcep_1;
	return nullptr;
}

//Train::Train()
//{
//	number = 0;
//	IsReady = false;
//	OnRels = false;
//	locoEven.SetNumber(0);
//	locoOdd.SetNumber(0);
//	otcep_1.SetOtcepFree();
//	otcep_2.SetOtcepFree();
//	otcep_3.SetOtcepFree();
//	otcep_4.SetOtcepFree();
//	otcep_5.SetOtcepFree();
//	otcep_6.SetOtcepFree();
//	otcep_7.SetOtcepFree();
//	otcep_8.SetOtcepFree();
//	otcep_9.SetOtcepFree();
//	otcep_10.SetOtcepFree();
//
//}
//
//Train::Train(const Train& other)
//{
//	this->IsReady = other.IsReady;
//	this->locoEven = other.locoEven;
//	this->locoOdd = other.locoOdd;
//	this->number = other.number;
//	this->OnRels = other.OnRels;
//	this->otcep_1 = other.otcep_1;
//	this->otcep_2 = other.otcep_2;
//	this->otcep_3 = other.otcep_3;
//	this->otcep_4 = other.otcep_4;
//	this->otcep_5 = other.otcep_5;
//	this->otcep_6 = other.otcep_6;
//	this->otcep_7 = other.otcep_7;
//	this->otcep_8 = other.otcep_8;
//	this->otcep_9 = other.otcep_9;
//	this->otcep_10 = other.otcep_10;
//
//}
//
//Train::~Train()
//{
//	//delete[]arrOtcep;
//}

void Train::SetNumber(short numTrain)
{
	this->number = numTrain;
	//if (numTrain < 1000) return;
	//if (numTrain % 2 != 0) locoOdd.SetNumber(numTrain % 100 + 100);
	//else locoEven.SetNumber(numTrain % 100 + 100);
}

int Train::GetNumber()
{
	return (int)number;
}

FString Train::GetTextNumber()
{
	//FString SNumber = "";
	//std::string str = std::to_string(number);
	//char* asd =(char*) str.c_str();
	//SNumber = (std::to_string(number)).c_str();
	return (std::to_string(number)).c_str();
}

bool Train::SetNumberLocoOdd(short numLocoOdd)
{
	if (locoOdd.GetNumber() == 0 || (locoOdd.GetNumber() != 0 && numLocoOdd == 0))
	{
		locoOdd.SetNumber(numLocoOdd);
		return true;
	}
	return false;
}

bool Train::SetNumberLocoEven(short numLocoEven)
{
	if (locoEven.GetNumber() == 0 || (locoEven.GetNumber() != 0 && numLocoEven == 0))
	{
		locoEven.SetNumber(numLocoEven);
		return true;
	}
	return false;
}

short Train::GetNumberLocoOdd()
{
	return locoOdd.GetNumber();
}

short Train::GetNumberLocoEven()
{
	return locoEven.GetNumber();
}

int Train::GetOtcepCount()
{
	if (otcep_1.IsOtcepFree()) return 0;
	if (otcep_2.IsOtcepFree()) return 1;
	if (otcep_3.IsOtcepFree()) return 2;
	if (otcep_4.IsOtcepFree()) return 3;
	if (otcep_5.IsOtcepFree()) return 4;
	if (otcep_6.IsOtcepFree()) return 5;
	if (otcep_7.IsOtcepFree()) return 6;
	if (otcep_8.IsOtcepFree()) return 7;
	if (otcep_9.IsOtcepFree()) return 8;
	if (otcep_10.IsOtcepFree()) return 9;
	return 10;
}

int Train::GetVagonsCount()
{
	int count = 0;
	for (size_t i = 1; i <= CountOtcepInTrain; i++)
	{
		count += GetOtcepFromNumber(i)->GetVagonCount();
	}
	return count;

}





void Train::SetTrain(Train trainForCopy)
{
	this->locoEven.SetNumber(trainForCopy.locoEven.GetNumber());
	this->locoOdd.SetNumber(trainForCopy.locoOdd.GetNumber());
	IsReady = trainForCopy.IsReady;
	OnRels = trainForCopy.OnRels;

	otcep_1.SetOtcep(trainForCopy.otcep_1);
	otcep_2.SetOtcep(trainForCopy.otcep_2);
	otcep_3.SetOtcep(trainForCopy.otcep_3);
	otcep_4.SetOtcep(trainForCopy.otcep_4);
	otcep_5.SetOtcep(trainForCopy.otcep_5);
	otcep_6.SetOtcep(trainForCopy.otcep_6);
	otcep_7.SetOtcep(trainForCopy.otcep_7);
	otcep_8.SetOtcep(trainForCopy.otcep_8);
	otcep_9.SetOtcep(trainForCopy.otcep_9);
	otcep_10.SetOtcep(trainForCopy.otcep_10);
}


int Train::GetCountVagonInOtcep(ENumberOtcep numberOtcep)
{
	if (numberOtcep == ENumberOtcep::_1) return otcep_1.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_2) return otcep_2.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_3) return otcep_3.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_4) return otcep_4.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_5) return otcep_5.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_6) return otcep_6.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_7) return otcep_7.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_8) return otcep_8.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_9) return otcep_9.GetVagonCount();
	if (numberOtcep == ENumberOtcep::_10) return otcep_10.GetVagonCount();
	return 0;
}

ETypeVagon Train::GetTypeVagonInOtcep(ENumberOtcep numberOtcep)
{
	if (numberOtcep == ENumberOtcep::_1) return otcep_1.GetVagonType();
	if (numberOtcep == ENumberOtcep::_2) return otcep_2.GetVagonType();
	if (numberOtcep == ENumberOtcep::_3) return otcep_3.GetVagonType();
	if (numberOtcep == ENumberOtcep::_4) return otcep_4.GetVagonType();
	if (numberOtcep == ENumberOtcep::_5) return otcep_5.GetVagonType();
	if (numberOtcep == ENumberOtcep::_6) return otcep_6.GetVagonType();
	if (numberOtcep == ENumberOtcep::_7) return otcep_7.GetVagonType();
	if (numberOtcep == ENumberOtcep::_8) return otcep_8.GetVagonType();
	if (numberOtcep == ENumberOtcep::_9) return otcep_9.GetVagonType();
	if (numberOtcep == ENumberOtcep::_10) return otcep_10.GetVagonType();

	return ETypeVagon::notDefine;
}

Station Train::GetStationTargetInOtcep(ENumberOtcep numberOtcep)
{
	if (numberOtcep == ENumberOtcep::_1) return otcep_1.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_2) return otcep_2.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_3) return otcep_3.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_4) return otcep_4.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_5) return otcep_5.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_6) return otcep_6.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_7) return otcep_7.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_8) return otcep_8.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_9) return otcep_9.GetStationTarget();
	if (numberOtcep == ENumberOtcep::_10) return otcep_10.GetStationTarget();

	return Station::Unknown;
}

TargetEndWay Train::GetEndWayInOtcep(ENumberOtcep numberOtcep)
{
	if (numberOtcep == ENumberOtcep::_1) return otcep_1.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_2) return otcep_2.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_3) return otcep_3.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_4) return otcep_4.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_5) return otcep_5.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_6) return otcep_6.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_7) return otcep_7.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_8) return otcep_8.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_9) return otcep_9.GetWayEndTarget();
	if (numberOtcep == ENumberOtcep::_10) return otcep_10.GetWayEndTarget();

	return TargetEndWay::no;
}

ETypeVagon Train::GetTypeVagon(int numberOtcep)
{
	if (numberOtcep == 1) return otcep_1.GetVagonType();
	if (numberOtcep == 2) return otcep_2.GetVagonType();
	if (numberOtcep == 3) return otcep_3.GetVagonType();
	if (numberOtcep == 4) return otcep_4.GetVagonType();
	if (numberOtcep == 5) return otcep_5.GetVagonType();
	if (numberOtcep == 6) return otcep_6.GetVagonType();
	if (numberOtcep == 7) return otcep_7.GetVagonType();
	if (numberOtcep == 8) return otcep_8.GetVagonType();
	if (numberOtcep == 9) return otcep_9.GetVagonType();
	if (numberOtcep == 10) return otcep_10.GetVagonType();

	return ETypeVagon::notDefine;
}

Station Train::GetStationTarget(int numberOtcep)
{
	if (numberOtcep == 1) return otcep_1.GetStationTarget();
	if (numberOtcep == 2) return otcep_2.GetStationTarget();
	if (numberOtcep == 3) return otcep_3.GetStationTarget();
	if (numberOtcep == 4) return otcep_4.GetStationTarget();
	if (numberOtcep == 5) return otcep_5.GetStationTarget();
	if (numberOtcep == 6) return otcep_6.GetStationTarget();
	if (numberOtcep == 7) return otcep_7.GetStationTarget();
	if (numberOtcep == 8) return otcep_8.GetStationTarget();
	if (numberOtcep == 9) return otcep_9.GetStationTarget();
	if (numberOtcep == 10) return otcep_10.GetStationTarget();

	return Station::Unknown;
}

TargetEndWay Train::GetEndWay(int numberOtcep)
{
	if (numberOtcep == 1) return otcep_1.GetWayEndTarget();
	if (numberOtcep == 2) return otcep_2.GetWayEndTarget();
	if (numberOtcep == 3) return otcep_3.GetWayEndTarget();
	if (numberOtcep == 4) return otcep_4.GetWayEndTarget();
	if (numberOtcep == 5) return otcep_5.GetWayEndTarget();
	if (numberOtcep == 6) return otcep_6.GetWayEndTarget();
	if (numberOtcep == 7) return otcep_7.GetWayEndTarget();
	if (numberOtcep == 8) return otcep_8.GetWayEndTarget();
	if (numberOtcep == 9) return otcep_9.GetWayEndTarget();
	if (numberOtcep == 10) return otcep_10.GetWayEndTarget();

	return TargetEndWay::no;
}

FText Train::GetTypeVagonInOtcep(int numOtcep)
{
	FOtcep* otcep = GetOtcepFromNumber(numOtcep);
	if (otcep == nullptr) return FText::FromString("No");
	if (otcep->GetVagonType() == ETypeVagon::Cisterna) return FText::FromString("Cisterna");
	if (otcep->GetVagonType() == ETypeVagon::Poluvagon) return FText::FromString("Poluvagon");
	if (otcep->GetVagonType() == ETypeVagon::Mukovoz) return FText::FromString("Mukovoz");
	if (otcep->GetVagonType() == ETypeVagon::Critiy) return FText::FromString("Critiy");
	if (otcep->GetVagonType() == ETypeVagon::Platforma) return FText::FromString("Platforma");
	return FText::FromString("NoType");
}



FText Train::GetStationTargetInOtcep(int numOtcep)
{
	FOtcep* otcep = GetOtcepFromNumber(numOtcep);
	if (otcep == nullptr) return FText::FromString("No");
	if (otcep->GetStationTarget() == Station::Karabas) return FText::FromString("Karabas");
	if (otcep->GetStationTarget() == Station::Karaganozek) return FText::FromString("Karaganozek");
	if (otcep->GetStationTarget() == Station::Karaganda) return FText::FromString("Karaganda");
	if (otcep->GetStationTarget() == Station::Maykuduk) return FText::FromString("Maykuduk");
	if (otcep->GetStationTarget() == Station::GanaKaraganda) return FText::FromString("GanaKaraganda");
	if (otcep->GetStationTarget() == Station::Karaganda_1) return FText::FromString("Karaganda_1");
	if (otcep->GetStationTarget() == Station::Karaganda_2) return FText::FromString("Karaganda_2");
	if (otcep->GetStationTarget() == Station::Rasporiaditelnaya) return FText::FromString("Rasporiaditelnaya");
	if (otcep->GetStationTarget() == Station::Dubovskaya) return FText::FromString("Dubovskaya");
	if (otcep->GetStationTarget() == Station::GanaAul) return FText::FromString("GanaAul");
	if (otcep->GetStationTarget() == Station::Radiouzel) return FText::FromString("Radiouzel");

	return FText::FromString("NoType");
}

FText Train::GetEndWayInOtcep(int numOtcep)
{
	FOtcep* otcep = GetOtcepFromNumber(numOtcep);
	if (otcep->GetWayEndTarget() == TargetEndWay::no) return FText::FromString("no");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP1) return FText::FromString("1 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP2) return FText::FromString("2 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP3) return FText::FromString("3 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP4) return FText::FromString("4 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP5) return FText::FromString("5 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP6) return FText::FromString("6 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP7) return FText::FromString("7 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP8) return FText::FromString("8 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP9) return FText::FromString("9 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP10) return FText::FromString("10 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP11) return FText::FromString("11 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP12) return FText::FromString("12 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP13) return FText::FromString("13 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP14) return FText::FromString("14 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP15) return FText::FromString("15 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP16) return FText::FromString("16 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP17) return FText::FromString("17 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP18) return FText::FromString("18 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP19) return FText::FromString("19 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP20) return FText::FromString("20 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP21) return FText::FromString("21 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP22) return FText::FromString("22 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP23) return FText::FromString("23 GP");
	if (otcep->GetWayEndTarget() == TargetEndWay::GP24) return FText::FromString("24 GP");

	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M3) return FText::FromString("tupic_M3");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M5) return FText::FromString("tupic_M5");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M6) return FText::FromString("tupic_M6");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M10) return FText::FromString("tupic_M10");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M12) return FText::FromString("tupic_M12");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M14) return FText::FromString("tupic_M14");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M16) return FText::FromString("tupic_M16");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M18) return FText::FromString("tupic_M18");
	if (otcep->GetWayEndTarget() == TargetEndWay::tupic_M20) return FText::FromString("tupic_M20");


	return FText::FromString("No");
}

ENumberOtcep Train::GetNumberOtcepFromInt(int numOtcep)
{
	if (numOtcep == 1) return ENumberOtcep::_1;
	if (numOtcep == 2) return ENumberOtcep::_2;
	if (numOtcep == 3) return ENumberOtcep::_3;
	if (numOtcep == 4) return ENumberOtcep::_4;
	if (numOtcep == 5) return ENumberOtcep::_5;
	if (numOtcep == 6) return ENumberOtcep::_6;
	if (numOtcep == 7) return ENumberOtcep::_7;
	if (numOtcep == 8) return ENumberOtcep::_8;
	if (numOtcep == 9) return ENumberOtcep::_9;
	if (numOtcep == 10) return ENumberOtcep::_10;
	return ENumberOtcep::_0;
}

FText Train::GetTypeVagonINOtcep(ENumberOtcep numberOtcep)
{
	if (GetTypeVagonInOtcep(numberOtcep) == ETypeVagon::Cisterna) return FText::FromString("Cisterna");
	if (GetTypeVagonInOtcep(numberOtcep) == ETypeVagon::Poluvagon) return FText::FromString("Poluvagon");
	if (GetTypeVagonInOtcep(numberOtcep) == ETypeVagon::Mukovoz) return FText::FromString("Mukovoz");
	if (GetTypeVagonInOtcep(numberOtcep) == ETypeVagon::Critiy) return FText::FromString("Critiy");
	if (GetTypeVagonInOtcep(numberOtcep) == ETypeVagon::Platforma) return FText::FromString("Platforma");

	return FText::FromString("notDefine");
}

int Train::GetNumberOtcepFree()
{
	for (size_t i = 1; i <= CountOtcepInTrain; i++)
	{
		if (GetOtcepFromNumber(i)->GetVagonCount() == 0) return i;
	}
	return 0;
}

bool Train::SetOtcep(ETypeVagon typevagon, int count, Station station, TargetEndWay endWay)
{
	if (GetVagonsCount() + count > MaxCountVagonInTrain) return false;
	if (otcep_1.IsOtcepFree())
	{
		otcep_1.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_2.IsOtcepFree())
	{
		otcep_2.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_3.IsOtcepFree())
	{
		otcep_3.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_4.IsOtcepFree())
	{
		otcep_4.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_5.IsOtcepFree())
	{
		otcep_5.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_6.IsOtcepFree())
	{
		otcep_6.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_7.IsOtcepFree())
	{
		otcep_7.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_8.IsOtcepFree())
	{
		otcep_8.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_9.IsOtcepFree())
	{
		otcep_9.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	else if (otcep_10.IsOtcepFree())
	{
		otcep_10.SetOtcep(typevagon, count, station, endWay);
		return true;
	}
	Beep(880, 50);
	Beep(440, 50);
	return false;
}
bool Train::SetOtcep(FOtcep otcep)
{
	if (GetOtcepCount() == 0)
	{
		otcep_1.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 1)
	{
		otcep_2.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 2)
	{
		otcep_3.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 3)
	{
		otcep_4.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 4)
	{
		otcep_5.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 5)
	{
		otcep_6.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 6)
	{
		otcep_7.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 7)
	{
		otcep_8.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 8)
	{
		otcep_9.SetOtcep(otcep);
		return true;
	}
	if (GetOtcepCount() == 9)
	{
		otcep_10.SetOtcep(otcep);
		return true;
	}
	Beep(880, 50);
	Beep(440, 50);
	return false;
}

void Train::SetTrainFree()
{

	IsReady = false;
	//OnRels = false;
	locoEven.SetNumber(0);
	locoOdd.SetNumber(0);
	SetAllOtcepFree();
}
void Train::SetOnRelsFalse()
{
	OnRels = false;
}
void Train::SetAllOtcepFree()
{
	otcep_1.SetOtcepFree();
	otcep_2.SetOtcepFree();
	otcep_3.SetOtcepFree();
	otcep_4.SetOtcepFree();
	otcep_5.SetOtcepFree();
	otcep_6.SetOtcepFree();
	otcep_7.SetOtcepFree();
	otcep_8.SetOtcepFree();
	otcep_9.SetOtcepFree();
	otcep_10.SetOtcepFree();
}

void Train::SetTrainReady()
{
	IsReady = true;
}
void Train::SetOnRels()
{
	IsReady = false;
	OnRels = true;
}
bool Train::IsTrainFree()
{
	if (!IsReady && !OnRels) return true;
	return false;
}
bool Train::IsTrainReady()
{

	return IsReady;
}
bool Train::IsTrainOnRels()
{

	return OnRels;
}
bool Train::IsThereOneAnyLoco()
{
	if (!locoOdd.GetNumber() == 0 && locoEven.GetNumber() == 0) return false;
	else return true;
}
bool Train::IsThereLocoOdd()
{
	if (locoOdd.GetNumber() != 0) return true;
	return false;
}
bool Train::IsThereLocoEven()
{
	if (locoEven.GetNumber() != 0) return true;
	return false;
}
bool Train::SdvigOtcepsToTail()
{
	if (GetFreeOtcep() == 0) return false;

	otcep_10.SetOtcep(otcep_9);
	otcep_9.SetOtcep(otcep_8);
	otcep_8.SetOtcep(otcep_7);
	otcep_7.SetOtcep(otcep_6);
	otcep_6.SetOtcep(otcep_5);
	otcep_5.SetOtcep(otcep_4);
	otcep_4.SetOtcep(otcep_3);
	otcep_3.SetOtcep(otcep_2);
	otcep_2.SetOtcep(otcep_1);

	otcep_1.SetOtcepFree();
	return true;
}
bool Train::SdvigOtcepsToHead()
{
	if (!otcep_1.IsOtcepFree()) return false;
	for (size_t i = 2; i <= CountOtcepInTrain; i++)
	{
		GetOtcepFromNumber(i - 1)->SetOtcep(*GetOtcepFromNumber(i));
		if (GetOtcepFromNumber(i)->IsOtcepFree()) break;
		if (i == CountOtcepInTrain) GetOtcepFromNumber(i)->SetOtcepFree();
	}
	return true;
}
void Train::SwapHeadAndTail()
{
	Train trainTmp;

	trainTmp.SetTrainFree();

	while (this->GetOtcepCount() != 0)
	{
		trainTmp.SetOtcep(GetAndMinusTailOtcep());
	}
	while (trainTmp.GetOtcepCount() != 0)
	{
		this->SetOtcep(trainTmp.GetAndMinusHeadOtcep());
	}
}
bool Train::CheckPossAddTrain(Train groupForAdd)
{
	Train mainTmp;
	Train addTmp;
	mainTmp.SetTrain(*this);
	addTmp.SetTrain(groupForAdd);
	return mainTmp.AddTrain(addTmp);

}


bool Train::AddOtcepToHead(FOtcep otcep)
{
	//проверка по общей возможности добавленния
	if (GetVagonsCount() + otcep.GetVagonCount() > MaxCountVagonInTrain) return false;
	//при отсутствии отцепов
	if (GetNumberOtcepFree() == 1)
	{
		GetOtcepFromNumber(1)->SetOtcep(otcep);
		return true;
	}
	//при наличии головного отцепа проверяем возможность добавления
	else if (GetNumberOtcepFree() > 1)
	{
		if (GetOtcepFromNumber(1)->GetVagonType() == otcep.GetVagonType()
			&& GetOtcepFromNumber(1)->GetStationTarget() == otcep.GetStationTarget()
			&& GetOtcepFromNumber(1)->GetWayEndTarget() == otcep.GetWayEndTarget()
			&& GetOtcepFromNumber(1)->GetVagonCount() + otcep.GetVagonCount() < MaxCountVagonInOtcep)
		{
			int countVag = GetOtcepFromNumber(1)->GetVagonCount() + otcep.GetVagonCount();
			GetOtcepFromNumber(1)->SetOtcep(otcep.GetVagonType(), countVag, otcep.GetStationTarget(), otcep.GetWayEndTarget());
			return true;
		}
		else
		{
			if (SdvigOtcepsToTail())
			{
				GetOtcepFromNumber(1)->SetOtcep(otcep);
				return true;
			}
		}
	}
	return false;
}
bool Train::AddOtcepToTail(FOtcep otcep)
{
	//проверка по общей возможности добавленния
	if (GetVagonsCount() + otcep.GetVagonCount() > MaxCountVagonInTrain) return false;
	int numberOtcepForAdd = GetNumberOtcepFree();
	if (numberOtcepForAdd == 1)
	{
		GetFreeOtcep()->SetOtcep(otcep);
		return true;
	}
	else if (numberOtcepForAdd > 1)//при наличии свободного отцепа
	{
		//сначала делаем попытку сложить два отцепа
		if (GetOtcepFromNumber(numberOtcepForAdd - 1)->GetVagonType() == otcep.GetVagonType()
			&& GetOtcepFromNumber(numberOtcepForAdd - 1)->GetStationTarget() == otcep.GetStationTarget()
			&& GetOtcepFromNumber(numberOtcepForAdd - 1)->GetWayEndTarget() == otcep.GetWayEndTarget()
			&& GetOtcepFromNumber(numberOtcepForAdd - 1)->GetVagonCount() + otcep.GetVagonCount() < MaxCountVagonInOtcep)
		{
			int countVag = GetOtcepFromNumber(numberOtcepForAdd - 1)->GetVagonCount() + otcep.GetVagonCount();
			GetOtcepFromNumber(numberOtcepForAdd - 1)->SetOtcep(otcep.GetVagonType(), countVag, otcep.GetStationTarget(), otcep.GetWayEndTarget());
			return true;
		}
		else//при неудаче добавляем "новый" отцеп
		{
			if (GetFreeOtcep() == nullptr) return false;
			GetFreeOtcep()->SetOtcep(otcep);
			return true;
		}
	}
	else //при отсутствии свободных отцепов последняя попытка сложиться с последним отцепом
	{
		if (GetOtcepFromNumber(CountOtcepInTrain)->GetVagonType() == otcep.GetVagonType()
			&& GetOtcepFromNumber(CountOtcepInTrain)->GetStationTarget() == otcep.GetStationTarget()
			&& GetOtcepFromNumber(CountOtcepInTrain)->GetWayEndTarget() == otcep.GetWayEndTarget()
			&& GetOtcepFromNumber(CountOtcepInTrain)->GetVagonCount() + otcep.GetVagonCount() < MaxCountVagonInOtcep)
		{
			int countVag = GetOtcepFromNumber(CountOtcepInTrain)->GetVagonCount() + otcep.GetVagonCount();
			GetOtcepFromNumber(CountOtcepInTrain)->SetOtcep(otcep.GetVagonType(), countVag, otcep.GetStationTarget(), otcep.GetWayEndTarget());
			return true;
		}
	}
	return false;
}

bool Train::AddTrain(Train& trainForAdd)
{

	return false;
}

bool Train::RemoveOtcep(FOtcep otcep)
{
	Train oldTrain = {};
	Train newTrain = {};
	FOtcep operOtcep = {};
	bool rez = false;

	oldTrain.SetTrain(*this);
	oldTrain.SetNumber(this->GetNumber());

	while (oldTrain.GetOtcepCount()>0)
	{
		operOtcep = oldTrain.GetAndMinusHeadOtcep();
		if (operOtcep == otcep && rez == false)
		{
			rez = true;
			continue;
		}
		newTrain.AddOtcepToHead(operOtcep);
	}
	if (newTrain.GetOtcepCount() < GetOtcepCount())
	{
		this->SetTrain(newTrain);
	}

	return rez;
}

FOtcep Train::GetAndMinusTailOtcep()
{
	FOtcep otcepForMinus = {};
	if (GetOtcepCount() == 10)
	{
		otcepForMinus.SetOtcep(otcep_10);
		otcep_10.SetOtcepFree();
	}
	else if (GetOtcepCount() == 9)
	{
		otcepForMinus.SetOtcep(otcep_9);
		otcep_9.SetOtcepFree();
	}
	else if (GetOtcepCount() == 8)
	{
		otcepForMinus.SetOtcep(otcep_8);
		otcep_8.SetOtcepFree();
	}
	else if (GetOtcepCount() == 7)
	{
		otcepForMinus.SetOtcep(otcep_7);
		otcep_7.SetOtcepFree();
	}
	else if (GetOtcepCount() == 6)
	{
		otcepForMinus.SetOtcep(otcep_6);
		otcep_6.SetOtcepFree();
	}
	else if (GetOtcepCount() == 5)
	{
		otcepForMinus.SetOtcep(otcep_5);
		otcep_5.SetOtcepFree();
	}
	else if (GetOtcepCount() == 4)
	{
		otcepForMinus.SetOtcep(otcep_4);
		otcep_4.SetOtcepFree();
	}
	else if (GetOtcepCount() == 3)
	{
		otcepForMinus.SetOtcep(otcep_3);
		otcep_3.SetOtcepFree();
	}
	else if (GetOtcepCount() == 2)
	{
		otcepForMinus.SetOtcep(otcep_2);
		otcep_2.SetOtcepFree();
	}
	else if (GetOtcepCount() == 1)
	{
		otcepForMinus.SetOtcep(otcep_1);
		otcep_1.SetOtcepFree();

	}
	return otcepForMinus;
}

FOtcep Train::GetAndMinusHeadOtcep()
{
	FOtcep otcepForMinus;
	otcepForMinus.SetOtcep(otcep_1);
	otcep_1.SetOtcepFree();
	SdvigOtcepsToHead();

	return otcepForMinus;
}



int Train::IntFromECountVagons(ECountVagons countVagons)
{
	if (countVagons == ECountVagons::_1) return 1;
	if (countVagons == ECountVagons::_2) return 2;
	if (countVagons == ECountVagons::_3) return 3;
	if (countVagons == ECountVagons::_4) return 4;
	if (countVagons == ECountVagons::_5) return 5;
	if (countVagons == ECountVagons::_6) return 6;
	if (countVagons == ECountVagons::_7) return 7;
	if (countVagons == ECountVagons::_8) return 8;
	if (countVagons == ECountVagons::_9) return 9;
	if (countVagons == ECountVagons::_10) return 10;
	if (countVagons == ECountVagons::_11) return 11;
	if (countVagons == ECountVagons::_12) return 12;
	if (countVagons == ECountVagons::_13) return 13;
	if (countVagons == ECountVagons::_14) return 14;
	if (countVagons == ECountVagons::_15) return 15;
	if (countVagons == ECountVagons::_16) return 16;
	if (countVagons == ECountVagons::_17) return 17;
	if (countVagons == ECountVagons::_18) return 18;
	if (countVagons == ECountVagons::_19) return 19;
	if (countVagons == ECountVagons::_20) return 20;

	return 0;
}

//TrainReestr::TrainReestr()
//{
//	SetDefaultNumbersForTrain();
//	for (size_t i = 1; i <= 100; i++)
//	{
//		GetGroupOtcep(i)->SetNumber(i);
//	}
//
//}
//
//TrainReestr::TrainReestr(const TrainReestr& other)
//{
//#pragma region Trains
//	this->train_01 = other.train_01;
//	this->train_02 = other.train_02;
//	this->train_03 = other.train_03;
//	this->train_04 = other.train_04;
//	this->train_05 = other.train_05;
//	this->train_06 = other.train_06;
//	this->train_07 = other.train_07;
//	this->train_08 = other.train_08;
//	this->train_09 = other.train_09;
//	this->train_10 = other.train_10;
//	this->train_11 = other.train_11;
//	this->train_12 = other.train_12;
//	this->train_13 = other.train_13;
//	this->train_14 = other.train_14;
//	this->train_15 = other.train_15;
//	this->train_16 = other.train_16;
//	this->train_17 = other.train_17;
//	this->train_18 = other.train_18;
//	this->train_19 = other.train_19;
//	this->train_20 = other.train_20;
//	this->train_21 = other.train_21;
//	this->train_22 = other.train_22;
//	this->train_23 = other.train_23;
//	this->train_24 = other.train_24;
//	this->train_25 = other.train_25;
//	this->train_26 = other.train_26;
//	this->train_27 = other.train_27;
//	this->train_28 = other.train_28;
//	this->train_29 = other.train_29;
//	this->train_30 = other.train_30;
//	this->train_31 = other.train_31;
//	this->train_32 = other.train_32;
//	this->train_33 = other.train_33;
//	this->train_34 = other.train_34;
//	this->train_35 = other.train_35;
//	this->train_36 = other.train_36;
//	this->train_37 = other.train_37;
//	this->train_38 = other.train_38;
//	this->train_39 = other.train_39;
//	this->train_40 = other.train_40;
//	this->train_41 = other.train_41;
//	this->train_42 = other.train_42;
//	this->train_43 = other.train_43;
//	this->train_44 = other.train_44;
//	this->train_45 = other.train_45;
//	this->train_46 = other.train_46;
//	this->train_47 = other.train_47;
//	this->train_48 = other.train_48;
//	this->train_49 = other.train_49;
//	this->train_50 = other.train_50;
//#pragma endregion
//#pragma region 100
//
//	/*this->groupOtcep_01= other.train_;
//	this->groupOtcep_02= other.train_;
//	this->groupOtcep_03= other.train_;
//	this->groupOtcep_04= other.train_;
//	this->groupOtcep_05= other.train_;
//	this->groupOtcep_06= other.train_;
//	this->groupOtcep_07= other.train_;
//	this->groupOtcep_08= other.train_;
//	this->groupOtcep_09= other.train_;
//	this->groupOtcep_10= other.train_;
//	this->groupOtcep_11= other.train_;
//	this->groupOtcep_12= other.train_;
//	this->groupOtcep_13= other.train_;
//	this->groupOtcep_14= other.train_;
//	this->groupOtcep_15= other.train_;
//	this->groupOtcep_16= other.train_;
//	this->groupOtcep_17= other.train_;
//	this->groupOtcep_18= other.train_;
//	this->groupOtcep_19= other.train_;
//	this->groupOtcep_20= other.train_;
//	this->groupOtcep_21= other.train_;
//	this->groupOtcep_22= other.train_;
//	this->groupOtcep_23= other.train_;
//	this->groupOtcep_24= other.train_;
//	this->groupOtcep_25= other.train_;
//	this->groupOtcep_26= other.train_;
//	this->groupOtcep_27= other.train_;
//	this->groupOtcep_28= other.train_;
//	this->groupOtcep_29= other.train_;
//	this->groupOtcep_30= other.train_;
//	this->groupOtcep_31= other.train_;
//	this->groupOtcep_32= other.train_;
//	this->groupOtcep_33= other.train_;
//	this->groupOtcep_34= other.train_;
//	this->groupOtcep_35= other.train_;
//	this->groupOtcep_36= other.train_;
//	this->groupOtcep_37= other.train_;
//	this->groupOtcep_38= other.train_;
//	this->groupOtcep_39= other.train_;
//	this->groupOtcep_40= other.train_;
//	this->groupOtcep_41= other.train_;
//	this->groupOtcep_42= other.train_;
//	this->groupOtcep_43= other.train_;
//	this->groupOtcep_44= other.train_;
//	this->groupOtcep_45= other.train_;
//	this->groupOtcep_46= other.train_;
//	this->groupOtcep_47= other.train_;
//	this->groupOtcep_48= other.train_;
//	this->groupOtcep_49= other.train_;
//	this->groupOtcep_50= other.train_;
//	this->groupOtcep_51= other.train_;
//	this->groupOtcep_52= other.train_;
//	this->groupOtcep_53= other.train_;
//	this->groupOtcep_54= other.train_;
//	this->groupOtcep_55= other.train_;
//	this->groupOtcep_56= other.train_;
//	this->groupOtcep_57= other.train_;
//	this->groupOtcep_58= other.train_;
//	this->groupOtcep_59= other.train_;
//	this->groupOtcep_60= other.train_;
//	this->groupOtcep_61= other.train_;
//	this->groupOtcep_62= other.train_;
//	this->groupOtcep_63= other.train_;
//	this->groupOtcep_64= other.train_;
//	this->groupOtcep_65= other.train_;
//	this->groupOtcep_66= other.train_;
//	this->groupOtcep_67= other.train_;
//	this->groupOtcep_68= other.train_;
//	this->groupOtcep_69= other.train_;
//	this->groupOtcep_70= other.train_;
//	this->groupOtcep_71= other.train_;
//	this->groupOtcep_72= other.train_;
//	this->groupOtcep_73= other.train_;
//	this->groupOtcep_74= other.train_;
//	this->groupOtcep_75= other.train_;
//	this->groupOtcep_76= other.train_;
//	this->groupOtcep_77= other.train_;
//	this->groupOtcep_78= other.train_;
//	this->groupOtcep_79= other.train_;
//	this->groupOtcep_80= other.train_;
//	this->groupOtcep_81= other.train_;
//	this->groupOtcep_82= other.train_;
//	this->groupOtcep_83= other.train_;
//	this->groupOtcep_84= other.train_;
//	this->groupOtcep_85= other.train_;
//	this->groupOtcep_86= other.train_;
//	this->groupOtcep_87= other.train_;
//	this->groupOtcep_88= other.train_;
//	this->groupOtcep_89= other.train_;
//	this->groupOtcep_90= other.train_;
//	this->groupOtcep_91= other.train_;
//	this->groupOtcep_92= other.train_;
//	this->groupOtcep_93= other.train_;
//	this->groupOtcep_94= other.train_;
//	this->groupOtcep_95= other.train_;
//	this->groupOtcep_96= other.train_;
//	this->groupOtcep_97= other.train_;
//	this->groupOtcep_98= other.train_;
//	this->groupOtcep_99= other.train_;
//	this->groupOtcep_100= other.train_;*/
//
//#pragma endregion	
//}

void TrainReestr::SetNumbersGroupOtcep()
{
	std::vector<Train*> groups = GetArrGroupOtcepInReestr();
	for (size_t i = 0; i < groups.size(); i++)
	{
		groups[i]->SetNumber(i + 1);
	}
}

bool TrainReestr::GetOrSetTrainAndAddOtcep(int gp_way, ETypeVagon vagonType, int vadonCount, Station stationTarget, TargetEndWay endWay)
{
	
	Train* operTrain = GetTrain(gp_way);
	if (operTrain == nullptr)
	{
		operTrain = GetFreeTrain();
		operTrain->SetNumber(gp_way);
	}
	return operTrain->SetOtcep(vagonType, vadonCount, stationTarget, endWay);
}

Train* TrainReestr::GetFreeTrain()
{
	std::vector<Train*> arrTrain = GetArrTrainInReestr();
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->IsTrainFree())
		{
			return arrTrain[i];
		}
	}
	return nullptr;
}

Train* TrainReestr::GetFreeTrainForZaprosSort()
{
	std::vector<Train*> arrTrain = GetArrTrainInReestr();
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->GetOtcepCount() == 0 && arrTrain[i]->GetNumberLocoEven() == 0 && arrTrain[i]->GetNumberLocoOdd() == 0)
		{
			return arrTrain[i];
		}
	}
	return nullptr;
}


bool TrainReestr::SetNumberTrain(int oldNum,int newNum)
{
	if (CheckUniqueNumberTrain(newNum) == false) return false;
	Train* train = GetTrain(oldNum);
	if (train == nullptr) return false;
	train->SetNumber(newNum);
	return true;
}

bool TrainReestr::CheckUniqueNumberTrain(int numTrain)
{
	std::vector<int> arrIntNumTrainInReestr = GetArrNumTrainInReestr();
	for (size_t i = 0; i < arrIntNumTrainInReestr.size(); i++)
	{
		if (arrIntNumTrainInReestr[i] == numTrain) return false;
	}
	return true;
}

std::vector<int> TrainReestr::GetArrNumTrainInReestr()
{
	std::vector<int> arrIntNumTrainInReestr;

	std::vector<Train*> arrTrainInReestr = GetArrTrainInReestr();

	for (size_t i = 0; i < arrTrainInReestr.size(); i++)
	{
		arrIntNumTrainInReestr.push_back(arrTrainInReestr[i]->GetNumber());
	}

	return arrIntNumTrainInReestr;
}

std::vector<Train*> TrainReestr::GetArrTrainInReestr()
{
	std::vector<Train*> rezTrainArr;

	rezTrainArr.push_back(&train_01);
	rezTrainArr.push_back(&train_02);
	rezTrainArr.push_back(&train_03);
	rezTrainArr.push_back(&train_04);
	rezTrainArr.push_back(&train_05);
	rezTrainArr.push_back(&train_06);
	rezTrainArr.push_back(&train_07);
	rezTrainArr.push_back(&train_08);
	rezTrainArr.push_back(&train_09);
	rezTrainArr.push_back(&train_10);
	rezTrainArr.push_back(&train_11);
	rezTrainArr.push_back(&train_12);
	rezTrainArr.push_back(&train_13);
	rezTrainArr.push_back(&train_14);
	rezTrainArr.push_back(&train_15);
	rezTrainArr.push_back(&train_16);
	rezTrainArr.push_back(&train_17);
	rezTrainArr.push_back(&train_18);
	rezTrainArr.push_back(&train_19);
	rezTrainArr.push_back(&train_20);
	rezTrainArr.push_back(&train_21);
	rezTrainArr.push_back(&train_22);
	rezTrainArr.push_back(&train_23);
	rezTrainArr.push_back(&train_24);
	rezTrainArr.push_back(&train_25);
	rezTrainArr.push_back(&train_26);
	rezTrainArr.push_back(&train_27);
	rezTrainArr.push_back(&train_28);
	rezTrainArr.push_back(&train_29);
	rezTrainArr.push_back(&train_30);
	rezTrainArr.push_back(&train_31);
	rezTrainArr.push_back(&train_32);
	rezTrainArr.push_back(&train_33);
	rezTrainArr.push_back(&train_34);
	rezTrainArr.push_back(&train_35);
	rezTrainArr.push_back(&train_36);
	rezTrainArr.push_back(&train_37);
	rezTrainArr.push_back(&train_38);
	rezTrainArr.push_back(&train_39);
	rezTrainArr.push_back(&train_40);
	rezTrainArr.push_back(&train_41);
	rezTrainArr.push_back(&train_42);
	rezTrainArr.push_back(&train_43);
	rezTrainArr.push_back(&train_44);
	rezTrainArr.push_back(&train_45);
	rezTrainArr.push_back(&train_46);
	rezTrainArr.push_back(&train_47);
	rezTrainArr.push_back(&train_48);
	rezTrainArr.push_back(&train_49);
	rezTrainArr.push_back(&train_50);

	return rezTrainArr;
}

std::vector<Train*> TrainReestr::GetArrGroupOtcepInReestr()
{
	std::vector<Train*> rezTrainArr;

	rezTrainArr.push_back(&groupOtcep_01);
	rezTrainArr.push_back(&groupOtcep_02);
	rezTrainArr.push_back(&groupOtcep_03);
	rezTrainArr.push_back(&groupOtcep_04);
	rezTrainArr.push_back(&groupOtcep_05);
	rezTrainArr.push_back(&groupOtcep_06);
	rezTrainArr.push_back(&groupOtcep_07);
	rezTrainArr.push_back(&groupOtcep_08);
	rezTrainArr.push_back(&groupOtcep_09);
	rezTrainArr.push_back(&groupOtcep_10);
	rezTrainArr.push_back(&groupOtcep_11);
	rezTrainArr.push_back(&groupOtcep_12);
	rezTrainArr.push_back(&groupOtcep_13);
	rezTrainArr.push_back(&groupOtcep_14);
	rezTrainArr.push_back(&groupOtcep_15);
	rezTrainArr.push_back(&groupOtcep_16);
	rezTrainArr.push_back(&groupOtcep_17);
	rezTrainArr.push_back(&groupOtcep_18);
	rezTrainArr.push_back(&groupOtcep_19);
	rezTrainArr.push_back(&groupOtcep_20);
	rezTrainArr.push_back(&groupOtcep_21);
	rezTrainArr.push_back(&groupOtcep_22);
	rezTrainArr.push_back(&groupOtcep_23);
	rezTrainArr.push_back(&groupOtcep_24);
	rezTrainArr.push_back(&groupOtcep_25);
	rezTrainArr.push_back(&groupOtcep_26);
	rezTrainArr.push_back(&groupOtcep_27);
	rezTrainArr.push_back(&groupOtcep_28);
	rezTrainArr.push_back(&groupOtcep_29);
	rezTrainArr.push_back(&groupOtcep_30);
	rezTrainArr.push_back(&groupOtcep_31);
	rezTrainArr.push_back(&groupOtcep_32);
	rezTrainArr.push_back(&groupOtcep_33);
	rezTrainArr.push_back(&groupOtcep_34);
	rezTrainArr.push_back(&groupOtcep_35);
	rezTrainArr.push_back(&groupOtcep_36);
	rezTrainArr.push_back(&groupOtcep_37);
	rezTrainArr.push_back(&groupOtcep_38);
	rezTrainArr.push_back(&groupOtcep_39);
	rezTrainArr.push_back(&groupOtcep_40);
	rezTrainArr.push_back(&groupOtcep_41);
	rezTrainArr.push_back(&groupOtcep_42);
	rezTrainArr.push_back(&groupOtcep_43);
	rezTrainArr.push_back(&groupOtcep_44);
	rezTrainArr.push_back(&groupOtcep_45);
	rezTrainArr.push_back(&groupOtcep_46);
	rezTrainArr.push_back(&groupOtcep_47);
	rezTrainArr.push_back(&groupOtcep_48);
	rezTrainArr.push_back(&groupOtcep_49);
	rezTrainArr.push_back(&groupOtcep_50);
	rezTrainArr.push_back(&groupOtcep_51);
	rezTrainArr.push_back(&groupOtcep_52);
	rezTrainArr.push_back(&groupOtcep_53);
	rezTrainArr.push_back(&groupOtcep_54);
	rezTrainArr.push_back(&groupOtcep_55);
	rezTrainArr.push_back(&groupOtcep_56);
	rezTrainArr.push_back(&groupOtcep_57);
	rezTrainArr.push_back(&groupOtcep_58);
	rezTrainArr.push_back(&groupOtcep_09);
	rezTrainArr.push_back(&groupOtcep_60);
	rezTrainArr.push_back(&groupOtcep_61);
	rezTrainArr.push_back(&groupOtcep_62);
	rezTrainArr.push_back(&groupOtcep_63);
	rezTrainArr.push_back(&groupOtcep_64);
	rezTrainArr.push_back(&groupOtcep_65);
	rezTrainArr.push_back(&groupOtcep_66);
	rezTrainArr.push_back(&groupOtcep_67);
	rezTrainArr.push_back(&groupOtcep_68);
	rezTrainArr.push_back(&groupOtcep_69);
	rezTrainArr.push_back(&groupOtcep_70);
	rezTrainArr.push_back(&groupOtcep_71);
	rezTrainArr.push_back(&groupOtcep_72);
	rezTrainArr.push_back(&groupOtcep_73);
	rezTrainArr.push_back(&groupOtcep_74);
	rezTrainArr.push_back(&groupOtcep_75);
	rezTrainArr.push_back(&groupOtcep_76);
	rezTrainArr.push_back(&groupOtcep_77);
	rezTrainArr.push_back(&groupOtcep_78);
	rezTrainArr.push_back(&groupOtcep_79);
	rezTrainArr.push_back(&groupOtcep_80);
	rezTrainArr.push_back(&groupOtcep_81);
	rezTrainArr.push_back(&groupOtcep_82);
	rezTrainArr.push_back(&groupOtcep_83);
	rezTrainArr.push_back(&groupOtcep_84);
	rezTrainArr.push_back(&groupOtcep_85);
	rezTrainArr.push_back(&groupOtcep_86);
	rezTrainArr.push_back(&groupOtcep_87);
	rezTrainArr.push_back(&groupOtcep_88);
	rezTrainArr.push_back(&groupOtcep_89);
	rezTrainArr.push_back(&groupOtcep_90);
	rezTrainArr.push_back(&groupOtcep_91);
	rezTrainArr.push_back(&groupOtcep_92);
	rezTrainArr.push_back(&groupOtcep_93);
	rezTrainArr.push_back(&groupOtcep_94);
	rezTrainArr.push_back(&groupOtcep_95);
	rezTrainArr.push_back(&groupOtcep_96);
	rezTrainArr.push_back(&groupOtcep_97);
	rezTrainArr.push_back(&groupOtcep_98);
	rezTrainArr.push_back(&groupOtcep_99);
	rezTrainArr.push_back(&groupOtcep_100);

	return rezTrainArr;
}

TArray<FString> TrainReestr::GetNumbersAllTrain()
{
	TArray<FString> arrNums;
	std::vector<Train*> arrTrain = GetArrTrainInReestr();
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		arrNums.Add(arrTrain[i]->GetTextNumber());
	}
	return arrNums;
}

TArray<FString> TrainReestr::GetNumbersOnRelsTrain()
{
	TArray<FString> arrNums;
	std::vector<Train*> arrTrain = GetArrTrainInReestr();
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->IsTrainOnRels())
		{
			arrNums.Add(arrTrain[i]->GetTextNumber());
		}
	}
	return arrNums;
}

TArray<FString> TrainReestr::GetNumbersReadyTrain()
{
	TArray<FString> arrNums;
	std::vector<Train*> arrTrain = GetArrTrainInReestr();
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->IsTrainOnRels() == false && arrTrain[i]->GetNumber() != 0)
		{
			arrNums.Add(arrTrain[i]->GetTextNumber());
		}
	}
	return arrNums;
}

bool TrainReestr::SetTrainOtcep(ENumberTrain numTrain, ETypeVagon typeVagon, ECountVagons countVagons, Station stationTarget, TargetEndWay endWayTarget)
{
	Train* operTrain = GetTrain(GenIntNumTrainFromEnumberTrain(numTrain));
	if (operTrain == nullptr) return false;

	return operTrain->SetOtcep(typeVagon, Train::IntFromECountVagons(countVagons), stationTarget, endWayTarget);

}

bool TrainReestr::SetTrainFree(ENumberTrain numTrain)
{

	Train* operTrain = GetTrain(GenIntNumTrainFromEnumberTrain(numTrain));
	if (operTrain == nullptr) return false;

	operTrain->SetTrainFree();
	return true;


}


int TrainReestr::GetCountOtcep(int numTrain)
{

	Train* operTrain = GetTrain(numTrain);
	if (operTrain == nullptr) return -1;
	return operTrain->GetOtcepCount();

}

Train* TrainReestr::GetTrain(int numTrain)
{
	//получаем массив поездов реестра
	std::vector<Train*> arrTrain(GetArrTrainInReestr());
	//ищем совпадение
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->GetNumber() == numTrain)
		{
			return arrTrain[i];
		}
	}
	return GetGroupOtcep(numTrain);

}

Train* TrainReestr::GetTrain(FString numTrain)
{
	//получаем массив поездов реестра
	std::vector<Train*> arrTrain(GetArrTrainInReestr());
	//создаем локальную переменную
	FString operNumTrain = numTrain;
	//преобразуем в int
	int nTrain = FCString::Atoi(*operNumTrain);
	//ищем совпадение
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->GetNumber() == nTrain)
		{
			return arrTrain[i];
		}
	}
	return nullptr;
	/*if (numTrain == "3001" || numTrain == "3002") return &train_01;
	if (numTrain == "3028" || numTrain == "3004") return &train_02;
	if (numTrain == "3005" || numTrain == "3006") return &train_28;
	if (numTrain == "3007" || numTrain == "3008") return &train_04;
	if (numTrain == "3009" || numTrain == "3010") return &train_05;
	if (numTrain == "3011" || numTrain == "3012") return &train_06;
	if (numTrain == "3013" || numTrain == "3014") return &train_07;
	if (numTrain == "3015" || numTrain == "3016") return &train_08;
	if (numTrain == "3017" || numTrain == "3018") return &train_09;
	if (numTrain == "3019" || numTrain == "3020") return &train_10;
	if (numTrain == "3021" || numTrain == "3022") return &train_11;
	if (numTrain == "3023" || numTrain == "3024") return &train_12;
	if (numTrain == "3025" || numTrain == "3026") return &train_13;
	if (numTrain == "3027" || numTrain == "3028") return &train_14;
	if (numTrain == "3029" || numTrain == "3020") return &train_15;
	if (numTrain == "3281" || numTrain == "3282") return &train_16;
	if (numTrain == "3283" || numTrain == "3284") return &train_17;
	if (numTrain == "3285" || numTrain == "3286") return &train_18;
	if (numTrain == "3287" || numTrain == "3288") return &train_19;
	if (numTrain == "3289" || numTrain == "3040") return &train_20;
	if (numTrain == "3041" || numTrain == "3042") return &train_21;
	if (numTrain == "3043" || numTrain == "3044") return &train_22;
	if (numTrain == "3045" || numTrain == "3046") return &train_23;
	if (numTrain == "3047" || numTrain == "3048") return &train_24;
	if (numTrain == "3049" || numTrain == "3050") return &train_25;
	if (numTrain == "3051" || numTrain == "3052") return &train_26;
	if (numTrain == "3053" || numTrain == "3054") return &train_27;
	if (numTrain == "3055" || numTrain == "3056") return &train_28;
	if (numTrain == "3057" || numTrain == "3058") return &train_29;
	if (numTrain == "3059" || numTrain == "3060") return &train_30;
	if (numTrain == "3061" || numTrain == "3062") return &train_31;
	if (numTrain == "3063" || numTrain == "3064") return &train_32;
	if (numTrain == "3065" || numTrain == "3066") return &train_33;
	if (numTrain == "3067" || numTrain == "3068") return &train_34;
	if (numTrain == "3069" || numTrain == "3070") return &train_35;
	if (numTrain == "3071" || numTrain == "3072") return &train_36;
	if (numTrain == "3073" || numTrain == "3074") return &train_37;
	if (numTrain == "3075" || numTrain == "3076") return &train_38;
	if (numTrain == "3077" || numTrain == "3078") return &train_39;
	if (numTrain == "3079" || numTrain == "3080") return &train_40;
	if (numTrain == "3081" || numTrain == "3082") return &train_41;
	if (numTrain == "3083" || numTrain == "3084") return &train_42;
	if (numTrain == "3085" || numTrain == "3086") return &train_43;
	if (numTrain == "3087" || numTrain == "3088") return &train_44;
	if (numTrain == "3089" || numTrain == "3090") return &train_45;
	if (numTrain == "3091" || numTrain == "3092") return &train_46;
	if (numTrain == "3093" || numTrain == "3094") return &train_47;
	if (numTrain == "3095" || numTrain == "3096") return &train_48;
	if (numTrain == "3097" || numTrain == "3098") return &train_49;
	if (numTrain == "3099" || numTrain == "3100") return &train_50;

	return nullptr;*/
}

bool TrainReestr::IsTrainOnRels(int numTrain)
{
	Train* operTrain = GetTrain(numTrain);
	if (operTrain == nullptr) return false;

	bool onrels = operTrain->IsTrainOnRels();
	return onrels;
}

bool TrainReestr::IsNumberFree(int num)
{
	std::vector<Train*> arrTrain(GetArrTrainInReestr());
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		if (arrTrain[i]->GetNumber() == num)
		{
			return false;
		}
	}
	return true;
}

int TrainReestr::GenIntNumTrainFromEnumberTrain(ENumberTrain numberTrain)
{
	if (numberTrain == ENumberTrain::_3001) return 3001;
	if (numberTrain == ENumberTrain::_3002) return 3002;
	if (numberTrain == ENumberTrain::_3028) return 3028;
	if (numberTrain == ENumberTrain::_3004) return 3004;
	if (numberTrain == ENumberTrain::_3005) return 3005;
	if (numberTrain == ENumberTrain::_3006) return 3006;
	if (numberTrain == ENumberTrain::_3007) return 3007;
	if (numberTrain == ENumberTrain::_3008) return 3008;
	if (numberTrain == ENumberTrain::_3009) return 3009;
	if (numberTrain == ENumberTrain::_3010) return 3010;
	if (numberTrain == ENumberTrain::_3011) return 3011;
	if (numberTrain == ENumberTrain::_3012) return 3012;
	if (numberTrain == ENumberTrain::_3013) return 3013;
	if (numberTrain == ENumberTrain::_3014) return 3014;
	if (numberTrain == ENumberTrain::_3015) return 3015;
	if (numberTrain == ENumberTrain::_3016) return 3016;
	if (numberTrain == ENumberTrain::_3017) return 3017;
	if (numberTrain == ENumberTrain::_3018) return 3018;
	if (numberTrain == ENumberTrain::_3019) return 3019;
	if (numberTrain == ENumberTrain::_3020) return 3020;
	if (numberTrain == ENumberTrain::_3021) return 3021;
	if (numberTrain == ENumberTrain::_3022) return 3022;
	if (numberTrain == ENumberTrain::_3023) return 3023;
	if (numberTrain == ENumberTrain::_3024) return 3024;
	if (numberTrain == ENumberTrain::_3025) return 3025;
	if (numberTrain == ENumberTrain::_3026) return 3026;
	if (numberTrain == ENumberTrain::_3027) return 3027;
	if (numberTrain == ENumberTrain::_3028) return 3028;
	if (numberTrain == ENumberTrain::_3029) return 3029;
	if (numberTrain == ENumberTrain::_3030) return 3030;
	if (numberTrain == ENumberTrain::_3031) return 3031;
	if (numberTrain == ENumberTrain::_3032) return 3032;
	if (numberTrain == ENumberTrain::_3033) return 3033;
	if (numberTrain == ENumberTrain::_3034) return 3034;
	if (numberTrain == ENumberTrain::_3035) return 3035;
	if (numberTrain == ENumberTrain::_3036) return 3036;
	if (numberTrain == ENumberTrain::_3037) return 3037;
	if (numberTrain == ENumberTrain::_3038) return 3038;
	if (numberTrain == ENumberTrain::_3039) return 3289;
	if (numberTrain == ENumberTrain::_3040) return 3040;
	if (numberTrain == ENumberTrain::_3041) return 3041;
	if (numberTrain == ENumberTrain::_3042) return 3042;
	if (numberTrain == ENumberTrain::_3043) return 3043;
	if (numberTrain == ENumberTrain::_3044) return 3044;
	if (numberTrain == ENumberTrain::_3045) return 3045;
	if (numberTrain == ENumberTrain::_3046) return 3046;
	if (numberTrain == ENumberTrain::_3047) return 3047;
	if (numberTrain == ENumberTrain::_3048) return 3048;
	if (numberTrain == ENumberTrain::_3049) return 3049;
	if (numberTrain == ENumberTrain::_3050) return 3050;
	if (numberTrain == ENumberTrain::_3051) return 3051;
	if (numberTrain == ENumberTrain::_3052) return 3052;
	if (numberTrain == ENumberTrain::_3053) return 3053;
	if (numberTrain == ENumberTrain::_3054) return 3054;
	if (numberTrain == ENumberTrain::_3055) return 3055;
	if (numberTrain == ENumberTrain::_3056) return 3056;
	if (numberTrain == ENumberTrain::_3057) return 3057;
	if (numberTrain == ENumberTrain::_3058) return 3058;
	if (numberTrain == ENumberTrain::_3059) return 3059;
	if (numberTrain == ENumberTrain::_3060) return 3060;
	if (numberTrain == ENumberTrain::_3061) return 3061;
	if (numberTrain == ENumberTrain::_3062) return 3062;
	if (numberTrain == ENumberTrain::_3063) return 3063;
	if (numberTrain == ENumberTrain::_3064) return 3064;
	if (numberTrain == ENumberTrain::_3065) return 3065;
	if (numberTrain == ENumberTrain::_3066) return 3066;
	if (numberTrain == ENumberTrain::_3067) return 3067;
	if (numberTrain == ENumberTrain::_3068) return 3068;
	if (numberTrain == ENumberTrain::_3069) return 3069;
	if (numberTrain == ENumberTrain::_3070) return 3070;
	if (numberTrain == ENumberTrain::_3071) return 3071;
	if (numberTrain == ENumberTrain::_3072) return 3072;
	if (numberTrain == ENumberTrain::_3073) return 3073;
	if (numberTrain == ENumberTrain::_3074) return 3074;
	if (numberTrain == ENumberTrain::_3075) return 3075;
	if (numberTrain == ENumberTrain::_3076) return 3076;
	if (numberTrain == ENumberTrain::_3077) return 3077;
	if (numberTrain == ENumberTrain::_3078) return 3078;
	if (numberTrain == ENumberTrain::_3079) return 3079;
	if (numberTrain == ENumberTrain::_3080) return 3080;
	if (numberTrain == ENumberTrain::_3081) return 3081;
	if (numberTrain == ENumberTrain::_3082) return 3082;
	if (numberTrain == ENumberTrain::_3083) return 3083;
	if (numberTrain == ENumberTrain::_3084) return 3084;
	if (numberTrain == ENumberTrain::_3085) return 3085;
	if (numberTrain == ENumberTrain::_3086) return 3086;
	if (numberTrain == ENumberTrain::_3087) return 3087;
	if (numberTrain == ENumberTrain::_3088) return 3088;
	if (numberTrain == ENumberTrain::_3089) return 3089;
	if (numberTrain == ENumberTrain::_3090) return 3090;
	if (numberTrain == ENumberTrain::_3091) return 3091;
	if (numberTrain == ENumberTrain::_3092) return 3092;
	if (numberTrain == ENumberTrain::_3093) return 3093;
	if (numberTrain == ENumberTrain::_3094) return 3094;
	if (numberTrain == ENumberTrain::_3095) return 3095;
	if (numberTrain == ENumberTrain::_3096) return 3096;
	if (numberTrain == ENumberTrain::_3097) return 3097;
	if (numberTrain == ENumberTrain::_3098) return 3098;
	if (numberTrain == ENumberTrain::_3099) return 3099;
	if (numberTrain == ENumberTrain::_3100) return 3100;


	return 0;
}

bool TrainReestr::SetReestr(TrainReestr forCopyReestr)
{
	std::vector<Train*> ArrTrainForCopy(forCopyReestr.GetArrTrainInReestr());
	std::vector<Train*> ArrTrainForSet(this->GetArrTrainInReestr());

	for (size_t i = 0; i < ArrTrainForCopy.size(); i++)
	{
		ArrTrainForSet[i]->SetTrain(*ArrTrainForCopy[i]);
	}

	std::vector<Train*> ArrGroupOtcepForCopy(forCopyReestr.GetArrGroupOtcepInReestr());
	std::vector<Train*> ArrGroupOtcepForSet(this->GetArrGroupOtcepInReestr());

	for (size_t i = 0; i < ArrTrainForCopy.size(); i++)
	{
		ArrGroupOtcepForSet[i]->SetTrain(*ArrGroupOtcepForCopy[i]);
	}

	return true;
}

Train* TrainReestr::GetGroupOtcep(int num)
{
	if (num == 1) return &groupOtcep_01;
	if (num == 2) return &groupOtcep_02;
	if (num == 3) return &groupOtcep_03;
	if (num == 4) return &groupOtcep_04;
	if (num == 5) return &groupOtcep_05;
	if (num == 6) return &groupOtcep_06;
	if (num == 7) return &groupOtcep_07;
	if (num == 8) return &groupOtcep_08;
	if (num == 9) return &groupOtcep_09;
	if (num == 10) return &groupOtcep_10;
	if (num == 11) return &groupOtcep_11;
	if (num == 12) return &groupOtcep_12;
	if (num == 13) return &groupOtcep_13;
	if (num == 14) return &groupOtcep_14;
	if (num == 15) return &groupOtcep_15;
	if (num == 16) return &groupOtcep_16;
	if (num == 17) return &groupOtcep_17;
	if (num == 18) return &groupOtcep_18;
	if (num == 19) return &groupOtcep_19;
	if (num == 20) return &groupOtcep_20;
	if (num == 21) return &groupOtcep_21;
	if (num == 22) return &groupOtcep_22;
	if (num == 23) return &groupOtcep_23;
	if (num == 24) return &groupOtcep_24;
	if (num == 25) return &groupOtcep_25;
	if (num == 26) return &groupOtcep_26;
	if (num == 27) return &groupOtcep_27;
	if (num == 28) return &groupOtcep_28;
	if (num == 29) return &groupOtcep_29;
	if (num == 30) return &groupOtcep_30;
	if (num == 31) return &groupOtcep_31;
	if (num == 32) return &groupOtcep_32;
	if (num == 33) return &groupOtcep_33;
	if (num == 34) return &groupOtcep_34;
	if (num == 35) return &groupOtcep_35;
	if (num == 36) return &groupOtcep_36;
	if (num == 37) return &groupOtcep_37;
	if (num == 38) return &groupOtcep_38;
	if (num == 39) return &groupOtcep_39;
	if (num == 40) return &groupOtcep_40;
	if (num == 41) return &groupOtcep_41;
	if (num == 42) return &groupOtcep_42;
	if (num == 43) return &groupOtcep_43;
	if (num == 44) return &groupOtcep_44;
	if (num == 45) return &groupOtcep_45;
	if (num == 46) return &groupOtcep_46;
	if (num == 47) return &groupOtcep_47;
	if (num == 48) return &groupOtcep_48;
	if (num == 49) return &groupOtcep_49;
	if (num == 50) return &groupOtcep_50;
	if (num == 51) return &groupOtcep_51;
	if (num == 52) return &groupOtcep_52;
	if (num == 53) return &groupOtcep_53;
	if (num == 54) return &groupOtcep_54;
	if (num == 55) return &groupOtcep_55;
	if (num == 56) return &groupOtcep_56;
	if (num == 57) return &groupOtcep_57;
	if (num == 58) return &groupOtcep_58;
	if (num == 59) return &groupOtcep_59;
	if (num == 60) return &groupOtcep_60;
	if (num == 61) return &groupOtcep_61;
	if (num == 62) return &groupOtcep_62;
	if (num == 63) return &groupOtcep_63;
	if (num == 64) return &groupOtcep_64;
	if (num == 65) return &groupOtcep_65;
	if (num == 66) return &groupOtcep_66;
	if (num == 67) return &groupOtcep_67;
	if (num == 68) return &groupOtcep_68;
	if (num == 69) return &groupOtcep_69;
	if (num == 70) return &groupOtcep_70;
	if (num == 71) return &groupOtcep_71;
	if (num == 72) return &groupOtcep_72;
	if (num == 73) return &groupOtcep_73;
	if (num == 74) return &groupOtcep_74;
	if (num == 75) return &groupOtcep_75;
	if (num == 76) return &groupOtcep_76;
	if (num == 77) return &groupOtcep_77;
	if (num == 78) return &groupOtcep_78;
	if (num == 79) return &groupOtcep_79;
	if (num == 80) return &groupOtcep_80;
	if (num == 81) return &groupOtcep_81;
	if (num == 82) return &groupOtcep_82;
	if (num == 83) return &groupOtcep_83;
	if (num == 84) return &groupOtcep_84;
	if (num == 85) return &groupOtcep_85;
	if (num == 86) return &groupOtcep_86;
	if (num == 87) return &groupOtcep_87;
	if (num == 88) return &groupOtcep_88;
	if (num == 89) return &groupOtcep_89;
	if (num == 90) return &groupOtcep_90;
	if (num == 91) return &groupOtcep_91;
	if (num == 92) return &groupOtcep_92;
	if (num == 93) return &groupOtcep_93;
	if (num == 94) return &groupOtcep_94;
	if (num == 95) return &groupOtcep_95;
	if (num == 96) return &groupOtcep_96;
	if (num == 97) return &groupOtcep_97;
	if (num == 98) return &groupOtcep_98;
	if (num == 99) return &groupOtcep_99;
	if (num == 100) return &groupOtcep_100;
	return nullptr;
}

void TrainReestr::SetDefaultNumbersForTrain()
{
	train_01.SetNumber(3001);
	train_02.SetNumber(3003);
	train_28.SetNumber(3005);
	train_04.SetNumber(3007);
	train_05.SetNumber(3009);
	train_06.SetNumber(3011);
	train_07.SetNumber(3013);
	train_08.SetNumber(3015);
	train_09.SetNumber(3017);
	train_10.SetNumber(3019);
	train_11.SetNumber(3021);
	train_12.SetNumber(3023);
	train_13.SetNumber(3025);
	train_14.SetNumber(3027);
	train_15.SetNumber(3029);
	train_16.SetNumber(3031);
	train_17.SetNumber(3033);
	train_18.SetNumber(3035);
	train_19.SetNumber(3037);
	train_20.SetNumber(3039);
	train_21.SetNumber(3041);
	train_22.SetNumber(3043);
	train_23.SetNumber(3045);
	train_24.SetNumber(3047);
	train_25.SetNumber(3049);
	train_26.SetNumber(3051);
	train_27.SetNumber(3053);
	train_28.SetNumber(3055);
	train_29.SetNumber(3057);
	train_30.SetNumber(3059);
	train_31.SetNumber(3061);
	train_32.SetNumber(3063);
	train_33.SetNumber(3065);
	train_34.SetNumber(3067);
	train_35.SetNumber(3069);
	train_36.SetNumber(3071);
	train_37.SetNumber(3073);
	train_38.SetNumber(3075);
	train_39.SetNumber(3077);
	train_40.SetNumber(3079);
	train_41.SetNumber(3081);
	train_42.SetNumber(3083);
	train_43.SetNumber(3085);
	train_44.SetNumber(3087);
	train_45.SetNumber(3089);
	train_46.SetNumber(3091);
	train_47.SetNumber(3093);
	train_48.SetNumber(3095);
	train_49.SetNumber(3097);
	train_50.SetNumber(3099);

	groupOtcep_01.SetNumber(1);
	groupOtcep_02.SetNumber(2);
	groupOtcep_03.SetNumber(3);
	groupOtcep_04.SetNumber(4);
	groupOtcep_05.SetNumber(5);
	groupOtcep_06.SetNumber(6);
	groupOtcep_07.SetNumber(7);
	groupOtcep_08.SetNumber(8);
	groupOtcep_09.SetNumber(9);
	groupOtcep_10.SetNumber(10);
	groupOtcep_11.SetNumber(11);
}

void TrainReestr::SetTrainReady(FString numTrain)
{
	Train* operTrain = GetTrain(numTrain);
	if (operTrain == nullptr) return;

	operTrain->SetTrainReady();

}


ETypeVagon TrainReestr::GetTypeVagonOfOtcep(int numTrain, int numOtcep)
{
	Train* train = nullptr;
	train = GetTrain(numTrain);
	if (train == nullptr) return ETypeVagon::notDefine;
	return train->GetTypeVagonInOtcep(Train::GetNumberOtcepFromInt(numOtcep));
}

int TrainReestr::GetCountVagonOfOtcep(int numTrain, int numOtcep)
{
	Train* train = nullptr;
	train = GetTrain(numTrain);
	if (train == nullptr) return -1;
	return train->GetCountVagonInOtcep(Train::GetNumberOtcepFromInt(numOtcep));
}

Train* TrainReestr::GetFreeOddGroupOtcepFromReestr()
{
	Train* groupOtcep = nullptr;
	for (size_t i = 1; i <= 100; i += 2)
	{
		if (GetGroupOtcep(i)->IsTrainFree())
		{
			groupOtcep = GetGroupOtcep(i);
			groupOtcep->SetTrainReady();
			break;
		}
	}
	return groupOtcep;
}
Train* TrainReestr::GetFreeEvenGroupOtcepFromReestr()
{
	Train* groupOtcep = nullptr;
	for (size_t i = 2; i <= 100; i += 2)
	{
		if (GetGroupOtcep(i)->IsTrainFree())
		{
			groupOtcep = GetGroupOtcep(i);
			groupOtcep->SetTrainReady();
			break;
		}
	}
	return groupOtcep;
}
Train* TrainReestr::MinusToOdd(Train* operTrain, int countVagForMinus)
{
	Train* rezultGroupOtcep = nullptr;
	//если поезд нечетный то вычитаем вагоны из головы состава
	if (operTrain->GetNumber() % 2 != 0)
	{
		rezultGroupOtcep = GetFreeOddGroupOtcepFromReestr();
		while (countVagForMinus != 0 || operTrain->GetVagonsCount() != 0)
		{
			if (operTrain->GetHeadOtcep()->GetVagonCount() > countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(operTrain->GetHeadOtcep()->GetVagonType(), countVagForMinus, operTrain->GetHeadOtcep()->GetStationTarget(), operTrain->GetHeadOtcep()->GetWayEndTarget());
				operTrain->GetHeadOtcep()->MinusVagonCount(countVagForMinus);
				countVagForMinus = 0;
				break;
			}
			else if (operTrain->GetHeadOtcep()->GetVagonCount() == countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(*operTrain->GetHeadOtcep());
				operTrain->GetHeadOtcep()->SetOtcepFree();
				operTrain->SdvigOtcepsToHead();
				countVagForMinus = 0;
				break;
			}
			else
			{
				countVagForMinus -= operTrain->GetHeadOtcep()->GetVagonCount();
				rezultGroupOtcep->SetOtcep(*operTrain->GetHeadOtcep());
				operTrain->GetHeadOtcep()->SetOtcepFree();
				operTrain->SdvigOtcepsToHead();
			}
		}
	}
	else
	{
		rezultGroupOtcep = GetFreeOddGroupOtcepFromReestr();
		while (countVagForMinus != 0 || operTrain->GetVagonsCount() != 0)
		{
			if (operTrain->GetTailOtcep()->GetVagonCount() > countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(operTrain->GetTailOtcep()->GetVagonType(), countVagForMinus, operTrain->GetTailOtcep()->GetStationTarget(), operTrain->GetTailOtcep()->GetWayEndTarget());
				operTrain->GetTailOtcep()->MinusVagonCount(countVagForMinus);
				countVagForMinus = 0;
				break;
			}
			else if (operTrain->GetTailOtcep()->GetVagonCount() == countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(*operTrain->GetTailOtcep());
				operTrain->GetTailOtcep()->SetOtcepFree();
				break;
			}
			else
			{
				countVagForMinus -= operTrain->GetTailOtcep()->GetVagonCount();
				rezultGroupOtcep->SetOtcep(*operTrain->GetTailOtcep());
				operTrain->GetTailOtcep()->SetOtcepFree();
			}
		}
	}
	rezultGroupOtcep->SetTrainReady();
	return rezultGroupOtcep;
}
Train* TrainReestr::MinusToEven(Train* operTrain, int countVagForMinus)
{

	Train* rezultGroupOtcep = nullptr;
	//если поезд четный то вычитаем вагоны из головы состава
	if (operTrain->GetNumber() % 2 == 0)
	{
		rezultGroupOtcep = GetFreeOddGroupOtcepFromReestr();

		while (countVagForMinus != 0 || operTrain->GetVagonsCount() != 0)
		{
			if (operTrain->GetHeadOtcep()->GetVagonCount() > countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(operTrain->GetHeadOtcep()->GetVagonType(), countVagForMinus, operTrain->GetHeadOtcep()->GetStationTarget(), operTrain->GetHeadOtcep()->GetWayEndTarget());
				operTrain->GetHeadOtcep()->MinusVagonCount(countVagForMinus);
				countVagForMinus = 0;
				break;
			}
			else if (operTrain->GetHeadOtcep()->GetVagonCount() == countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(*operTrain->GetHeadOtcep());
				operTrain->GetHeadOtcep()->SetOtcepFree();
				operTrain->SdvigOtcepsToHead();
				countVagForMinus = 0;
				break;
			}
			else
			{
				countVagForMinus -= operTrain->GetHeadOtcep()->GetVagonCount();
				rezultGroupOtcep->SetOtcep(*operTrain->GetHeadOtcep());
				operTrain->GetHeadOtcep()->SetOtcepFree();
				operTrain->SdvigOtcepsToHead();
			}
		}
	}
	else
	{
		rezultGroupOtcep = GetFreeOddGroupOtcepFromReestr();
		while (countVagForMinus != 0 || operTrain->GetVagonsCount() != 0)
		{
			if (operTrain->GetTailOtcep()->GetVagonCount() > countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(operTrain->GetTailOtcep()->GetVagonType(), countVagForMinus, operTrain->GetTailOtcep()->GetStationTarget(), operTrain->GetTailOtcep()->GetWayEndTarget());
				operTrain->GetTailOtcep()->MinusVagonCount(countVagForMinus);
				countVagForMinus = 0;
				break;
			}
			else if (operTrain->GetTailOtcep()->GetVagonCount() == countVagForMinus)
			{
				rezultGroupOtcep->SetOtcep(*operTrain->GetTailOtcep());
				operTrain->GetTailOtcep()->SetOtcepFree();
				break;
			}
			else
			{
				countVagForMinus -= operTrain->GetTailOtcep()->GetVagonCount();
				rezultGroupOtcep->SetOtcep(*operTrain->GetTailOtcep());
				operTrain->GetTailOtcep()->SetOtcepFree();
			}
		}
	}
	rezultGroupOtcep->SetTrainReady();
	return rezultGroupOtcep;
}

bool TrainReestr::CheckPossAddGroupOtcepToTrain(Train* mainTrain, Train* addGroup, bool isRouterOdd)
{
	Train mainCheckTrain;
	Train addCheckGroup;
	mainCheckTrain.SetTrain(*mainTrain);
	addCheckGroup.SetTrain(*addGroup);
	return 	AddGroupOtcepToTrain(&mainCheckTrain, &addCheckGroup, isRouterOdd);
}
bool TrainReestr::AddGroupOtcepToTrain(Train* mainTrain, Train* addGroup, bool isRouterOdd)
{
	if (mainTrain == nullptr || addGroup == nullptr) return false;

	int numTrain = mainTrain->GetNumber();
	int numGroup = addGroup->GetNumber();

	//для стыкуемых поездов проверяем совпадение направления
	if (numTrain > 1000 && numGroup > 1000 && (numTrain % 2 != numGroup % 2)) return false;
	FOtcep operOtcep;


	//тупо!
		//4 главных случая: 

	if (numTrain % 2 != 0 && !isRouterOdd)// если поезд нечетный, а маршрут четный то добавляем в голову
	{
#pragma region CheckLoco
		//проверка на отсутствие локомотива голове нечетного
		if (mainTrain->IsThereLocoOdd()) return false;
		//проверка на отсутствие  четного локомотива в пристыковываемой группе
		if (addGroup->IsThereLocoEven()) return false;
		//поверка на наличие токающего локомотива в в пристыковываемой группе
		if (!addGroup->IsThereLocoOdd()) return false;
#pragma endregion
		while (addGroup->GetOtcepCount() != 0)
		{

			if (numGroup % 2 != 0)// 1 подслучай нечетная группа - вычитаем из хвоста группы
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusTailOtcep());
			}
			else// 2 подслучай четная группа - вычитаем из головы
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusHeadOtcep());
			}
			if (!mainTrain->AddOtcepToHead(operOtcep))
			{
				return false;
			}
		}
	}
	else if (numTrain % 2 != 0 && isRouterOdd)// если поезд нечетный, и маршрут нечетный то добавляем в хвост
	{
		while (addGroup->GetOtcepCount() != 0)
		{
#pragma region CheckLoco
			//проверка на отсутствие четного локомотива хвосте главного поезда
			if (mainTrain->IsThereLocoEven()) return false;
			//проверка на отсутствие  нечетного локомотива в пристыковываемой группе
			if (addGroup->IsThereLocoOdd()) return false;
			//проверка на наличие токающего локомотива в в пристыковываемой группе
			if (!addGroup->IsThereLocoEven()) return false;
#pragma endregion
			if (numGroup % 2 != 0)// 3 подслучай нечетная группа - вычитаем из головы группы 
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusHeadOtcep());
			}
			else// 4 одслучай четная группа - вычитаем из хвоста
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusTailOtcep());
			}
			if (!mainTrain->AddOtcepToTail(operOtcep))
			{
				return false;
			}
		}
	}
	else if (numTrain % 2 == 0 && isRouterOdd)// если поезд четный, и маршрут нечетный то добавляем в голову
	{
#pragma region CheckLoco
		//проверка на отсутствие локомотива голове главного поезда
		if (mainTrain->IsThereLocoEven()) return false;
		//проверка на отсутствие  четного локомотива в пристыковываемой группе
		if (addGroup->IsThereLocoOdd()) return false;
		//проверка на наличие токающего локомотива в в пристыковываемой группе
		if (!addGroup->IsThereLocoEven()) return false;
#pragma endregion
		while (addGroup->GetOtcepCount() != 0)
		{


			if (numGroup % 2 != 0)// 5 подслучай нечетная группа - вычитаем из головы группы
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusHeadOtcep());
			}
			else// 6 подслучай четная группа - вычитаем из хвоста
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusTailOtcep());
			}
			if (!mainTrain->AddOtcepToHead(operOtcep))
			{
				return false;
			}
		}
	}
	else if (numTrain % 2 == 0 && !isRouterOdd)// если поезд четный, и маршрут четный то добавляем в хвост
	{
#pragma region CheckLoco
		//проверка на отсутствие локомотива хвосте четного
		if (mainTrain->IsThereLocoOdd()) return false;
		//проверка на отсутствие  четного локомотива в пристыковываемой группе
		if (addGroup->IsThereLocoEven()) return false;
		//проверка на наличие токающего локомотива в в пристыковываемой группе
		if (!addGroup->IsThereLocoOdd()) return false;
#pragma endregion
		while (addGroup->GetOtcepCount() != 0)
		{

			if (numGroup % 2 != 0)// 7 подслучай нечетная группа - вычитаем из хвоста группы
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusHeadOtcep());
			}
			else// 8 подслучай четная группа - вычитаем из головы
			{
				operOtcep.SetOtcep(addGroup->GetAndMinusTailOtcep());
			}
			if (!mainTrain->AddOtcepToTail(operOtcep))
			{
				return false;
			}
		}
	}
	return true;
}

void TrainReestr::SetAllTrainFree()
{
	std::vector<Train*> arrTrain(this->GetArrTrainInReestr());
	std::vector<Train*> arrGroupOtcep(this->GetArrGroupOtcepInReestr());
	for (size_t i = 0; i < arrTrain.size(); i++)
	{
		arrTrain[i]->SetTrainFree();


	}
	for (size_t i = 0; i < arrGroupOtcep.size(); i++)
	{
		arrGroupOtcep[i]->SetTrainFree();
	}
	SetDefaultNumbersForTrain();
	
}

void TrainReestr::CreateTrainExamples_C_1_1()
{
	train_01.SetAllOtcepFree();
	train_02.SetAllOtcepFree();
	train_03.SetAllOtcepFree();
	train_04.SetAllOtcepFree();
	train_05.SetAllOtcepFree();
	train_06.SetAllOtcepFree();
	train_07.SetAllOtcepFree();
	train_08.SetAllOtcepFree();
	train_09.SetAllOtcepFree();
	train_10.SetAllOtcepFree();
	train_11.SetAllOtcepFree();
	train_12.SetAllOtcepFree();
	train_13.SetAllOtcepFree();


	train_01.SetOtcep(ETypeVagon::Cisterna, 10, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 10, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_01.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_01.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_01.SetNumber(1011);
	train_01.SetNumberLocoEven(111);

	train_02.SetOtcep(ETypeVagon::Mukovoz, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 8, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_02.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_02.SetNumber(1012);
	train_02.SetNumberLocoOdd(222);

	train_03.SetOtcep(ETypeVagon::Cisterna, 10, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_03.SetOtcep(ETypeVagon::Poluvagon, 10, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_03.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_03.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_03.SetNumber(1028);
	train_03.SetNumberLocoOdd(333);

	train_04.SetOtcep(ETypeVagon::Mukovoz, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_04.SetOtcep(ETypeVagon::Poluvagon, 8, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_04.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_04.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_04.SetNumber(1004);
	train_04.SetNumberLocoOdd(444);

	train_05.SetOtcep(ETypeVagon::Mukovoz, 5, Station::Karaganozek, TargetEndWay::tupic_M18);
	train_05.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_05.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_05.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_05.SetOtcep(ETypeVagon::Mukovoz, 15, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_05.SetNumber(1005);
	train_05.SetNumberLocoEven(555);

	train_06.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Poluvagon, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Platforma, 3, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_06.SetOtcep(ETypeVagon::Mukovoz, 6, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_06.SetNumber(1006);
	train_06.SetNumberLocoOdd(666);

	train_07.SetOtcep(ETypeVagon::Cisterna, 10, Station::GanaAul, TargetEndWay::tupic_M10);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 10, Station::GanaAul, TargetEndWay::tupic_M16);
	train_07.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_07.SetOtcep(ETypeVagon::Mukovoz, 10, Station::Dubovskaya, TargetEndWay::tupic_M5);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Dubovskaya, TargetEndWay::tupic_M6);
	train_07.SetNumber(1007);
	train_07.SetNumberLocoOdd(777);

	train_08.SetOtcep(ETypeVagon::Mukovoz, 5, Station::Karaganozek, TargetEndWay::tupic_M18);
	train_08.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_08.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Platforma, 3, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 3, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_08.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_08.SetOtcep(ETypeVagon::Mukovoz, 7, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_08.SetNumber(1008);
	train_08.SetNumberLocoEven(888);

	train_09.SetOtcep(ETypeVagon::Cisterna, 10, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_09.SetOtcep(ETypeVagon::Poluvagon, 2, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_09.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_09.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_09.SetOtcep(ETypeVagon::Mukovoz, 6, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_10.SetOtcep(ETypeVagon::Platforma, 4, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_10.SetNumber(1044);
	train_09.SetNumberLocoOdd(999);

	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_10.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_10.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_10.SetOtcep(ETypeVagon::Platforma, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_10.SetNumber(1088);
	train_10.SetNumberLocoOdd(112);

	train_11.SetOtcep(ETypeVagon::Cisterna, 5, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_11.SetOtcep(ETypeVagon::Poluvagon, 7, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_11.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_11.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_11.SetOtcep(ETypeVagon::Platforma, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_11.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_11.SetOtcep(ETypeVagon::Platforma, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_11.SetOtcep(ETypeVagon::Poluvagon, 4, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_11.SetNumber(1555);
	train_11.SetNumberLocoEven(112);

	train_12.SetOtcep(ETypeVagon::Cisterna, 3, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_12.SetOtcep(ETypeVagon::Poluvagon, 3, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_12.SetOtcep(ETypeVagon::Mukovoz, 3, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_12.SetNumber(1058);
	train_12.SetNumberLocoOdd(336);

	train_13.SetOtcep(ETypeVagon::Cisterna, 2, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_13.SetOtcep(ETypeVagon::Mukovoz, 2, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_13.SetOtcep(ETypeVagon::Platforma, 2, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_13.SetNumber(1060);
	train_13.SetNumberLocoEven(339);
}

void TrainReestr::CreateTrainExamplesForSort()
{
	train_01.SetAllOtcepFree();
	train_02.SetAllOtcepFree();
	train_03.SetAllOtcepFree();
	train_04.SetAllOtcepFree();
	train_05.SetAllOtcepFree();
	train_06.SetAllOtcepFree();
	train_07.SetAllOtcepFree();
	train_08.SetAllOtcepFree();
	train_09.SetAllOtcepFree();
	train_10.SetAllOtcepFree();


	train_01.SetOtcep(ETypeVagon::Cisterna, 10, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 10, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_01.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_01.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_01.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_01.SetNumber(1011);
	train_01.SetNumberLocoEven(111);

	train_02.SetOtcep(ETypeVagon::Mukovoz, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 8, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_02.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_02.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_02.SetNumber(1012);
	train_02.SetNumberLocoOdd(222);

	train_03.SetOtcep(ETypeVagon::Cisterna, 10, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_03.SetOtcep(ETypeVagon::Poluvagon, 10, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_03.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_03.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_03.SetNumber(1028);
	train_03.SetNumberLocoOdd(333);

	train_04.SetOtcep(ETypeVagon::Mukovoz, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_04.SetOtcep(ETypeVagon::Poluvagon, 8, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_04.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_04.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_04.SetNumber(1004);
	train_04.SetNumberLocoOdd(444);

	train_05.SetOtcep(ETypeVagon::Mukovoz, 5, Station::Karaganozek, TargetEndWay::tupic_M18);
	train_05.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_05.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_05.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_05.SetOtcep(ETypeVagon::Mukovoz, 15, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_05.SetNumber(1005);
	train_05.SetNumberLocoEven(555);

	train_06.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Poluvagon, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Platforma, 3, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_06.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_06.SetOtcep(ETypeVagon::Mukovoz, 6, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_06.SetNumber(1006);
	train_06.SetNumberLocoOdd(666);

	train_07.SetOtcep(ETypeVagon::Cisterna, 10, Station::GanaAul, TargetEndWay::tupic_M10);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 10, Station::GanaAul, TargetEndWay::tupic_M16);
	train_07.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_07.SetOtcep(ETypeVagon::Mukovoz, 10, Station::Dubovskaya, TargetEndWay::tupic_M5);
	train_07.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Dubovskaya, TargetEndWay::tupic_M6);
	train_07.SetNumber(1007);
	train_07.SetNumberLocoOdd(777);

	train_08.SetOtcep(ETypeVagon::Mukovoz, 5, Station::Karaganozek, TargetEndWay::tupic_M18);
	train_08.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_08.SetOtcep(ETypeVagon::Mukovoz, 8, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Platforma, 3, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 3, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_08.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_08.SetOtcep(ETypeVagon::Mukovoz, 7, Station::Maykuduk, TargetEndWay::tupic_M5);
	train_08.SetNumber(1008);
	train_08.SetNumberLocoEven(888);

	train_09.SetOtcep(ETypeVagon::Cisterna, 10, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_09.SetOtcep(ETypeVagon::Poluvagon, 2, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_09.SetOtcep(ETypeVagon::Cisterna, 8, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_09.SetOtcep(ETypeVagon::Poluvagon, 8, Station::Karaganozek, TargetEndWay::tupic_M20);
	train_09.SetOtcep(ETypeVagon::Mukovoz, 6, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_10.SetOtcep(ETypeVagon::Platforma, 4, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_10.SetNumber(1044);
	train_09.SetNumberLocoOdd(999);

	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Karaganozek, TargetEndWay::tupic_M10);
	train_10.SetOtcep(ETypeVagon::Poluvagon, 5, Station::Karaganozek, TargetEndWay::tupic_M16);
	train_10.SetOtcep(ETypeVagon::Mukovoz, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Poluvagon, 5, Station::GanaKaraganda, TargetEndWay::tupic_M6);
	train_10.SetOtcep(ETypeVagon::Platforma, 10, Station::GanaKaraganda, TargetEndWay::tupic_M5);
	train_10.SetOtcep(ETypeVagon::Cisterna, 5, Station::Maykuduk, TargetEndWay::tupic_M6);
	train_10.SetNumber(1088);
	train_10.SetNumberLocoOdd(112);


}

#pragma endregion
#pragma region Class Otcep
//FOtcep::FOtcep()
//{
//	typevagon = ETypeVagon::notDefine;
//	count = 0;
//	station = Station::Unknown;
//	wayEnd = TargetEndWay::no;
//}

void FOtcep::SetOtcep(ETypeVagon typevag, short countvagon, Station stationTarget, TargetEndWay wayEndTarget)
{
	this->typevagon = typevag;
	this->count = countvagon;
	this->station = stationTarget;
	this->wayEnd = wayEndTarget;
}
void FOtcep::SetOtcep(FOtcep otcepForAdd)
{
	this->typevagon = otcepForAdd.typevagon;
	this->count = otcepForAdd.count;
	this->station = otcepForAdd.station;
	this->wayEnd = otcepForAdd.wayEnd;
}

void FOtcep::SetOtcepFree()
{
	this->typevagon = ETypeVagon::notDefine;
	this->count = 0;
	this->station = Station::Unknown;
	this->wayEnd = TargetEndWay::no;
}
ETypeVagon FOtcep::GetVagonType()
{
	return this->typevagon;
}
short FOtcep::GetVagonCount()
{
	return this->count;
}
bool FOtcep::MinusVagonCount(int countvagForMinus)
{
	if (this->count >= countvagForMinus)
	{
		this->count -= countvagForMinus;
		return true;
	}
	return false;
}
bool FOtcep::PlusVagonCount(int countvagForPlus)
{
	if (count + countvagForPlus > MaxCountVagonInOtcep) return false;
	this->count += countvagForPlus;
	return true;
}
Station FOtcep::GetStationTarget()
{
	return this->station;
}
TargetEndWay FOtcep::GetWayEndTarget()
{
	return this->wayEnd;
}
bool FOtcep::IsOtcepFree()
{
	if (count == 0) return true;
	return false;
}
bool FOtcep::operator==(const FOtcep& otherOtcep)
{
	if (
		this->typevagon == otherOtcep.typevagon
		&& this->count == otherOtcep.count
		&& this->station == otherOtcep.station
		&& this->wayEnd == otherOtcep.wayEnd
		) return true;
	return false;
}
bool FOtcep::operator!=(const FOtcep& otherOtcep)
{
	if (
		this->typevagon == otherOtcep.typevagon
		&& this->count == otherOtcep.count
		&& this->station == otherOtcep.station
		&& this->wayEnd == otherOtcep.wayEnd
		) return false;
	return true;
}
//FOtcep FOtcep::operator=(const FOtcep& otcep)
//{
//	FOtcep otcep1;
//	otcep1.count = otcep.count;
//	otcep1.station = otcep.station;
//	otcep1.typevagon = otcep.typevagon;
//	otcep1.wayEnd = otcep.wayEnd;
//	return otcep1;
//}

#pragma endregion
#pragma region Loco
Loco::Loco()
{
	numLoc = 0;
}

void Loco::SetNumber(short num)
{
	if (numLoc == 0) numLoc = num;
	else if (num == 0) numLoc = 0;
}
int Loco::GetNumber()
{
	return numLoc;
}
#pragma endregion

std::string GetStrFromCommd(Commd commd)
{
	std::string str = "NotDefined";
	switch (commd)
	{
	case Commd::GeneralOtmenaNabor:
		str = "GeneralOtmenaNabor";
		break;
	case Commd::N_vibor:
		str = "N_vibor";
		break;
	case Commd::ND_vibor:
		str = "ND_vibor";
		break;
	case Commd::CH_vibor:
		str = "CH_vibor";
		break;
	case Commd::CHD_vibor:
		str = "CHD_vibor";
		break;
	case Commd::CHR_vibor:
		str = "CHR_vibor";

		break;
	case Commd::M1_vibor:
		str = "M1_vibor";

		break;
	case Commd::M2_vibor:
		str = "M2_vibor";
		break;
	case Commd::M3_vibor:
		str = "M3_vibor";
		break;
	case Commd::M4_vibor:
		str = "M4_vibor";
		break;
	case Commd::M5_vibor:
		str = "M5_vibor";
		break;
	case Commd::M6_vibor:
		str = "M6_vibor";
		break;
	case Commd::M7_vibor:
		str = "M7_vibor";
		break;
	case Commd::M8_vibor:
		str = "M8_vibor";
		break;
	case Commd::M9_vibor:
		str = "M9_vibor";
		break;
	case Commd::M10_vibor:
		str = "M10_vibor";
		break;
	case Commd::M11_vibor:
		str = "M11_vibor";
		break;
	case Commd::M12_vibor:
		str = "M12_vibor";
		break;
	case Commd::M13_vibor:
		str = "M13_vibor";
		break;
	case Commd::M14_vibor:
		str = "M14_vibor";
		break;
	case Commd::M15_vibor:
		str = "M15_vibor";
		break;
	case Commd::M16_vibor:
		str = "M16_vibor";
		break;
	case Commd::M17_vibor:
		str = "M17_vibor";
		break;
	case Commd::M18_vibor:
		str = "M18_vibor";
		break;
	case Commd::M19_vibor:
		str = "M19_vibor";
		break;
	case Commd::M20_vibor:
		str = "M20_vibor";
		break;
	case Commd::N1_vibor:
		str = "N1_vibor";
		break;
	case Commd::N2_vibor:
		str = "N2_vibor";
		break;
	case Commd::N3_vibor:
		str = "N3_vibor";
		break;
	case Commd::N4_vibor:
		str = "N4_vibor";
		break;
	case Commd::N5_vibor:
		str = "N5_vibor";
		break;
	case Commd::N6_vibor:
		str = "N6_vibor";
		break;
	case Commd::N7_vibor:
		str = "N7_vibor";
		break;
	case Commd::CH1_vibor:
		str = "CH1_vibor";
		break;
	case Commd::CH2_vibor:
		str = "CH2_vibor";
		break;
	case Commd::CH3_vibor:
		str = "CH3_vibor";
		break;
	case Commd::CH4_vibor:
		str = "CH4_vibor";
		break;
	case Commd::CH5_vibor:
		str = "CH5_vibor";
		break;
	case Commd::CH6_vibor:
		str = "CH6_vibor";
		break;
	case Commd::CH7_vibor:
		str = "CH7_vibor";
		break;
	case Commd::DGA_true:
		str = "DGA_true";
		break;
	case Commd::DGA_false:
		str = "DGA_false";
		break;
	case Commd::N_ToWhite:
		str = "N_White";
		break;
	case Commd::ND_ToWhite:
		str = "ND_White";
		break;
	case Commd::CH_ToWhite:
		str = "CH_White";
		break;
	case Commd::CHD_ToWhite:
		str = "CHD_White";
		break;
	case Commd::CHR_ToWhite:
		str = "CHR_White";
		break;
	case Commd::N_ToRed:
		str = "N_Red";
		break;
	case Commd::ND_ToRed:
		str = "ND_Red";
		break;
	case Commd::CH_ToRed:
		str = "CH_Red";
		break;
	case Commd::CHD_ToRed:
		str = "CHD_Red";
		break;
	case Commd::CHR_ToRed:
		str = "CHR_Red";
		break;
	case Commd::N_ToGreen:
		str = "N_Green";
		break;
	case Commd::ND_ToGreen:
		str = "ND_Green";
		break;
	case Commd::CH_ToGreen2:
		str = "CH_Green2";
		break;
	case Commd::CHD_ToGreen:
		str = "CHD_Green";

		break;
	case Commd::CHR_ToGreen2:
		str = "CHR_Green";
		break;
	case Commd::NotDef:
		str = "NotDefined";
		break;
	case Commd::zaprosSetDispetcherDirect:
		str = "zaprosSetDispetcherDirect";
		break;
	case Commd::zaprosSetOperatorDirect:
		str = "zaprosSetOperatorDirect";
		break;
	case Commd::sendDataKarabas:
		str = "zaprosSendDataKarabas";
		break;
	case Commd::sendDataKaraganozek:
		str = "zaprosSendDataKaraganozek";
		break;
	case Commd::sendDataKaraganda:
		str = "zaprosSendDataToKaraganda";
		break;
	case Commd::sendDataMaykuduk:
		str = "zaprosSendDataMaykuduk";
		break;
	case Commd::sendDataGanaKaraganda:
		str = "zaprosSendDataGanaKaraganda";
		break;
	case Commd::sendDataKaraganda_1:
		str = "zaprosSendDataKaraganda_1";
		break;
	case Commd::sendDataKaraganda_2:
		str = "zaprosSendDataKaraganda_2";
		break;
	case Commd::sendDataRasporiaditelnaya:
		str = "zaprosSendDataRasporiaditelnaya";
		break;
	case Commd::sendDataDubovskaya:
		str = "zaprosSendDataDubovskaya";
		break;
	case Commd::sendDataGanaAul:
		str = "zaprosSendDataGanaAul";
		break;
	case Commd::sendDataRadiousel:
		str = "zaprosSendDataRadiouzel";
		break;
	case Commd::sendDataCurator:
		str = "zaprosSendDataCurator";
		break;
	case Commd::sendDataTrainReestr:
		str = "zaprosSendDataTrainReestr";
		break;
	case Commd::Set_NKG:
		str = "set_N_Key";
		break;
	case Commd::Set_CHKG:
		str = "set_CH_Key";
		break;
	case Commd::UnSet_NKG:
		str = "delete_N_Key";
		break;
	case Commd::UnSet_CHKG:
		str = "delete_CH_Key";
		break;
	case Commd::GreenKeyCH:
		str = "change_direct_CH";
		break;
	case Commd::GreenKeyCHD:
		str = "change_direct_CHD";
		break;
	case Commd::GreenKeyCHR:
		str = "change_direct_CHR";
		break;
	case Commd::GreenKeyN:
		str = "change_direct_N";
		break;
	case Commd::GreenKeyND:
		str = "change_direct_ND";
		break;
	case Commd::GreenKeyCH_main:
		str = "direct_CH_main";
		break;
	case Commd::GreenKeyCHD_main:
		str = "direct_CHd_main";
		break;
	case Commd::GreenKeyCHR_main:
		str = "direct_CHR_main";
		break;
	case Commd::GreenKeyN_main:
		str = "direct_N_main";
		break;
	case Commd::GreenKeyND_main:
		str = "direct_ND_main";
		break;
	case Commd::s1_vibor:
		str = "strelka_1_vibor";
		break;
	case Commd::s2_vibor:
		str = "strelka_2_vibor";
		break;
	case Commd::s3_vibor:
		str = "strelka_3_vibor";
		break;
	case Commd::s4_vibor:
		str = "strelka_4_vibor";
		break;
	case Commd::s5_vibor:
		str = "strelka_5_vibor";
		break;
	case Commd::s6_vibor:
		str = "strelka_6_vibor";
		break;
	case Commd::s7_vibor:
		str = "strelka_7_vibor";
		break;
	case Commd::s8_vibor:
		str = "strelka_8_vibor";
		break;
	case Commd::s9_vibor:
		str = "strelka_9_vibor";
		break;
	case Commd::s10_vibor:
		str = "strelka_10_vibor";
		break;
	case Commd::s11_vibor:
		str = "strelka_11_vibor";
		break;
	case Commd::s12_vibor:
		str = "strelka_12_vibor";
		break;
	case Commd::s13_vibor:
		str = "strelka_13_vibor";
		break;
	case Commd::s14_vibor:
		str = "strelka_14_vibor";
		break;
	case Commd::s15_vibor:
		str = "strelka_15_vibor";
		break;
	case Commd::s16_vibor:
		str = "strelka_16_vibor";
		break;
	case Commd::s17_vibor:
		str = "strelka_17_vibor";
		break;
	case Commd::s18_vibor:
		str = "strelka_18_vibor";
		break;
	case Commd::s19_vibor:
		str = "strelka_19_vibor";
		break;
	case Commd::s20_vibor:
		str = "strelka_20_vibor";
		break;
	case Commd::s21_vibor:
		str = "strelka_21_vibor";
		break;
	case Commd::s22_vibor:
		str = "strelka_22_vibor";
		break;
	case Commd::s23_vibor:
		str = "strelka_23_vibor";
		break;
	case Commd::s24_vibor:
		str = "strelka_24_vibor";
		break;
	case Commd::s25_vibor:
		str = "strelka_25_vibor";
		break;
	case Commd::s26_vibor:
		str = "strelka_26_vibor";
		break;
	case Commd::s27_vibor:
		str = "strelka_27_vibor";
		break;
	case Commd::s28_vibor:
		str = "strelka_28_vibor";
		break;
	case Commd::s29_vibor:
		str = "strelka_29_vibor";
		break;
	case Commd::s30_vibor:
		str = "strelka_3_vibor";
		break;
	case Commd::s31_vibor:
		str = "strelka_31_vibor";
		break;
	case Commd::s32_vibor:
		str = "strelka_32_vibor";
		break;
	case Commd::s33_vibor:
		str = "strelka_33_vibor";
		break;
	case Commd::s34_vibor:
		str = "strelka_34_vibor";
		break;
	case Commd::s35_vibor:
		str = "strelka_35_vibor";
		break;
	case Commd::s36_vibor:
		str = "strelka_36_vibor";
		break;
	case Commd::s1_Plus:
		str = "strelka_1_plus";
		break;
	case Commd::s1_Minus:
		str = "strelka_1_minus";
		break;
	case Commd::s2_Plus:
		str = "strelka_2_plus";
		break;
	case Commd::s2_Minus:
		str = "strelka_2_minus";
		break;
	case Commd::s3_Plus:
		str = "strelka_3_plus";
		break;
	case Commd::s3_Minus:
		str = "strelka_3_minus";
		break;
	case Commd::s4_Plus:
		str = "strelka_4_plus";
		break;
	case Commd::s4_Minus:
		str = "strelka_4_minus";
		break;
	case Commd::s5_Plus:
		str = "strelka_5_plus";
		break;
	case Commd::s5_Minus:
		str = "strelka_5_minus";
		break;
	case Commd::s6_Plus:
		str = "strelka_6_plus";
		break;
	case Commd::s6_Minus:
		str = "strelka_6_minus";
		break;
	case Commd::s7_Plus:
		str = "strelka_7_plus";
		break;
	case Commd::s7_Minus:
		str = "strelka_7_minus";
		break;
	case Commd::s8_Plus:
		str = "strelka_8_plus";
		break;
	case Commd::s8_Minus:
		str = "strelka_8_minus";
		break;
	case Commd::s9_Plus:
		str = "strelka_9_plus";
		break;
	case Commd::s9_Minus:
		str = "strelka_9_minus";
		break;
	case Commd::s10_Plus:
		str = "strelka_10_plus";
		break;
	case Commd::s10_Minus:
		str = "strelka_10_minus";
		break;
	case Commd::s11_Plus:
		str = "strelka_11_plus";
		break;
	case Commd::s11_Minus:
		str = "strelka_11_minus";
		break;
	case Commd::s12_Plus:
		str = "strelka_12_plus";
		break;
	case Commd::s12_Minus:
		str = "strelka_12_minus";
		break;
	case Commd::s13_Plus:
		str = "strelka_13_plus";
		break;
	case Commd::s13_Minus:
		str = "strelka_13_minus";
		break;
	case Commd::s14_Plus:
		str = "strelka_14_plus";
		break;
	case Commd::s14_Minus:
		str = "strelka_14_minus";
		break;
	case Commd::s15_Plus:
		str = "strelka_15_plus";
		break;
	case Commd::s15_Minus:
		str = "strelka_15_minus";
		break;
	case Commd::s16_Plus:
		str = "strelka_16_plus";
		break;
	case Commd::s16_Minus:
		str = "strelka_16_minus";
		break;
	case Commd::s17_Plus:
		str = "strelka_17_plus";
		break;
	case Commd::s17_Minus:
		str = "strelka_17_minus";
		break;
	case Commd::s18_Plus:
		str = "strelka_18_plus";
		break;
	case Commd::s18_Minus:
		str = "strelka_18_minus";
		break;
	case Commd::s19_Plus:
		str = "strelka_19_plus";
		break;
	case Commd::s19_Minus:
		str = "strelka_19_minus";
		break;
	case Commd::s20_Plus:
		str = "strelka_20_plus";
		break;
	case Commd::s20_Minus:
		str = "strelka_20_minus";
		break;
	case Commd::s21_Plus:
		str = "strelka_21_plus";
		break;
	case Commd::s21_Minus:
		str = "strelka_21_minus";
		break;
	case Commd::s22_Plus:
		str = "strelka_22_plus";
		break;
	case Commd::s22_Minus:
		str = "strelka_22_minus";
		break;
	case Commd::s23_Plus:
		str = "strelka_23_plus";
		break;
	case Commd::s23_Minus:
		str = "strelka_23_minus";
		break;
	case Commd::s24_Plus:
		str = "strelka_24_plus";
		break;
	case Commd::s24_Minus:
		str = "strelka_24_minus";
		break;
	case Commd::s25_Plus:
		str = "strelka_25_plus";
		break;
	case Commd::s25_Minus:
		str = "strelka_25_minus";
		break;
	case Commd::s26_Plus:
		str = "strelka_26_plus";
		break;
	case Commd::s26_Minus:
		str = "strelka_26_minus";
		break;
	case Commd::s27_Plus:
		str = "strelka_27_plus";
		break;
	case Commd::s27_Minus:
		str = "strelka_27_minus";
		break;
	case Commd::s28_Plus:
		str = "strelka_28_plus";
		break;
	case Commd::s28_Minus:
		str = "strelka_28_minus";
		break;
	case Commd::s29_Plus:
		str = "strelka_29_plus";
		break;
	case Commd::s29_Minus:
		str = "strelka_29_minus";
		break;
	case Commd::s30_Plus:
		str = "strelka_30_plus";
		break;
	case Commd::s30_Minus:
		str = "strelka_30_minus";
		break;
	case Commd::s31_Plus:
		str = "strelka_31_plus";
		break;
	case Commd::s31_Minus:
		str = "strelka_31_minus";
		break;
	case Commd::s32_Plus:
		str = "strelka_32_plus";
		break;
	case Commd::s32_Minus:
		str = "strelka_32_minus";
		break;
	case Commd::s33_Plus:
		str = "strelka_33_plus";
		break;
	case Commd::s33_Minus:
		str = "strelka_33_minus";
		break;
	case Commd::s34_Plus:
		str = "strelka_34_plus";
		break;
	case Commd::s34_Minus:
		str = "strelka_34_minus";
		break;
	case Commd::s35_Plus:
		str = "strelka_35_plus";
		break;
	case Commd::s35_Minus:
		str = "strelka_35_minus";
		break;
	case Commd::s36_Plus:
		str = "strelka_36_plus";
		break;
	case Commd::s36_Minus:
		str = "strelka_36_minus";
		break;
	case Commd::s37_Plus:
		str = "strelka_37_plus";
		break;
	case Commd::s37_Minus:
		str = "strelka_37_minus";
		break;
	case Commd::s38_Plus:
		str = "strelka_38_plus";
		break;
	case Commd::s38_Minus:
		str = "strelka_38_minus";
		break;
	case Commd::s39_Plus:
		str = "strelka_39_plus";
		break;
	case Commd::s39_Minus:
		str = "strelka_39_minus";
		break;
	case Commd::s40_Plus:
		str = "strelka_40_plus";
		break;
	case Commd::s40_Minus:
		str = "strelka_40_minus";
		break;
	case Commd::s41_Plus:
		str = "strelka_41_plus";
		break;
	case Commd::s41_Minus:
		str = "strelka_41_minus";
		break;
	case Commd::s42_Plus:
		str = "strelka_42_plus";
		break;
	case Commd::s42_Minus:
		str = "strelka_42_minus";
		break;
	case Commd::s43_Plus:
		str = "strelka_43_plus";
		break;
	case Commd::s43_Minus:
		str = "strelka_43_minus";
		break;
	case Commd::s44_Plus:
		str = "strelka_44_plus";
		break;
	case Commd::s44_Minus:
		str = "strelka_44_minus";
		break;
	case Commd::s45_Plus:
		str = "strelka_45_plus";
		break;
	case Commd::s45_Minus:
		str = "strelka_45_minus";
		break;
	case Commd::s46_Plus:
		str = "strelka_46_plus";
		break;
	case Commd::s46_Minus:
		str = "strelka_46_minus";
		break;
	case Commd::s47_Plus:
		str = "strelka_47_plus";
		break;
	case Commd::s47_Minus:
		str = "strelka_47_minus";
		break;
	case Commd::s48_Plus:
		str = "strelka_48_plus";
		break;
	case Commd::s48_Minus:
		str = "strelka_48_minus";
		break;
	case Commd::s49_Plus:
		str = "strelka_49_plus";
		break;
	case Commd::s49_Minus:
		str = "strelka_49_minus";
		break;
	case Commd::s50_Plus:
		str = "strelka_50_plus";
		break;
	case Commd::s50_Minus:
		str = "strelka_50_minus";
		break;
	case Commd::s51_Plus:
		str = "strelka_51_plus";
		break;
	case Commd::s51_Minus:
		str = "strelka_51_minus";
		break;
	case Commd::s52_Plus:
		str = "strelka_52_plus";
		break;
	case Commd::s52_Minus:
		str = "strelka_52_minus";
		break;
	case Commd::s53_Plus:
		str = "strelka_53_plus";
		break;
	case Commd::s53_Minus:
		str = "strelka_53_minus";
		break;
	case Commd::s54_Plus:
		str = "strelka_54_plus";
		break;
	case Commd::s54_Minus:
		str = "strelka_54_minus";
		break;
	case Commd::s55_Plus:
		str = "strelka_55_plus";
		break;
	case Commd::s55_Minus:
		str = "strelka_55_minus";
		break;
	case Commd::s56_Plus:
		str = "strelka_56_plus";
		break;
	case Commd::s56_Minus:
		str = "strelka_56_minus";
		break;
	case Commd::s57_Plus:
		str = "strelka_57_plus";
		break;
	case Commd::s57_Minus:
		str = "strelka_57_minus";
		break;
	case Commd::s58_Plus:
		str = "strelka_58_plus";
		break;
	case Commd::s58_Minus:
		str = "strelka_58_minus";
		break;
	case Commd::s59_Plus:
		str = "strelka_59_plus";
		break;
	case Commd::s59_Minus:
		str = "strelka_59_minus";
		break;
	case Commd::s60_Plus:
		str = "strelka_60_plus";
		break;
	case Commd::s60_Minus:
		str = "strelka_60_minus";
		break;
	case Commd::s61_Plus:
		str = "strelka_61_plus";
		break;
	case Commd::s61_Minus:
		str = "strelka_61_minus";
		break;
	case Commd::s62_Plus:
		str = "strelka_62_plus";
		break;
	case Commd::s62_Minus:
		str = "strelka_62_minus";
		break;
	case Commd::s63_Plus:
		str = "strelka_63_plus";
		break;
	case Commd::s63_Minus:
		str = "strelka_63_minus";
		break;
	case Commd::s64_Plus:
		str = "strelka_64_plus";
		break;
	case Commd::s64_Minus:
		str = "strelka_64_minus";
		break;
	case Commd::s65_Plus:
		str = "strelka_65_plus";
		break;
	case Commd::s65_Minus:
		str = "strelka_65_minus";
		break;
	case Commd::s66_Plus:
		str = "strelka_66_plus";
		break;
	case Commd::s66_Minus:
		str = "strelka_66_minus";
		break;
	case Commd::s67_Plus:
		str = "strelka_67_plus";
		break;
	case Commd::s67_Minus:
		str = "strelka_67_minus";
		break;
	case Commd::s68_Plus:
		str = "strelka_68_plus";
		break;
	case Commd::s68_Minus:
		str = "strelka_68_minus";
		break;
	case Commd::s69_Plus:
		str = "strelka_69_plus";
		break;
	case Commd::s69_Minus:
		str = "strelka_69_minus";
		break;
	case Commd::s70_Plus:
		str = "strelka_70_plus";
		break;
	case Commd::s70_Minus:
		str = "strelka_70_minus";
		break;
	case Commd::s71_Plus:
		str = "strelka_71_plus";
		break;
	case Commd::s71_Minus:
		str = "strelka_71_minus";
		break;
	case Commd::s72_Plus:
		str = "strelka_72_plus";
		break;
	case Commd::s72_Minus:
		str = "strelka_72_minus";
		break;
	case Commd::s73_Plus:
		str = "strelka_73_plus";
		break;
	case Commd::s73_Minus:
		str = "strelka_73_minus";
		break;
	case Commd::s74_Plus:
		str = "strelka_74_plus";
		break;
	case Commd::s74_Minus:
		str = "strelka_74_minus";
		break;
	case Commd::s75_Plus:
		str = "strelka_75_plus";
		break;
	case Commd::s75_Minus:
		str = "strelka_75_minus";
		break;
	case Commd::s76_Plus:
		str = "strelka_76_plus";
		break;
	case Commd::s76_Minus:
		str = "strelka_76_minus";
		break;
	case Commd::s77_Plus:
		str = "strelka_77_plus";
		break;
	case Commd::s77_Minus:
		str = "strelka_77_minus";
		break;
	case Commd::s78_Plus:
		str = "strelka_78_plus";
		break;
	case Commd::s78_Minus:
		str = "strelka_78_minus";
		break;
	case Commd::s79_Plus:
		str = "strelka_79_plus";
		break;
	case Commd::s79_Minus:
		str = "strelka_79_minus";
		break;
	case Commd::s80_Plus:
		str = "strelka_80_plus";
		break;
	case Commd::s80_Minus:
		str = "strelka_81_minus";
		break;
	case Commd::s81_Plus:
		str = "strelka_81_plus";
		break;
	case Commd::s81_Minus:
		str = "strelka_81_minus";
		break;
	case Commd::s82_Plus:
		str = "strelka_82_plus";
		break;
	case Commd::s82_Minus:
		str = "strelka_82_minus";
		break;
	case Commd::s83_Plus:
		str = "strelka_83_plus";
		break;
	case Commd::s83_Minus:
		str = "strelka_83_minus";
		break;
	case Commd::s84_Plus:
		str = "strelka_84_plus";
		break;
	case Commd::s84_Minus:
		str = "strelka_84_minus";
		break;
	case Commd::s85_Plus:
		str = "strelka_85_plus";
		break;
	case Commd::s85_Minus:
		str = "strelka_85_minus";
		break;
	case Commd::s86_Plus:
		str = "strelka_86_plus";
		break;
	case Commd::s86_Minus:
		str = "strelka_86_minus";
		break;
	case Commd::s87_Plus:
		str = "strelka_87_plus";
		break;
	case Commd::s87_Minus:
		str = "strelka_87_minus";
		break;
	case Commd::s88_Plus:
		str = "strelka_88_plus";
		break;
	case Commd::s88_Minus:
		str = "strelka_88_minus";
		break;
	case Commd::s89_Plus:
		str = "strelka_89_plus";
		break;
	case Commd::s89_Minus:
		str = "strelka_89_minus";
		break;
	case Commd::s90_Plus:
		str = "strelka_90_plus";
		break;
	case Commd::s90_Minus:
		str = "strelka_90_minus";
		break;
	case Commd::s91_Plus:
		str = "strelka_91_plus";
		break;
	case Commd::s91_Minus:
		str = "strelka_91_minus";
		break;
	case Commd::s92_Plus:
		str = "strelka_92_plus";
		break;
	case Commd::s92_Minus:
		str = "strelka_92_minus";
		break;
	case Commd::s93_Plus:
		str = "strelka_93_plus";
		break;
	case Commd::s93_Minus:
		str = "strelka_93_minus";
		break;
	case Commd::s94_Plus:
		str = "strelka_94_plus";
		break;
	case Commd::s94_Minus:
		str = "strelka_94_minus";
		break;
	case Commd::s95_Plus:
		str = "strelka_95_plus";
		break;
	case Commd::s95_Minus:
		str = "strelka_95_minus";
		break;
	case Commd::s96_Plus:
		str = "strelka_96_plus";
		break;
	case Commd::s96_Minus:
		str = "strelka_96_minus";
		break;
	case Commd::s97_Plus:
		str = "strelka_97_plus";
		break;
	case Commd::s97_Minus:
		str = "strelka_97_minus";
		break;
	case Commd::s98_Plus:
		str = "strelka_98_plus";
		break;
	case Commd::s98_Minus:
		str = "strelka_98_minus";
		break;
	case Commd::s99_Plus:
		str = "strelka_99_plus";
		break;
	case Commd::s99_Minus:
		str = "strelka_99_minus";
		break;
	case Commd::s100_Plus:
		str = "strelka_100_plus";
		break;
	case Commd::s100_Minus:
		str = "strelka_100_minus";
		break;

	case Commd::Curator:
		str = "Curator";
		break;
	case Commd::Dispetcher_1:
		str = "Dispetcher_1";
		break;
	case Commd::Dispetcher_2:
		str = "Dispetcher_2";
		break;
	case Commd::Karabas:
		str = "Karabas";
		break;
	case Commd::Karaganozek:
		str = "Karaganozek";
		break;
	case Commd::Karaganda:
		str = "Karaganda";
		break;
	case Commd::Maykuduk:
		str = "Maykuduk";
		break;
	case Commd::GanaKaraganda:
		str = "GanaKaraganda";
		break;
	case Commd::Karaganda_1:
		str = "Karaganda_1";
		break;
	case Commd::Karaganda_2:
		str = "Karaganda_2";
		break;
	case Commd::Rasporiaditelnaya:
		str = "Rasporiaditelnaya";
		break;
	case Commd::Dubovskaya:
		str = "Dubovskaya";
		break;
	case Commd::GanaAul:
		str = "GanaAul";
		break;
	case Commd::Radiouzel:
		str = "Radiouzel";
		break;

#pragma region Routers

	case Commd::N_1P_Create:
		str = "N_1P_Create";
		break;
	case Commd::N_2P_Create:
		str = "N_2P_Create ";
		break;
	case Commd::N_3P_Create:
		str = "N_3P_Create";
		break;
	case Commd::N_4P_Create:
		str = "N_4P_Create";
		break;
	case Commd::N_5P_Create:
		str = "N_5P_Create";
		break;
	case Commd::N_6P_Create:
		str = "N_6P_Create";
		break;
	case Commd::N_7P_Create:
		str = "N_7P_Create";
		break;
	case Commd::ND_1P_Create:
		str = "ND_1P_Create";
		break;
	case Commd::ND_2P_Create:
		str = "ND_2P_Create";
		break;
	case Commd::ND_3P_Create:
		str = "ND_3P_Create";
		break;
	case Commd::ND_4P_Create:
		str = "ND_4P_Create";
		break;
	case Commd::ND_5P_Create:
		str = "ND_5P_Create";
		break;
	case Commd::ND_6P_Create:
		str = "ND_6P_Create";
		break;
	case Commd::ND_7P_Create:
		str = "ND_7P_Create";
		break;
	case Commd::CH_1P_Create:
		str = "CH_1P_Create";
		break;
	case Commd::CH_2P_Create:
		str = "CH_2P_Create";
		break;
	case Commd::CH_3P_Create:
		str = "CH_3P_Create";
		break;
	case Commd::CH_4P_Create:
		str = "CH_4P_Create";
		break;
	case Commd::CH_5P_Create:
		str = "CH_5P_Create";
		break;
	case Commd::CH_6P_Create:
		str = "CH_6P_Create";
		break;
	case Commd::CH_7P_Create:
		str = "CH_7P_Create";
		break;
	case Commd::CHD_1P_Create:
		str = "CHD_1P_Create";
		break;
	case Commd::CHD_2P_Create:
		str = "CHD_2P_Create";
		break;
	case Commd::CHD_3P_Create:
		str = "CHD_3P_Create";
		break;
	case Commd::CHD_4P_Create:
		str = "CHD_4P_Create";
		break;
	case Commd::CHD_5P_Create:
		str = "CHD_5P_Create";
		break;
	case Commd::CHD_6P_Create:
		str = "CHD_6P_Create";
		break;
	case Commd::CHD_7P_Create:
		str = "CHD_7P_Create";
		break;
	case Commd::CHR_1P_Create:
		str = "CHR_1P_Create";
		break;
	case Commd::CHR_2P_Create:
		str = "CHR_2P_Create";
		break;
	case Commd::CHR_3P_Create:
		str = "CHR_3P_Create";
		break;
	case Commd::CHR_4P_Create:
		str = "CHR_4P_Create";
		break;
	case Commd::CHR_5P_Create:
		str = "CHR_5P_Create";
		break;
	case Commd::CHR_6P_Create:
		str = "CHR_6P_Create";
		break;
	case Commd::CHR_7P_Create:
		str = "CHR_7P_Create";
		break;
	case Commd::N1_CH_Create:
		str = "N1_CH_Create";
		break;
	case Commd::N2_CH_Create:
		str = "N2_CH_Create";
		break;
	case Commd::N3_CH_Create:
		str = "N3_CH_Create";
		break;
	case Commd::N4_CH_Create:
		str = "N4_CH_Create";
		break;
	case Commd::N5_CH_Create:
		str = "N5_CH_Create";
		break;
	case Commd::N6_CH_Create:
		str = "N6_CH_Create";
		break;
	case Commd::N7_CH_Create:
		str = "N7_CH_Create";
		break;
	case Commd::N1_CHD_Create:
		str = "N1_CHD_Create";
		break;
	case Commd::N2_CHD_Create:
		str = "N2_CHD_Create";
		break;
	case Commd::N3_CHD_Create:
		str = "N3_CHD_Create";
		break;
	case Commd::N4_CHD_Create:
		str = "N4_CHD_Create";
		break;
	case Commd::N5_CHD_Create:
		str = "N5_CHD_Create";
		break;
	case Commd::N6_CHD_Create:
		str = "N6_CHD_Create";
		break;
	case Commd::N7_CHD_Create:
		str = "N7_CHD_Create";
		break;
	case Commd::N1_CHR_Create:
		str = "N1_CHR_Create";
		break;
	case Commd::N2_CHR_Create:
		str = "N2_CHR_Create";
		break;
	case Commd::N3_CHR_Create:
		str = "N3_CHR_Create";
		break;
	case Commd::N4_CHR_Create:
		str = "N4_CHR_Create";
		break;
	case Commd::N5_CHR_Create:
		str = "N5_CHR_Create";
		break;
	case Commd::N6_CHR_Create:
		str = "N6_CHR_Create";
		break;
	case Commd::N7_CHR_Create:
		str = "N7_CHR_Create";
		break;
	case Commd::CH1_N_Create:
		str = "CH1_N_Create";
		break;
	case Commd::CH2_N_Create:
		str = "CH2_N_Create";
		break;
	case Commd::CH3_N_Create:
		str = "CH3_N_Create";
		break;
	case Commd::CH4_N_Create:
		str = "CH4_N_Create";
		break;
	case Commd::CH5_N_Create:
		str = "CH5_N_Create";
		break;
	case Commd::CH6_N_Create:
		str = "CH6_N_Create";
		break;
	case Commd::CH7_N_Create:
		str = "CH7_N_Create";
		break;
	case Commd::CH1_ND_Create:
		str = "CH1_ND_Create";
		break;
	case Commd::CH2_ND_Create:
		str = "CH2_ND_Create";
		break;
	case Commd::CH3_ND_Create:
		str = "CH3_ND_Create";
		break;
	case Commd::CH4_ND_Create:
		str = "CH4_ND_Create";
		break;
	case Commd::CH5_ND_Create:
		str = "CH5_ND_Create";
		break;
	case Commd::CH6_ND_Create:
		str = "CH6_ND_Create";
		break;
	case Commd::CH7_ND_Create:
		str = "CH7_ND_Create";
		break;
	case Commd::CHM1_N_Create:
		str = "CHM1_N_Create";
		break;
	case Commd::CHM2_N_Create:
		str = "CHM2_N_Create";
		break;
	case Commd::CHM3_N_Create:
		str = "CHM3_N_Create";
		break;
	case Commd::CHM4_N_Create:
		str = "CHM4_N_Create";
		break;
	case Commd::CHM5_N_Create:
		str = "CHM5_N_Create";
		break;
	case Commd::CHM6_N_Create:
		str = "CHM6_N_Create";
		break;
	case Commd::CHM7_N_Create:
		str = "CHM7_N_Create";
		break;
	case Commd::CHM1_ND_Create:
		str = "CHM1_ND_Create";
		break;
	case Commd::CHM2_ND_Create:
		str = "CHM2_ND_Create";
		break;
	case Commd::CHM3_ND_Create:
		str = "CHM3_ND_Create";
		break;
	case Commd::CHM4_ND_Create:
		str = "CHM4_ND_Create";
		break;
	case Commd::CHM5_ND_Create:
		str = "CHM5_ND_Create";
		break;
	case Commd::CHM6_ND_Create:
		str = "CHM6_ND_Create";
		break;
	case Commd::CHM7_ND_Create:
		str = "CHM7_ND_Create";
		break;
	case Commd::N1A_CH_Create:
		str = "N1A_CH_Create";
		break;
	case Commd::N2A_CH_Create:
		str = "N2A_CH_Create";
		break;
	case Commd::N3A_CH_Create:
		str = "N3A_CH_Create";
		break;
	case Commd::N4A_CH_Create:
		str = "N4A_CH_Create";
		break;
	case Commd::N5A_CH_Create:
		str = "N5A_CH_Create";
		break;
	case Commd::N1A_CHD_Create:
		str = "N1A_CHD_Create";
		break;
	case Commd::N2A_CHD_Create:
		str = "N2A_CHD_Create";
		break;
	case Commd::N3A_CHD_Create:
		str = "N3A_CHD_Create";
		break;
	case Commd::N4A_CHD_Create:
		str = "N4A_CHD_Create";
		break;
	case Commd::N5A_CHD_Create:
		str = "N5A_CHD_Create";
		break;
	case Commd::NM1_2AP_Create:
		str = "NM1_2AP_Create";
		break;
	case Commd::NM2_2AP_Create:
		str = "NM2_2AP_Create";
		break;
	case Commd::NM3_2AP_Create:
		str = "NM3_2AP_Create";
		break;
	case Commd::NM4_2AP_Create:
		str = "NM4_2AP_Create";
		break;
	case Commd::NM5_2AP_Create:
		str = "NM5_2AP_Create";
		break;
	case Commd::NM6_2AP_Create:
		str = "NM6_2AP_Create";
		break;
	case Commd::NM7_2AP_Create:
		str = "NM7_2AP_Create";
		break;
	case Commd::NM1_3AP_Create:
		str = "NM1_3AP_Create";
		break;
	case Commd::NM2_3AP_Create:
		str = "NM2_3AP_Create";
		break;
	case Commd::NM3_3AP_Create:
		str = "NM3_3AP_Create";
		break;
	case Commd::NM4_3AP_Create:
		str = "NM4_3AP_Create";
		break;
	case Commd::NM5_3AP_Create:
		str = "NM5_3AP_Create";
		break;
	case Commd::NM6_3AP_Create:
		str = "NM6_3AP_Create";
		break;
	case Commd::NM7_3AP_Create:
		str = "NM7_3AP_Create";
		break;
	case Commd::NM1_4AP_Create:
		str = "NM1_4AP_Create";
		break;
	case Commd::NM2_4AP_Create:
		str = "NM2_4AP_Create";
		break;
	case Commd::NM3_4AP_Create:
		str = "NM3_4AP_Create";
		break;
	case Commd::NM4_4AP_Create:
		str = "NM4_4AP_Create";
		break;
	case Commd::NM5_4AP_Create:
		str = "NM5_4AP_Create";
		break;
	case Commd::NM6_4AP_Create:
		str = "NM6_4AP_Create";
		break;
	case Commd::NM7_4AP_Create:
		str = "NM7_4AP_Create";
		break;
	case Commd::NM1_5AP_Create:
		str = "NM1_5AP_Create";
		break;
	case Commd::NM2_5AP_Create:
		str = "NM2_5AP_Create";
		break;
	case Commd::NM3_5AP_Create:
		str = "NM3_5AP_Create";
		break;
	case Commd::NM4_5AP_Create:
		str = "NM4_5AP_Create";
		break;
	case Commd::NM5_5AP_Create:
		str = "NM5_5AP_Create";
		break;
	case Commd::NM6_5AP_Create:
		str = "NM6_5AP_Create";
		break;
	case Commd::NM7_5AP_Create:
		str = "NM7_5AP_Create";
		break;
	case Commd::NM20_1AP_Create:
		str = "NM20_1AP_Create";
		break;
	case Commd::NM21_1AP_Create:
		str = "NM21_1AP_Create";
		break;
	case Commd::NM22_1AP_Create:
		str = "NM22_1AP_Create";
		break;
	case Commd::NM23_1AP_Create:
		str = "NM23_1AP_Create";
		break;
	case Commd::NM24_1AP_Create:
		str = "NM24_1AP_Create";
		break;
	case Commd::NM25_1AP_Create:
		str = "NM25_1AP_Create";
		break;
	case Commd::NM26_1AP_Create:
		str = "NM26_1AP_Create";
		break;
	case Commd::NM27_1AP_Create:
		str = "NM27_1AP_Create";
		break;
	case Commd::NM28_1AP_Create:
		str = "NM28_1AP_Create";
		break;
	case Commd::NM29_1AP_Create:
		str = "NM29_1AP_Create";
		break;
	case Commd::NM30_1AP_Create:
		str = "NM30_1AP_Create";
		break;
	case Commd::NM31_1AP_Create:
		str = "NM31_1AP_Create";
		break;
	case Commd::NM32_1AP_Create:
		str = "NM32_1AP_Create";
		break;
	case Commd::NM33_1AP_Create:
		str = "NM33_1AP_Create";
		break;
	case Commd::NM34_1AP_Create:
		str = "NM34_1AP_Create";
		break;
	case Commd::NM11_2AP_Create:
		str = "NM11_2AP_Create";
		break;
	case Commd::NM12_2AP_Create:
		str = "NM12_2AP_Create";
		break;
	case Commd::NM13_2AP_Create:
		str = "NM13_2AP_Create";
		break;
	case Commd::NM14_2AP_Create:
		str = "NM14_2AP_Create";
		break;
	case Commd::NM15_2AP_Create:
		str = "NM15_2AP_Create";
		break;
	case Commd::NM16_2AP_Create:
		str = "NM16_2AP_Create";
		break;
	case Commd::NM17_2AP_Create:
		str = "NM17_2AP_Create";
		break;
	case Commd::NM18_2AP_Create:
		str = "NM18_2AP_Create";
		break;
	case Commd::NM19_2AP_Create:
		str = "NM19_2AP_Create";
		break;
	case Commd::NM20_2AP_Create:
		str = "NM20_2AP_Create";
		break;
	case Commd::NM21_2AP_Create:
		str = "NM21_2AP_Create";
		break;
	case Commd::NM22_2AP_Create:
		str = "NM22_2AP_Create";
		break;
	case Commd::NM23_2AP_Create:
		str = "NM23_2AP_Create";
		break;
	case Commd::NM24_2AP_Create:
		str = "NM24_2AP_Create";
		break;
	case Commd::NM25_2AP_Create:
		str = "NM25_2AP_Create";
		break;
	case Commd::NM26_2AP_Create:
		str = "NM26_2AP_Create";
		break;
	case Commd::NM27_2AP_Create:
		str = "NM27_2AP_Create";
		break;
	case Commd::NM28_2AP_Create:
		str = "NM28_2AP_Create";
		break;
	case Commd::NM29_2AP_Create:
		str = "NM29_2AP_Create";
		break;
	case Commd::NM30_2AP_Create:
		str = "NM30_2AP_Create";
		break;
	case Commd::NM31_2AP_Create:
		str = "NM31_2AP_Create";
		break;
	case Commd::NM32_2AP_Create:
		str = "NM32_2AP_Create";
		break;
	case Commd::NM33_2AP_Create:
		str = "NM33_2AP_Create";
		break;
	case Commd::NM34_2AP_Create:
		str = "NM34_2AP_Create";
		break;
	case Commd::NM11_3AP_Create:
		str = "NM11_3AP_Create";
		break;
	case Commd::NM12_3AP_Create:
		str = "NM12_3AP_Create";
		break;
	case Commd::NM13_3AP_Create:
		str = "NM13_3AP_Create";
		break;
	case Commd::NM14_3AP_Create:
		str = "NM14_3AP_Create";
		break;
	case Commd::NM15_3AP_Create:
		str = "NM15_3AP_Create";
		break;
	case Commd::NM16_3AP_Create:
		str = "NM16_3AP_Create";
		break;
	case Commd::NM17_3AP_Create:
		str = "NM17_3AP_Create";
		break;
	case Commd::NM18_3AP_Create:
		str = "NM18_3AP_Create";
		break;
	case Commd::NM19_3AP_Create:
		str = "NM19_3AP_Create";
		break;
	case Commd::NM20_3AP_Create:
		str = "NM20_3AP_Create";
		break;
	case Commd::NM21_3AP_Create:
		str = "NM21_3AP_Create";
		break;
	case Commd::NM22_3AP_Create:
		str = "NM22_3AP_Create";
		break;
	case Commd::NM11_4AP_Create:
		str = "NM11_4AP_Create";
		break;
	case Commd::NM12_4AP_Create:
		str = "NM12_4AP_Create";
		break;
	case Commd::NM13_4AP_Create:
		str = "NM13_4AP_Create";
		break;
	case Commd::NM14_4AP_Create:
		str = "NM14_4AP_Create";
		break;
	case Commd::NM15_4AP_Create:
		str = "NM15_4AP_Create";
		break;
	case Commd::NM16_4AP_Create:
		str = "NM16_4AP_Create";
		break;
	case Commd::NM17_4AP_Create:
		str = "NM17_4AP_Create";
		break;
	case Commd::NM18_4AP_Create:
		str = "NM18_4AP_Create";
		break;
	case Commd::NM19_4AP_Create:
		str = "NM19_4AP_Create";
		break;
	case Commd::NM20_4AP_Create:
		str = "NM20_4AP_Create";
		break;
	case Commd::NM21_4AP_Create:
		str = "NM21_4AP_Create";
		break;
	case Commd::NM22_4AP_Create:
		str = "NM22_4AP_Create";
		break;
	case Commd::CH_N1A_Create:
		str = "CH_N1A_Create";
		break;
	case Commd::CH_N2A_Create:
		str = "CH_N2A_Create";
		break;
	case Commd::CH_N3A_Create:
		str = "CH_N3A_Create";
		break;
	case Commd::CH_N4A_Create:
		str = "CH_N4A_Create";
		break;
	case Commd::CH_N5A_Create:
		str = "CH_N5A_Create";
		break;
	case Commd::CHD_N1A_Create:
		str = "CHD_N1A_Create";
		break;
	case Commd::CHD_N2A_Create:
		str = "CHD_N2A_Create";
		break;
	case Commd::CHD_N3A_Create:
		str = "CHD_N3A_Create";
		break;
	case Commd::CHD_N4A_Create:
		str = "CHD_N4A_Create";
		break;
	case Commd::CHD_N5A_Create:
		str = "CHD_N5A_Create";
		break;
	case Commd::NM1_CHM2A_Create:
		str = "NM1_CHM2A_Create";
		break;
	case Commd::NM2_CHM2A_Create:
		str = "NM2_CHM2A_Create";
		break;
	case Commd::NM3_CHM2A_Create:
		str = "NM3_CHM2A_Create";
		break;
	case Commd::NM4_CHM2A_Create:
		str = "NM4_CHM2A_Create";
		break;
	case Commd::NM5_CHM2A_Create:
		str = "NM5_CHM2A_Create";
		break;
	case Commd::NM6_CHM2A_Create:
		str = "NM6_CHM2A_Create";
		break;
	case Commd::NM7_CHM2A_Create:
		str = "NM7_CHM2A_Create";
		break;
	case Commd::NM1_CHM3A_Create:
		str = "NM1_CHM3A_Create";
		break;
	case Commd::NM2_CHM3A_Create:
		str = "NM2_CHM3A_Create";
		break;
	case Commd::NM3_CHM3A_Create:
		str = "NM3_CHM3A_Create";
		break;
	case Commd::NM4_CHM3A_Create:
		str = "NM4_CHM3A_Create";
		break;
	case Commd::NM5_CHM3A_Create:
		str = "NM5_CHM3A_Create";
		break;
	case Commd::NM6_CHM3A_Create:
		str = "NM6_CHM3A_Create";
		break;
	case Commd::NM7_CHM3A_Create:
		str = "NM7_CHM3A_Create";
		break;
	case Commd::NM1_CHM4A_Create:
		str = "NM1_CHM4A_Create";
		break;
	case Commd::NM2_CHM4A_Create:
		str = "NM1_CHM4A_Create";
		break;
	case Commd::NM3_CHM4A_Create:
		str = "NM3_CHM4A_Create";
		break;
	case Commd::NM4_CHM4A_Create:
		str = "NM4_CHM4A_Create";
		break;
	case Commd::NM5_CHM4A_Create:
		str = "NM5_CHM4A_Create";
		break;
	case Commd::NM6_CHM4A_Create:
		str = "NM6_CHM4A_Create";
		break;
	case Commd::NM7_CHM4A_Create:
		str = "NM7_CHM4A_Create";
		break;
	case Commd::NM1_CHM5A_Create:
		str = "NM1_CHM5A_Create";
		break;
	case Commd::NM2_CHM5A_Create:
		str = "NM2_CHM5A_Create";
		break;
	case Commd::NM3_CHM5A_Create:
		str = "NM3_CHM5A_Create";
		break;
	case Commd::NM4_CHM5A_Create:
		str = "NM3_CHM5A_Create";
		break;
	case Commd::NM5_CHM5A_Create:
		str = "NM5_CHM5A_Create";
		break;
	case Commd::NM6_CHM5A_Create:
		str = "NM6_CHM5A_Create";
		break;
	case Commd::NM7_CHM5A_Create:
		str = "NM7_CHM5A_Create";
		break;
	case Commd::M27_CHM2A_Create:
		str = "M27_CHM2A_Create";
		break;
	case Commd::M27_CHM3A_Create:
		str = "M27_CHM3A_Create";
		break;
	case Commd::M27_CHM4A_Create:
		str = "M27_CHM4A_Create";
		break;
	case Commd::M27_CHM5A_Create:
		str = "M27_CHM5A_Create";
		break;
	case Commd::M3_M2_Create:
		str = "M3_M2_Create";
		break;
	case Commd::M2_M3_Create:
		str = "M2_M3_Create";
		break;
	case Commd::M3_M1_Create:
		str = "M3_M1_Create";
		break;
	case Commd::M1_M3_Create:
		str = "M1_M3_Create";
		break;
	case Commd::M4_M2_Create:
		str = "M4_M2_Create";
		break;
	case Commd::M2_M4_Create:
		str = "M2_M4_Create";
		break;
	case Commd::CH1_M1_Create:
		str = "CH1_M1_Create";
		break;
	case Commd::CH2_M1_Create:
		str = "CH2_M1_Create";
		break;
	case Commd::CH3_M1_Create:
		str = "CH3_M1_Create";
		break;
	case Commd::CH4_M1_Create:
		str = "CH4_M1_Create";
		break;
	case Commd::CH5_M1_Create:
		str = "CH5_M1_Create";
		break;
	case Commd::CH6_M1_Create:
		str = "CH6_M1_Create";
		break;
	case Commd::CH7_M1_Create:
		str = "CH7_M1_Create";
		break;
	case Commd::CH1_M3_Create:
		str = "CH1_M3_Create";
		break;
	case Commd::CH2_M3_Create:
		str = "CH2_M3_Create";
		break;
	case Commd::CH3_M3_Create:
		str = "CH3_M3_Create";
		break;
	case Commd::CH4_M3_Create:
		str = "CH4_M3_Create";
		break;
	case Commd::CH5_M3_Create:
		str = "CH5_M3_Create";
		break;
	case Commd::CH6_M3_Create:
		str = "CH6_M3_Create";
		break;
	case Commd::CH7_M3_Create:
		str = "CH7_M3_Create";
		break;
	case Commd::N1_M2_Create:
		str = "N1_M2_Create";
		break;
	case Commd::N2_M2_Create:
		str = "N2_M2_Create";
		break;
	case Commd::N3_M2_Create:
		str = "N3_M2_Create";
		break;
	case Commd::N4_M2_Create:
		str = "N4_M2_Create";
		break;
	case Commd::N5_M2_Create:
		str = "N5_M2_Create";
		break;
	case Commd::N6_M2_Create:
		str = "N6_M2_Create";
		break;
	case Commd::N7_M2_Create:
		str = "N7_M2_Create";
		break;
	case Commd::N1_M4_Create:
		str = "N1_M4_Create";
		break;
	case Commd::N2_M4_Create:
		str = "N2_M4_Create";
		break;
	case Commd::N3_M4_Create:
		str = "N3_M4_Create";
		break;
	case Commd::N4_M4_Create:
		str = "N4_M4_Create";
		break;
	case Commd::N5_M4_Create:
		str = "N5_M4_Create";
		break;
	case Commd::N6_M4_Create:
		str = "N6_M4_Create";
		break;
	case Commd::N7_M4_Create:
		str = "N7_M4_Create";
		break;
	case Commd::N1_M6_Create:
		str = "N1_M6_Create";
		break;
	case Commd::N2_M6_Create:
		str = "N2_M6_Create";
		break;
	case Commd::N3_M6_Create:
		str = "N2_M6_Create";
		break;
	case Commd::N4_M6_Create:
		str = "N4_M6_Create";
		break;
	case Commd::N5_M6_Create:
		str = "N5_M6_Create";
		break;
	case Commd::N6_M6_Create:
		str = "N6_M6_Create";
		break;
	case Commd::N7_M6_Create:
		str = "N7_M6_Create";
		break;
	case Commd::N1_M8_Create:
		str = "N1_M8_Create";
		break;
	case Commd::N2_M8_Create:
		str = "N2_M8_Create";
		break;
	case Commd::N3_M8_Create:
		str = "N3_M8_Create";
		break;
	case Commd::N4_M8_Create:
		str = "N4_M8_Create";
		break;
	case Commd::N5_M8_Create:
		str = "N5_M8_Create";
		break;
	case Commd::N6_M8_Create:
		str = "N6_M8_Create";
		break;
	case Commd::N7_M8_Create:
		str = "N7_M8_Create";
		break;
	case Commd::N1_M10_Create:
		str = "N1_M10_Create";
		break;
	case Commd::N2_M10_Create:
		str = "_Create";
		break;
	case Commd::N3_M10_Create:
		str = "N3_M10_Create";
		break;
	case Commd::N4_M10_Create:
		str = "N4_M10_Create";
		break;
	case Commd::N5_M10_Create:
		str = "N5_M10_Create";
		break;
	case Commd::N6_M10_Create:
		str = "N6_M10_Create";
		break;
	case Commd::N7_M10_Create:
		str = "N7_M10_Create";
		break;
	case Commd::N1_M12_Create:
		str = "N1_M12_Create";
		break;
	case Commd::N2_M12_Create:
		str = "N2_M12_Create";
		break;
	case Commd::N3_M12_Create:
		str = "N3_M12_Create";
		break;
	case Commd::N4_M12_Create:
		str = "N4_M12_Create";
		break;
	case Commd::N5_M12_Create:
		str = "N5_M12_Create";
		break;
	case Commd::N6_M12_Create:
		str = "N6_M12_Create";
		break;
	case Commd::N7_M12_Create:
		str = "N7_M12_Create";
		break;
	case Commd::N1_M14_Create:
		str = "N1_M14_Create";
		break;
	case Commd::N2_M14_Create:
		str = "N2_M14_Create";
		break;
	case Commd::N3_M14_Create:
		str = "N3_M14_Create";
		break;
	case Commd::N4_M14_Create:
		str = "N4_M14_Create";
		break;
	case Commd::N5_M14_Create:
		str = "N5_M14_Create";
		break;
	case Commd::N6_M14_Create:
		str = "N6_M14_Create";
		break;
	case Commd::N7_M14_Create:
		str = "N7_M14_Create";
		break;
	case Commd::N1_M16_Create:
		str = "N1_M16_Create";
		break;
	case Commd::N2_M16_Create:
		str = "N2_M16_Create";
		break;
	case Commd::N1_M18_Create:
		str = "N1_M18_Create";
		break;
	case Commd::N2_M18_Create:
		str = "N2_M18_Create";
		break;
	case Commd::N1_M20_Create:
		str = "N1_M20_Create";
		break;
	case Commd::N2_M20_Create:
		str = "N2_M20_Create";
		break;
	case Commd::M1_M5_Create:
		str = "M1_M5_Create";
		break;
	case Commd::M1_M4_Create:
		str = "M1_M4_Create";
		break;
	case Commd::M1_CH1_Create:
		str = "M1_CH1_Create";
		break;
	case Commd::M1_CH2_Create:
		str = "M1_CH2_Create";
		break;
	case Commd::M1_CH3_Create:
		str = "M1_CH3_Create";
		break;
	case Commd::M1_CH4_Create:
		str = "M1_CH4_Create";
		break;
	case Commd::M1_CH5_Create:
		str = "M1_CH5_Create";
		break;
	case Commd::M1_CH6_Create:
		str = "M1_CH6_Create";
		break;
	case Commd::M1_CH7_Create:
		str = "M1_CH7_Create";
		break;
	case Commd::M3_CH1_Create:
		str = "M3_CH1_Create";
		break;
	case Commd::M3_CH2_Create:
		str = "M3_CH2_Create";
		break;
	case Commd::M3_CH3_Create:
		str = "M3_CH3_Create";
		break;
	case Commd::M3_CH4_Create:
		str = "M3_CH4_Create";
		break;
	case Commd::M3_CH5_Create:
		str = "M3_CH5_Create";
		break;
	case Commd::M3_CH6_Create:
		str = "M3_CH6_Create";
		break;
	case Commd::M3_CH7_Create:
		str = "M3_CH7_Create";
		break;
	case Commd::M3_M4_Create:
		str = "M3_M4_Create";
		break;
	case Commd::M2_M5_Create:
		"str =M2_M5 _Create";
		break;
	case Commd::M2_N1_Create:
		str = "M2_N1_Create";
		break;
	case Commd::M2_N2_Create:
		str = "M2_N2_Create";
		break;
	case Commd::M2_N3_Create:
		str = "M2_N3_Create";
		break;
	case Commd::M2_N4_Create:
		str = "M2_N4_Create";
		break;
	case Commd::M2_N5_Create:
		str = "M2_N5_Create";
		break;
	case Commd::M2_N6_Create:
		str = "M2_N6_Create";
		break;
	case Commd::M2_N7_Create:
		str = "M2_N7_Create";
		break;
	case Commd::M4_M3_Create:
		str = "M4_M3_Create";
		break;
	case Commd::M4_M5_Create:
		str = "M4_M5_Create";
		break;
	case Commd::M4_N1_Create:
		str = "M4_N1_Create";
		break;
	case Commd::M4_N2_Create:
		str = "M4_N2_Create";
		break;
	case Commd::M4_N3_Create:
		str = "M4_N3_Create";
		break;
	case Commd::M4_N4_Create:
		str = "M4_N4_Create";
		break;
	case Commd::M4_N5_Create:
		str = "M4_N5_Create";
		break;
	case Commd::M4_N6_Create:
		str = "M4_N6_Create";
		break;
	case Commd::M4_N7_Create:
		str = "M4_N7_Create";
		break;
	case Commd::M4_M1_Create:
		str = "M4_M1_Create";
		break;
	case Commd::M5_M1_Create:
		str = "M5_M1_Create";
		break;
	case Commd::M5_M2_Create:
		str = "M5_M2_Create";
		break;
	case Commd::M5_M4_Create:
		str = "M5_M4_Create";
		break;
	case Commd::M5_M6_Create:
		str = "M5_M6_Create";
		break;
	case Commd::M5_M8_Create:
		str = "M5_M8_Create";
		break;
	case Commd::M5_M10_Create:
		str = "M5_M10_Create";
		break;
	case Commd::M5_M12_Create:
		str = "M5_M12_Create";
		break;
	case Commd::M5_M14_Create:
		str = "M5_M14_Create";
		break;
	case Commd::M5_M16_Create:
		str = "M5_M16_Create";
		break;
	case Commd::M5_M18_Create:
		str = "M5_M18_Create";
		break;
	case Commd::M5_M20_Create:
		str = "M5_M20_Create";
		break;
	case Commd::M6_M5_Create:
		str = "M6_M5_Create";
		break;
	case Commd::M6_N1_Create:
		str = "M6_N1_Create";
		break;
	case Commd::M6_N2_Create:
		str = "M6_N2_Create";
		break;
	case Commd::M6_N3_Create:
		str = "M6_N3_Create";
		break;
	case Commd::M6_N4_Create:
		str = "M6_N4_Create";
		break;
	case Commd::M6_N5_Create:
		str = "M6_N5_Create";
		break;
	case Commd::M6_N6_Create:
		str = "M6_N6_Create";
		break;
	case Commd::M6_N7_Create:
		str = "M6_N7_Create";
		break;
	case Commd::M8_M5_Create:
		str = "M8_M8_Create";
		break;
	case Commd::M8_N1_Create:
		str = "M8_N1_Create";
		break;
	case Commd::M8_N2_Create:
		str = "M8_N2_Create";
		break;
	case Commd::M8_N3_Create:
		str = "M8_N3_Create";
		break;
	case Commd::M8_N4_Create:
		str = "M8_N4_Create";
		break;
	case Commd::M8_N5_Create:
		str = "M8_N5_Create";
		break;
	case Commd::M8_N6_Create:
		str = "M8_N6_Create";
		break;
	case Commd::M8_N7_Create:
		str = "M8_N7_Create";
		break;
	case Commd::M10_M5_Create:
		str = "M10_M5_Create";
		break;
	case Commd::M10_N1_Create:
		str = "M10_N1_Create";
		break;
	case Commd::M10_N2_Create:
		str = "M10_N2_Create";
		break;
	case Commd::M10_N3_Create:
		str = "M10_N3_Create";
		break;
	case Commd::M10_N4_Create:
		str = "M10_N4_Create";
		break;
	case Commd::M10_N5_Create:
		str = "M10_N5_Create";
		break;
	case Commd::M10_N6_Create:
		str = "M10_N6_Create";
		break;
	case Commd::M10_N7_Create:
		str = "M10_N7_Create";
		break;
	case Commd::M12_M5_Create:
		str = "M12_M5_Create";
		break;
	case Commd::M12_N1_Create:
		str = "M12_N1_Create";
		break;
	case Commd::M12_N2_Create:
		str = "M12_N2_Create";
		break;
	case Commd::M12_N3_Create:
		str = "M12_N3_Create";
		break;
	case Commd::M12_N4_Create:
		str = "M12_N4_Create";
		break;
	case Commd::M12_N5_Create:
		str = "M12_N5_Create";
		break;
	case Commd::M12_N6_Create:
		str = "M12_N6_Create";
		break;
	case Commd::M12_N7_Create:
		str = "M12_N7_Create";
		break;
	case Commd::M14_M5_Create:
		str = "M14_M5_Create";
		break;
	case Commd::M14_N1_Create:
		str = "M14_N1_Create";
		break;
	case Commd::M14_N2_Create:
		str = "M14_N2_Create";
		break;
	case Commd::M14_N3_Create:
		str = "M14_N3_Create";
		break;
	case Commd::M14_N4_Create:
		str = "M14_N4_Create";
		break;
	case Commd::M14_N5_Create:
		str = "M14_N5_Create";
		break;
	case Commd::M14_N6_Create:
		str = "M14_N6_Create";
		break;
	case Commd::M14_N7_Create:
		str = "M14_N7_Create";
		break;
	case Commd::M16_M5_Create:
		str = "M16_M5_Create";
		break;
	case Commd::M16_N1_Create:
		str = "M16_N1_Create";
		break;
	case Commd::M16_N2_Create:
		str = "M16_N2_Create";
		break;
	case Commd::M18_M5_Create:
		str = "M18_M5_Create";
		break;
	case Commd::M18_N1_Create:
		str = "M18_N1_Create";
		break;
	case Commd::M18_N2_Create:
		str = "M18_N2_Create";
		break;
	case Commd::M20_M5_Create:
		str = "M20_M5_Create";
		break;
	case Commd::M20_N1_Create:
		str = "M20_N1_Create";
		break;
	case Commd::M20_N2_Create:
		str = "M20_N2_Create";
		break;
	case Commd::M1_CHM1_Create:
		str = "M1_CHM1_Create";
		break;
	case Commd::M1_CHM2_Create:
		str = "M1_CHM2_Create";
		break;
	case Commd::M1_CHM3_Create:
		str = "M1_CHM3_Create";
		break;
	case Commd::M1_CHM4_Create:
		str = "M1_CHM4_Create";
		break;
	case Commd::M1_CHM5_Create:
		str = "M1_CHM5_Create";
		break;
	case Commd::M1_CHM6_Create:
		str = "M1_CHM6_Create";
		break;
	case Commd::M1_CHM7_Create:
		str = "M1_CHM7_Create";
		break;
	case Commd::M3_CHM1_Create:
		str = "M3_CHM1_Create";
		break;
	case Commd::M3_CHM2_Create:
		str = "M3_CHM2_Create";
		break;
	case Commd::M3_CHM3_Create:
		str = "M3_CHM3_Create";
		break;
	case Commd::M3_CHM4_Create:
		str = "M3_CHM4_Create";
		break;
	case Commd::M3_CHM5_Create:
		str = "M3_CHM5_Create";
		break;
	case Commd::M3_CHM6_Create:
		str = "M3_CHM6_Create";
		break;
	case Commd::M3_CHM7_Create:
		str = "M3_CHM7_Create";
		break;
	case Commd::M21_CHM1_Create:
		str = "M21_CHM1_Create";
		break;
	case Commd::M21_CHM2_Create:
		str = "M21_CHM2_Create";
		break;
	case Commd::M21_CHM3_Create:
		str = "M21_CHM3_Create";
		break;
	case Commd::M21_CHM4_Create:
		str = "M21_CHM4_Create";
		break;
	case Commd::M21_CHM5_Create:
		str = "M21_CHM5_Create";
		break;
	case Commd::M21_CHM6_Create:
		str = "M21_CHM6_Create";
		break;
	case Commd::M21_CHM7_Create:
		str = "M21_CHM7_Create";
		break;
	case Commd::NM20_CHM1A_Create:
		str = "NM20_CHM1A_Create";
		break;
	case Commd::NM21_CHM1A_Create:
		str = "NM21_CHM1A_Create";
		break;
	case Commd::NM22_CHM1A_Create:
		str = "NM22_CHM1A_Create";
		break;
	case Commd::NM23_CHM1A_Create:
		str = "NM23_CHM1A_Create";
		break;
	case Commd::NM24_CHM1A_Create:
		str = "NM24_CHM1A_Create";
		break;
	case Commd::NM25_CHM1A_Create:
		str = "NM25_CHM1A_Create";
		break;
	case Commd::NM26_CHM1A_Create:
		str = "NM26_CHM1A_Create";
		break;
	case Commd::NM27_CHM1A_Create:
		str = "NM27_CHM1A_Create";
		break;
	case Commd::NM28_CHM1A_Create:
		str = "NM28_CHM1A_Create";
		break;
	case Commd::NM29_CHM1A_Create:
		str = "NM29_CHM1A_Create";
		break;
	case Commd::NM30_CHM1A_Create:
		str = "NM30_CHM1A_Create";
		break;
	case Commd::NM31_CHM1A_Create:
		str = "NM31_CHM1A_Create";
		break;
	case Commd::NM32_CHM1A_Create:
		str = "NM32_CHM1A_Create";
		break;
	case Commd::NM33_CHM1A_Create:
		str = "NM33_CHM1A_Create";
		break;
	case Commd::NM34_CHM1A_Create:
		str = "NM34_CHM1A_Create";
		break;
	case Commd::NM11_CHM2A_Create:
		str = "NM11_CHM2A_Create";
		break;
	case Commd::NM12_CHM2A_Create:
		str = "NM12_CHM2A_Create";
		break;
	case Commd::NM13_CHM2A_Create:
		str = "NM13_CHM2A_Create";
		break;
	case Commd::NM14_CHM2A_Create:
		str = "NM14_CHM2A_Create";
		break;
	case Commd::NM15_CHM2A_Create:
		str = "NM15_CHM2A_Create";
		break;
	case Commd::NM16_CHM2A_Create:
		str = "NM16_CHM2A_Create";
		break;
	case Commd::NM17_CHM2A_Create:
		str = "NM17_CHM2A_Create";
		break;
	case Commd::NM18_CHM2A_Create:
		str = "NM18_CHM2A_Create";
		break;
	case Commd::NM19_CHM2A_Create:
		str = "NM19_CHM2A_Create";
		break;
	case Commd::NM20_CHM2A_Create:
		str = "NM_20CHM2A_Create";
		break;
	case Commd::NM21_CHM2A_Create:
		str = "NM21_CHM2A_Create";
		break;
	case Commd::NM22_CHM2A_Create:
		str = "NM22_CHM2A_Create";
		break;
	case Commd::NM23_CHM2A_Create:
		str = "NM23_CHM2A_Create";
		break;
	case Commd::NM24_CHM2A_Create:
		str = "NM24_CHM2A_Create";
		break;
	case Commd::NM25_CHM2A_Create:
		str = "NM25_CHM2A_Create";
		break;
	case Commd::NM26_CHM2A_Create:
		str = "NM26_CHM2A_Create";
		break;
	case Commd::NM27_CHM2A_Create:
		str = "NM27_CHM2A_Create";
		break;
	case Commd::NM28_CHM2A_Create:
		str = "NM28_CHM2A_Create";
		break;
	case Commd::NM29_CHM2A_Create:
		str = "NM29_CHM2A_Create";
		break;
	case Commd::NM30_CHM2A_Create:
		str = "NM30_CHM2A_Create";
		break;
	case Commd::NM31_CHM2A_Create:
		str = "NM31_CHM2A_Create";
		break;
	case Commd::NM32_CHM2A_Create:
		str = "NM32_CHM2A_Create";
		break;
	case Commd::NM33_CHM2A_Create:
		str = "NM33_CHM2A_Create";
		break;
	case Commd::NM34_CHM2A_Create:
		str = "NM34_CHM2A_Create";
		break;
	case Commd::NM11_CHM3A_Create:
		str = "NM11_CHM3A_Create";
		break;
	case Commd::NM12_CHM3A_Create:
		str = "NM12_CHM3A_Create";
		break;
	case Commd::NM13_CHM3A_Create:
		str = "NM13_CHM3A_Create";
		break;
	case Commd::NM14_CHM3A_Create:
		str = "NM14_CHM3A_Create";
		break;
	case Commd::NM15_CHM3A_Create:
		str = "NM15_CHM3A_Create";
		break;
	case Commd::NM16_CHM3A_Create:
		str = "NM16_CHM3A_Create";
		break;
	case Commd::NM17_CHM3A_Create:
		str = "NM17_CHM3A_Create";
		break;
	case Commd::NM18_CHM3A_Create:
		str = "NM18_CHM3A_Create";
		break;
	case Commd::NM19_CHM3A_Create:
		str = "NM19_CHM3A_Create";
		break;
	case Commd::NM20_CHM3A_Create:
		str = "NM20_CHM3A_Create";
		break;
	case Commd::NM21_CHM3A_Create:
		str = "NM21_CHM3A_Create";
		break;
	case Commd::NM22_CHM3A_Create:
		str = "NM22_CHM3A_Create";
		break;
	case Commd::NM11_CHM4A_Create:
		str = "NM11_CHM4A_Create";
		break;
	case Commd::NM12_CHM4A_Create:
		str = "NM12_CHM4A_Create";
		break;
	case Commd::NM13_CHM4A_Create:
		str = "NM13_CHM4A_Create";
		break;
	case Commd::NM14_CHM4A_Create:
		str = "NM14_CHM4A_Create";
		break;
	case Commd::NM15_CHM4A_Create:
		str = "NM15_CHM4A_Create";
		break;
	case Commd::NM16_CHM4A_Create:
		str = "NM16_CHM4A_Create";
		break;
	case Commd::NM17_CHM4A_Create:
		str = "NM17_CHM4A_Create";
		break;
	case Commd::NM18_CHM4A_Create:
		str = "NM18_CHM4A_Create";
		break;
	case Commd::NM19_CHM4A_Create:
		str = "NM19_CHM4A_Create";
		break;
	case Commd::NM20_CHM4A_Create:
		str = "NM20_CHM4A_Create";
		break;
	case Commd::NM21_CHM4A_Create:
		str = "NM21_CHM4A_Create";
		break;
	case Commd::NM22_CHM4A_Create:
		str = "NM22_CHM4A_Create";
		break;
	case Commd::CHM1_M1_Create:
		str = "CHM1_M1_Create";
		break;
	case Commd::CHM2_M1_Create:
		str = "CHM2_M1_Create";
		break;
	case Commd::CHM3_M1_Create:
		str = "CHM3_M1_Create";
		break;
	case Commd::CHM4_M1_Create:
		str = "CHM4_M1_Create";
		break;
	case Commd::CHM5_M1_Create:
		str = "CHM5_M1_Create";
		break;
	case Commd::CHM6_M1_Create:
		str = "CHM6_M1_Create";
		break;
	case Commd::CHM7_M1_Create:
		str = "CHM7_M1_Create";
		break;
	case Commd::M14_M1_Create:
		str = "M14_M1_Create";
		break;
	case Commd::M16_M1_Create:
		str = "M16_M1_Create";
		break;
	case Commd::M18_M1_Create:
		str = "M18_M1_Create";
		break;
	case Commd::M20_M1_Create:
		str = "M20_M1_Create";
		break;
	case Commd::CHM1_M3_Create:
		str = "CHM1_M3_Create";
		break;
	case Commd::CHM2_M3_Create:
		str = "CHM2_M3_Create";
		break;
	case Commd::CHM3_M3_Create:
		str = "CHM3_M3_Create";
		break;
	case Commd::CHM4_M3_Create:
		str = "CHM4_M3_Create";
		break;
	case Commd::CHM5_M3_Create:
		str = "CHM5_M3_Create";
		break;
	case Commd::CHM6_M3_Create:
		str = "CHM6_M3_Create";
		break;
	case Commd::CHM7_M3_Create:
		str = "CHM7_M3_Create";
		break;
	case Commd::M14_M3_Create:
		str = "M14_M3_Create";
		break;
	case Commd::M16_M3_Create:
		str = "M16_M3_Create";
		break;
	case Commd::M18_M3_Create:
		str = "M18_M3_Create";
		break;
	case Commd::M20_M3_Create:
		str = "M20_M3_Create";
		break;
	case Commd::NM1_M6_Create:
		str = "NM1_M6_Create";
		break;
	case Commd::NM2_M6_Create:
		str = "NM2_M6_Create";
		break;
	case Commd::NM3_M6_Create:
		str = "NM3_M6_Create";
		break;
	case Commd::NM4_M6_Create:
		str = "NM4_M6_Create";
		break;
	case Commd::NM5_M6_Create:
		str = "NM5_M6_Create";
		break;
	case Commd::NM6_M6_Create:
		str = "NM6_M6_Create";
		break;
	case Commd::NM7_M6_Create:
		str = "NM7_M6_Create";
		break;
	case Commd::NM1B_M6_Create:
		str = "NM1B_M6_Create";
		break;
	case Commd::NM2B_M6_Create:
		str = "NM2B_M6_Create";
		break;
	case Commd::NM3B_M6_Create:
		str = "NM3B_M6_Create";
		break;
	case Commd::NM4B_M6_Create:
		str = "NM4B_M6_Create";
		break;
	case Commd::M1_M20_Create:
		str = "M1_M20_Create";
		break;
	case Commd::M3_M20_Create:
		str = "M3_M20_Create";
		break;
	case Commd::M21_M20_Create:
		str = "M21_M20_Create";
		break;
	case Commd::CHM1_M21_Create:
		str = "CHM1_M21_Create";
		break;
	case Commd::CHM2_M21_Create:
		str = "CHM2_M21_Create";
		break;
	case Commd::CHM3_M21_Create:
		str = "CHM3_M21_Create";
		break;
	case Commd::CHM4_M21_Create:
		str = "CHM4_M21_Create";
		break;
	case Commd::CHM5_M21_Create:
		str = "CHM5_M21_Create";
		break;
	case Commd::CHM6_M21_Create:
		str = "CHM6_M21_Create";
		break;
	case Commd::CHM7_M21_Create:
		str = "CHM7_M21_Create";
		break;
	case Commd::M14_M21_Create:
		str = "M14_M21_Create";
		break;
	case Commd::M16_M21_Create:
		str = "M16_M21_Create";
		break;
	case Commd::M18_M21_Create:
		str = "M18_M21_Create";
		break;
	case Commd::M20_M21_Create:
		str = "M20_M21_Create";
		break;
	case Commd::NM1B_PG1_Create:
		str = "NM1B_PG1_Create";
		break;
	case Commd::NM2B_PG1_Create:
		str = "NM2B_PG1_Create";
		break;
	case Commd::NM3B_PG1_Create:
		str = "NM3B_PG1_Create";
		break;
	case Commd::NM4B_PG1_Create:
		str = "NM4B_PG1_Create";
		break;
	case Commd::NM1B_PG2_Create:
		str = "NM1B_PG2_Create";
		break;
	case Commd::NM2B_PG2_Create:
		str = "NM2B_PG2_Create";
		break;
	case Commd::NM3B_PG2_Create:
		str = "NM3B_PG2_Create";
		break;
	case Commd::NM4B_PG2_Create:
		str = "NM3B_PG2_Create";
		break;
	case Commd::M2_N1A_Create:
		str = "M2_N1A_Create";
		break;
	case Commd::M2_N2A_Create:
		str = "M2_N2A_Create";
		break;
	case Commd::M2_N3A_Create:
		str = "M2_N3A_Create";
		break;
	case Commd::M2_N4A_Create:
		str = "M2_N4A_Create";
		break;
	case Commd::M2_N5A_Create:
		str = "M2_N5A_Create";
		break;
	case Commd::M4_N1A_Create:
		str = "M4_N1A_Create";
		break;
	case Commd::M4_N2A_Create:
		str = "M4_N2A_Create";
		break;
	case Commd::M4_N3A_Create:
		str = "M4_N3A_Create";
		break;
	case Commd::M4_N4A_Create:
		str = "M4_N4A_Create";
		break;
	case Commd::M4_N5A_Create:
		str = "M4_N5A_Create";
		break;
	case Commd::M5_CH5_Create:
		str = "M5_CH5_Create";
		break;
	case Commd::CH5_M5_Create:
		str = "CH5_M5_Create";
		break;
	case Commd::M13_CHM5A_Create:
		str = "M13_CHM5A_Create";
		break;
	case Commd::CHM1A_NM1_Create:
		str = "CHM1A_NM1_Create";
		break;
	case Commd::CHM2A_NM1_Create:
		str = "CHM2A_NM1_Create";
		break;
	case Commd::CHM3A_NM1_Create:
		str = "CHM3A_NM1_Create";
		break;
	case Commd::CHM4A_NM1_Create:
		str = "CHM4A_NM1_Create";
		break;
	case Commd::CHM5A_NM1_Create:
		str = "CHM5A_NM1_Create";
		break;
	case Commd::CHM1A_NM2_Create:
		str = "CHM1A_NM2_Create";
		break;
	case Commd::CHM2A_NM2_Create:
		str = "CHM2A_NM2_Create";
		break;
	case Commd::CHM3A_NM2_Create:
		str = "CHM3A_NM2_Create";
		break;
	case Commd::CHM4A_NM2_Create:
		str = "CHM4A_NM2_Create";
		break;
	case Commd::CHM5A_NM2_Create:
		str = "CHM5A_NM2_Create";
		break;
	case Commd::CHM1A_NM3_Create:
		str = "CHM1A_NM3_Create";
		break;
	case Commd::CHM2A_NM3_Create:
		str = "CHM2A_NM3__Create";
		break;
	case Commd::CHM3A_NM3_Create:
		str = "CHM3A_NM3__Create";
		break;
	case Commd::CHM4A_NM3_Create:
		str = "CHM4A_NM3__Create";
		break;
	case Commd::CHM5A_NM3_Create:
		str = "CHM5A_NM3__Create";
		break;
	case Commd::CHM1A_NM4_Create:
		"str =CHM1A_NM4_ _Create";
		break;
	case Commd::CHM2A_NM4_Create:
		str = "CHM2A_NM4_Create";
		break;
	case Commd::CHM3A_NM4_Create:
		str = "CHM3A_NM4_Create";
		break;
	case Commd::CHM4A_NM4_Create:
		str = "CHM4A_NM4_Create";
		break;
	case Commd::CHM5A_NM4_Create:
		str = "CHM5A_NM4_Create";
		break;
	case Commd::CHM1A_NM5_Create:
		str = "CHM1A_NM5_Create";
		break;
	case Commd::CHM2A_NM5_Create:
		str = "CHM2A_NM5_Create";
		break;
	case Commd::CHM3A_NM5_Create:
		str = "CHM3A_NM5_Create";
		break;
	case Commd::CHM4A_NM5_Create:
		str = "CHM4A_NM5_Create";
		break;
	case Commd::CHM5A_NM5_Create:
		str = "CHM5A_NM5_Create";
		break;
	case Commd::CHM1A_NM6_Create:
		str = "CHM1A_NM6_Create";
		break;
	case Commd::CHM2A_NM6_Create:
		str = "CHM2A_NM6_Create";
		break;
	case Commd::CHM3A_NM6_Create:
		str = "CHM3A_NM6_Create";
		break;
	case Commd::CHM4A_NM6_Create:
		str = "CHM4A_NM6_Create";
		break;
	case Commd::CHM5A_NM6_Create:
		str = "CHM5A_NM6_Create";
		break;
	case Commd::CHM1A_NM7_Create:
		str = "CHM1A_NM7_Create";
		break;
	case Commd::CHM2A_NM7_Create:
		str = "CHM2A_NM7_Create";
		break;
	case Commd::CHM3A_NM7_Create:
		str = "CHM3A_NM7_Create";
		break;
	case Commd::CHM4A_NM7_Create:
		str = "CHM4A_NM7_Create";
		break;
	case Commd::CHM5A_NM7_Create:
		str = "CHM5A_NM7_Create";
		break;
	case Commd::M1_M14_Create:
		str = "M1_M14_Create";
		break;
	case Commd::M1_M16_Create:
		str = "M1_M16_Create";
		break;
	case Commd::M1_M18_Create:
		str = "M1_M18_Create";
		break;
	case Commd::M3_M14_Create:
		str = "M3_M14_Create";
		break;
	case Commd::M3_M16_Create:
		str = "M3_M16_Create";
		break;
	case Commd::M3_M18_Create:
		str = "M3_M18_Create";
		break;
	case Commd::M21_M14_Create:
		str = "M21_M14_Create";
		break;
	case Commd::M21_M16_Create:
		str = "M21_M16_Create";
		break;
	case Commd::M21_M18_Create:
		str = "M21_M18_Create";
		break;
	case Commd::M5_CH6_Create:
		str = "M5_CH6_Create";
		break;
	case Commd::CH6_M5_Create:
		str = "CH6_M5_Create";
		break;
	case Commd::M15_M2_Create:
		str = "M15_M2_Create";
		break;
	case Commd::N1A_M2_Create:
		str = "N1A_M2_Create";
		break;
	case Commd::N2A_M2_Create:
		str = "N2A_M2_Create";
		break;
	case Commd::N3A_M2_Create:
		str = "N3A_M2_Create";
		break;
	case Commd::N4A_M2_Create:
		str = "N4A_M2_Create";
		break;
	case Commd::N5A_M2_Create:
		str = "N5A_M2_Create";
		break;
	case Commd::M15_M4_Create:
		str = "M15_M4_Create";
		break;
	case Commd::N1A_M4_Create:
		str = "N1A_M4_Create";
		break;
	case Commd::N2A_M4_Create:
		str = "N2A_M4_Create";
		break;
	case Commd::N3A_M4_Create:
		str = "N3A_M4_Create";
		break;
	case Commd::N4A_M4_Create:
		str = "N4A_M4_Create";
		break;
	case Commd::N5A_M4_Create:
		str = "N5A_M4_Create";
		break;
	case Commd::CHM3A_M13_Create:
		str = "CHM3A_M13_Create";
		break;
	case Commd::CHM4A_M13_Create:
		str = "CHM4A_M13_Create";
		break;
	case Commd::CHM5A_M13_Create:
		str = "CHM5A_M13_Create";
		break;
	case Commd::CHM2A_M27_Create:
		str = "CHM2A_M27_Create";
		break;
	case Commd::CHM3A_M27_Create:
		str = "CHM3A_M27_Create";
		break;
	case Commd::CHM4A_M27_Create:
		str = "CHM4A_M27_Create";
		break;
	case Commd::CHM5A_M27_Create:
		str = "CHM5A_M27_Create";
		break;
	case Commd::M2_M15_Create:
		str = "M2_M15_Create";
		break;
	case Commd::M4_M15_Create:
		str = "M4_M15_Create";
		break;
	case Commd::M22_NM23_Create:
		str = "M22_NM23_Create";
		break;
	case Commd::M22_NM24_Create:
		str = "M22_NM24_Create";
		break;
	case Commd::M22_NM25_Create:
		str = "M22_NM25_Create";
		break;
	case Commd::M22_NM26_Create:
		str = "M22_NM26_Create";
		break;
	case Commd::M22_NM27_Create:
		str = "M22_NM27_Create";
		break;
	case Commd::M22_NM28_Create:
		"str =M22_NM28 _Create";
		break;
	case Commd::M22_NM29_Create:
		str = "M22_NM29_Create";
		break;
	case Commd::M22_NM30_Create:
		str = "M22_NM30_Create";
		break;
	case Commd::M22_NM31_Create:
		str = "M22_NM31_Create";
		break;
	case Commd::M22_NM32_Create:
		str = "M22_NM32_Create";
		break;
	case Commd::M22_NM33_Create:
		str = "M22_NM33_Create";
		break;
	case Commd::M22_NM34_Create:
		str = "M22_NM34_Create";
		break;
	case Commd::CHM1A_NM20_Create:
		str = "CHM1A_NM20_Create";
		break;
	case Commd::CHM1A_NM21_Create:
		str = "CHM1A_NM21_Create";
		break;
	case Commd::CHM1A_NM22_Create:
		str = "CHM1A_NM22_Create";
		break;
	case Commd::CHM1A_NM23_Create:
		str = "CHM1A_NM23_Create";
		break;
	case Commd::CHM1A_NM24_Create:
		str = "CHM1A_NM24_Create";
		break;
	case Commd::CHM1A_NM25_Create:
		str = "CHM1A_NM25_Create";
		break;
	case Commd::CHM1A_NM26_Create:
		str = "CHM1A_NM26_Create";
		break;
	case Commd::CHM1A_NM27_Create:
		str = "CHM1A_NM27_Create";
		break;
	case Commd::CHM1A_NM28_Create:
		str = "CHM1A_NM28_Create";
		break;
	case Commd::CHM1A_NM29_Create:
		str = "CHM1A_NM29_Create";
		break;
	case Commd::CHM1A_NM30_Create:
		str = "CHM1A_NM30_Create";
		break;
	case Commd::CHM1A_NM31_Create:
		str = "CHM1A_NM31_Create";
		break;
	case Commd::CHM1A_NM32_Create:
		str = "CHM1A_NM32_Create";
		break;
	case Commd::CHM1A_NM33_Create:
		str = "CHM1A_NM33_Create";
		break;
	case Commd::CHM1A_NM34_Create:
		str = "CHM1A_NM34_Create";
		break;
	case Commd::CHM2A_NM11_Create:
		str = "CHM2A_NM11_Create";
		break;
	case Commd::CHM2A_NM12_Create:
		str = "CHM2A_NM12_Create";
		break;
	case Commd::CHM2A_NM13_Create:
		str = "CHM2A_NM13_Create";
		break;
	case Commd::CHM2A_NM14_Create:
		str = "CHM2A_NM14_Create";
		break;
	case Commd::CHM2A_NM15_Create:
		str = "CHM2A_NM15_Create";
		break;
	case Commd::CHM2A_NM16_Create:
		str = "CHM2A_NM16_Create";
		break;
	case Commd::CHM2A_NM17_Create:
		str = "CHM2A_NM17_Create";
		break;
	case Commd::CHM2A_NM18_Create:
		str = "CHM2A_NM18_Create";
		break;
	case Commd::CHM2A_NM19_Create:
		str = "CHM2A_NM19_Create";
		break;
	case Commd::CHM2A_NM20_Create:
		str = "CHM2A_NM20_Create";
		break;
	case Commd::CHM2A_NM21_Create:
		str = "CHM2A_NM21_Create";
		break;
	case Commd::CHM2A_NM22_Create:
		str = "CHM2A_NM22_Create";
		break;
	case Commd::CHM2A_NM23_Create:
		str = "CHM2A_NM23_Create";
		break;
	case Commd::CHM2A_NM24_Create:
		str = "CHM2A_NM24_Create";
		break;
	case Commd::CHM2A_NM25_Create:
		str = "CHM2A_NM25_Create";
		break;
	case Commd::CHM2A_NM26_Create:
		str = "CHM2A_NM26_Create";
		break;
	case Commd::CHM2A_NM27_Create:
		str = "CHM2A_NM27_Create";
		break;
	case Commd::CHM2A_NM28_Create:
		str = "CHM2A_NM28_Create";
		break;
	case Commd::CHM2A_NM29_Create:
		str = "CHM2A_NM29_Create";
		break;
	case Commd::CHM2A_NM30_Create:
		str = "CHM2A_NM30_Create";
		break;
	case Commd::CHM2A_NM31_Create:
		str = "CHM2A_NM31_Create";
		break;
	case Commd::CHM2A_NM32_Create:
		str = "CHM2A_NM32_Create";
		break;
	case Commd::CHM2A_NM33_Create:
		str = "CHM2A_NM33_Create";
		break;
	case Commd::CHM2A_NM34_Create:
		str = "CHM2A_NM34_Create";
		break;
	case Commd::CHM3A_NM11_Create:
		str = "CHM3A_NM11_Create";
		break;
	case Commd::CHM3A_NM12_Create:
		str = "CHM3A_NM12_Create";
		break;
	case Commd::CHM3A_NM13_Create:
		str = "CHM3A_NM13_Create";
		break;
	case Commd::CHM3A_NM14_Create:
		str = "CHM3A_NM14_Create";
		break;
	case Commd::CHM3A_NM15_Create:
		str = "CHM3A_NM15_Create";
		break;
	case Commd::CHM3A_NM16_Create:
		str = "CHM3A_NM16_Create";
		break;
	case Commd::CHM3A_NM17_Create:
		str = "CHM3A_NM17_Create";
		break;
	case Commd::CHM3A_NM18_Create:
		str = "CHM3A_NM18_Create";
		break;
	case Commd::CHM3A_NM19_Create:
		str = "CHM3A_NM19_Create";
		break;
	case Commd::CHM3A_NM20_Create:
		str = "CHM3A_NM20_Create";
		break;
	case Commd::CHM3A_NM21_Create:
		str = "CHM3A_NM21_Create";
		break;
	case Commd::CHM3A_NM22_Create:
		str = "CHM3A_NM22_Create";
		break;
	case Commd::CHM4A_NM11_Create:
		str = "CHM4A_NM11_Create";
		break;
	case Commd::CHM4A_NM12_Create:
		str = "CHM4A_NM12_Create";
		break;
	case Commd::CHM4A_NM13_Create:
		str = "CHM4A_NM13_Create";
		break;
	case Commd::CHM4A_NM14_Create:
		str = "CHM4A_NM14_Create";
		break;
	case Commd::CHM4A_NM15_Create:
		str = "CHM4A_NM15_Create";
		break;
	case Commd::CHM4A_NM16_Create:
		str = "CHM4A_NM16_Create";
		break;
	case Commd::CHM4A_NM17_Create:
		str = "CHM4A_NM17_Create";
		break;
	case Commd::CHM4A_NM18_Create:
		str = "CHM4A_NM18_Create";
		break;
	case Commd::CHM4A_NM19_Create:
		str = "CHM4A_NM19_Create";
		break;
	case Commd::CHM4A_NM20_Create:
		str = "CHM4A_NM20_Create";
		break;
	case Commd::CHM4A_NM21_Create:
		str = "CHM4A_NM21_Create";
		break;
	case Commd::CHM4A_NM22_Create:
		str = "CHM4A_NM22_Create";
		break;
	case Commd::NM23_M22_Create:
		str = "NM23_M22_Create";
		break;
	case Commd::NM24_M22_Create:
		str = "NM24_M22_Create";
		break;
	case Commd::NM25_M22_Create:
		str = "NM25_M22_Create";
		break;
	case Commd::NM26_M22_Create:
		str = "NM26_M22_Create";
		break;
	case Commd::NM27_M22_Create:
		str = "NM27_M22_Create";
		break;
	case Commd::NM28_M22_Create:
		str = "NM28_M22_Create";
		break;
	case Commd::NM29_M22_Create:
		str = "NM29_M22_Create";
		break;
	case Commd::NM30_M22_Create:
		str = "NM30_M22_Create";
		break;
	case Commd::NM31_M22_Create:
		str = "NM31_M22_Create";
		break;
	case Commd::NM32_M22_Create:
		str = "NM32_M22_Create";
		break;
	case Commd::NM33_M22_Create:
		str = "NM33_M22_Create";
		break;
	case Commd::NM34_M22_Create:
		str = "NM34_M22_Create";
		break;

#pragma endregion


#pragma region OtmenaRouters


	case Commd::N:
		str = "select_N";
		break;
	case Commd::ND:
		str = "select_ND";
		break;
	case Commd::CH:
		str = "select_CH";
		break;
	case Commd::CHD:
		str = "select_CHD";
		break;
	case Commd::CHR:
		str = "select_CHR";
		break;
	case Commd::N1:
		str = "select_N1";
		break;
	case Commd::N2:
		str = "select_N2";
		break;
	case Commd::N3:
		str = "select_N3";
		break;
	case Commd::N4:
		str = "select_N4";
		break;
	case Commd::N5:
		str = "select_N5";
		break;
	case Commd::N6:
		str = "select_N6";
		break;
	case Commd::N7:
		str = "select_N7";
		break;
	case Commd::CH1:
		str = "select_CH1";
		break;
	case Commd::CH2:
		str = "select_CH2";
		break;
	case Commd::CH3:
		str = "select_CH3";
		break;
	case Commd::CH4:
		str = "select_CH4";
		break;
	case Commd::CH5:
		str = "select_CH5";
		break;
	case Commd::CH6:
		str = "select_CH6";
		break;
	case Commd::CH7:
		str = "select_CH7";
		break;
	case Commd::M1:
		str = "select_M1";
		break;
	case Commd::M2:
		str = "select_M2";
		break;
	case Commd::M3:
		str = "select_M3";
		break;
	case Commd::M4:
		str = "select_M4";
		break;
	case Commd::M5:
		str = "select_M5";
		break;
	case Commd::M6:
		str = "select_M6";
		break;
	case Commd::M7:
		str = "select_M7";
		break;
	case Commd::M8:
		str = "select_M8";
		break;
	case Commd::M9:
		str = "select_M9";
		break;
	case Commd::M10:
		str = "select_M10";
		break;
	case Commd::M11:
		str = "select_M11";
		break;
	case Commd::M12:
		str = "select_M12";
		break;
	case Commd::M13:
		str = "select_M13";
		break;
	case Commd::M14:
		str = "select_M14";
		break;
	case Commd::M15:
		str = "select_M15";
		break;
	case Commd::M16:
		str = "select_M16";
		break;
	case Commd::M17:
		str = "select_M17";
		break;
	case Commd::M18:
		str = "select_M18";
		break;
	case Commd::M19:
		str = "select_M19";
		break;
	case Commd::M20:
		str = "select_M20";
		break;
	case Commd::M21:
		str = "select_M21";
		break;
	case Commd::M22:
		str = "select_M22";
		break;
	case Commd::M23:
		str = "select_M23";
		break;
	case Commd::M24:
		str = "select_M24";
		break;
	case Commd::M25:
		str = "select_M25";
		break;
	case Commd::M26:
		str = "select_M26";
		break;
	case Commd::M27:
		str = "select_M27";
		break;
	case Commd::M28:
		str = "select_M28";
		break;
	case Commd::M29:
		str = "select_M29";
		break;
	case Commd::M30:
		str = "select_M30";
		break;
	case Commd::M31:
		str = "select_M31";
		break;
	case Commd::NM1:
		str = "select_NM1";
		break;
	case Commd::NM2:
		str = "select_NM2";
		break;
	case Commd::NM3:
		str = "select_NM3";
		break;
	case Commd::NM4:
		str = "select_NM4";
		break;
	case Commd::NM5:
		str = "select_NM5";
		break;
	case Commd::NM6:
		str = "select_NM6";
		break;
	case Commd::NM7:
		str = "select_NM7";
		break;
	case Commd::NM8:
		str = "select_NM8";
		break;
	case Commd::NM9:
		str = "select_NM9";
		break;
	case Commd::NM10:
		str = "select_NM10";
		break;
	case Commd::NM11:
		str = "select_NM11";
		break;
	case Commd::NM12:
		str = "select_NM12";
		break;
	case Commd::NM13:
		str = "select_NM13";
		break;
	case Commd::NM14:
		str = "select_NM14";
		break;
	case Commd::NM15:
		str = "select_NM15";
		break;
	case Commd::NM16:
		str = "select_NM16";
		break;
	case Commd::NM17:
		str = "select_NM17";
		break;
	case Commd::NM18:
		str = "select_NM18";
		break;
	case Commd::NM19:
		str = "select_NM19";
		break;
	case Commd::NM20:
		str = "select_NM20";
		break;
	case Commd::NM21:
		str = "select_NM21";
		break;
	case Commd::NM22:
		str = "select_NM22";
		break;
	case Commd::NM23:
		str = "select_NM23";
		break;
	case Commd::NM24:
		str = "select_NM24";
		break;
	case Commd::NM25:
		str = "select_NM25";
		break;
	case Commd::NM26:
		str = "select_NM26";
		break;
	case Commd::NM27:
		str = "select_NM27";
		break;
	case Commd::NM28:
		str = "select_NM28";
		break;
	case Commd::NM29:
		str = "select_NM29";
		break;
	case Commd::NM30:
		str = "select_NM30";
		break;
	case Commd::NM31:
		str = "select_NM31";
		break;
	case Commd::NM32:
		str = "select_NM32";
		break;
	case Commd::NM33:
		str = "select_NM33";
		break;
	case Commd::NM34:
		str = "select_NM33";
		break;
	case Commd::N1A:
		str = "select_N1A";
		break;
	case Commd::N2A:
		str = "select_N2A";
		break;
	case Commd::N3A:
		str = "select_N3A";
		break;
	case Commd::N4A:
		str = "select_N4A";
		break;
	case Commd::N5A:
		str = "select_N5A";
		break;
	case Commd::CHM1:
		str = "select_CHM1";
		break;
	case Commd::CHM2:
		str = "select_CHM2";
		break;
	case Commd::CHM3:
		str = "select_CHM3";
		break;
	case Commd::CHM4:
		str = "select_CHM4";
		break;
	case Commd::CHM5:
		str = "select_CHM5";
		break;
	case Commd::CHM6:
		str = "select_CHM6";
		break;
	case Commd::CHM7:
		str = "select_CHM7";
		break;
	case Commd::CHM1A:
		str = "select_CHM1A";
		break;
	case Commd::CHM2A:
		str = "select_CHM2A";
		break;
	case Commd::CHM3A:
		str = "select_CHM3A";
		break;
	case Commd::CHM4A:
		str = "select_CHM4A";
		break;
	case Commd::CHM5A:
		str = "select_CHM5A";
		break;
	case Commd::NM1A:
		str = "select_NM1A";
		break;
	case Commd::NM2A:
		str = "select_NM2A";
		break;
	case Commd::NM3A:
		str = "select_NM3A";
		break;
	case Commd::NM4A:
		str = "select_NM4A";
		break;
	case Commd::NM1B:
		str = "select_NM1B";
		break;
	case Commd::NM2B:
		str = "select_NM2B";
		break;
	case Commd::NM3B:
		str = "select_NM3B";
		break;
	case Commd::NM4B:
		str = "select_NM4B";
		break;

#pragma endregion

	default:
		break;
	}
	return str;
}
