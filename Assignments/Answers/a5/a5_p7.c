/*
CH-230-A
a5_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
// DEBUG
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Define and read strings
	char my_string1[100];
	char my_string2[100];
	fgets(my_string1, 100, stdin);
	my_string1[strcspn(my_string1, "\n")] = '\0'; /* Delete enter from the end*/

	fgets(my_string2, 100, stdin);
	my_string2[strcspn(my_string2, "\n")] = '\0';

	// Dynamically allocate a string with the correct number of elements
	int size = strlen(my_string1) + strlen(my_string2) + 1;
	char* cat_string = (char*)malloc(sizeof(char) * size);
	if (cat_string == NULL)
		exit(1);

	// Concatenate the strings in the new string
	strcpy(cat_string, my_string1);
	strcat(cat_string, my_string2);

	// Print the new string
	printf("Result of concatenation: %s\n", cat_string);

	// Free memory
	free(cat_string);

}