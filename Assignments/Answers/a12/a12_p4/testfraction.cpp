/*
CH-230-A
testfraction.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a;
	Fraction b;
	

	// Read two fractional numbers from user
	cout << "Enter first fractional number in the form num/den: ";
	cin >> a;
	cout << "Enter second fractional number in the form num/den: ";
	cin >> b;


	// Calculate and print the product and the quotient on screen
	Fraction prod = a * b;
	cout << "The product of the fractions is: " << prod << endl;

	Fraction quot = a / b;
	cout << "The quotient of the fractions is: " << quot << endl;
}
