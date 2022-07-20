#ifndef Instructor_h
#define Instructor_h
#include <iostream>

using namespace std;

class Instructor
{
private:
	string first_name;
	string last_name;
	int office_num;
public:
	Instructor()
	{
		this->first_name = "";
		this->last_name = "";
		this->office_num = 0;
	}
	Instructor(string fn , string ln, int on)
	{
		this->first_name = fn;
		this->last_name = ln;
		this->office_num = on;
	}

	string displayFN()
	{
		return first_name;
	}

	string displayLN()
	{
		return last_name;
	}
	int displayOfficeNum() {
		return office_num;
	}
	void setfirstName(string name)
	{
		this->first_name = name;
	}

	void setLastname(string name)
	{
		this->last_name = name;
	}

	void setOfficeNum(int num)
	{
		this->office_num = num;
	}

};

#endif // !Instructor_h



