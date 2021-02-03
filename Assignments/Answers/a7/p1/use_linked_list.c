/*
CH-230-A
a7_p1.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

int main()
{
	// Define and initialize a list
	struct list* myList = NULL;

	// Keep reading characters till q is entered
	while (1)
	{
		// Define and read a character and an integer
		char myChar;
		scanf(" %c", &myChar);
		int myInt;

		switch (myChar)
		{
			// Add element to the beginning of the list
		case 'a':
			scanf(" %d", &myInt);
			myList = push_back(myList, myInt);
			break;

			// Add element to the end of the list
		case 'b':
			scanf(" %d", &myInt);
			myList = push_front(myList, myInt);
			break;

			// Remove first item from the list
		case 'r':
			myList = remove_first(myList);
			break;

			// Print the list
		case 'p':
			print_list(myList);
			break;

			// Dispose list and free memory
		case 'q':
			dispose_list(myList);
			exit(0);
			break;

		}
	}

	return 0;
}