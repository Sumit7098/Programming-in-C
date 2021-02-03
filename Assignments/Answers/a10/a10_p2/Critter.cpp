/*
CH-230-A
Critter.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
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
	cout << "I am " << name << ". My hunger level is " << hunger << "." <<
		" My experience level is " << level << ". My weight is " << weight <<
		" ." << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getLevel() const
{
	return level;
}

double Critter::getWeight() const
{
	return weight;
}