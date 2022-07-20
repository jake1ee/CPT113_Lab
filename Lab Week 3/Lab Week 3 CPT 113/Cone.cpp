#include "Cone.h"
#include<iostream>
#include<cmath>

using namespace std;

const double Pi = 3.142;

void Cone::print()
{
	cout << "\n\n -------------------- Cone Data --------------------" << endl;
	cout << "Radius: " << radius << endl;
	cout << "Height: " << height << endl;
	cout << "Area:   " << area << endl;
	cout << "Volume: " << volume << endl;

}
void Cone::setDimension()
{
	cout << "\n\nPlease Enter The Data:" << endl;
	cout << "Radius(cm): " << endl;
	cin >> radius;
	cout << "Height(cm): " << endl;
	cin >> height;
	calculateArea();
	calculateVol();
}
void Cone::calculateArea()
{
	area = PI * pow(radius, 2);
}
void Cone::calculateVol()
{
	volume = PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
}

bool Cone::operator==(Cone& right)
{
	if (volume == right.volume && area == right.area)
	{
		return true;
	}
	else
	{
		return false;
	}
}