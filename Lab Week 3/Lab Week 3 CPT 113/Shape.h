#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
	double height ;
	double width ;

protected:
	double length;

public:
	Shape();
	Shape(double);
	Shape(double, double);
	Shape(double, double, double);
	~Shape();
	void print();
	void setVal(double, double, double);
	void getHW(double&, double&);
	double getLength();
	bool operator==(const Shape&);

};


#endif // !SHAPE_H
