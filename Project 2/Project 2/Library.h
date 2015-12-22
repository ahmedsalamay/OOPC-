#pragma once
#include"Book.h"
#include"Shelf.h"
#include<string>
using namespace std;
class Library
{
private:
	int numOfBook;
	int numOfShelves;
	Book*BookCollection;
	Shelf*Shelves;
public:
	void add_shelf(Shelf, int);
	void add_book(Book, int);
	Library(int x, int y);
	void get_book(string);
	void print_books();
	void print_categories();
	void print_cat_books(string);
	void print_books_num(int);
	~Library();
};


