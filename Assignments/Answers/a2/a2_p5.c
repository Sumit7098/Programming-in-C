/*
CH-230-A
a2_p5.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer:");
    scanf(" %d", &a);
    printf("Your integer = %d\n", a);

    int *ptr_a = &a;
    printf("The address contained in the ptr = %x\n", ptr_a);

    *ptr_a += 5;
    printf("Modified value of the variable = %d\n", a);
    printf("Address of the variable = %x\n", &a);



}
