#include "Cylinder.h"
#include"Circle.h"
#include"Cone.h"
#include<iostream>
#include<cmath>

using namespace std;

void Cylinder::print()
{
	cout << "\n\n -------------------- Cylinder Data --------------------" << endl;
	cout << "Radius: " << circle.getRad() << endl;
	cout << "Height: " << height << endl;
	cout << "Area:   " << circle.getArea() << endl;
	cout << "Volume: " << volume << endl;
}

void Cylinder::setDimension()
{
	double radius;
	cout << "\n\nKey In Data for Cylinder:" << endl;
	cout << "Radius(cm)" << endl;
	cin >> radius;
	circle.setVal(radius, 360);
	cout << "Height(cm)" << endl;
	cin >> height;
	calculateVol();
	circle.calArea(height);

}
void Cylinder::calculateVol()
{
	volume = circle.PI * pow(circle.getRad(), 2) * height;
}

void Cylinder::compareBoth(Cone &right)
{
	if (this->volume > right.volume)
	{
		cout << "\nCylinder has Bigger Volume compare to Cone" << endl;
	}
	else if (this->volume < right.volume)
	{
		cout <<"\nCone has Bigger Volume compare to Cylinder" << endl;
	}
	else
	{
		cout << "\nCone and Cylinder have same volume" << endl;
	}
	cout << "\nCone Volume: " << right.volume << endl;
	cout << "Cylinder Volume: " << this->volume << endl;

	if (this->circle.getArea()> right.area)
	{
		cout << "\nCylinder has Bigger Suurface Area compare to Cone" << endl;
	}
	else if (this->circle.getArea() < right.area)
	{
		cout << "\nCone has Bigger Surface Area compare to Cylinder" << endl;
	}
	else
	{
		cout << "\nCone and Cylinder have same Surface Area" << endl;
	}
	cout << "\nCone Surface Area: " << right.area << endl;
	cout << "Cylinder Surface Area: " << this->circle.getArea() << endl;
}

bool Cylinder:: operator==(Cylinder& right)
{
	if ((volume == right.volume) && (circle.getArea() == right.circle.getArea()))
	{
		return true;
	}
	else
	{
		return false;
	}
}