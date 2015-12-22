#include "Candy.h"


Candy::Candy()
{
}
Candy::Candy(string name)
{
	this->name = name;
}
Candy::Candy(string name, double weight, double price)
{
	this->name = name;
	this->weight = weight;
	this->price = price;
}
void Candy::set_Weight(double)
{
	this->weight = weight;
}
void Candy::set_Price(double)
{
	this->price = price;
}
double Candy::get_Weight()
{
	return weight;
}
double Candy::get_Price()
{
	return price;
}
double Candy::get_Cost()
{
	return weight*price;              //////////////
}

Candy::~Candy()
{
}
