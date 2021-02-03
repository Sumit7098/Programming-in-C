/*
CH-230-A
a6_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE
void set_elements(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf(" %d", &v[i]);
	}
}

// Calculate and return scalar product of two vectors
int scalar_prod(int v1[], int v2[], int n)
{
	int i, mid_val = 1, result = 0;

	// Print intermediate values in the process
#ifdef INTERMEDIATE
	printf("The intermediate product values are:\n");
	for (i = 0; i < n; i++)
	{
		mid_val = v1[i] * v2[i];
		printf("%d\n", mid_val);

		result += mid_val;
		mid_val = 1; /* Reset it for next iteration*/
	}
	return result;
#endif

	// Don't print intermediate values in the process
#ifndef INTERMEDIATE
	for (i = 0; i < n; i++)
	{
		mid_val = v1[i] * v2[i];
		result += mid_val;

		mid_val = 1; /* Reset it for next iteration*/
	}
	return result;
#endif
}

int main()
{
	int size;
	scanf(" %d", &size);
	
	// Initializing two vectors
	int* myVec1 = (int*)malloc(sizeof(int) * size);
	if (myVec1 == NULL)
		exit(1);

	int* myVec2 = (int*)malloc(sizeof(int) * size);
	if (myVec2 == NULL)
		exit(1);

	// Setting the elemetns of the vectors
	set_elements(myVec1, size);
	set_elements(myVec2, size);

	// Calling scalar_prod function
	int scalProd = scalar_prod(myVec1, myVec2, size);
	printf("The scalar product is: %d", scalProd);

	// Free the memory
	free(myVec1);
	free(myVec2);

	return 0;
}