/*
CH-230-A
TournamentMember.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
#pragma once
#ifndef _TOURNAMENMEMBER_H
#define _TOURNAMENMEMBER_H
#define _CRT_SECURE_NO_WARNINGS


#include <cstring>
#include <string>

using namespace std;

// TournamentMember class definition 
class TournamentMember {
protected:
	char firstName[36];
	char lastName[36];
	char dateOfBirth[11];			//In format yyyy-mm-dd 
	static string location;
	string role;
	string teamName;

public:
	// Constructors and Destructor
	TournamentMember();
	TournamentMember(const char nfir[36], const char nlas[36], const char ndat[36], const string& nrol, const string& ntea);
	TournamentMember(const TournamentMember&);
	~TournamentMember();

	// Setters
	void setFirstName(const char* nf) { strcpy(firstName, nf); };
	void setLastName(const char* nl) { strcpy(lastName, nl); };
	void setDateOfBirth(const char* nd) { strcpy(dateOfBirth, nd); };
	void setLocation(const string& nl) { location = nl; };				// Location will change for all TournamentMembers
	void setRole(const string& nr) { role = nr; };
	void setTeamName(const string& nt) { teamName = nt; };

	// Getters
	char* getFirstName() { return firstName; }
	char* getLastName() { return lastName; }
	char* getDateOfBirth() { return dateOfBirth; }
	string getLocation() const { return location; }
	string getRole() const { return role; }
	string getTeamName() const { return teamName; }

	// Service
	void print() const;

};

// Player class definition
// Child class of TournamentMember
class Player : public TournamentMember {
public:
	// Constructors and destructor
	Player();																														/*Empty constructor*/
	Player(const char nfir[36], const char nlas[36], const char ndat[36], const string&, const string&, int, int, string, string);	/*Param constructor*/
	Player(const Player& np);																										/*Copy constructor*/
	~Player();																														/*Empty constructor*/

	// Setters
	void setNumber(const int& nn) { number = nn; };				
	void setPosition(const string& np) { position = np; };
	void setFootedness(const string& nf) { footedness = nf; };

	// Getters
	int getNumber() const { return number; };
	int getGoals() const { return goals; };
	string getPosition() const { return position; };
	string getFootedness() const { return footedness; };

	// Service
	void print() const;		/*Prints all data of a player*/
	void increaseGoals();	/*Increments number of goals scored*/

private:
	int number;			/*Player's jersey number*/
	int goals;			/*Goals scored by players*/
	string position;	/*Position on the field*/
	string footedness;	/*Left-footed or right-footed*/

};



#endif