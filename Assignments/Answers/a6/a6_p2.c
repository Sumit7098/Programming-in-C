/*
CH-230-A
a6_p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void print_last_bit(unsigned char c)
{
    if(c % 1)
    {
        printf("The least significant bit is: 1\n");
    }
    else
    {
        printf("The least significant bit is: 0\n");
    }
    
}

int main()
{
    unsigned char myChar;
    scanf(" %c", &myChar);

    printf("The decimal representation is: %d\n", myChar);
    print_last_bit(myChar);

    return 0;
}