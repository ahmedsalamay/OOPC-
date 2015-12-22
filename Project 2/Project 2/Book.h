#pragma once
#include<string>
using namespace std;
class Book
{
private:
	int ISBN;
	string Title;
	string  Author;
	int Shelf_No;
public:
	Book(int, string, string, int);
	Book();
	string get_title();
	string get_author();
	int get_shelfno();
	int get_Num();
	//~Book(void);
	~Book();
};
