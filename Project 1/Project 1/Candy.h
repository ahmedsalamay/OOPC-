#pragma once
#include<iostream>
#include<string>
#include"DessertItem.h"
class Candy:public DessertItem
{
	double weight;
	double	price;
public:
	Candy();
	Candy(string);
	Candy(string ,double,double);
	void set_Weight(double);
	void set_Price(double);
	double get_Weight();
	double get_Price();
	double get_Cost();
	~Candy();
};

