/*
CH-230-A
a13-p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>

class Complex {
    private:
        double real, img;

    public:
        // constructors
        Complex();
        Complex(double c1, double c2);
        Complex(Complex &c);
        //setters
        void setReal(double nreal);
        void setImg(double imaginary);
        //getters
        double getReal();
        double getImg();
        // methods

        // = is overloaded by the copy constructor
        // overloading << and >>
        friend std::ostream& operator<< (std::ostream &out, const Complex &c)
        {
            out << c.real << " + " << c.img << 'i' << std::endl;
            return out;
        }

        friend  std::istream& operator >>(std::istream& in ,Complex &c)
        {
            // for the + or - in between the fractions
            char ch;

            in >> c.real >> ch >> c.img;
            return in;
        }

        Complex conjugate();
        Complex operator*(const Complex& f);
        Complex operator+(const Complex& f);
        Complex operator-(const Complex& f);
        void operator=(const Complex& f);
        // destructor
        ~ Complex();

};
