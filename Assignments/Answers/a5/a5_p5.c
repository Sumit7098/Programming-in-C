/*
CH-230-A
a5_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Find the dot product of two vectors
double dot_prod(double arr[], double arr2[], int n)
{
	int i;
	double result = 0.0;
	for (i = 0; i < n; i++)
	{
		result += (arr[i] * arr2[i]); /* The sum of all products */
	}
	return result;
}

// Find and print the minimum value and its position in an array 
void find_min(double arr[], int n)
{
	int i, index = 0;
	double min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	printf("The smallest = %lf\n", min);
	printf("Position of smallest = %d\n", index);
}

// Find and print the maximum value and its position in an array 
void find_max(double arr[], int n)
{
	int i, index = 0;
	double max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	printf("The largest = %lf\n", max);
	printf("Position of largest = %d\n", index);
}


int main()
{
	// Read the number of elements
	int n;
	scanf(" %d", &n);

	// Dynamically allocating two lists of size n
	double* v = (double*)malloc(sizeof(double) * n);
	if (v == NULL)
		exit(1);
	double* w = (double*)malloc(sizeof(double) * n);
	if (w == NULL)
		exit(1);

	// Read elements of v from user
	int i;
	for (i = 0; i < n; i++)
	{
		scanf(" %lf", &v[i]);
	}

	// Read elements of w from user
	for (i = 0; i < n; i++)
	{
		scanf(" %lf", &w[i]);
	}

	// Calling all functions
	double my_product = dot_prod(v, w, n);
	printf("Scalar product=%lf\n", my_product);

	find_min(v, n);
	find_max(v, n);

	find_min(w, n);
	find_max(w, n);

	free(v);
	free(w);


}