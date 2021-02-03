/*
CH-230-A
a9_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

// Checks if character is a consonant
// Return 1 if it is and 0 if it isn't
int is_cons(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if (c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u')
            return 0;

        else if (c == 'A' || c == 'O' || c == 'I' || c == 'E' || c == 'U')
            return 0;

        else
            return 1;
    }
    else
        return 0;
}
// Finds the first positive and even number in an array of integers
// Returns -1 if no such element exists 
int myfirst(int userArr[], int n)
{
    int result;
    for (int i = 0; i < n; i++)
    {
        if (userArr[i] > 0 && userArr[i] % 2 == 0)
        {
            result = userArr[i];
            return result;
        }
    }
    return -1;
}

// Finds the first negative element that doesn't have a fractional part
// Returns -1 if no such element exists 
double myfirst(double userArr[], int n)
{
    double result;
    for (int i = 0; i < n; i++)
    {
        // Mod will only be 0 if the double is whole
        if (userArr[i] < 0 && fmod(userArr[i], 1) == 0)
        {
            result = userArr[i];
            return result;
        }
    }
    return -1;
}

// Finds the first consonant in an array
// Returns '0' if no such element exists
char myfirst(char* userArr, int n)
{
    char result;
    for (int i = 0; i < n; i++)
    {
        if (is_cons(userArr[i]))
        {
            result = userArr[i];
            return result;
        }
    }
    return '0';
}

int main()
{
    // Call first 'myfirst' function
    int arrInt[5] = { 1, 43, -24, 4, 7 };
    int test1 = myfirst(arrInt, 5);
    cout << "Result of the first function is: " << test1 << endl;

    // Call second 'myfirst' function
    double arrDoub[5] = { 4.32, -61.3, 42, -13, -32 };
    double test2 = myfirst(arrDoub, 5);
    cout << "Result of the second function is: " << test2 << endl;

    // Call third 'myfirst' function
    char arrChar[5] = {'a', 'U', 'S', 'w', 'o'};
    char test3 = myfirst(arrChar, 5);
    cout << "Result of the third function is: " << test3 << endl;

    return 0;

}

