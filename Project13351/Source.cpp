/**
	Gittele Roos
	CPSC 335
	9/24/2022
**/

#include <iostream>
#include <string>
using namespace std;


void bubbleSort(string array11[], int size) {
		for (int i = 0; i < size - 1; ++i)
		{
			if (array11[i] == "n" && array11[i] != array11[i + 1])
			{
				swap(array11[i], array11[i + 1]);
			}
		}
	}

bool checkSort(string array11[], bool notsorted, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		if (array11[i] == "n" && array11[i+1] == "l")
		{
			return notsorted;
		}
	}
	notsorted = false;
	return notsorted;
}

void displayArray(string array11[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array11[i] << " ";
	}
}

int main()
{
	const int size = 6;
	bool notSorted = true;

	string arr1[size] = {"l", "n", "l", "n", "l", "n"};

	while (notSorted == true) {
		bubbleSort(arr1, size);
		notSorted = checkSort(arr1, notSorted,size);
	}

	displayArray(arr1, size);


	system("pause");
	return 0;
}
