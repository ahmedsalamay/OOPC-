#pragma once
#include"DessertItem.h"
class Checkout
{
	int sizeOfitem;
	DessertItem **items;
public:
	Checkout();
	Checkout(DessertItem**,int);
	void set_items(DessertItem**);
	void print_items();
	void print_TotalCost();
	~Checkout();
};

