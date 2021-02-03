/*
CH-230-A
testshapes.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;

int main(int argc, char** argv) {

	// Defining instances of each class
	RegularPolygon r("TRIANGLE", 1, 1, 3);
	Circle c("first circle", 3, 4, 4);
	Rectangle rec("My Rectangle", 0, 0, 3, 4);
	Square squ("My Square", 0, 0, 5);

	// Calling class methods
	cout << "Circle perimeter is: " << c.perimeter() << endl;
	cout << "Circle area is: " << c.area() << endl;

	cout << "Rectangle perimeter is: " << rec.perimeter() << endl;
	cout << "Rectangle area is: " << rec.area() << endl;

	cout << "Square perimeter is: " << squ.perimeter() << endl;
	cout << "Square area is: " << squ.area() << endl;
	

}