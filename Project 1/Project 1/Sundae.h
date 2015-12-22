#pragma once
#include<iostream>
#include<string>
#include"IceCream.h"
using namespace std;
class Sundae :public IceCream
{
	double costTopping;
public:
	Sundae(string ,double,double);
	void set_CostTopping(double);
	double get_Cost();
	double get_CostTopping();
	~Sundae();
};

