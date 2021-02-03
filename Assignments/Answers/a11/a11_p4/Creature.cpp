/*
CH-230-A
Creature.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature() : distance(10)
{}

void Creature::run() const
{
	cout << "running " << distance << " meters!\n";
}


Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
	cout << "hovering " << (distFactor * distance) << " meters!\n";
}


Elf::Elf()
{
	cout << "Calling Elf's default constructor" << endl;
	stamina = 5;
	distFactor = 0.7;
}

Elf::~Elf()
{
	cout << "Calling Elf's destructor" << endl;
}

void Elf::showStamina() const
{
	cout << "Stamina left is: " << stamina << endl;
}

void Elf::sneak()
{
	cout << "Sneaking " << (distFactor * distance) << " meters" << endl;
	// If stamina isn't 0, sneaking will consume 1 stamina point
	if (stamina)
	{
		stamina--;
	}
	cout << "Stamina is now " << stamina << endl;
}


Barbarian::Barbarian() : attackDamage(6)
{
	cout << "Calling Barbarian's default constructor" << endl;
}

Barbarian::~Barbarian()
{
	cout << "Calling Barbarian's destructor" << endl;
}

void Barbarian::attack()
{
	cout << "Attacking!..." << attackDamage << " DMG has been dealt" << endl;
}