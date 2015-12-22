#include "Library.h"
#include<iostream>
using namespace std;


Library::Library(int numbook, int numshelf)
{
	numOfBook = numbook;
	numOfShelves = numshelf;
	BookCollection = new Book[numbook];
	Shelves = new Shelf[numshelf];
}

void Library::add_shelf(Shelf shelf, int shelfnum)
{
	Shelves[shelfnum - 1] = shelf;
}

void Library::add_book(Book book, int isbn)
{
	BookCollection[isbn - 1] = book;
}

void Library::get_book(string title)
{
	for (int i = 0; i<numOfBook; i++)
	{
		if (BookCollection[i].get_title() == title){
			cout << "book exist" << endl;
			break;
		}
		if (i == numOfBook - 1){ cout << "Sorry,book doesn't exist" << endl; }
	}
}

void Library::print_books()
{
	for (int i = 0; i<numOfBook; i++)
	{
		if (BookCollection[i].get_title() != "")
		{
			cout << "Book" << i + 1 << ":" << BookCollection[i].get_title()
				<< "by" << BookCollection[i].get_author() << endl;
		}
	}
}


void Library::print_categories()
{
	for (int i = 0; i<numOfShelves; i++)
	{
		cout << i + 1 << Shelves[i].get_catgory() << endl;

	}
}

void Library::print_cat_books(string x)
{
	int s;
	/*for(int i=0;i<numOfShelves;i++)
	{
	if(Shelves[i].get_catgory()==x)
	{
	print_books_num(i+1);cout<<endl;
	}
	}*/
	for (int i = 0; i < numOfShelves; i++)
	{
		if (Shelves[i].get_catgory() == x)
		{
			s = i;
			break;
		}
	}
		for (int i = 0; i < numOfShelves; i++)
		{
			if (Shelves[s].get_num() == BookCollection[i].get_shelfno())
			{
				print_books_num(i + 1);
			}
		}
	

}


void Library::print_books_num(int x)
{
	for (int i = 0; i<numOfBook; i++)
	{
		//if (BookCollection[i].get_title() != ""&&BookCollection[i].get_shelfno() == x)
		if (x == BookCollection[i].get_shelfno())
		{
			cout << "Book" << i + 1 << ":" << BookCollection[i].get_title()
				<< "by "<< " "<< BookCollection[i].get_author();
		}
	}
}

Library::~Library()
{
	delete[]BookCollection;
	delete[]Shelves;
}
