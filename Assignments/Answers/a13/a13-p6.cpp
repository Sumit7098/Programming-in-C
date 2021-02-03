/*
CH-230-A
a13-p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;
    // pushing 20 elements of value 8
    for (int i = 0; i < 20; i++)
        vec.push_back(8);
    // checking if there's an element at 20st postion, 21st element
    // prints the value at it if it exists
    try {
        cout << vec.at(20) << endl;
    }
    // catching the out of range error
    // and returning my error message
    catch (const std::out_of_range& e) {
        cerr << "Out of Range error: " << e.what() << endl;
    }
    return 0;
}
