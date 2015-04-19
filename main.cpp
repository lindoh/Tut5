#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

void virtualViaPointer(const Shape * const);

int main()
{
	
	Square shape("square", 10);
	Rectangle rec("rectangle", 10);
	Circle round("circle", 10);
	Triangle pie("Triangle" , 10);

	shape.draw();
	cout << "Length = " << shape.getLength() << endl;
	cout << "Area = " << shape.area() << endl;
	cout << "Perimeter = " <<shape.perimeter()  << endl;

	vector< Shape* >shapes(4);

	shapes[0] = &shape;
	shapes[1] = &rec;
	shapes[2] = &round;
	shapes[3] = &pie;

	for(size_t i = 0; i<shapes.size() ; i++)
		virtualViaPointer(shapes[i]);

	system("pause");
	return 0;
}
void virtualViaPointer(const Shape * const ptr)
{
	ptr -> draw();
	cout << "\n Perimeter" << ptr->perimeter() << "\n" << endl;
	cout << "\n Area" << ptr->area() << "\n" << endl;
}
