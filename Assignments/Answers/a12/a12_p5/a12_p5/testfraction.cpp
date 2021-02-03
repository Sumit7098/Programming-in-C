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

	// Determine the greater fraction and print it on the screen
	if (a > b)
		cout << "The greater fraction is: " << a << endl;
	else
		cout << "The greater fraction is: " << b << endl;

	// Calculate and print the sum and difference on screen
	Fraction sum = a + b;
	cout << "The sum of the fractions is: " << sum << endl;

	Fraction diff = a - b;
	cout << "The difference of the fractions is: " << diff << endl;
}
