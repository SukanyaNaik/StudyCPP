// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class sort
{
	private :
		int a[10];

	public :
		void getData();
		void putData();
		void insertionSort();
		void selectionSort();

};

void sort :: getData()
{
	int i = 0;
	
	cout << "Enter 10 numbers. \n";
	for (i = 0; i < 10; i++)
		cin >> a[i];
}

void sort :: insertionSort()
{
	int i = 0, j = 0, k = 0, temp = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[i])
			{
				temp = a[i];

				for (k = i; k >= j; k--)
					a[k] = a[k - 1];
				
				a[j] = temp;
			}
		}
	}
}

void sort::selectionSort()
{
	int i = 0, j = 0, k = 0;
	int pos = 0, max = 0, temp = 0, n = 10, flag = 0;

	for (i = n-1; i >= 0; i--)
	{
		max = 0;
		flag = 0;
		
		for (j = 0; j < n; j++)
		{
			if (max < a[j])
			{
				max = a[j];
				pos = j;
				flag = 1;
			}
		}


		if (flag == 1)
		{
			temp = a[n - 1];
			a[n - 1] = max;
			a[pos] = temp;
		}
		
		n--;
	}
}


void sort :: putData()
{
	int i = 0;

	for (i = 0; i < 10; i++)
		cout << "  " << a[i];

}

int main()
{
	sort s1;

	s1.getData();

	cout << "\n The original array is. \n";
	s1.putData();
	
	//s1.insertionSort();
	s1.selectionSort();
	
	cout << "\n\n";
	cout << "\n The sorted array is. \n";
	s1.putData();
	cout << "\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
