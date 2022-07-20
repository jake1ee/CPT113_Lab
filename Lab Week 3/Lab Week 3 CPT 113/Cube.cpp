#include "Cube.h"
#include <iostream>
#include "Shape.h"

using namespace std;

Cube::Cube()
{
	volume = 0;
	shape.setVal(0, 0, 0);
}

Cube::~Cube()
{
	cout << "Destroying Cube Obj" << endl;
}

void Cube::printC()
{
	shape.print();
	cout << "Volume: " << volume << endl;

}
void Cube::setDimension()
{
	double width, height, length;
	cout << "Enter Data:" << endl;
	cout << "Height-";
	cin >> height;
	cout << "Width-";
	cin >> width;
	cout << "Length-";
	cin >> length;
	shape.setVal(height, width, length);
	calculateVol();
}
void Cube::calculateVol()
{
	double width, height;
	shape.getHW(width, height);
	volume = (width * shape.getLength()) * (height);

}
bool Cube::operator==(Cube &right)
{
	if (this->volume == right.volume)
	{
		return true;
	}
	else
	{
		return false;
	}
}