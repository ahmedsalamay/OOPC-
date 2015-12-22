#include "IceCream.h"

void IceCream::set_IceCreamCost(double IceCreamCost)
{
	cost = IceCreamCost;
}
IceCream::IceCream()
{

}
IceCream::IceCream(string name)
{
	this->name = name;
}
IceCream::IceCream(string name, double cost)
{
	this->name = name;
	this->cost = cost;
}
double IceCream::get_Cost()
{
	return cost;
}

IceCream::~IceCream()
{
}
