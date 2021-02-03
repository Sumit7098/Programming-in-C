/*
CH-230-A
Vector.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#ifndef _VECTOR_H
#define _VECTOR_H

using namespace std;

class Vector
{
private:
	int size;
	double* myPtr; /*A pointer to the location where the 
						components of the vector are stored*/
public:
	Vector();					/*Default constructor*/
	Vector(int, double*);		/*Parametric constructor*/
	Vector(const Vector&);		/*Copy constructor*/
	~Vector();					/*Destructor*/

	// Setters
	void setSize(int);
	void setmyPtr(double*);

	// Getters 
	int getSize() const;
	double* getmyPtr() const;

	// Service
	void print() const;			/*Prints vector's components on the screen*/
	
	// Computational
	double norm();				/*Calculates norm of a vector*/
	Vector sum(const Vector) const;	/*Calculates sum of two vectors*/
	Vector diff(const Vector) const;	/*Calculates differences between two vectors*/
	Vector prod(const Vector) const; /*Calculates scalar product of two vectors*/

};



















#endif

