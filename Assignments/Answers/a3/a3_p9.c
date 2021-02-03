/*
CH-230-A
a3_p9.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)
{
    // Check that we have at least 6 values entered
    if(n < 6)
    {
        printf("One or both positions are invalid\n");
        return -111.0;
    }
    // Check if v[2] has a whitespace character
    else if(v[2] == '\n' || v[2] == '\t' || v[2] == ' ' || v[2] == '\0')
    {
        printf("One or both positions are invalid\n");
        return -111.0;
    }
    // Check if v[5] has a whitespace character
    else if(v[5] == '\n' || v[5] == '\t' || v[5] == ' ' || v[5] == '\0')
    {
        printf("One or both positions are invalid\n");
        return -111.0;
    }

    else
    {
        double sum = v[2] + v[5];
        printf("sum=%lf\n", sum);
        return sum;
    }
}

int main()
{
    int n;
    scanf(" %d", &n);

    // Define a list and read its n values
    double my_list[20];
    for(int i = 0; i < n; i++)
    {
        scanf(" %lf", &my_list[i]);
    }
    
    sum25(my_list, n);
    
}