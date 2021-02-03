/*
CH-230-A
a5_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size)
{
    int i;
    //float* to_float = &arr[0];
    for (i = 0; i < size; i++)
    {
        arr[i] /= 5.0;
    }
}

int main()
{
    // Read the number of elements
    int n;
    printf("Enter the number of elements: ");
    scanf(" %d", &n);

    // Dynamically allocate then read elements of an array of floats
    float* my_array = (float*)malloc(sizeof(float) * n);
    if (my_array == NULL)
        exit(1);

    printf("Enter your elements:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf(" %f", &my_array[i]);
    }


    // Printing array elements before
    printf("Before:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", my_array[i]);
    }
    printf("\n");

    // Calling the divby5 funtion
    divby5(my_array, n);

    // Printing array elements after
    printf("After:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", my_array[i]);
    }
    printf("\n");

    free(my_array);
    return 0;
}