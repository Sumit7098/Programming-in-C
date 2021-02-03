/*
CH-230-A
a3_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // Read values from user
    char c;
    printf("Enter a character:");
    scanf(" %c", &c);

    int n;
    printf("Enter an integer:");
    scanf(" %d", &n);

    // Read temp values from user
    double temp[100];
    printf("Enter the temperatures:");
    for (int i = 0; i < n; i++)
    {
        scanf(" %lf", &temp[i]);
    }
    
    double sum = 0.0;
    switch (c)
    {
    case 's':
        // Add up all temp values 
        for (int i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        printf("The sum of temperatues is: %lf\n", sum);
        break;
        
    case 'p':
        // Print out all temp values
        printf("The list of temperatures is:\n");
        for (int i = 0; i < n; i++)
            {
                printf("%lf\n", temp[i]);
            }
        break;
    
    case 't':
        // Print out all temp values in Fahrenheit
        printf("The list of all temperatures in Fahernheit is:\n");
        for (int i = 0; i < n; i++)
            {
                printf("%lf\n", 9.0/5 * (temp[i]) + 32);
            }
        break;

    default:
        // Add up all temp values 
        for (int i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        // Divide sum by total number of temp to find the average
        printf("The average of all temperatues is: %lf\n", sum/n);
        break;
    }
}