#	include"Reservation.h"

#include<iostream>
#include<string>
using namespace std;
Res::Res()
{
	DayNo = 0;
	RoomNo = 0;
}
Res::Res(Customer *customer, int noroom, int nodays):customer(*customer)
{
	RoomNo = noroom;
	DayNo = nodays;
	
}
Res::Res( Res&other)
{
	this->RoomNo = other.RoomNo;         //getRoomNo()
	this->DayNo = other.DayNo;           //getDayno()
}
/*
void Res::setCust(Customer c)
{
	c.setName(c.getName());
	c.setMob(c.getMob());
	c.setNID(c.getNID());
}
void Res::setRoomNo(int noroom)
{
	RoomNo = noroom;
}
void Res::setDayNo(int dayno)
{
	DayNo = dayno;
}
Customer Res:: getCust()
{
	return customer;
}
int Res::getRoomNo()
{
	return RoomNo;
}
int Res::getDayno()
{
	return DayNo;
}*/