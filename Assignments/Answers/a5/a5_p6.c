/*
CH-230-A
a5_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Count number of elements before the first negative value
int before_neg(float arr[], int n)
{
	int count = 0;
	float* ptr_arr = arr;
	while (*ptr_arr >= 0)
	{
		count++;
		ptr_arr++;
	}
	return count;
}

int main()
{
	// Read the number of elements
	int n;
	scanf(" %d", &n);

	// Dynamically allocate a list of size n
	float* my_array = (float*)malloc(sizeof(float) * n);
	if (my_array == NULL)
		exit(1);

	// Read elements of the array from user
	int i;
	for (i = 0; i < n; i++)
	{
		scanf(" %f", &my_array[i]);
	}

	// Calling the function
	int result = before_neg(my_array, n);
	printf("Before the first negative value: %d elements", result);

	// Free the memory
	free(my_array);


}