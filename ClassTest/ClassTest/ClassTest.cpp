#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle box;
	double rectWidth;
	double rectLength;

	cout << "Program will calculate the area of a rectangle . what is the width?\n";
	cin >> rectWidth;
	cout << "Length ?\n";
	cin >> rectLength;

	box.setLength(rectLength);
	box.setWidth(rectWidth);

	cout << "DATA\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;

	return 0;
}