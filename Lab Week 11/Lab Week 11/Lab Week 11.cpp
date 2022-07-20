#include<iostream>
#include<string>
#include<fstream>
#include"StaticQueue.h"
#include"Dynamic.h"

void displayMenu(int&);

using namespace std;

int main()
{

	//Statci Queue
	/*const double PI = 3.142;
	double catchData;
	StaticQueue<double> list(5);
	for (int i = 0; i < 5; i++)
	{
		cout << "Enqueue: " << (i + 1) * PI << endl;
		list.enqueue((i + 1) * PI);
	}

	cout << "Attempt to enqueue again after insert 5 element" << endl;
	list.enqueue(2.0909);
	cout << "\nDequeue Data: " << endl;
	while (!list.isEmpty())
	{
		list.dequeue(catchData);
		cout << catchData << " ";
	}
	cout << "\nAttempt to dequeue again after dequeue all element" << endl;
	list.dequeue(catchData);

	list.enqueue(1.5);
	list.enqueue(2.5);
	list.clear();
	list.dequeue(catchData);*/


	//Dynamic Queue
	/*DynamicQueue<string> list;
	int choice = 0;
	string CatchString;

	do
	{
		displayMenu(choice);
		switch (choice)
		{
		case 1:
			cout << "------------<Enqueue>------------" << endl;
			cout << "Enter String to enqueue: ";
			cin.get();
			getline(cin, CatchString);
			list.enqueue(CatchString);
			break;
		case 2:
			cout << "------------<Dequeue>------------" << endl;
			cout << "Dequeue a element in the front" << endl;
			list.dequeue(CatchString);
			cout << '"' << CatchString << '"' << "has been sucessfull dequeue" << endl;
			break;
		case 3:
			cout << "------------<Display>------------" << endl;
			cout << "Element: ";
			while (!list.isEmpty())
			{
				list.dequeue(CatchString);
				cout << CatchString << " ";
			}
			cout << "\nPress Enter to continue" << endl;
			cin.get();
			getline(cin, CatchString);
			break;
		case 4:
			cout << "------------<Clear>------------" << endl;
			list.clear();
			cout << "List has been sucessfully clear" << endl;
		case 0:
			break;
		default:
			cout << "Invalid Choices" << endl;
			break;
		}
		system("cls");
	} while (choice != 0);*/


	//Question 4
	/*DynamicQueue <char> list;
	char catchChar;
	fstream myFile("before.txt");

	if (myFile.is_open())
	{
		cout << "sucessfull open before.txt " << endl;
		while (!myFile.eof())
		{
			
			myFile.get(catchChar);
			if (myFile.eof())
				break;
			list.enqueue(catchChar);
		} 
	}
	else
	{
		cout << "Error Open before.txt " << endl;
	}

	myFile.close();
	myFile.open("after.txt");

	if (myFile.is_open())
	{
		cout << "sucessfull open after.txt " << endl;
		while (!list.isEmpty())
		{
			list.dequeue(catchChar);
			catchChar = catchChar + 5;
			myFile << catchChar;
		}
	}
	else
	{
		cout << "Error Open after.txt " << endl;
	}
	myFile.close();*/

	//Question 5
	DynamicQueue<string> queue1;
	DynamicQueue<string> queue2;
	string catchString, catchString2;
	bool same = true;
	fstream file("compare1.txt");

	if (file.is_open())
	{
		while(!file.eof())
		{
			getline(file,catchString);
			queue1.enqueue(catchString);
		}
	}
	else
	{
		cout << "Error Open compare1.txt " << endl;
	}

	file.close();
	file.open("compare2.txt");

	if (file.is_open())
	{
		while (!file.eof())
		{
			getline(file, catchString2);
			queue2.enqueue(catchString2);
		}
	}
	else
	{
		cout << "Error Open compare2.txt " << endl;
	}

	file.close();
	int dame;
	while (!queue1.isEmpty() && !queue2.isEmpty())
	{
		queue1.dequeue(catchString);
		queue2.dequeue(catchString2);
		if (catchString!=catchString2)
		{
			same = false;
			break;
		}
	}
	if ((queue1.isEmpty() && !queue2.isEmpty()) || !queue1.isEmpty() || queue2.isEmpty())
	{
		same = false;
	}

	if (same)
	{
		cout << "\"compar1.txt\"and \"compare2.txt\"is identical." << endl;
	}
	else
	{
		cout << "\"compar1.txt\"and \"compare2.txt\"is not identical." << endl;
	}
	

	return 0;
}

void displayMenu(int &choice)
{
	cout << "Menu: " << endl;
	cout << "1. Enqueue" << endl;
	cout << "2. Dequeue" << endl;
	cout << "3. Display" << endl;
	cout << "4. Clear" << endl;
	cout << "0. Quit" << endl;
	cout << "Choice: ";
	cin >> choice;
}