// MyFirstClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include "MyFirstClass.h"

/*
class MyFirstClass
{
	private:
		int a = 0, b = 0, sum = 0;
		float average = 0;
	public:
		void GetData()
		{
			cout << "\n Enter first number : ";
			cin >> a;
			cout << "\n Enter second number : ";
			cin >> b;
		}

		void CalculateSum()
		{
			sum = a + b;
		}

		void CalculateAverage()
		{
			average = float ((a + b) / 2);
		}

		void PutData()
		{
			cout << "\n Sum = " << sum;
			cout << "\n Average = " << average;
		}
};
*/

void MyFirstClass::GetData()
{
	cout << "\n Enter first number : ";
	cin >> a;
	cout << "\n Enter second number : ";
	cin >> b;
}

void MyFirstClass::CalculateSum()
{
	sum = a + b;
}

void MyFirstClass::CalculateAverage()
{
	average = float((a + b) / 2);
}

void MyFirstClass::PutData()
{
	cout << "\n Sum = " << sum;
	cout << "\n Average = " << average;
}

int main()
{
	MyFirstClass m1;
	
	m1.GetData();
	m1.CalculateSum();
	m1.CalculateAverage();
	m1.PutData();

	return 0;
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
