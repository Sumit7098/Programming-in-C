
/*
CH-230-A
Critter.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#include <string> // defines standard C++ string class
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int level; 
	double height;
	double weight; 

public: // business logic methods are public
	// Constructors
	Critter();
	Critter(const string& newname);
	Critter(const string& newname, int newhunger, int newboredom, double newheight = 10);
	// setter methods
	void setName(string& newname);
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
