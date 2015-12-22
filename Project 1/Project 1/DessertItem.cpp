#include "DessertItem.h"
#include"Cookie.h"

DessertItem::DessertItem()
{

}
DessertItem::DessertItem(string n)
{
	name = n;
}
void DessertItem::set_Name(string n)
{
	name = n;
}
string DessertItem::get_Name()
{
	return name;
}
/*double DessertItem::get_Cost()
{
	cout << "Virsuial";
	return 1;
}*/
DessertItem::~DessertItem()
{
}
