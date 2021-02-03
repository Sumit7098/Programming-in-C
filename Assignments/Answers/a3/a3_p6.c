/*
CH-230-A
a3_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float my_pounds = 0.0;
    my_pounds = kg * 2.2 + g * 0.0022;

    return my_pounds;
}

int main()
{
    int my_kg, my_g;
    scanf(" %d", &my_kg);
    scanf(" %d", &my_g);

    printf("Result of conversion: %f\n", to_pounds(my_kg, my_g));
}