#ifndef AUTHOR_H
#define AUTHOR_H
#include"Book.h"
#include<iostream>
#include <string>

using namespace std;

class Book;
class Author
{
public:
	Author(int num, string name, string hometowe)
	{
		this->num = num;
		this->name = name;
		hometown = hometowe;
		list_of_genreBooks = new string[num];
		KeyList(num);

	}
	~Author()
	{
		delete[] list_of_genreBooks;
	}

	void KeyList(int num)
	{
		cout << "Key in List of Genre Book" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "Genre Book(" << i + 1 << ") :";
			getline(cin, list_of_genreBooks[i]);
		}
	}

	void print(Book &book)
	{
		cout << "Name: " << name << endl;
		cout << "Home Town : " << hometown << endl;
		cout << "List of Genre Book: " << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :" << list_of_genreBooks[i] << endl;
		}
		cout << "Book Id: " << book.BookID << endl;
		cout << "Book Type: " << book.Booktype << endl;
		cout << "Book Genre: " << book.Genre << endl;
	}

private:
	int num;
	string name;
	string hometown;
	string* list_of_genreBooks;

};

#endif 
