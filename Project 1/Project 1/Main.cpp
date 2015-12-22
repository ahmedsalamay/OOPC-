#include<iostream>
#include<string>
#include"DessertItem.h"
#include"Cookie.h"
#include"Candy.h"
#include"IceCream.h"
#include"Sundae.h"
#include"Checkout.h"
using namespace std;
int main()
{
	DessertItem **D = new DessertItem*[4];
	D[0] =new  Candy("Candy", 2.3, 89);
	D[1] =new Cookie("Cookie", 4, 399);
	D[2] =new IceCream("IceCream", 50);
	D[3] =new Sundae("Sundae", 30, 40);
	Checkout C(D, 4);
	C.print_items();
	C.print_TotalCost();
	for (int i = 0; i < 4;i++)
	delete D[i];
	delete[]D;
	system("PAUSE");
	return 0;
}
//Ahmed Salama Hussien 20130017 Done