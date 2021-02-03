/*
CH-230-A
a8_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50
#define BUFFER_SIZE 64
int main()
{
	char buffer[BUFFER_SIZE];

	int n, i;
	scanf(" %d", &n);

	// Create an array of pointers to file names
	char** fnames = (char**)malloc(sizeof(char*) * n);
	if (fnames == NULL)
	{
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		fnames[i] = (char*)malloc(sizeof(char) * MAX_LENGTH);
		if (fnames[i] == NULL)
			exit(1);
	}

	// Open file for the output
	FILE* fptrResult;
	fptrResult = fopen("output.txt", "w");
	if (fptrResult == NULL)
	{
		printf("Error opening the file");
		exit(1);
	}

	// Read file names
	for (i = 0; i < n; i++)
	{
		scanf(" %s", fnames[i]);
	}

	// Open one file at a time and concatenate their contents in the 
	// output file
	FILE* fptr;
	for (i = 0; i < n; i++)
	{
		fptr = fopen(fnames[i], "r");
		while (!feof(fptr))
		{
			fread(buffer, sizeof(char), 64, fptr);
			fwrite(buffer, sizeof(char), 64, fptrResult);
		}
		fprintf(fptrResult, "\n");

		fclose(fptr);
	}
	
	fclose(fptrResult);

	// Free memory
	for (i = 0; i < n; i++)
	{
		free(fnames[i]);
	}
	free(fnames);

}