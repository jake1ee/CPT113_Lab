#ifndef PRISM_H
#define PRISM_H
#include"Shape.h"

class Cube;

class Prism : public Shape
{
private:
	double volume;
public:
	Prism();
	Prism(double, double, double, double);
	~Prism();
	void printP();
	void setDimension();
	void calculateVolume();
	void CompareBoth(Cube &);
	bool operator==(Prism&);
};


#endif // !PRISM_H
