/*
CH-230-A
a8_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Define two strings for the file names
	char fname1[50];
	char fname2[50];

	// Read files' names from keyboard
	printf("Enter the first file's name: ");
	fgets(fname1, 50, stdin);
	fname1[strcspn(fname1, "\n")] = '\0'; /*To get rid of the \n character 
										  at the end of the string*/

	printf("Enter the second file's name: ");
	fgets(fname2, 50, stdin);
	fname2[strcspn(fname2, "\n")] = '\0';

	// Open first file and read its double
	FILE* freadPtr1;
	freadPtr1 = fopen(fname1, "r");
	if(freadPtr1 == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	double myVal1;
	fscanf(freadPtr1, " %lf", &myVal1);

	fclose(freadPtr1);

	// Open second file and read its double
	FILE* freadPtr2;
	freadPtr2 = fopen(fname2, "r");
	if(freadPtr2 == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	double myVal2;
	fscanf(freadPtr2, " %lf", &myVal2);

	fclose(freadPtr2);

	// Create a results file
	FILE* fwritePtr;
	fwritePtr = fopen("results.txt", "w");
	if(fwritePtr == NULL)
	{
		printf("Error creating file!\n");
		exit(1);
	}

	// Print the results in the file
	fprintf(fwritePtr, "Sum of the doubles= %lf\n", myVal1 + myVal2);
	fprintf(fwritePtr, "Difference of the doubles= %lf\n", myVal1 - myVal2);
	fprintf(fwritePtr, "Product of the doubles= %lf\n", myVal1 * myVal2);
	fprintf(fwritePtr, "Division of the doubles= %lf\n", myVal1 / myVal2);

	fclose(fwritePtr);
	return 0;
}