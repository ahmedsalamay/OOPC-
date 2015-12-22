#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
#include<string>
#include<iostream>
#include"Customer.h"
using namespace std;
class Res
{
private:
	Customer customer;
	int RoomNo;
	int DayNo;
public:
	Res();
	Res(Customer*, int, int);
	Res(Res&otherRes);
	void setCust(Customer c);
	void setRoomNo(int);
	void setDayNo(int);
	Customer getCust();
	int getRoomNo();
	int getDayno();
	friend class Hotel;
};

#endif 
 