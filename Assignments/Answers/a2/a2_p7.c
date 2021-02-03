/*
CH-230-A
a2_p7.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int i = 8;
    /* We need to define the scope of this loop,
    if we don't it'll just keep looping through the first line after it,
    hence, never changing the value of i nor breaking the loop */
    while (i >= 4) 
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}