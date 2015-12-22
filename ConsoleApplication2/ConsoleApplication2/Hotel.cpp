#include"Hotel.h"
#include"Reservation.h"
#include<iostream>
#include<string>
using namespace std;
Hotel::Hotel(string hname, int norooms, Room*room) :room()  
{
	Name = hname;
	NoRooms = norooms;
	this->room = new Room[NoRooms];
	res = new Res[NoRooms];
	for (int i = 0; i < NoRooms; i++)
	{
		this->room[i] = room[i];
	}
} 
Hotel::Hotel()
{}
void Hotel::setroom(Room*room)	
{
	
	room = new Room[NoRooms];
	for (int i = 0; i < NoRooms; i++)
	{
		room[i].setRoomType(room[i].getRoomType());
		room[i].setPricepday(room[i].getPricepday());
		room[i].setRoomNo(room[i].getRoomNo());
		room[i].setisRes(room[i].getisres());
	}
}
Hotel::Hotel(const Hotel &otherhotel)
{
	Name = otherhotel.Name;
	NoRooms = otherhotel.NoRooms;
	room = new Room[NoRooms];
	for (int i = 0; i < NoRooms; i++)
	{
		room[i] = otherhotel.room[i];
	}
	res = new Res[NoRooms];
	for (int i = 0; i < NoRooms; i++)
	{
		if (room[i].isRes)
			res[i] = otherhotel.res[i];
	}
}
Hotel::~Hotel()
{
	delete[] room;
	delete[] res;
	room = 0;
	res = 0;
}
int Hotel::getNRoom()
{
	return NoRooms;
}
Room Hotel::getRooms(int n)
{
	return room[n-1];
	
}
Room* Hotel::getRoom()
{
	return room;
}
Res* Hotel::getRes()
{
	return res;
}
bool Hotel::resroom(Customer *customer, int roo, int d)
{
	
	if (!room[roo-1].isRes)
	{
		room[roo - 1].isRes = true;
		customer->Price = d*room[roo - 1].Pricepday;
		res[roo - 1].customer = *customer;
		res[roo - 1].RoomNo= roo;
		res[roo - 1].DayNo = d;
		return true;
	}
	else
		return false;
}
void Hotel::freeroom(int roo)
{
	room[roo-1].setisRes(false);     //room[roo-1].isres=false;
}
void Hotel::printres()
{
	for (int i = 0; i < NoRooms; i++)
	{
		if (room[i].isRes)
		{
			cout << "Room" <<i+1 << endl
				<< "#Days" << res[i].DayNo << endl;
			res[i].customer.print();
		}
	}
}	