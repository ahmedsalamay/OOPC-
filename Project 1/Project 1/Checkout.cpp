#include "Checkout.h"
#include<iomanip>
Checkout::Checkout()
{
}
Checkout::Checkout(DessertItem**items, int sizeOfitem )
{
	this->sizeOfitem = sizeOfitem;
	this->items = items;
}
void Checkout::set_items(DessertItem**items)
{
	this->items = items;

}
void Checkout::print_items()
{
	for (int i = 0; i < sizeOfitem; i++)
	{
		cout<<items[i]->get_Name()<<endl;
		cout << items[i]->get_Cost()<<endl;
	}
}
void Checkout::print_TotalCost()
{
	cout.precision(0);
	double sum = 0;
	for (int i = 0; i < sizeOfitem;i++)
	sum += items[i]->get_Cost();
	cout << "Total Sum" << fixed<< sum
		<<endl;
}
Checkout::~Checkout()
{
}
