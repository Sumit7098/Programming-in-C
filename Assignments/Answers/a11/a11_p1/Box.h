#pragma once
#ifndef _BOX_H
#define _BOX_H

using namespace std;


class Box
{
private:
	double height;
	double width;
	double depth;
public:
	// Constructors
	Box();								// Default constructor
	Box(double, double, double); // Param. constructor
	Box(const Box&);					//Copy constructor
	~Box();								//Destructor

	// Setters
	void setHeight(const double&);
	void setWidth(const double&);
	void setDepth(const double&);

	// Getters
	double getHeight() const;
	double getWidth() const;
	double getDepth() const;
};

















#endif