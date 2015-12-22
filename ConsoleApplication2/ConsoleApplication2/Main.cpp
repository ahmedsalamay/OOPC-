#include<iostream>
using namespace std;
#include"Customer.h"
#include"Hotel.h"
#include"Reservation.h"
#include"Room.h"
int main()
{
	string HoName, CuName;
	int Nrooms, ID, Mob, Curo,NoDay;
	cout << "Enter The Hotel Name";
	cin.ignore();
	getline(cin , HoName);
	cout << "# OF The Rooms";
	cin >> Nrooms;
	Room *room = new Room[Nrooms];
	for (int i = 0; i < Nrooms; i++)
	{
		string RoType;
		int Price;
		cout << "Room " << i + 1<<endl;
		cout << "Room Type"<<endl;
		cin.ignore();
		getline(cin,RoType) ;
		cout << "Enter The Price"<<endl;
		cin >> Price;
		room[i].setRoomType(RoType);
		room[i].setPricepday(Price);
	}
	Hotel h(HoName, Nrooms, room);
	int choice;
	int i = 0;
	for (;; i++)
	{
		/*cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t*************";*/
		cout << "==============================================================";
		cout << "\n\n\t\t\tEnter Your Choice: ";
		cout<<"\n\t\t\t1.Book A Room";
		cout<<"\n\t\t\t2.Free Room";
		cout<<"\n\t\t\t3.Print Reserve";
		cout<<"\n\t\t\t4.Exit"<<endl;
		cout << "==============================================================";
		cin >> choice;
		if (choice == 1)
		{
			string CuName,ID;
			int Mob, Curo, NoDay;
			cout << "Enter Customer Name";
			cin.ignore();
			getline(cin, CuName);
			cout << "ENter Mob";
			cin >> Mob;
			cout << "Enter ID";
			cin >> ID;
			cout << "# Days";
			cin	>> NoDay;
			cout << "Customer Room";
			cin >> Curo;
			Customer *cust = new Customer(CuName, ID, Mob); 
			if (h.resroom(cust, Curo, NoDay))
			{
				cout << "Success"<<endl;
			}
			else
				cout << "Choose Another Room"<<endl;
		}
		else if (choice == 2)
		{
			int Noroom;
			cout << "Enter Free Room #";
			cin >> Noroom;
			h.freeroom(Noroom);
		}
		else if (choice == 3)
		{
			h.printres();
		}
		else if (choice == 4)
		{
			break;
		}
	}
	delete[]room;
	system("PAUSE");
}