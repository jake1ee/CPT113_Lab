#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student
{
public:
	Student(string sc, string dn, int Id)
	{
		school = sc;
		desaName = dn;
		studentID = Id;

	}
	~Student()
	{

	}

	friend class Person;

private:
	string school;
	string desaName;
	int studentID;

};

#endif // !STUDENT_H
