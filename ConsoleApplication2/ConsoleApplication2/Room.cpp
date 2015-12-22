#include"Room.h"
#include<iostream>
using namespace std;
Room::Room()
{
	No = 0;
	type = "";
	isRes = false;
	Pricepday = 0.0;
}
Room::Room(Room&otherRoom)
{
	No = otherRoom.No;
	type = otherRoom.getRoomType();
	Pricepday = otherRoom.getPricepday();
	isRes = otherRoom.getisres();
}
Room::Room(int n,string t,double ppd)
{
	No = n;
	type = t;
	Pricepday = ppd;
	isRes = false;
}
void Room::setisRes(bool isres)
{
	isRes = isres;
}
bool Room::getisres()
{

	return isRes;
}
void Room::setPricepday(double ppd)
{
	Pricepday = ppd;
}
double Room::getPricepday()
{
	return Pricepday;
}
void Room::setRoomNo(int rn)
{
	No = rn;
}
int Room::getRoomNo()
{
	return No;
}
void Room::setRoomType(string st)
{
	type = st;
}
string Room::getRoomType()
{
	return type;
}
