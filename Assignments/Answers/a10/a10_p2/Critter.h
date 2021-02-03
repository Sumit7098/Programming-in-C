
/*
CH-230-A
Critter.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int level; /*Newly added*/
	double height;
	double weight; /*Newly added*/

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setLevel(int newlevel);
	void setWeight(double newweight);
	// getter method
	int getHunger();
	int getLevel() const;
	double getWeight() const;
	// service method
	void print();
};