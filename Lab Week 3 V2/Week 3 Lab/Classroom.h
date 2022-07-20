#ifndef Classroom_h
#define Classroom_h
#include<iostream>
using namespace std;

class Classroom
{
private:
	int building_num;
	int room_number;


public:
	Classroom()
	{
		this->building_num = 0;
		this->room_number = 0;
	}

	Classroom(int buil,int room)
	{
		this->building_num = buil;
		this->room_number = room;
	}

	void setBuild(int building_num)
	{
		this->building_num = building_num;
	}

	void setRoom(int room)
	{
		this->room_number = room;
	}

	int displayBuild()
	{
		return this->building_num;
	}

	int displayRoom()
	{
		return this->room_number;
	}
};



#endif // !Classroom_h
