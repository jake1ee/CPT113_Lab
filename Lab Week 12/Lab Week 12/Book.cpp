#include "Book.h"
#include <iostream>

Book::Book()
{
	title = "";
	author = "";
	page = NULL;
	date.day = NULL;
	date.month = NULL;
	date.year = NULL;
}
Book::Book(string title, string author, int page)
{
	this->title = title;
	this->author = author;
	this->page = page;
	setDate();
}
void Book::setTile(string data)
{
	title = data;
}
void Book::setAuthor(string data)
{
	author = data;
}
void Book::setPage(int data)
{
	page = data;
}
void Book::setDate()
{
	int d, m, y;
	bool valid = false;
	do
	{
		cout << "\nPlease Enter the Date(dd mm yy): ";
		cin >> d >> m >> y;
		if (d < 31 && d > 1)
		{
			if (m < 12 && m > 1)
			{
				if (y < 2022 && y > 1000)
					valid = true;
				else
					cout << "Year Must be Between 1001-2022" << endl;
			}
			else
				cout << "Month Must be Between 1-12" << endl;
		}
		else
			cout << "Day Must be Between 1-31" << endl;
	} while (!valid);
	date.day = d;
	date.month = m;
	date.year = y;
}

string Book::getTitle()
{
	return title;
}
string Book::getAuthor()
{
	return author;
}
int Book::getPage()
{
	return page;
}

void Book::displayDate()
{
	cout << date.day << '/' << date.month << '/' << date.year;
}

void Book::operator=(Book obj)
{
	this->title = obj.title;
	this->author = obj.author;
	this->page = obj.page;
	this->date.day = obj.date.day;
	this->date.month = obj.date.month;
	this->date.year = obj.date.year;
}