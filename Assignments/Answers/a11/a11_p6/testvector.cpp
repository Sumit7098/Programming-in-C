/*
CH-230-A
testvector.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    // Creating three instances of Vector
    double arr1[3]  = {1, 2, 3};
    Vector v1(3, arr1);
    Vector v2(v1);
    double arr3[3] = { 4, 5, 6 };
    Vector v3;
    v3.setSize(3);
    v3.setmyPtr(arr3);
    Vector results;

    // Calling Vector methods
    cout << "The norm of the first vector is: " << v1.norm() << endl;
    
   // results = v1.prod(v3);
    cout << "Scalar product of v1 and v3 is: ";
    (v1.prod(v3)).print();

    //results = v1.sum(v3);
    cout << "Summation of v1 and v3 is: ";
    (v1.sum(v3)).print();

    //results = v1.diff(v3);
    cout << "Difference between v1 and v3 is: ";
    (v1.diff(v3)).print();

}

