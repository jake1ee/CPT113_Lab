#include "PersonInfo.h"

PersonInfo::PersonInfo()
{
	name = "";
	IC = NULL;
	gender = NULL;
	age = NULL;

}

PersonInfo::PersonInfo(string name, long long int IC, char gender, int age)
{
	this->name = name;
	this->IC = IC;
	this->gender = gender;
	this->age = age;
}

void PersonInfo::setData(string name, long long int IC, char gender, int age)
{
	this->name = name;
	this->IC = IC;
	this->gender = gender;
	this->age = age;
}

int PersonInfo::findAge(long long int ic)
{
	if (IC == ic)
	{
		return age;
	}
	else
	{
		return -1;
	}
}

long long int PersonInfo::getIc()
{
	return IC;
}

void PersonInfo::displayPerson()
{
	cout << "Name: " << name << endl;
	cout << "IC: " << IC << endl;
	cout << "Gender: " << gender << endl;
	cout << "Age: " << age << endl;
}