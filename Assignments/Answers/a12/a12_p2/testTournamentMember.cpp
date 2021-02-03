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
	TournamentMember m1("Lionel", "Messi", "1987-06-24", "Player", "Barcelona");
	m1.setLocation("Hamburg");
	m1.print();

	// Creating an instance with empty constructor  
	TournamentMember m2;
	m2.setFirstName("Jose");
	m2.setLastName("Mourinho");
	m2.setDateOfBirth("1963-01-26");
	m2.setRole("Coach");
	m2.setTeamName("Tottenham");
	m2.print();
	
	// Creating an instance with copy constructor
	TournamentMember m3(m1);
	m3.print();

}


