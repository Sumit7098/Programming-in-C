/*
CH-230-A
Complex.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#ifndef _COMPLEX_H
#define _COMPLEX_H

using namespace std;

class Complex
{
private:
	float real;
	float imaginary;
public:
	Complex();							/*Default constructor*/
	Complex(const float&, const float&);	/*Main constructor 2-param*/
	Complex(const Complex&);			/*Copy Constructor*/
	~Complex();							/*Destructor*/

	// Setters
	void setReal(const float&);
	void setImaginary(const float&);

	// Getters
	float getReal() const;
	float getImaginary() const;

	// Service 
	void print();				/*Prints complex number*/
	void conj();	/*Returns the conjugate*/

	/*Adds two Complex numbers. Returns result*/
	Complex add_comp(const Complex&);

	/*Subtracts second Complex number from the first. Returns result*/
	Complex sub_comp(const Complex&);

	/*Multiplies two Complex numbers. Returns result*/
	Complex mult_comp(const Complex&);

};

























#endif