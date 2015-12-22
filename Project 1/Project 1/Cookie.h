#pragma once
#include<iostream>
#include<string>
#include"DessertItem.h"
class Cookie:public DessertItem
{
	double number;
	double price;
public:

	Cookie();
	Cookie(string);
	Cookie(string,double,double);
	void set_Number(double);
	void set_Price(double);
	double get_Number();
	double get_Price();
	double get_Cost();
	~Cookie();
};

