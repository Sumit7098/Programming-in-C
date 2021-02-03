/*
CH-230-A
a4_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Prints the entire matrix in its normal formal
void print_matrix(int mat[][30], int n)
{
	printf("The entered matrix is:\n");
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

// Prints the values under the main diagonal
void under_main(int mat[][30], int n)
{
	printf("Under the main diagonal:\n");
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			// Print the values when row. > col. 
			if(i > j)
				printf("%d ", mat[i][j]);
		}
	}
	printf("\n");
}

int main()
{
	int my_matrix[30][30];
	int n;
	scanf(" %d", &n);

	// Read values of the matrix
	int row, col;
	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{
			scanf(" %d", &my_matrix[row][col]);
		}
	}
	print_matrix(my_matrix, n);
	under_main(my_matrix, n);
	return 0;
}