/*
CH-230-A
a13-p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main() {
    // testing the complex function as stated in the problem
    Complex a, b, c;
    ifstream in1, in2;
    ofstream out;
    in1.open("in1.txt");
    in2.open("in2.txt");
    out.open("ouput.txt");
    in1 >> a;
    in2 >> b;
    Complex sum, sub, product;
    sum = a + b ;
    sub = a - b ;
    product = a * b;
    out << sum;
    out << sub;
    out << product;

    in1.close();
    in2.close();
    out.close();
    return 0;
}
