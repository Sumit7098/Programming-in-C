/*
CH-230-A
a2_p9.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // Defining and reading a number
    int n;
    printf("Enter a number:");
    scanf(" %d", &n);

    // A loop that starts from 1 to n
    int i = 1;
    while(i <= n)
    {
        printf("%d day = %d hours\n", i, i * 24);
        i++;
    }
}