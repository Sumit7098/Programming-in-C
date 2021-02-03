/*
CH-230-A
Shapes.h
Qais Qamhia
qqamhia@jacobs-university.de
*/

#pragma once
/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			// base class
private:   				// private access modifier: could also be protected
	std::string name;   // every shape will have a name
public:
	Shape(const std::string&);  // builds a shape with a name
	Shape();					// empty shape
	Shape(const Shape&);		// copy constructor
	void printName() const;  	// prints the name  

	// Setter
	void setName(string);

	// Getter
	string getName() const;

};

class CenteredShape : public Shape {  // inherits from Shape
private:
	double x, y;  // the center of the shape
public:
	CenteredShape(const std::string&, double, double);  // usual three constructors
	CenteredShape();
	CenteredShape(const CenteredShape&);
	void move(double, double);	// moves the shape, i.e. it modifies it center

	// Setters
	void setX(double);
	void setY(double);

	// Getters
	double getX() const;
	double getY() const;
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
	int EdgesNumber;
public:
	RegularPolygon(const std::string&, double, double, int);
	RegularPolygon();
	RegularPolygon(const RegularPolygon&);

	// Setter 
	void setEdges(int);

	// Getter
	int getEdges() const;

};

// A rectangle is a regular polygon, with only 4 edges
// Each two opposites have the same length
class Rectangle : public RegularPolygon
{
private:
	double width;			/*Long-Side Edges Length*/
	double height;			/*Short-Side Edges Length*/
public:
	Rectangle();												/*Default constructor*/
	Rectangle(const string&, double, double, double, double);	/*Parametric constructor*/
	Rectangle(const Rectangle&);								/*Copy constructor*/

	// Setters
	void setHeight(double);
	void setWidth(double);

	// Getters
	double getHeight() const;
	double getWidth() const;

	// Service
	double perimeter();
	double area();

};

// A square is a rectangle that has equal edges
class Square : public Rectangle
{
private:
	double side;			/*Length of its edges*/
public:
	Square();										/*Default constructor*/
	Square(const string&, double, double, double);	/*Parametric constructor*/
	Square(const Square&);							/*Copy constructor*/

	// Setters
	void setSide(double);

	// Getters 
	double getSide() const; 

	// Service
	double perimeter();
	double area();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
	double Radius;
public:
	Circle(const std::string&, double, double, double);	
	Circle();
	Circle(const Circle&);

	// Setters
	void setRadius(double);

	// Getters
	double getRadius() const;

	// Service
	double perimeter();
	double area();

};

#endif