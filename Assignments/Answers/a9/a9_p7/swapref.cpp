/*
CH-230-A
a9_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>

using namespace std;

// Swap two integers
void swapping(int &userInt1, int &userInt2) 
{
	int temp = userInt1;
	userInt1 = userInt2;
	userInt2 = temp;
}

// Swap two floats
void swapping(float &userFloat1, float &userFloat2)
{
	float temp = userFloat1;
	userFloat1 = userFloat2;
	userFloat2 = temp;
}

// Swap two char pointers
void swapping(const char* &userStr1, const char* &userStr2)
{
	const char* temp = userStr1;
	userStr1 = userStr2;
	userStr2 = temp;
}

int main(void)
{
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char* str1 = "One";
	const char* str2 = "Two";

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;

	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
}