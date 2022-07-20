#ifndef STUDENT2_H
#define STUDENT2_H
#include <string>
#include"Person2.h"

using namespace std;

class Student2
{
public:
	Person2 person;
	Student2(int num, int Id, string name, string hometowe, string sc, string dn)
	{
		school = sc;
		desaName = dn;
		studentID = Id;
		person.keyIn(num, name, hometowe);
	}
	~Student2()
	{

	}
	void print()
	{
		person.print();
		cout << "Student ID: " << studentID << endl;
		cout << "School: " << school << endl;
		cout << "Desa Name: " << desaName << endl;
	}



private:
	string school;
	string desaName;
	int studentID;

};

#endif // !STUDENT_H
