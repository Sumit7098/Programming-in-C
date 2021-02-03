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
	string input;
	while (1)
	{
		cout << "Enter wizard/elf/barbarian or quit: ";
		cin >> input;
		if (input == "wizard")
		{
			Wizard* wptr;
			wptr = new Wizard;

			cout << "Creating a Wizard.\n";
			wptr->run();
			wptr->hover();
			cout << "\n";
		}
		else if(input == "elf")
		{
			Elf* eptr;
			eptr = new Elf;

			cout << "Creating an Elf. \n";
			eptr->run();
			eptr->showStamina();
			eptr->sneak();
			cout << "\n";
		}
		else if (input == "barbarian")
		{
			Barbarian* bptr;
			bptr = new Barbarian;

			cout << "Creating a Barbarian\n";
			bptr->run();
			bptr->attack();
			cout << "\n";
		}
		else if (input == "quit")
		{
			cout << "Quitting game..." << endl;
			exit(EXIT_SUCCESS);
		}
	}
	

	return 0;
}

