#include "Sundae.h"
Sundae::Sundae(string name,double cost,double costTopping)
{
	this->name = name;
	this->cost = cost;
	this->costTopping = costTopping;
}
void Sundae::set_CostTopping(double costTopping)
{
	this->costTopping = costTopping;
}

Sundae::~Sundae()
{
}
double Sundae::get_CostTopping()
{
	return costTopping;
}
double Sundae::get_Cost()
{
	return (cost+costTopping);
}