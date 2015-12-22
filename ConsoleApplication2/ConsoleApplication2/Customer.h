#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Customer
{
private:
	string Name;
	string NationID;
	int Mob;
	double Price;
public:
	Customer();
	Customer(string, string, int);
	Customer(const Customer&otherCust);
	void setPrice(double);
	void print();
	void setName(string name);
	string getName();
	void setNID(string nid);
	string getNID();
	void setMob(int mob);
	int getMob();
	friend class Hotel;
};

#endif 