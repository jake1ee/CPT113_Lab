#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	const double PI = 3.142;
	Circle();
	Circle(double, double);
	~Circle();
	void setArea(double);
	void print();
	void setVal(double, double);
	void getVal(double&, double&, double&, double&);
	double getRad();
	double getArea();
	void calArea(double);
	
protected:
	double  radius;

private:
	double	radian,
			degree,
			area;
	
	void calRadian();
	void calArea();
};


#endif // !CIRCLE_H
