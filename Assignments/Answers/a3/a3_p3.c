/*
CH-230-A
a3_p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm)
{
    float km = (float)cm/(100000); /* Explicit type casting */
    return km;
}

int main()
{
    // Define and read a number
    int my_num;
    scanf(" %d", &my_num);

    printf("Result of conversion: %f\n", convert(my_num));
}