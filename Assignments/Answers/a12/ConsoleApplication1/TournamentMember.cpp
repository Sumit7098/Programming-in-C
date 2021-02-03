/*
CH-230-A
TournamentMember.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

string TournamentMember::location = "NoLocation";

TournamentMember::TournamentMember(){
	cout << "Calling TournamentMember empty constructor" << endl;
	strcpy(firstName, "NoFirstName");
	strcpy(lastName, "NoLastName");
	strcpy(dateOfBirth, "yyyy-mm-dd");
	role = "NoRole";
	teamName = "NoTeamName";
}

TournamentMember::TournamentMember(const char nfir[36], const char nlas[36], const char ndat[36], const string& nrol, const string& ntea){
	cout << "Calling TournamentMember parametric constructor" << endl;
	strcpy(firstName, nfir);
	strcpy(lastName, nlas);
	strcpy(dateOfBirth, ndat);
	role = nrol;
	teamName = ntea;
}

TournamentMember::TournamentMember(const TournamentMember& ntm){
	cout << "Calling TournamentMember copy constructor" << endl;
	strcpy(firstName, ntm.firstName);
	strcpy(lastName, ntm.lastName);
	strcpy(dateOfBirth, ntm.dateOfBirth);
	role = ntm.role;
	teamName = ntm.teamName;
}

TournamentMember::~TournamentMember(){
	cout << "Calling TournamentMember destructor" << endl;
}

void TournamentMember::print() const{
	cout << "Tournament location is: " << location << endl;
	cout << "Member details are..." << endl;
	cout << "\tFirst name: " << firstName << endl;
	cout << "\tLast name: " << lastName << endl;
	cout << "\tDate of birth: " << dateOfBirth << endl;
	cout << "\tMember role: " << role << endl;
	cout << "\tMember team: " << teamName << "\n" <<endl;
}

