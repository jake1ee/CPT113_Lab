#ifndef CONE_H
#define CONE_H
#include"Circle.h"
#include"Cylinder.h"

class Cone :public Circle
{
public:
	Cone()
	{
		radius = 0;
		height = 0;
		area = 0;
		volume = 0;
	}
	Cone(double radius, double height)
	{
		this->radius = radius;
		this->height = height;
		calculateArea();
		calculateVol();
	}
	~Cone()
	{

	}

	void print();
	void setDimension();
	bool operator==(Cone&);
	friend void Cylinder::compareBoth(Cone&);


private:
	double  height,
			area,
			volume;
	void calculateArea();
	void calculateVol();
	
};

#endif // !CONE_H
