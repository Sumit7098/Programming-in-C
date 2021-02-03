/*
CH-230-A
Complex.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(const float& r, const float& i)
{
	real = r;
	imaginary = i;
}

Complex::Complex(const Complex& c)
{
	real = c.real;
	imaginary = c.imaginary;
}

Complex::~Complex()
{
}

void Complex::setReal(const float& r)
{
	real = r;
}

void Complex::setImaginary(const float& i)
{
	imaginary = i;
}

float Complex::getReal() const
{
	return real;
}

float Complex::getImaginary() const
{
	return imaginary;
}

void Complex::print()
{
	// If imaginary part is 0 no need to print it
	if (imaginary != 0)
	{
		cout << noshowpos << real << showpos << imaginary
			<< "i" << endl;
	}
	else
		cout << noshowpos << real << endl;
}

void Complex::conj()
{
	imaginary = -imaginary;
}

Complex Complex::add_comp(const Complex& c)
{
	Complex result;
	result.real = real + c.real;
	result.imaginary = imaginary + c.imaginary;
	
	return result;
}

Complex Complex::sub_comp(const Complex& c)
{
	Complex result;
	result.real = real - c.real;
	result.imaginary = imaginary - c.imaginary;

	return result;
}

Complex Complex::mult_comp(const Complex& c)
{
	Complex result;
	result.real = (real * c.real) - (imaginary * c.imaginary);
	result.imaginary = (real * c.imaginary) + (c.real * imaginary);
	return result;
}
