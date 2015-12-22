#include<iostream>
#include<string>
using namespace std;
#include"Customer.h"
Customer::Customer()
{
	Name = "";
	NationID = "";
	Mob = 0;
	Price = 0.0;

}
Customer:: Customer(string name, string nation, int mob)
{
	Name = name;
	NationID = nation;
	Mob = mob;
}
Customer:: Customer(const Customer&otherCust)
{	
	Name=otherCust.Name;
	Mob = otherCust.Mob;
	NationID = otherCust.NationID;
    Price = otherCust.Price;
}
void Customer:: setPrice(double price)
{
	Price = price;
}
void Customer:: print()
{
	cout << "The Name:"<< Name << endl << "National ID:" << NationID << endl <<"Mobile #:"<< Mob << endl<<"Price:" << Price<<endl;
}/*
void Customer::setName(string name)
{
	Name = name;
}
string Customer::getName()
{
	return Name;
}
void Customer::setNID(string nid)
{
	NationID = nid;
}
string Customer::getNID()
{
	return NationID;
}
void Customer::setMob(int mob)
{
	Mob = mob;
}
int Customer::getMob()
{
	return Mob;
}*/