/*
CH-230-A
a13-p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
using namespace std;

// constructors
Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(double c1, double c2){
    real = c1;
    img = c2;
}
Complex::Complex(Complex &c){
    real = c.real;
    img = c.img;
}
//setters
void Complex:: setReal(double nreal)
{
    real = nreal;
}
void Complex:: setImg(double imaginary)
{
    img = imaginary;
}

//getters
double Complex:: getReal()
{
    return real;
}
double Complex:: getImg()
{
    return img;
}

// returning conjugate of the complex number
Complex Complex::conjugate()
{
    Complex tmp;
    tmp.real = real;
    tmp.img = -img;
    return tmp;
}

// adds the complex number to another, c2
Complex Complex::operator+(const Complex &c2){
    Complex tmp;
    tmp.real = real + c2.real;
    tmp.img = img + c2.img;
    return tmp;
}

Complex Complex::operator-(const Complex &c2){
    Complex tmp;
    tmp.real = real - c2.real;
    tmp.img = img - c2.img;
    return tmp;
}

Complex Complex::operator*(const Complex &c2)
{
    Complex tmp;
    tmp.real = (real * c2.real) - (img * c2.img);
    tmp.img = (img * c2.real) + (real * c2.img);
    return tmp;
}

void Complex::operator=(const Complex& f)
{
    real = f.real;
    img = f.img;
}


Complex::~Complex()
{

}
