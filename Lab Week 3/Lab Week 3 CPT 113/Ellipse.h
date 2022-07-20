#ifndef ELLIPSE_H
#define ELLIPSE_H
#include"Circle.h"

class Ellipse :public Circle
{
public:
	Ellipse()
	{
		radius = 0;
		ShortRadius = 0;
	}
	Ellipse(double radius, double shortRadius)
	{
		if (radius > shortRadius)
		{
			this->radius = radius;
			ShortRadius = shortRadius;
		}
		else
		{
			this->radius = shortRadius;
			ShortRadius = radius;
		}
		
		calulateArea();
	}
	~Ellipse()
	{

	}
	void print();

private:
	double ShortRadius;
	void calulateArea();

};


#endif // !ELLIPSE_H
