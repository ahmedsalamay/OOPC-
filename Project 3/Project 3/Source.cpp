#include<iostream>
#include<string>
using namespace std;
template <class Key, class T>
class KeyedCollection {
private:
	Key array1[100];
	T array2[100];
	int size;
	public:
	KeyedCollection(){ size = 0; };
	void add(Key key, T value){
		array1[size] = key;
		array2[size] = value;
		size++;
	}
	void remove(Key key){
		int j = 0;
		for (int i = 0; i<size; i++){
			if (array1[i] == key)
			{
				j++;
			}
			array1[i] = array1[i + j];
			array2[i] = array2[i + j];
		}
		size--;
	}
	T get(Key key){		for (int i = 0; i<size; i++){
			if (array1[i] == key)
				return array2[i];
		}
		throw "Not Found ";
		

	}
	
	void printAllKeys()
	{
		
		for (int i = 0; i<size; i++)
		{
			cout << "Key" << array1[i] << endl;
			cout << "Value" << array2[i] << endl;
		}
	}
};

int main() {
	KeyedCollection<int, string> c;
	int key, choice; string value;
	while (true){
		cout << "1- add, 2- get, 3- remove, 4- quit\n";
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
			c.remove(key); break;
		case 4:  c.printAllKeys(); break;
		case5:return 0;
		}
		}
	}
		return 0;
	
}
/*
void BubbleSort(apvector <int> &num)
{
int i, j, flag = 1;    // set flag to 1 to start first pass
int temp;             // holding variable
int numLength = num.length( );
for(i = 1; (i <= numLength) && flag; i++)
{
flag = 0;
for (j=0; j < (numLength -1); j++)
{
if (num[j+1] > num[j])      // ascending order simply changes to <
{
temp = num[j];             // swap elements
num[j] = num[j+1];
num[j+1] = temp;
flag = 1;               // indicates that a swap occurred.
}
}
}
return;   //arrays are passed to functions by address; nothing is returned
}
*/