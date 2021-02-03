#pragma once
#ifndef _CREATURE_H
#define _CREATURE_H

class Creature {
public:
	Creature();
	void run() const;

protected:
	int distance;
};

class Wizard : public Creature {
public:
	Wizard();
	void hover() const;

private:
	int distFactor;
};

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

#endif