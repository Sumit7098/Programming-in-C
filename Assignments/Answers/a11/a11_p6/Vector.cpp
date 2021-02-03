/*
CH-230-A
Vector.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

Vector::Vector()
{
	size = 0;
	myPtr = NULL;
}

// Dynamically allocated data with the new size,
// then copies entries from the provided ptr to the new one
Vector::Vector(int nsize, double* userPtr)
{
	size = nsize;
	myPtr = new double[size];
	for (int i = 0; i < size; i++)
	{
		myPtr[i] = userPtr[i];
	}
}

Vector::Vector(const Vector& v)
{
	size = v.size;
	myPtr = new double[size];
	for (int i = 0; i < size; i++)
	{
		myPtr[i] = v.myPtr[i];
	}
}

Vector::~Vector()
{
	delete[]myPtr;
}

void Vector::setSize(int nsize)
{
	size = nsize;
}

void Vector::setmyPtr(double* userptr)
{
	// We assumed that setting values are valid, and that
	// 'size': 1) is not equal to 0. 
	//		   2) is equal to the size of the new array

	if (myPtr == NULL)/*In case we called default constructor*/
	{
		myPtr = new double[size];
	}
	for (int i = 0; i < size; i++)
	{
		myPtr[i] = userptr[i];
	}

}

int Vector::getSize() const
{
	return size;
}

double* Vector::getmyPtr() const
{
	return myPtr;
}

void Vector::print() const
{
	if (myPtr) /*Checks if ptr is NULL*/
	{
		for (int i = 0; i < size; i++)
		{
			cout << myPtr[i] << " ";
		}
		cout << "\n";
	}
	else
		cout << "Couldn't print vector..." << endl;
}

double Vector::norm()
{
	double result = 0;
	if (myPtr)
	{
		for (int i = 0; i < size; i++)
		{
			result += (myPtr[i] * myPtr[i]);
		}
	}
	else
		cout << "Couldn't get norm" << endl;

	return sqrt(result);
}

Vector Vector::sum(const Vector v) const
{
	if (size == v.getSize())
	{
		Vector temp(v); /*Copy second Vector into a new temporary matrix*/
		for (int i = 0; i < size; i++)
		{
			temp.myPtr[i] = myPtr[i] + v.myPtr[i];
		}

		return temp;
	}
	else
	{
		cout << "Couldn't perform summation..." << endl;
		return v;
	}
}

Vector Vector::diff(const Vector v) const
{
	if (size == v.getSize())
	{
		Vector temp(v); /*Copy first Vector into a new temporary matrix*/
		for (int i = 0; i < size; i++)
		{
			temp.myPtr[i] = myPtr[i] - v.myPtr[i];
		}
		return temp;
	}
	else
	{
		cout << "Couldn't get difference..." << endl;
		return v;
	}
}

Vector Vector::prod(const Vector v) const
{
	if (size == v.getSize())
	{
		Vector temp(v); /*Copy second Vector into a new temporary matrix*/
		for (int i = 0; i < size; i++)
		{
			temp.myPtr[i] = myPtr[i] * v.myPtr[i];
		}

		return temp;
	}
	else
	{
		cout << "Couldn't perform multiplication..." << endl;
		return v;
	}
}
