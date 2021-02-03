/*
CH-230-A
City.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#ifndef _CITY_H
#define _CITY_H

#include <string>
using namespace std;

// Define a city class
class City
{
private:
	string name;
	string mayor;
	int population;
	double area;

public:
	// Setter methods
	void setName(string newname);
	void setMayor(string newmayor);
	void setPop(int newpop);
	void setArea(double newarea);

	// Getter methods
	string getName() const;
	string getMayor() const;
	int getPop() const;
	double getArea() const;

	// Print function
	// Prints all provided details of the city
	void print() const;
};


#endif