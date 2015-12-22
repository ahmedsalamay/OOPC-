#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED
#include<string>
#include<iostream>
#include"Room.h"
#include"Reservation.h"
#include"Customer.h"
using namespace std;
class Hotel
{
private:
	string Name;
	int NoRooms;
	Room *room;
	Res *res;
public:
	Hotel(string,int,Room*);
	Hotel(const Hotel &otheHotel);
	Hotel();
	~Hotel();
	int getNRoom();
	Room getRooms(int);
	Room *getRoom();
	Res* getRes();
	bool resroom(Customer *, int, int);
	void freeroom(int);
	void setroom(Room*room);
	void printres();
};
#endif 