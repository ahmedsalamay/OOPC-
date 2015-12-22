#include<iostream>
using namespace std;
void Sort(int num[])
{
	int i, j, flag = 1;    // set flag to 1 to start first pass
	int temp;             // holding variable
	for (i = 1; (i <= 5); i++)
	{

		for (j = 0; j < (5 - 1); j++)
		{
			if (num[j + 1] < num[j])      // ascending order simply changes to <
			{
				temp = num[j];             // swap elements
				num[j] = num[j + 1];
				num[j + 1] = temp;

			}
		}
	}
}
	
	/*int  binarySearch(int array[], int size, int value)
	{
		int  first = 0;   // First array element 
		int last = size - 1,  // Last array element
			middle,  // Midpoint of search 
			position = -1;  // Position of search value 
		bool found = false;  // Flag
		while (!found && first <= last)
		{
			middle = (first + last) / 2;    // Calculate midpoint
			if (array[middle] == value)     // If value is found at mid 
			{
				found = true;
				position = middle;
			}
			else if (array[middle] > value) // If value is in lower half 
				last = middle - 1;
			else
				first = middle + 1;          // If value is in upper half 
		}
		return position;
	}
*/
template <class Key>

int  binarySearch(Key array[], int size, int value)
{
	int  first = 0;   // First array element 
	int last = size - 1,  // Last array element
		middle,  // Midpoint of search 
		position = -1;  // Position of search value 
	bool found = false;  // Flag
	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (array[middle] == value)     // If value is found at mid 
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half 
			last = middle - 1;
		else
			first = middle + 1;          // If value is in upper half 
	}
	return position;
}
	int main()
	{
		int arr[50] = { 6, 4, 9, 0, 1 ,NULL};
		int arr2[50] = { 5, 7, 21, 5, 6,NULL };
	
		Sort(arr2);
		int c;
		c=binarySearch(arr2,50,7);
	
		for (int i = 0; i < 5; i++)
		{
			cout << arr2[i];
		}
		cout << endl << c;
	}
