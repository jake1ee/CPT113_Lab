#ifndef PERSON_H
#define PERSON_H
#include"Student.h"
#include<iostream>
#include <string>

using namespace std;

class Student;
class Person
{
public:
	Person(int num, string name, string hometowe, string sc, string dn, int Id)
	{

		this->num = num;
		this->name = name;
		hometown_State = hometowe;
		list_of_school = new string[num];
		KeyList(num);
		
	}
	~Person()
	{
		delete[] list_of_school;
	}

	void KeyList(int num)
	{
		cout << "Key in List of School" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :";
			getline(cin, list_of_school[i]);
		}
	}

	void print(Student &student)
	{
		cout << "Name: " << name << endl;
		cout << "Home Town Statue: " << hometown_State << endl;
		cout << "List of Scool: " << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "School(" << i + 1 << ") :" << list_of_school[i] << endl;
		}
		cout << "Studen Id: " << student.studentID << endl;
		cout << "School: " << student.school << endl;	
		cout << "Desa Name: " << student.desaName << endl;

	}

private:
	int num;
	string name;
	string hometown_State;
	string* list_of_school;
	
};

#endif // !PERSON_H
