// ByRef_ByVal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b);
int & max(int &a, int &b);

int main()
{
	int m = 15, n = 10,  maximum = 0;

	cout << "\n m = " << m << " n = " << n << "\n";
	
	swap(m,n);
    cout << " m = "<< m <<" n = " << n << "\n"; 
	
	maximum = max(m,n);
	cout << " Maximum = " << maximum << "\n";
	
	return 0;
}

void swap(int &a, int &b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

int & max(int &a, int &b)
{
	if (a > b)
		return (a);
	else
		return b;
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
