/*
CH-230-A
a4_p9.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Find min. and max. values, return their product
int prodminmax(int arr[], int n)
{
	int min, max;
	// Case: first value is larger than the second
	if (arr[0] > arr[1])
	{
		max = arr[0];
		min = arr[1];
	}
	// Case: second value is larger or equal to the first
	else
	{
		max = arr[1];
		min = arr[0];
	}

	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
			min = arr[i];
	}

	int result = max * min;
	return result;
}

int main()
{
	int n;
	printf("Enter the number of elements:");
	scanf(" %d", &n);

	// Dynamically allocate a list
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) /*Check if allocated successfully*/
		exit(1);

	// Read list elements 
	printf("Enter the elements:");
	int i;
	for (i = 0; i < n; i++)
	{
		scanf(" %d", &arr[i]);
	}

	// Call and print prodminmax function
	printf("The result of the function is: %d\n", prodminmax(arr, n));


}