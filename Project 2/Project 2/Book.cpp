#include "Book.h"


Book::Book()
{
	ISBN = 0;
	Title = "";
	Author = "";
	Shelf_No = 0;
}
Book::Book(int isbn, string title, string au, int shnum)
{
	ISBN = isbn;
	Title = title;
	Author = au;
	Shelf_No = shnum;
}
int Book::get_Num()
{
	return ISBN;
}
string Book::get_title()
{
	return Title;
}

string Book::get_author()
{
	return Author;
}


int Book::get_shelfno()
{
	return Shelf_No;
}

Book::~Book()
{
}
