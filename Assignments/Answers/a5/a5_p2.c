/*
CH-230-A
a5_p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <stdio.h>

void divby5(float arr[], int size)
{
    int i;
    //float* to_float = &arr[0];
    for(i = 0; i < size; i++)
    {
        arr[i] /= 5.0;
    }
}

int main()
{
    // Define and initialize an array
    float my_array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    // Printing array elements before
    int i;
    printf("Before:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%.3f ", my_array[i]);
    }
    printf("\n");

    // Calling the divby5 funtion
    divby5(my_array, 6);

    // Printing array elements after
    int j;
    printf("After:\n");
    for(j = 0; j < 6; j++)
    {
        printf("%.3f ", my_array[j]);
    }
    printf("\n");

}