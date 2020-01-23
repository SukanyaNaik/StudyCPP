// SinglyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

class SinglyLinkedList {
	
	private :
		node *head = NULL;
	
	public :
		void addData(int no)
		{
			node *temp = NULL;
			
			temp = new node;
			temp->data = no;
			temp->next = NULL;

			if (head == NULL)
				head = temp;
			else
			{
				node * trav = NULL;

				trav = head;

				while (trav->next != NULL)
				{
					trav = trav->next;
				}
				trav->next = temp;
			}
		}

		void printData()
		{
			node * trav = NULL;
			int ch = 0;

			trav = head;

			if (head == NULL)
				cout << "\n The Linked list is not created yet!";
			else
			{
				cout << "\n ";
				while (trav != NULL)
				{
					cout << " " << trav->data << " ";
					trav = trav->next;
				}
			}
			ch = std::cin.get();
			//ch = std::cin.get();
			//system("pause");
		}

		int isData(int data)
		{
			int flag = 0;
			node *trav = head;

			while (trav != NULL && flag != 1)
			{
				if (trav->data == data)
					flag = 1;
				trav = trav->next;
			}
			return flag;
		}

		void insertDataAfter(int no, int data)
		{
			node * trav = NULL, * temp = NULL;
			node * newNode = new node;

			newNode->next = NULL;

			if (head == NULL)
				cout << "\n The Linked list is not created yet!";
			else
			{
				if (isData(no))
				{
					trav = head;
					while (trav != NULL && trav->data != no)
						trav = trav->next;

					newNode->data = data;
					newNode->next = trav->next;
					trav->next = newNode;
				}
				else
					cout << "The number " << no << "does not exist in the list";
			}
		}

		void insertDataBefore(int no, int data)
		{
			node * trav = NULL, *temp = NULL;
			node * newNode = new node;

			newNode->next = NULL;

			if (head == NULL)
				cout << "\n The Linked list is not created yet!";
			else
			{
				if (isData(no))
				{
					newNode->data = data;

					if (head->data == no)
					{
						newNode->next = head;
						head = newNode;
					}
					else
					{
						trav = head;

						while (trav != NULL && trav->next->data != no)
							trav = trav->next;

						newNode->next = trav->next;
						trav->next = newNode;
					}
				}
				else
					cout << "The number " << no << "does not exist in the list";
			}
		}

		void reverseList()
		{
			node *trav = NULL, *next = NULL, *temp = NULL;

			temp = head;
			trav = head->next;
			head->next = NULL;

			while (trav != NULL)
			{
				head = trav;
				next = trav->next;
				trav->next = temp;
				temp = trav;
				trav = next;
			}

			cout << "The reverse list is \n";
			printData();
		}

		/*void sortList()
		{
			node *trav = NULL, *temp = NULL, *next = NULL, *prev = NULL, *temp1 = NULL;
			int ch = 0;

			trav = head;
			next = trav->next;
			prev = head;
			
			system("CLS");
			while (trav != NULL)
			{
				while (next != NULL)
				{
					temp = next->next;

					if (trav->data > next->data)
					{
						if (trav->next != next)
						{
							next->next = trav->next;
							temp1 = trav;
							while (temp1->next != next)
								temp1 = temp1->next;
							temp1->next = trav;
							trav->next = temp;
						}
						else
						{
							prev->next = next;
							next->next = trav;
							trav->next = temp;
						}
						
						if (head == trav)
						{
							head = next;
							trav = next;
						}
						
					}
				
					cout << "\n ";
					printData();

					ch = std::cin.get();
					ch = std::cin.get();
					system("pause");
					next = temp;
				}

				prev = trav;
				trav = trav->next;
				next = trav->next;
				cout << "\n ";
				printData();
				ch = std::cin.get();
				ch = std::cin.get();
				system("pause");
			}
		}*/

		void sortList() 
		{
			int modifyNextPrev = 1;
			node *travPrev = NULL, *trav = NULL, *travNext = NULL;
			node *nextPrev = NULL, *next = NULL, *nextNext = NULL;

			trav = head;
			travNext = trav->next;
			nextPrev = head;

			while (trav->next != NULL)
			{
				next = trav->next;
				nextPrev = trav;

				while (next != NULL)
				{
					nextNext = next->next;

					if (trav->data > next->data)
					{
						if (trav == head)
							head = next;
						if (trav == nextPrev)
						{
							modifyNextPrev = 0;

							if (travPrev != NULL)
								travPrev->next = next;
							trav->next = nextNext;
							next->next = trav;

							if (trav == head)
								head = next;
							
							trav = next;
							travNext = nextPrev;
						}
						else
						{
							if(travPrev != NULL)
								travPrev->next = next;
							trav->next = nextNext;
							next->next = travNext;
							nextPrev->next = trav;
							trav = next;
							next = nextPrev->next;
						}
					}

					if (modifyNextPrev == 1)
						nextPrev = next;
					next = nextNext;
					modifyNextPrev = 1;

				}

				travPrev = trav;
				trav = trav->next;
				travNext = trav->next;

				//cout << "\n ";
				//printData();

			}
		}
};

int main()
{
	SinglyLinkedList l1;
	int choice = 0, data = 0, number = 0;
	char ans = 'x';

	do
	{
		system("CLS");
		cout << "\n ---------- MENU ----------";
		cout << "\n 1. Print the list.";
		cout << "\n 2. Add a node to the list.";
		cout << "\n 3. Insert a node into the list after a number.";
		cout << "\n 4. Insert a node into the list before a number.";
		cout << "\n 5. Reverse the list.";
		cout << "\n 6. Sort the list in ascending order.";
		cout << "\n --------------------------\n";
		cout << "\n Enter your choice - ";
		cin >> choice;

		switch (choice)
		{ 
		case 1:
			l1.printData();
			break;

		case 2:
			cout << "\n Enter the data - ";
			cin >> data;
			l1.addData(data);
			break;

		case 3:
			cout << "\n Enter the data after a number - ";
			cin >> data;
			cout << "\n The list is - ";
			l1.printData();
			cout << "\n Enter the number after which you want to insert the node - ";
			cin >> number;
			l1.insertDataAfter(number,data);
			break;

		case 4:
			cout << "\n Enter the data after a number - ";
			cin >> data;
			cout << "\n The list is - ";
			l1.printData();
			cout << "\n Enter the number before which you want to insert the node - ";
			cin >> number;
			l1.insertDataBefore(number, data);
			break;

		case 5:
			l1.reverseList();
			break;

		case 6:
			l1.sortList();
			cout << "\n The sorted list is \n";
			l1.printData();
			break;

		}

		cout << "\n Do you want to continue? Enter y or n - ";
		//cin >> ans;
		do
		{
			cin >> ans;
			if(ans != 'y')
			  cout << "\n Do you want to continue? Enter y or n - ";
		}while(!(ans == 'y' || ans == 'n'));

	} while (ans == 'y');

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
