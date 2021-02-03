/*
CH-230-A
a2_p3.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int weeks, days, hours;
    int sum;
    printf("Enter the number of weeks:");
    scanf(" %d", &weeks);
    weeks = weeks * 7 * 24; /* Calculate the number of hours in wanted weeks */

    printf("Enter the number of days:");
    scanf(" %d", &days);
    days = days * 24; /* Calculate the number of hours in wanted days */

    printf("Enter the number of hours:");
    scanf(" %d", &hours);

    sum = weeks + days + hours;
    printf("The total number of hours is: %d", sum);

}