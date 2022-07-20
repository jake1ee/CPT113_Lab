#include "Shape.h"
#include<iostream>

using namespace std;

Shape::Shape()
{
	height = 0;
	width = 0;
	length = 0;
}
Shape::Shape(double h)
{
	height = h;
	width = 0;
	length = 0;
}

Shape::Shape(double h, double w)
{
	height = h;
	width = w;
	length = 0;
}
Shape::Shape(double h, double w, double l)
{
	height = h;
	width = w;
	length = l;
}

Shape::~Shape()
{
	cout << "Destroying Shape obj" << endl;
}

void Shape::print()
{
	cout << "\n--------------- Shape Data ---------------" << endl;
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
}

void Shape::setVal(double h, double w, double l)
{
	height = h;
	width = w;
	length = l;
}

void Shape::getHW(double &h, double &w)
{
	w = width;
	h = height;
}

double Shape::getLength()
{
	return length;
}

bool Shape::operator==(const Shape& right)
{
	if (this->height == right.height && this->length == right.length && this->width == right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
