	#pragma once
	#include "KeyedCollection.h"
	#include <iostream>
	using namespace std;
	template <class key, class T>
	class KeyedCollection
	{
		key *keyArray;
		T   *valueArray;  
		int size;
		int counter;
		void sortArrays();
		key binarySearch(key value, int left, int right);

	public:
		KeyedCollection();
		KeyedCollection(int);
		void add(key, T);
		T get(key);
		void Remove(key);
		void printAllKeys();
		~KeyedCollection();

	};


	template <class key, class T>
	KeyedCollection <key, T>::KeyedCollection()
	{
		size = 3;
		keyArray = new key[size];
		valueArray = new T[size];
		counter = 0;
	}
	template <class key, class T>
	KeyedCollection <key, T>::KeyedCollection(int s)
	{
		size = s; 
		keyArray = new key[size];
		valueArray = new T[size];

		counter = 0;
	}

	template <class key, class T>
	void KeyedCollection <key, T>::add(key k, T v)
	{
		if (counter == size)
			cout << "Full cannot add \n";
		else
			keyArray[counter] = k;
		valueArray[counter] = v;
		counter++;
	}

	template <class key, class T>
	void KeyedCollection<key, T> ::sortArrays()
	{
		for (int i = 0; i<counter - 1; i++)
		{
			for (int j = i + 1; j<counter; j++)
			{
				if (keyArray[j] < keyArray[i])
				{
					swap(keyArray[j], keyArray[i]);
					swap(valueArray[j], valueArray[i]);
				}
			}
		}
	}

	template <class key, class T>
	key KeyedCollection <key, T>::binarySearch(key value, int left, int right)
	{
		sortArrays();
		int mid;  
		while (left <= right)
		{
			mid = (left + right) / 2;

			if (value == keyArray[mid])
				return mid;
			else if (value>keyArray[mid])
				left = mid + 1;
			else if (value<keyArray[mid])
				right = mid - 1;
		}
		return -1;
	}

	template <class key, class T>
	T KeyedCollection <key, T>::get(key k)
	{
	
		if (counter == 0)
		{
			throw "FUNCTION ADD MUST BE FIRST ";

		}
		else
		{
			int x = binarySearch(k, 0, counter - 1);
			if (x == -1)
			{
				cout << "not found \n";
			}
			else
			{
				return valueArray[x];
			}
		}
	
	}

	template <class key, class T>
	void KeyedCollection <key, T>::printAllKeys()
	{
		 
		for (int i = 0; i<counter; i++)
		{
			cout << "Key" << keyArray[i] << endl;
			cout << "Value" << valueArray[i] << endl;
		}
	}

	template <class key, class T>
	void KeyedCollection<key, T>::Remove(key k)
	{
	
		if (counter == 0)
			throw " Empty Cant Remove \n";
		else
		{
			int x = binarySearch(k, 0, counter); 
			if (x == -1) 
			{
				cout << "Not Found To Remove IT \n";
			}
			else
			{
              		int j = 0;
					for (int i = 0; i < counter; i++)
					{
						if (keyArray[i] == k)
						{
							j++;
						}
						keyArray[i] = keyArray[i + j];
						valueArray[i] = valueArray[i + j];
					}
					counter--;
			}
		}
	}	

	template <class key, class T>
	KeyedCollection <key, T>::~KeyedCollection()
	{
		delete[]keyArray;
		delete[] valueArray;
	}

