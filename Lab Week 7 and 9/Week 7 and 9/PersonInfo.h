#ifndef PERSONINFO_H
#define PERSONINFO_H

#include<iostream>
#include<string>

using namespace std;

class PersonInfo
{
private:
	string name;
	long long int IC;
	char gender;
	int age;
public:
	PersonInfo();
	PersonInfo(string, long long int, char, int);
	void setData(string, long long int, char, int);
	int findAge(long long int);
	long long int getIc();
	void displayPerson();



};
#endif // !PERSONINFO_H




