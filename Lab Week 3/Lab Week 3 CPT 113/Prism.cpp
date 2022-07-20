#include "Prism.h"
#include "Shape.h"
#include "Cube.h"
#include<iostream>

using namespace std;

Prism::Prism()
{
	setVal(0, 0, 0);
	volume = 0;
}

Prism::Prism(double h, double w, double l,double v)
{
	setVal(h, w, l);
	calculateVolume();
	if (v == volume)
	{
		volume = v;
	}
	else
	{
		cout << "ERROR(Invalid Volume)" << endl;
		exit(EXIT_FAILURE);
	}
	
}

Prism::~Prism()
{
	cout << "Destroying Prism Obj" << endl;
}

void Prism::printP()
{
	print();
	cout << "Volume: " << volume << endl;
}


void Prism::setDimension()
{
	double width, height, length;
	cout << "\n--------- Set Dimension ---------" << endl;
	cout << "Please Key in the data (Width, Height, Length): ";
	cin >> height >> width >> length;;
	setVal(height, width, length);
	calculateVolume();
}
void Prism::calculateVolume()
{
	double width,  height;
	getHW(width, height);
	volume = length * (height) * (width);

}

void Prism::CompareBoth(Cube &div)
{
	if (volume<div.volume )
	{
		cout << "Cube has a bigger volume compare to Prism" << endl;
	}
	else if(volume>div.volume)
	{
		cout << "Prism has a bigger volume compare to Cube" << endl;
	}
	else
	{
		cout << "Prism and Cube has same Volume" << endl;
	}
	cout << "Cube Volume: " << div.volume << endl;
	cout << "Prism Volume: " << volume << endl;
	
}

bool Prism::operator==(Prism& right)
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