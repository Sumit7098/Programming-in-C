/*
CH-230-A
a9_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

// Takes two integers
// Returns the difference between them 
int mycount(int userInt1, int userInt2)
{
    return (userInt2 - userInt1);
}

// Takes a character and a string
// Return the number of occurrances of the char within the string
int mycount(char userChar, string userStr)
{
    int count = 0;
    for (int i = 0; i < static_cast<signed int>(userStr.size()); i++)
    {
        if (userChar == userStr[i])
            count++;
    }
    return count;
}

int main()
{
    // Define and read two integers
    int myInt1, myInt2;
    cout << "Enter two integers:";
    cin >> myInt1 >> myInt2;
    
    // Call mycount function
    int result1 = mycount(myInt1, myInt2);
    cout << "The difference between the integers is: " << result1 << endl;


    // Define and read a string and a character
    char myChar;
    cout << "Enter a character: ";
    cin >> myChar;

    string myStr;
    cout << "Enter a string: ";
    /* Clear buffer before taking new line.
    i.e discards the trailing '\n' */
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.ignore();
    getline(cin, myStr);

    // Call mycount function
    int result2 = mycount(myChar, myStr);
    cout << "Number of occurrances of '" << myChar << "' in the string is: "
        << result2 << endl;

    return 0;

}
