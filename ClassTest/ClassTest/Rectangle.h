#ifndef RECTANGLE_H 
// Tell the preprocessor to see if a constant named RECTANGLE_H has not been previously created with #define directive
#define RECTANGLE_H
//the first included line defines the RECTANGLE_H constant. if the file is included again, the includde guard will skip its contents
class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};
#endif // !RECTANGLE_H