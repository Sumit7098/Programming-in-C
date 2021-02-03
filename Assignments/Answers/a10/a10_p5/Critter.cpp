/*
CH-230-A
Critter.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// Maps doubles(percentages) to integers
int dtoi(double x)
{
	int temp;
	temp = static_cast<int>(x * 10);
	return temp;
}

// Maps integers to doubles(percentages)
double itod(int x)
{
	double temp;
	temp = static_cast<double>(x / 10.0);
	return temp;
}

// Default constructor
Critter::Critter()
{
	cout << "Calling default constructor" << endl;
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	level = 0;
	weight = 0;
}

// Takes name as parameter
// Sets name to newname, height to 5 and rest to 0
Critter::Critter(const string& newname)
{
	cout << "Calling second constructor" << endl;
	name = newname;
	height = 5;
	hunger = 0;
	boredom = 0;
	level = 0;
	weight = 0;
}

// Takes name, hunger, boredom and height (optional) as parameters
// If height isn't specified it gets set to 10
Critter::Critter(const string& newname, int newhunger, int newboredom, double newheight)
{
	cout << "Calling third constructor" << endl;
	name = newname;
	hunger = itod(newhunger);
	boredom = newboredom;
	height = newheight;
	level = 0;
	weight = 0;

}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = itod(newhunger);
}

void Critter::setBoredom(int newboredom)
{
	boredom = newboredom;
}

void Critter::setLevel(int newlevel)
{
	level = newlevel;
}

void Critter::setWeight(double newweight)
{
	weight = newweight;
}

void Critter::print() {
	cout << "Name: " << name << "\nHunger: " << dtoi(hunger)
		<< "\nBoredom: " << boredom << "\nHeight: " << height << "\nWeight: "
		<< weight << "\nExperience level: "<< level << "\n" << endl;
}

int Critter::getHunger() {
	return dtoi(hunger);
}

int Critter::getLevel() const
{
	return level;
}

double Critter::getWeight() const
{
	return weight;
}