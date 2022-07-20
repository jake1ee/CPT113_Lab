#ifndef AUTHOR2_H
#define AUTHOR2_H	
#include<iostream>
#include<string>

using namespace std;

class Author2
{
public:
	Author2(int num = 0, string name = "", string hometowe = "")
	{
		this->num = num;
		this->name = name;
		hometown = hometowe;
		list_of_genreBooks = new string[num];
		KeyList(num);

	}
	~Author2()
	{
		delete[] list_of_genreBooks;
	}

	void keyIn(int num, string name, string hometowe)
	{
		delete[] list_of_genreBooks;
		this->num = num;
		this->name = name;
		hometown = hometowe;
		list_of_genreBooks = new string[num];
		KeyList(num);
	}

	void KeyList(int num)
	{
		if (num > 0) {
			cout << "Key in List of Genre Book" << endl;
			for (int i = 0; i < num; i++)
			{
				cout << "Genre Book(" << i + 1 << ") :";
				getline(cin, list_of_genreBooks[i]);
			}
		}
	}

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Home Town : " << hometown << endl;
		cout << "List of Genre Book: " << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :" << list_of_genreBooks[i] << endl;
		}

	}

private:
	int num;
	string name;
	string hometown;
	string* list_of_genreBooks;
};

#endif 

