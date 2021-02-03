/*
CH-230-A
a13-p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
using namespace std;


class ownException{
    string s;
    public:
    ownException(const string s2){
        s = s2;
    }

    // overwriting what() function for my my own exception
    // returning the error in string s
    const string what() const throw () {
       return s + "OwnException\n";
    }

};

void throwExceptions(int x)
{

    switch(x) {
        // throwing the errors based on the int given
        case 1:
            throw('a');
            break;
        case 2:
            throw(12);
            break;
        case 3:
            throw(true);
            break;
        default:
            ownException e("Default case exception\n");
            throw(e);
            break;
    }
}


int main()
{
    // testing the function throwExceptions
    cerr << "Caught in main: " << endl;
    try{
        throwExceptions(1);
    }
    catch(const char c)
    {
        cerr << c << endl;
    }

    try{
        throwExceptions(2);
    }
    catch(int x)
    {
        cerr << x << endl;
    }

    try{
        throwExceptions(3);
    }
    catch(bool b)
    {
        cerr << b << endl;
    }
    // testing ownException class
    try{
        throwExceptions(5);
    }
    catch(ownException e){
        cerr << e.what() << endl;
    }
    return 0;
}
