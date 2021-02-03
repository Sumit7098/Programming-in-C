/*
CH-230-A
testcomplex.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex c1, c2, c3;
    float temp;

    // Read a first instance of Complex
    cout << "Set the first number up..." << endl;
    cout << "Enter the real part:";
    cin >> temp;
    c1.setReal(temp);
    cout << "Enter the imaginary part:";
    cin >> temp;
    c1.setImaginary(temp);

    // Read a second instance of Complex
    cout << "Set the second number up..." << endl;
    cout << "Enter the real part:";
    cin >> temp;
    c2.setReal(temp);
    cout << "Enter the imaginary part:";
    cin >> temp;
    c2.setImaginary(temp);
    
    // Print the two numbers
    cout << "\nThe first number is:";
    c1.print();
    cout << "The second number is:";
    c2.print();

    // Get the conjugate of the first one and print it on the screen
    c1.conj();
    cout << "The first number after conjugation is: ";
    c1.print();

    // Sum the two instances up and print it on the screen
    c3 = c1.add_comp(c2);
    cout << "\nThe sum is: ";
    c3.print();

    // Subtract the two instances up and print it on the screen
    c3 = c1.sub_comp(c2);
    cout << "The difference is: ";
    c3.print();

    // Multiply the two instances up and print it on the screen
    c3 = c1.mult_comp(c2);
    cout << "The result of multiplication is: ";
    c3.print();

    return 0;
}
