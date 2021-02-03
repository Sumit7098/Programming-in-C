/*
CH-230-A
a3_p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

float get_sum(float v[], int n)
{
    float sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    
    return sum;
}

float get_average(float v[], int n)
{
    float average;
    average = get_sum(v, n) / n;
    
    return average;
}

int main()
{
    float my_list[10];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf(" %f", &my_list[i]);
        if(my_list[i] == -99)
            break;
        else
            count++;
    }
    float sum = get_sum(my_list, count);
    float average = get_average(my_list, count);

    printf("Sum = %f\nAverage = %f\n", sum, average);
    
}