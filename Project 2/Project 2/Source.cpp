#include<iostream>
using namespace std;
#include"Book.h"
#include"Shelf.h"
#include"Library.h"
#include<string>
void print1();
int main()
{

	int choice = 0, books = 0, shelves = 0, shelfno = 0, ISBN = 0;
	string category = "", title = "", name = "", title1 = "", name1 = "";
	int numbersh = 0;


	cout << "Enter # of Books: "; cin >> books;
	cout << "Enter # of Shelves: "; cin >> shelves;
	Library library(books, shelves);
	for (;;)
	{

		print1();
		cout << "Enter your choice:"; cin >> choice;

		Shelf C(shelfno, category);
		if (choice == 1)
		{
			cout << "Enter Shelf NO.: "; cin >> shelfno;
			cout << "Enter Shelf category: "; cin >> category;
			cout << "Shelf created successfully" << endl << endl;

			library.add_shelf(C, shelfno);
		}
		

		if (choice == 2)
		{
			cout << "Enter book ISBN: "; cin >> ISBN;
			cout << "Enter book title: "; cin.ignore(); getline(cin, title);
			cout << "Enter Author name: "; cin.ignore(); getline(cin, name);
			cout << "Enter shelf number: "; cin >> numbersh;
			cout << "Book added successfully" << endl;
			library.add_book(Book(ISBN, title, name, numbersh), ISBN);
		}

		if (choice == 3)
		{
			cout << "Enter the book title: "; cin.ignore(); getline(cin, title1);
			library.get_book(title1);
		}

		if (choice == 4)
		{
			library.print_books();
		}

		if (choice == 5)
		{
			cout << "Availabe catgories are:" << endl;
			library.print_categories();
		}
		if (choice == 6)
		{
			cout << "Enter Book catgory: "; cin.ignore(); getline(cin, name1);
			cout << "Books in" << name1 << "Shelf are:" << endl;
			library.print_cat_books(name1);
		}
		if (choice == 7)
		{
			break;
		}
	}

}


void print1()
{
	cout << "1.  Add a Shelf" << endl;
	cout << "2.  Add a book" << endl;
	cout << "3.  Search a book by title" << endl;
	cout << "4.  Display all book collection" << endl;
	cout << "5.  Dispaly avalible categories" << endl;
	cout << "6.  Display book given a particular category" << endl;
	cout << "7.  Exite" << endl;
}