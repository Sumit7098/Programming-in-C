/*
CH-230-A
a2_p6.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x, y;
    printf("Enter two doubles:");
    scanf(" %lf %lf", &x, &y);

    // Defining Pointers
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    // Printing the addresses in each
    printf("Address contained in ptr_one = %x\n", ptr_one);
    printf("Address contained in ptr_two = %x\n", ptr_two);
    printf("Address contained in ptr_three = %x\n", ptr_three);

}