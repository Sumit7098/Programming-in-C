/*
CH-230-A
a9_p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
using namespace std;

// Returns the absolute value of a float
float absolute(float x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main(int argc, char** argv)
{
    // Define and read a float from user
    float myFloat, result;
    cout << "Enter a number: ";
    cin >> myFloat;

    // Call the absolute value function
    result = absolute(myFloat);

    // Print the result on screen
    cout << "The absolute value is: " << result << endl;

    return 0;
}
