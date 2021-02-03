/*
CH-230-A
a13-p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Motor{
    public:

        Motor()
        {
            // throwing the error in motor to catch it
            // in garage
            throw("This motor has problems\n");
        }

};

class Car{
    public:
        Car()
        {
            Motor();
        }
};


class Garage{
    public:
         Garage(){
            try  {
                Car();
            }
            // catching the error from motor
            catch (const char *e) {
                cerr <<  e;
                // trhowing an error for car
                throw("The car in this garage has problems with the motor\n");
            }

         }
};



int main()
{
    // constructing garage and catching the error
    // coming from initializing the car there
    try{
        Garage();
    }
    catch (const char *e) {
        cerr <<  e;
    }
    return 0;
}
