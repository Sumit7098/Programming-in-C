/*
CH-230-A
a4_p10.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float* prod, float* div, float* pwr, float* invb)
{
	*prod = a * b;
	*div = a / b;
	*pwr = pow(a, b);
	*invb = 1 / b;
}

int main()
{
	// Define and read two floats
	float my_float1, my_float2;
	printf("Enter two floats:");
	scanf(" %f %f", &my_float1, &my_float2);

	// Calling the funciton
	float prod_flo, div_flo, pwr_flo, inv_flo;
	proddivpowinv(my_float1, my_float2, &prod_flo, &div_flo, &pwr_flo, &inv_flo);

	// Print the results
	printf("The product is= %f\n", prod_flo);
	printf("The division is= %f\n", div_flo);
	printf("A to the power B is= %f\n", pwr_flo);
	printf("The inverse of B is= %f\n", inv_flo);

    return 0;
}
