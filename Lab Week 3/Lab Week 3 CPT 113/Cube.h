#ifndef CUBE_H
#define CUBE_H
#include"Shape.h"
#include"Prism.h"

using namespace std;
class Cube
{
private:
	double volume;
	Shape shape;
public:
	Cube();
	~Cube();
	void printC();
	void setDimension();
	void calculateVol();
	friend void Prism::CompareBoth(Cube &);
	bool operator==(Cube&);
};

#endif // !CUBE_H
