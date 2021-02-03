/*
CH-230-A
Shapes.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <string>
#include "Shapes.h"

#define Pi 3.14159265359

using namespace std;


//////////////////////////////////
/////Shape class definitions/////
////////////////////////////////

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape()
{
	name = "";
}

Shape::Shape(const Shape& s)
{
	name = s.name;
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string newname)
{
	name = newname;
}

string Shape::getName() const
{
	return name;
}


///////////////////////////////////////
/// CenteredShape class definitions////
//////////////////////////////////////

CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape()
{
	x = 0.0;
	y = 0.0;
}

// Needs to call the copy constructor of Shape first
CenteredShape::CenteredShape(const CenteredShape& c): Shape(c)
{
	x = c.x;
	y = c.y;
}

void CenteredShape::move(double x1, double y1)
{
	x = x + x1;
	y = y + y1;
}

void CenteredShape::setX(double newX)
{
	x = newX;
}

void CenteredShape::setY(double newY)
{
	y = newY;
}

double CenteredShape::getX() const
{
	return x;
}

double CenteredShape::getY() const
{
	return y;
}


/////////////////////////////////////////
/// RegularPolygon class definitions////
///////////////////////////////////////

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
	EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& r) : CenteredShape(r)
{
	EdgesNumber = r.EdgesNumber;
}

void RegularPolygon::setEdges(int nedges)
{
	EdgesNumber = nedges;
}

int RegularPolygon::getEdges() const
{
	return EdgesNumber;
}


////////////////////////////////////
//// Circle class definitions /////
//////////////////////////////////

Circle::Circle(const string& n, double nx, double ny, double r) :
	CenteredShape(n, nx, ny)
{
	Radius = r;
}

Circle::Circle() : CenteredShape()
{
	Radius = 0;
}

Circle::Circle(const Circle& c) : CenteredShape(c)
{
	Radius = c.Radius;
}

void Circle::setRadius(double nradius)
{
	Radius = nradius;
}

double Circle::getRadius() const
{
	return Radius;
}

double Circle::perimeter()
{
	return (2 * Radius * Pi);
}

double Circle::area()
{
	return (Radius * Radius * Pi);
}


///////////////////////////////////////
//// Rectangle class definitions /////
/////////////////////////////////////

Rectangle::Rectangle(): RegularPolygon()
{
	setEdges(4);						/*Rectangle always has 4 edges*/
	width = 0.0;
	height = 0.0;
}

/*Calls constructor of RegularPolygon, but locks the edges to 4*/
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : RegularPolygon(n, nx, ny, 4)
{
	width = nwidth;
	height = nheight;
}

Rectangle::Rectangle(const Rectangle& r) : RegularPolygon(r)
{
	width = r.width;
	height = r.height;
}

void Rectangle::setHeight(double nheight)
{
	height = nheight;
}

void Rectangle::setWidth(double nwidth)
{
	width = nwidth;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::perimeter()
{
	return (2 * height + 2 * width);
}

double Rectangle::area()
{
	return height * width;
}


////////////////////////////////////
//// Square class definitions /////
//////////////////////////////////

Square::Square() : Rectangle()
{
	side = 0.0;
}

/*Calls constructor of Rectangle first, and sets length = width = side*/
Square::Square(const string& n, double nx, double ny, double nside) : 
	Rectangle(n, nx, ny, nside, nside)
{
	side = nside;
}

Square::Square(const Square& s) : Rectangle(s)
{
	side = s.side;
}

void Square::setSide(double nside)
{
	side = nside;
}

double Square::getSide() const
{
	return side;
}

double Square::perimeter()
{
	return (4 * side);
}

double Square::area()
{
	return (side * side);
}


