/*
CH-230-A
testcity.cpp
Qais Qamhia
q.qamhia@jacobs-university.de
*/
#include "City.h"
#include <iostream>

int main()
{
	// Create three instances of the class City
	City Bremen, Paris, London;

	// Set data for each city
	Bremen.setName("Bremen");
	Bremen.setMayor("Andreas Bovenschulte");
	Bremen.setPop(569352);
	Bremen.setArea(326.7);


	Paris.setName("Paris");
	Paris.setMayor("Anne Hidalgo");
	Paris.setPop(2161000);
	Paris.setArea(105.4);

	London.setName("London");
	London.setMayor("Sadiq Khan");
	London.setPop(8982000);
	London.setArea(1572);

	// Print the provided data
	cout << "You have provided these cities:\n" << endl;
	Bremen.print();
	Paris.print();
	London.print();

	return 0;
}
