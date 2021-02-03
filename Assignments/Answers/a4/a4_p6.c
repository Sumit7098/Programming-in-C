/*
CH-230-A
a4_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Find and print the largest two integers in an array
void highest_two(int arr[], int n)
{
    // Initialize value_high and value_low to the first two entries
    int i, temp, value_high = arr[0], value_low = arr[1];

    // Put the higher value in value_high
    if (value_high < value_low)
    {
        temp = value_high;
        value_high = value_low;
        value_low = temp;
    }

    for (i = 2; i < n; i++)
    {
        // Case: value is higher than both values
        // => put the high in low, and put the new value in high
        if (arr[i] > value_high && arr[i] > value_low)
        {
            temp = value_high;
            value_high = arr[i];
            value_low = temp;
        }
        // Case: value is in between high and low
        // => put the new value in low
        else if (arr[i] < value_high && arr[i] > value_low)
            value_low = arr[i];

    }

    printf("The two highest values are: %d %d\n", value_low, value_high);
    

}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf(" %d", &n);
    // Dynamically allocate a list of integers
    int* my_list = (int*)malloc(sizeof(int) * n);
    if(my_list == NULL)
        exit(1);

    // Read the integers from the user
    int i;
    printf("Enter your values:");
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &my_list[i]);
    }

    highest_two(my_list, n);
    free(my_list);
    return 0;
}