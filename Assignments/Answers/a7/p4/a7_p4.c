/*
CH-230-A
a7_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// A common function for all the printing methods
// Takes the string, a function pointer array and an index to the right function
void for_all_prints(char* userString, void (*func[])(char* userString), int n)
{
    // If the number read is 4
    if(n == 4)
        exit(0);
    else
    {
        /*The index in arrays is one less than the
        number we read from the keyboard*/
        func[n-1](userString); 
    }
}

// Prints a string in uppercase form
void print_uppercase(char* userString)
{
    int i;
    for(i = 0; i < strlen(userString); i++)
    {
        printf("%c", toupper(userString[i]));
    }
}

// Prints a string in lowercase form
void print_lowercase(char* userString)
{
    int i;
    for(i = 0; i < strlen(userString); i++)
    {
        printf("%c", tolower(userString[i]));
    }
} 

// Prints lowercase as uppercase and vice versa
void print_opposite(char* userString)
{
    int i;
    for(i = 0; i < strlen(userString); i++)
    {
        if(islower(userString[i]))
        {
            printf("%c", toupper(userString[i]));
        }
        else
        {
            printf("%c", tolower(userString[i]));
        }
    }
}

// Create a function pointer array for those three functions
void (*func_arr[3])(char* userString) = {print_uppercase, print_lowercase, print_opposite};

int main()
{
    // Define and read a string
    char myString[100];
    fgets(myString, 100, stdin);

    int myInt;
    while(1)
    {
        scanf(" %d", &myInt);
        for_all_prints(myString, func_arr, myInt);
    }

}