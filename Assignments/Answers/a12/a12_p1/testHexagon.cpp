/*
CH-230-A
a12_p1.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main() {

    /*
        Info is printing to standard output using print() method in 
        hexagon class 
    */

    // creates first instance of hexagon using parametric constructor
    cout << "------------------------------------------------" << endl;
    cout << "Calling constructors in this order: " << endl;
    Hexagon h1("Hexagon 1", 1, 1, "blue", 9);
    cout << endl;
    h1.print();
    
    //creates second instance of hexagon using parametric constructor
    cout << "------------------------------------------------" << endl;
    cout << "Calling constructors in this order: " << endl;
    Hexagon h2("Hexagon 2", 1, 1, "green", 15);
    cout << endl;
    h2.print();
   
    // creates third instance of hexagon using copy constructor
    cout << "------------------------------------------------" << endl;
    cout << "Calling constructors in this order: " << endl;
    Hexagon h3(h2);
    cout << endl;
    h3.print();
    cout << "------------------------------------------------" << endl;
    return 0;
}