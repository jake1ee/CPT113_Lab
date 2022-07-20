#ifndef PERSON2_H
#define PERSON2_H	
#include<iostream>
#include<string>

using namespace std;

class Person2
{
public:
	Person2(int num=0, string name="", string hometowe="")
	{
		this->num = num;
		this->name = name;
		hometown_State = hometowe;
		list_of_school = new string[num];
		KeyList(num);

	}
	~Person2()
	{
		delete[] list_of_school;
	}

	void keyIn(int num, string name, string hometowe)
	{
		delete[] list_of_school;
		this->num = num;
		this->name = name;
		hometown_State = hometowe;
		list_of_school = new string[num];
		KeyList(num);
	}

	void KeyList(int num)
	{
		if (num > 0) {
		cout << "Key in List of School" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :";
			getline(cin, list_of_school[i]);
		}
		}
	}

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Home Town Statue: " << hometown_State << endl;
		cout << "List of Scool: " << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :" << list_of_school[i] << endl;
		}
		
	}

private:
	int num;
	string name;
	string hometown_State;
	string* list_of_school;
};

#endif // !PERSON2_H
