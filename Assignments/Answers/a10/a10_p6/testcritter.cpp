/*
CH-230-A
testcritter.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	// Calling first (default) constructor 
	Critter c1;
	c1.setHunger(2);

	// Calling second constructor
	Critter c2("Jon");
	c2.setHunger(2);

	// Calling third constructor twice
	Critter c3("Dave", 2, 7, 30);
	Critter c4("Sam", 2, 9);

	// Calling fourth constructor
	Critter c5("Rob", 2, 4, 25, 5);

	// Printing all critters
	cout << "You have created:" << endl;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();

	return 0;
}

