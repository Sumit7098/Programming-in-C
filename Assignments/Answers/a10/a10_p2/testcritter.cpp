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
	Critter c;

	string name;
	int hunger;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	/*Newly added*/
	int level;
	double weight;

	cout << "Level: ";
	cin >> level;
	c.setLevel(level);

	cout << "Weight: ";
	cin >> weight;
	c.setWeight(weight);



	cout << "You have created:" << endl;
	c.print();
	return 0;
}
