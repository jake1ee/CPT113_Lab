#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cone;

class Cylinder
{
public:
	Cylinder()
	{
		height = 0;
		volume = 0;
		circle.setVal(0, 360);
	}
	~Cylinder()
	{

	}
	void print();
	void setDimension();
	void compareBoth(Cone&);
	bool operator==(Cylinder&);

private:
	double volume;
	double height;
	Circle circle;
	void calculateVol();
};

#endif // !CYLINDER_H
