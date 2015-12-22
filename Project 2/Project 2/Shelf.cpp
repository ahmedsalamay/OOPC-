#include "Shelf.h"


Shelf::Shelf(int num, string cat)
{
	Shelf_No = num;
	Category = cat;
}

string Shelf::get_catgory()
{
	return Category;
}
int Shelf::get_num()
{
	return Shelf_No;
}
Shelf::~Shelf()
{
}
