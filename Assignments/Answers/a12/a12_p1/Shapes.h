/*
CH-230-A
a12_p1.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

/*/////////////////
    SHAPE CLASS 
*//////////////////

class Shape 
{			
	protected:   			
        /* 
            private access modifier: could also be protected
            every shape will have a name
        */
		std::string name;   
	
    public:
		/* 
            Definitions for default constructor, parametric constructor, 
            copy constructor, setter/getter/service methods for properties
        */
        Shape();
		Shape(const std::string&);  
		Shape(const Shape&);
        void setName(std::string&);
        std::string getName();		
		void printName() const ;  	
};

/*///////////////////////
   CENTEREDSHAPE CLASS 
*////////////////////////

class CenteredShape : public Shape 
{  
	protected: 
		double x,y;  // center of the shape: x,y
	
    public:
        /* 
            Definitions for default constructor, parametric constructor, 
            copy constructor, setter/getter/service methods for properties
        */
        CenteredShape();
		CenteredShape(const std::string&, double, double);  
		CenteredShape(const CenteredShape&);
        void setX(double);
        void setY(double);
        double getX();
        double getY();
		void move(double, double);	// moves the shape, i.e. it modifies its center
};

/*////////////////////////
   REGULARPOLYGON CLASS 
*/////////////////////////

class RegularPolygon : public CenteredShape 
{ 
	protected: 
		int EdgesNumber;

	public:
        /* 
            Definitions for default constructor, parametric constructor, 
            copy constructor, setter/getter/service methods for properties
        */
        RegularPolygon();
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(int);
        int getEdgesNumber();
};

/*////////////////
   CIRLCE CLASS 
*/////////////////

class Circle : public CenteredShape 
{ 
	private:
		double Radius;
	
    public:
        /* 
            Definitions for default constructor, parametric constructor, 
            copy constructor, setter/getter/service methods for properties
        */
        Circle();
		Circle(const std::string&, double, double, double);
		Circle(const Circle&);
        void setRadius(double);
        double getRadius();
};

/*/////////////////
   HEXAGON CLASS 
*//////////////////

class Hexagon : public RegularPolygon
{
    private:
        double side;
        std::string colour;
  
    public: 
        /* 
            Definitions for default constructor, parametric constructor, 
            copy constructor, destructor, setter/getter/service methods 
            for properties, and service methods 
        */
        Hexagon();
        Hexagon(const std::string&, double, double, const std::string&, double);
        Hexagon(const Hexagon&);
        ~Hexagon();
        void setSide(double);
        double getSide() const;
        void setColour(const std::string&);
        std::string getColour() const;
        double perimeter();
        double area();
        void print();
};
#endif