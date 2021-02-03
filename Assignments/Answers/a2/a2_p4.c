/*
CH-230-A
a2_p4.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float a, b, h;
    scanf(" %f %f %f", &a, &b, &h);
    
    // Calculate and print the area of the square
    printf("square area=%f\n", a * a);

    // Calculate and print the area of the rectangle
    printf("rectangle area=%f\n", a * b);

    // Calculate and print the area of the triangle
    printf("triangle area=%f\n", 0.5 * a * h);

    // Calculate and print the area of the trapezoid
    printf("trapezoid area=%f\n", 0.5 * (a + b) * h);

}