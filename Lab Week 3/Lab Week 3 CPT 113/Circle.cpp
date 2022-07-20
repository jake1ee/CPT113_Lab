#include "Circle.h"
#include<iostream>

using namespace std;

Circle::Circle()
{
	radius = 0;
	radian = 0;
	degree = 0;
	area = 0;
}
Circle::Circle(double radius, double degree)
{
	this->radius = radius;
	this->degree = degree;
	calRadian();
	calArea();
}
Circle::~Circle()
{

}
void Circle::setArea(double area)
{
	this->area = area;
}

void Circle::setVal(double radius, double degree)
{
	this->radius = radius;
	this->degree = degree;
	calRadian();
	calArea();
}
void Circle::getVal(double& radius, double& degree, double& radian, double& area)
{
	radius = this->radius;
	degree = this->degree;
	area = this->area;
	radian = this->radian;
}
double Circle::getRad()
{
	return radius;
}
void Circle::calRadian()
{
	radian = degree * PI / 180;
}
void Circle::calArea()
{
	area = PI * radius;
}
void Circle::calArea(double height)
{
	area = (2 * PI * pow(radius, 2)) + (2 * PI * radius * height);
	
}
double Circle::getArea()
{
	return area;
}
void Circle::print()
{
	cout << "\n\n -------------------- Circle Data --------------------" << endl;
	cout << "Radius: " << radius << endl;
	cout << "Degree: " << degree << endl;
	cout << "Radian: " << radian << endl;
	cout << "Area:   " << area << endl;
}