#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book
{
private:
	struct Date
	{
		int day, month, year;
	};
	string title, author;
	int page;
	Date date;
	
public:
	Book();
	Book(string, string, int);
	void setTile(string);
	void setAuthor(string);
	void setPage(int);
	void setDate();

	string getTitle();
	string getAuthor();
	int getPage();

	void displayDate();

	void operator=(Book);

};
#endif // !BOOK_H

