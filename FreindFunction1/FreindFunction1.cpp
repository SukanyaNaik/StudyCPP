// FreindFunction1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class class_C2;

class class_C1
{
	private :
		int a = 0;
		
	public :
		class_C1(int);
		void putData() const;
		friend void exchange(class_C1 &, class_C2 &);
};

class_C1 :: class_C1(int no)
{
	a = no;
}

void class_C1 :: putData() const
{
	cout << "\n a = " << a;
}

class class_C2
{
private:
	int b = 0;

public:
	class_C2(int);
	void putData() const;
	friend void exchange(class_C1 &, class_C2 &);
};

class_C2 :: class_C2(int no)
{
	b = no;
}

void class_C2 :: putData() const
{
	cout << "\n b = " << b;
}

void exchange(class_C1 &C1, class_C2 &C2)
{
	int temp = 0;

	temp = C1.a;
	C1.a = C2.b;
	C2.b = temp;
}


int main()
{
    cout << "\n A Friend Function for two classes"; 
	cout << "\n ---------------------------------";

	class_C1 c1(5);
	class_C2 c2(10);

	cout << "\n\n values before exchange";
	c1.putData();
	c2.putData();

	exchange(c1, c2);
	cout << "\n\n values after exchange";
	c1.putData();
	c2.putData();
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
