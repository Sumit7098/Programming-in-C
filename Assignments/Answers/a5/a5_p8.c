/*
CH-230-A
a5_p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void set_all_elements(int** arr, int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf(" %d", &arr[i][j]);
		}
	}
}

void print_matrix(int** arr, int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void mult_matrix(int** arr1, int row1, int col1, int** arr2, int row2, int col2, int** result)
{
	int i, j, k;
    // Initializing elements of result to 0
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < col2; j++)
      {
        result[i][j] = 0;
      }
    }
    // Multiplying the two matrices and storing the values in result
	if (col1 == row2)
	{
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col2; j++)
			{
				for (k = 0; k < col1; k++)
				{
					result[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
		}
	}
	else
		printf("The dimensions are incompatible\n");

}
int main()
{
	// Define and read dimensions
	int n, m, p;
	scanf(" %d %d %d", &n, &m, &p);

	// Dynamicallly allocate the first matrix
	int** my_mat1 = (int**)malloc(sizeof(int*) * n);
	if (my_mat1 == NULL)
		exit(1);
	int row;
	for (row = 0; row < n; row++)
	{
		my_mat1[row] = (int*)malloc(sizeof(int) * m);
		if (my_mat1[row] == NULL)
			exit(1);
	}
	set_all_elements(my_mat1, n, m);

	// Dynamicallly allocate the second matrix
	int** my_mat2 = (int**)malloc(sizeof(int*) * m);
	if (my_mat2 == NULL)
		exit(1);
	for (row = 0; row < m; row++)
	{
		my_mat2[row] = (int*)malloc(sizeof(int) * p);
		if (my_mat2[row] == NULL)
			exit(1);
	}
	set_all_elements(my_mat2, m, p);

	// Dynamicallly allocate the result matrix
	int** my_mult_mat = (int**)malloc(sizeof(int*) * n);
	if (my_mult_mat == NULL)
		exit(1);
	for (row = 0; row < n; row++)
	{
		my_mult_mat[row] = (int*)malloc(sizeof(int) * p);
		if (my_mult_mat[row] == NULL)
			exit(1);
	}

	// Call the functions
	mult_matrix(my_mat1, n, m, my_mat2, m, p, my_mult_mat);
	
	printf("Matrix A:\n");
	print_matrix(my_mat1, n, m);

	printf("Matrix B:\n");
	print_matrix(my_mat2, m, p);

	printf("The multiplication result AxB:\n");
	print_matrix(my_mult_mat, n, p);



	// Free the memory
	int i;
	for (i = 0; i < n; i++)
	{
		free(my_mat1[i]);
	}
	free(my_mat1);

	for (i = 0; i < n; i++)
	{
		free(my_mat2[i]);
	}
	free(my_mat2);

	for (i = 0; i < n; i++)
	{
		free(my_mult_mat[i]);
	}
	free(my_mult_mat);
}