#include "Cookie.h"


Cookie::Cookie()
{
}
Cookie::Cookie(string name) : DessertItem(name)
{
	//this->name = name;
}
Cookie::Cookie(string name, double number, double price)
{
	this->name = name;
	this->number = number;
	this->price = price;

}
void Cookie::set_Number(double)
{
	this->number = number;
}
void Cookie::set_Price(double)
{
	this->price = price;
}
double Cookie::get_Number()
{
	return number;
}
double Cookie::get_Price()
{
	return price;
}
double Cookie::get_Cost()
{
	return (number*(price / 12.0));
}

Cookie::~Cookie()
{
}
