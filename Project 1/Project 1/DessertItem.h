#pragma once
#include<iostream>
#include<string>
using namespace std;
class DessertItem
{
protected:
	string name;
public:
	DessertItem();
	DessertItem(string);
	void set_Name(string);
	string get_Name();
	virtual double get_Cost()=0;
	~DessertItem();
};

