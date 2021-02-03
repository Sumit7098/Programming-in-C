/*
CH-230-A
a12_p1.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

/* 
    NOTE: ALL CONSTRUCTORS PRINT A MESSAGE ON THE SCREEN WHEN THEY ARE 
    CALLED TO SEE THE ORDER IN WHICH THEY ARE CALLED WHEN AN INSTANCE
    OF A DERIVED CLASS IS CREATED

*/

/*//////////////////////////
    SHAPE IMPLEMENTATIONS 
*///////////////////////////

//CONSTRUCTORS
Shape::Shape() {
    name = "default";  
    cout << "1. shape default constructor" << endl;
}

Shape::Shape(const string& n) : name(n) {
    cout << "1. shape parametric constructor" << endl;

}

Shape::Shape(const Shape &source) {
    name = source.name;
    cout << "1. shape copy constructor" << endl;
}

//METHODS
void Shape::setName(string &n) {
    name = n;
}

string Shape::getName(){
    return name;
}

void Shape::printName() const {
	cout << name << endl;
}

/*////////////////////////////////
   CENTEREDSHAPE IMPLEMENTATIONS 
*/////////////////////////////////

//CONSTRUCTORS
CenteredShape::CenteredShape() {
    x = 1;
    y = 1; 
    cout << "2. centeredshape default constructor" << endl;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
    cout << "2. centeredshape parametric constructor" << endl;

}
CenteredShape::CenteredShape(const CenteredShape& source) : Shape(source.name) {
    x = source.x;
    y = source.y;
    cout << "2. centeredshape copy constructor" << endl;
}

//METHODS
void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;
}

double CenteredShape::getX() {
    return x;
}

double CenteredShape::getY() {
    return y;
}

void CenteredShape::move(double nx, double ny) {
    x += 5;
    y += 5;
}

/*/////////////////////////////////
   REGULARPOLYGON IMPLEMENTATIONS 
*//////////////////////////////////

//CONSTRUCTORS
RegularPolygon::RegularPolygon() {
    EdgesNumber = 3; 
    cout << "3. regularpolygon default constructor" << endl;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
    cout << "3. regularpolygon parametric constructor" << endl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& source) : 
    CenteredShape(source.name, source.x, source.y) {
    EdgesNumber = source.EdgesNumber;
    cout << "3. regularpolygon copy constructor" << endl;
}

//METHODS
void RegularPolygon::setEdgesNumber(int nl) {
    EdgesNumber = nl;
}

int RegularPolygon::getEdgesNumber() {
    return EdgesNumber;
}

/*///////////////////////////
   CIRLCE IMPLEMENTATIONS 
*////////////////////////////

//CONSTRUCTORS
Circle::Circle() {
    Radius = 1;
    cout << "3. circle default constructor being called" << endl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
    cout << "3. circle parametric constructor being called" << endl;
}

Circle::Circle(const Circle& source) : CenteredShape(source.name, source.x, source.y) {
    Radius = source.Radius;
    cout << "3. circle copy constructor being called" << endl;
}

//METHODS
void Circle::setRadius(double r) {
    Radius = r;
}

double Circle::getRadius() {
    return Radius;
}

/*/////////////////////////////
   HEXAGON IMPLEMENTATIONS 
*//////////////////////////////

//CONSTRUCTORS 
Hexagon::Hexagon() {
    colour = "white";
    side = 1;
    cout << "4. hexagon default constructor" << endl;
}

Hexagon::Hexagon(const string& n, double nx, double ny, const string &c, double nside) :
    RegularPolygon(n, nx, ny, 6) {
    colour = c;
    side = nside;
    cout << "4. hexagon parametric constructor" << endl;
}

Hexagon::Hexagon(const Hexagon& source) : 
    RegularPolygon(source.name, source.x, source.y, source.EdgesNumber) {
    colour = source.colour;
    side = source.side;
    cout << "4. hexagon copy constructor" << endl;
}

//DESTRUCTOR
Hexagon::~Hexagon() {
    cout << "hexagon destructor being called" << endl;
}

//SETTER/GETTER METHODS FOR SIDE AND COLOUR 
void Hexagon::setSide(double nside) {
    side = nside;
}

double Hexagon::getSide() const {
    return side;
}

void Hexagon::setColour(const string &c) {
    colour = c;
}

string Hexagon::getColour() const {
    return colour;
}

//SERVICE METHODS
double Hexagon::perimeter() {
    return side * 6;
}

double Hexagon::area() {
    double area = (3 * sqrt(3) / 2) * side * side;
    return area;    
}

//prints info to standard output
void Hexagon::print() {
    cout << name << ": " << endl;
    cout << "Coordinates of center: (" << x << " ," << y << ")" << endl;
    cout << "Colour: " << colour << endl;
    cout << "Side length: " << side << endl;
    cout << "Perimeter: " << perimeter() << endl;
    cout << "Area: " << area() << endl;
}