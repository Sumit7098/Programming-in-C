/*
CH-230-A
fraction.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;

	// Swaps them temporary in the scope of the function
	// Just to keep track of which one is lower
	if (a < b){
		int temp = a;
		a = b;
		b = temp;
	}

	// Test each number from till the lower of the two
	// Change tmp_gcd every time a number passes as a common divisor
	for (int i = 1; i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			tmp_gcd = i;
	}
	return tmp_gcd;

	// Another possible implementation
	/*while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;*/

}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

Fraction::Fraction(const Fraction& f){
	num = f.num;
	den = f.den;
}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

Fraction Fraction::operator*(const Fraction& f){
	Fraction temp(this->num * f.num, this->den * f.den);
	return temp;
}

Fraction Fraction::operator/(const Fraction& f){
	Fraction temp((this->num * f.den), (this->den * f.num));
	return temp;
}

Fraction Fraction::operator+(const Fraction& f){
	Fraction temp(((this->num * lcm(this->den, f.den) / this->den) + (f.num * lcm(this->den, f.den) / f.den)), lcm(this->den, f.den));
	return temp;
}

Fraction Fraction::operator-(const Fraction& f){
	Fraction temp(((this->num * lcm(this->den, f.den) / this->den) - (f.num * lcm(this->den, f.den) / f.den)), lcm(this->den, f.den));
	return temp;
}

Fraction& Fraction::operator=(Fraction& f){
	if (this == &f)
		return *this;

	this->num = f.num;
	this->den = f.den;
	return *this;
}


ostream& operator<<(ostream& out, const Fraction& f){
	out << f.num << "/" << f.den;
	return out;
}

istream& operator>>(istream& in, Fraction& f) {
	in >> f.num;
	in.ignore(256, '/');	/*ignores the character '/' between num. and den.*/
	in >> f.den;

	/*If denominator is 0, take a new fraction*/
	while (f.den == 0) {
		cout << "Denominator can't be equal to 0... Reenter fraction: " << endl;
		in >> f.num;
		in.ignore(256, '/');		/*Ignores the '/' between the two numbers*/
		in >> f.den;
	}

	return in;

}

bool operator>(const Fraction& f1, const Fraction& f2){
	if ((f1.num * f2.den) > (f2.num * f1.den))
		return true;
	else
		return false;
}

bool operator<(const Fraction& f1, const Fraction& f2){
	if ((f1.num * f2.den) < (f2.num * f1.den))
		return true;
	else
		return false;
}
