#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:
	Circle(const string &, double = 0.0);

	void setRadius(double);
	double getRadius() const;

	virtual double perimeter() const;
	virtual double area() const;

	virtual void draw() const;
private:
	double CRadius;

};
#endif
