// FriendFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class testFriendFunction
{
	private :
		int x = 0, y = 0, sum = 0;
	public :
		testFriendFunction(void);
		void getData();
		void putData();
		friend void calSum(testFriendFunction f1);

};

testFriendFunction ::testFriendFunction(void)
{
	x = 0;
	y = 0;
	sum = 0;
}

void testFriendFunction :: getData()
{
	cout << "\n\n Enter the value of x - ";
	cin >> x;
	cout << "\n Enter the value of y - ";
	cin >> y;
}

void testFriendFunction :: putData()
{
	cout << "\n x = " << x;
	cout << "\n y = " << y;
	cout << "\n sum = " << sum << "\n\n";
}

void calSum(testFriendFunction f1)
{
	f1.sum = f1.x + f1.y;
}

int main()
{
	testFriendFunction f1;

    cout << "\n    Testing Friend Function"; 
	cout << "\n -----------------------------";

	f1.getData();
	f1.putData();
	calSum(f1);
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
