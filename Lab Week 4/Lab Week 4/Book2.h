#ifndef BOOK2_H
#define BOOK2_H
#include <string>
#include"Author2.h"

using namespace std;

class Book2
{
public:
	Author2 person;
	Book2(int num, int Id, string name, string hometowe, string bt, string g)
	{
		Booktype = bt;
		Genre = g;
		BookID = Id;
		person.keyIn(num, name, hometowe);
	}
	~Book2()
	{

	}
	void print()
	{
		person.print();
		cout << "Book Id: " << BookID << endl;
		cout << "Book Type: " << Booktype << endl;
		cout << "Book Genre: " << Genre << endl;
	}



private:
	string Booktype;
	string Genre;
	int BookID;

};
#endif