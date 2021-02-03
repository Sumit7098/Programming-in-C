/*
CH-230-A
a4_p11.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Count the occurrences of a character in a string
int count_insensitive(char* str, char c)
{
	int i, count = 0;
	for (i = 0; i < strlen(str); i++)
	{
		// Case: c is capital letter
		if (c >= 'A' && c <= 'Z')
			if (str[i] == c || str[i] == tolower(c))
				count++;
			else;
		// Case: c is a small letter
		else if (c >= 'a' && c <= 'z')
			if (str[i] == c || str[i] == toupper(c))
				count++;
			else;
		// Case: c is a different character
		else if (str[i] == c)
			count++;
	}
	return count;
}

int main()
{
	// Dynamically allocate and read a string
	printf("Enter a string:");
	char* my_buffer = (char*)malloc(sizeof(char) * 50);
	if (my_buffer == NULL)
		exit(1);
	fgets(my_buffer, 50, stdin);
	my_buffer[strcspn(my_buffer, "\n")] = '\0'; /* Get rid of the enter at the end of the string*/

	// Allocate memory for a new string
	char* my_string = (char*)malloc(sizeof(char) * (strlen(my_buffer) + 1)); /* strlen doesn't count '\0'. So we need to manually add 1 byte to make space for it in the new string */
	if (my_string == NULL)
		exit(1);

	// Copy the old string into the new one
	strcpy(my_string, my_buffer);

	// Empty the first string
	free(my_buffer);

	char my_char;
	printf("Enter a character:");
	scanf(" %c", &my_char);

	// Calling the function
	int result = count_insensitive(my_string, my_char);
	printf("The character '%c' occurs %d times\n", my_char, result);

	// Free the memory used by the string
	free(my_string);

}