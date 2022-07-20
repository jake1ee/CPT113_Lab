#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book
{
public:
	Book(string bt, string g, int Id)
	{
		Booktype = bt;
		Genre = g;
		BookID = Id;

	}
	~Book()
	{

	}

	friend class Author;

private:
	string Booktype;
	string Genre;
	int BookID;

};

#endif 
