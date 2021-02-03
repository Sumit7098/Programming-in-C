/*
CH-230-A
a4_p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// Calculates the sum of all elements in an array
float sum_array(float v[], int n)
{
    int i;
    float sum = 0.0;
    for(i = 0; i < n; i++)
    {
        sum += v[i];
    }
    
    return sum;
}

// Calculates the geometric mean of all elements in an array
float geometric_mean(float v[], int n)
{
    int i;
    float mult = 1;
    for(i = 0; i < n; i++)
    {
        mult *= v[i];
    }
    float mean = pow(mult, (1.0 / n));
    
    return mean;
}

// Finds the highest element in an array
float high_array(float v[], int n)
{
    float high = v[0]; /* initialize the first element as a point of comparison */

    // Compare each element with the first, if any is higher then change the 'high' value to that
    int i;
    for(i = 1; i < n; i++)
    {
        if(v[i] > high)
            high = v[i];
    }

    return high;
}

// Finds the smallest element in an array 
float low_array(float v[], int n)
{
    float low = v[0]; /* initialize the first element as a point of comparison */

    // Compare each element with the first, if any is lower then change the 'high' value to that
    int i;
    for(i = 1; i < n; i++)
    {
        if(v[i] < low)
            low = v[i];
    }

    return low;
}

int main()
{
    float read_float[15];
    int i, count = 0; /* count will keep the # of elements in the array */
    
    printf("Enter your numbers:");
    // Read 15 floats, stop if negative value is entered
    for(i = 0; i < 15; i++)
    {
        scanf(" %f", &read_float[i]);
        if(read_float[i] < 0)
        {
            read_float[i] = '\0'; /* To delete the negative value from the list */
            break;
        }
        else
            count++;
    }

    // Read a character from the user
    char my_char;
    printf("Enter a character:");
    scanf(" %c", &my_char);

    switch (my_char)
    {
        // Find and print the mean
        case 'm':
            printf("The geometric mean is: %f\n", geometric_mean(read_float, count));
            break;
        
        case 'h':
            printf("The highest number is: %f\n", high_array(read_float, count));
            break;
        
        case 'l':
            printf("The lowest number is: %f\n", low_array(read_float, count));
            break;
        case 's':
            printf("The sum of all elements is: %f\n", sum_array(read_float, count));
        default:
            break;
    }
    return 0;
}