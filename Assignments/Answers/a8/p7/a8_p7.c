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

#define BUFFER_SIZE 1000

int main()
{
	char buffer[BUFFER_SIZE];
	memset(buffer, '\0', sizeof(buffer[0]));/*Sets all characters to '\0' */

	// Open file for the result
	FILE* fptrResult;
	fptrResult = fopen("merge12.txt", "w");
	if (fptrResult == NULL)
	{
		printf("Error opening the file");
		exit(1);
	}

	// Open first file for reading
	FILE* fptr1;
	fptr1 = fopen("text1.txt", "r");
	if (fptr1 == NULL)
	{
		printf("Error opening the file\n");
		exit(1);
	}

	

	// Read the file line by line till the end of the line, and print
	// Each line into the result file
	while (!feof(fptr1))
	{
		fgets(buffer, BUFFER_SIZE, fptr1);
		fputs(buffer, fptrResult);
	}
	fprintf(fptrResult, "\n");

	fclose(fptr1);

	// Open second file for reading
	FILE* fptr2;
	fptr2 = fopen("text2.txt", "r");
	if (fptr2 == NULL)
	{
		printf("Error opening the file\n");
		exit(1);
	}

	// Read the file line by line till the end of the line, and print
	// Each line into the result file
	while (!feof(fptr2))
	{
		fgets(buffer, BUFFER_SIZE, fptr2);
		fputs(buffer, fptrResult);
	}
	fprintf(fptrResult, "\n");

	fclose(fptr2);
	fclose(fptrResult);

	return 0;
}