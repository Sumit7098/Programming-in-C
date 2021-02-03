/*
CH-230-A
testcreature.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;


int main()
{
	cout << "Creating a Creature.\n";
	Creature c;
	c.run();

	cout << "\nCreating a Wizard.\n";
	Wizard w;
	w.run();
	w.hover();

	cout << "\nCreating an Elf. \n";
	Elf e;
	e.run();
	e.showStamina();
	e.sneak();

	cout << "\nCreating a Barbarian\n";
	Barbarian b;
	b.run();
	b.attack();

	return 0;
}

