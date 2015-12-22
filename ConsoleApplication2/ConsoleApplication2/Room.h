#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Room
{
private:
	int No;
	string type;
	bool isRes;
	double Pricepday;
public:
	Room();
	Room(int, string, double);
	Room( Room&otherRoom);
	void setisRes(bool );
	bool getisres();
	void setPricepday(double);
	double getPricepday();
	void setRoomNo(int);
	int getRoomNo();
	void setRoomType(string);
	string getRoomType();
	friend class Hotel;
};
#endif 