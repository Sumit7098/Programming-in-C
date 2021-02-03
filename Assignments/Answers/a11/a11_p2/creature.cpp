/*
CH-230-A
creature.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
public:
	Creature();
	void run() const;

protected:
	int distance;
};

Creature::Creature() : distance(10)
{}

void Creature::run() const
{
	cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature {
public:
	Wizard();
	void hover() const;

private:
	int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
	cout << "hovering " << (distFactor * distance) << " meters!\n";
}


// Elf class declaration
class Elf : public Creature
{
public:
	Elf();							/*Default constructor*/
	~Elf();							/*Destructor*/
	void showStamina() const;		/*Shows stamina left*/
	void sneak();				/*Moves steathily but slowly*/

private:
	double distFactor;
	int stamina;
};

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

// Barbarian class declaration
class Barbarian : public Creature
{
public:
	Barbarian();				/*Default constructor*/
	~Barbarian();				/*Destructor*/
	void attack();				/*Attacks enemies by 'attackDamage' points*/

private:
	int attackDamage;
};

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


