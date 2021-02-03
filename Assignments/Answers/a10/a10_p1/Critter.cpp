#include <iostream>
#include "Critter.h"

//using namespace std;

void setName(string& newname) {
	name = newname;
}

void setHunger(int newhunger) {
	hunger = newhunger;
}

void print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int getHunger() {
	return hunger;
}