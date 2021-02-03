/*
CH-230-A
testTournamentMember.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(){
	// Creating a Player instance with parametric constructor
	Player p1("Lionel", "Messi", "1987-06-24", "Player", "Barcelona", 10, 16, "Forward", "Left-footed");
	p1.setLocation("Hamburg");
	p1.print();

	// Creating an instance with empty constructor  
	Player p2;
	p2.setFirstName("Cristiano");
	p2.setLastName("Ronaldo");
	p2.setDateOfBirth("1985-02-05");
	p2.setRole("Player");
	p2.setTeamName("Juventus");
	p2.setNumber(7);
	p2.increaseGoals();
	p2.setPosition("Forward");
	p2.setFootedness("Right-footed");
	p2.print();
	
	// Creating an instance with copy constructor
	Player p3(p1);
	p3.print();

}


