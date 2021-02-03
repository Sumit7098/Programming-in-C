/*
CH-230-A
a8_p5.c
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
	// Define a buffer
	char buffer[BUFFER_SIZE];
	memset(buffer, '\0', sizeof(buffer[0]));/*Sets all characters to '\0' */

	// File name to be read
	char fileName[50];
	scanf(" %s", fileName);

	// Open file for reading
	FILE* fptr;
	fptr = fopen(fileName, "r");
	if (fptr == NULL)
	{
		printf("Error opening the file!\n");
		exit(1);
	}

	int wordCount = 0;
	char* words; /*A character pointer to contain our tokenized words */
	char delim[] = "' ' ',' '?' '!' '.' '\t' '\r' '\n'";
	// Reads line by line till the end of the file.
	// Tokenizes each line into words, and increments 
	// wordsCount after each iteration
	while (!feof(fptr))
	{
		fgets(buffer, BUFFER_SIZE, fptr);
		words = strtok(buffer, delim);
		while (words != NULL)
		{
			wordCount++;
			words = strtok(NULL, delim); /*This tells the program tocontinue
										 tokenizing the same string*/
		}
	}

	printf("The file contains %d words.\n", wordCount);
	fclose(fptr);
}