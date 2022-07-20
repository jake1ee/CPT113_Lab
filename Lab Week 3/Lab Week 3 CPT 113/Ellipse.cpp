#include "Ellipse.h"
#include<iostream>

using namespace std;

void Ellipse::calulateArea()
{
	double area = PI * radius * ShortRadius;
	setArea(area);
}

void Ellipse::print()
{

	cout << "\n\n -------------------- Elipse Data --------------------" << endl;
	cout << "Radius: " << radius << endl;
	cout << "Short Radius: " << ShortRadius << endl;
	cout << "Area:   " << getArea() << endl;

}