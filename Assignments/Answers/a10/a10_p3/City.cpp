/*
CH-230-A
City.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include "City.h"
#include <iostream>

using namespace std;

void City::setName(string newname)
{
	name = newname;
}

void City::setMayor(string newmayor)
{
	mayor = newmayor;
}

void City::setPop(int newpop)
{
	population = newpop;
}

void City::setArea(double newarea)
{
	area = newarea;
}

string City::getName() const
{
	return name;
}

string City::getMayor() const
{
	return mayor;
}

int City::getPop() const
{
	return population;
}

double City::getArea() const
{
	return area;
}

void City::print() const
{
	cout << "Name of the city is " << name << ".\nPopulation is " << population
		<< ".\nThe Mayor is " << mayor << ".\nArea is " << area << "SQ KM" << ".\n\n"
		<< endl;
}
