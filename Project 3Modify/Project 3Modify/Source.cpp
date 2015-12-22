#include <iostream>
#include "KeyedCollection.h"
#include<string>
using namespace std;
#include<iostream>
#include<string>
#include"KeyedCollection.h"
using namespace std;
int main() {
	KeyedCollection<int, string> c;
	int key, choice; string value;
	while (true){
		cout << "1- AddKey\n2- GetKey\n3- RemoveKey\n4- Print\n5-ESC";
		cin >> choice;
		switch (choice) {
		case 1:  cout << "Enter a key and a value\n";
		{cin >> key; cin.ignore();
		getline(cin, value);
		c.add(key, value); break;
		case 2:  cout << "Enter a key\n";
			cin >> key;
			try{ cout << c.get(key) << endl; }
			catch (const char* Message){
				cout << Message;
			}
			break;
		case 3:  cout << "Enter a key\n";
			cin >> key;
			try{ c.Remove(key); }
			catch (const char* Message){ cout << Message; }; break;
		case 4:  cout << "Print All";
			c.printAllKeys(); break;
		case 5:  return 0;
		}
		}
	}
	return 0;

}