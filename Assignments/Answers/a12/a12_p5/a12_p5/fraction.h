/*
CH-230-A
fraction.h
Qais Qamhia
qqamhia@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1

	Fraction(const Fraction&);	/*Copy constructor*/
	void print();				// prints it to the screen

	friend ostream& operator<<(ostream& out, const Fraction& f);
	friend istream& operator>>(istream& in, Fraction& f);			/*Reads fraction in the form num/den */
	
	Fraction operator*(const Fraction& f);							/*Multiplies two fractions*/
	Fraction operator/(const Fraction& f);							/*Divides two fractions*/
	Fraction operator+(const Fraction& f);							/*Adds two fractions*/
	Fraction operator-(const Fraction& f);							/*Substracts two fractions*/
	Fraction& operator=(Fraction& f);								/*Equalizes two fractions*/
	
	friend bool operator>(const Fraction& f1, const Fraction& f2);	/*Checks if a fraction is larger than another*/
	friend bool operator<(const Fraction& f1, const Fraction& f2);	/*Checks if a fraction is less than another*/

};


#endif /* FRACTION_H_ */