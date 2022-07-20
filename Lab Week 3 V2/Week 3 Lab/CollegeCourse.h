#ifndef CollageCourse_h
#define CollageCource_h
#include<iostream>
#include"Instructor.h"
#include"Classroom.h"

using namespace std;

class CollegeCourse
{
public:
CollegeCourse(string fn,string ln,int on,int bn,int rn,int nc)
{
	this->num_Credit = nc;
	this->Lecture.setfirstName(fn);
	this->Lecture.setLastname(ln);
	this->Lecture.setOfficeNum(on);
	this->Class.setBuild(bn);
	this->Class.setRoom(rn);
}

void displayData()
{
	cout << "\nLecture Name: " << this->Lecture.displayFN() << " " << this->Lecture.displayLN() << endl;
	cout << "Office Number: " << this->Lecture.displayOfficeNum() << endl;
	cout << "(Classroom)\nBuilding Number: " << this->Class.displayBuild() << "\nRoom Number: " << this->Class.displayRoom() << endl;
	cout << "Number of Credit: " << this->num_Credit << endl;
}

private:
	Instructor Lecture;
	Classroom Class;
	int num_Credit;

};

#endif // !CollageCourse_h
