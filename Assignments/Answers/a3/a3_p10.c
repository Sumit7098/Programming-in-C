/*
CH-230-A
a3_p10.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b)
{
    float result = a * b;
    return result;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;
}
int main()
{
    float my_float1, my_float2;
    scanf(" %f %f", &my_float1, &my_float2);

    // Calling the first function
    float my_product1 = product(my_float1, my_float2);
    printf("The product of the first multiplication function= %f\n", my_product1);

    // Calling the second function
    float my_product2 = 1;
    productbyref(my_float1, my_float2, &my_product2);
    printf("The results of the second multiplication function= %f\n", my_product2);

    // Calling the third function
    modifybyref(&my_float1, &my_float2);
    printf("The new value of the first float is: %f\n", my_float1);
    printf("The new value of the second float is: %f\n", my_float2);
}