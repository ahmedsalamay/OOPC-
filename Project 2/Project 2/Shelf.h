#pragma once
#include<string>
using namespace std;
class Shelf
{
private:
	int Shelf_No;
	string Category;

public:
	Shelf(int x, string y);
	string get_catgory();
	int get_num();
	Shelf(){}
	//~Shelf(void);
	~Shelf();
};

