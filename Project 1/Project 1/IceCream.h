#pragma once
#include<iostream>
#include<string>
#include"DessertItem.h"

using namespace std;
class IceCream:public DessertItem
{
protected:
	double cost;
public:
	void set_IceCreamCost(double);
	IceCream(string);
	IceCream();
	IceCream(string,double);
	double get_Cost();
	~IceCream();
};

