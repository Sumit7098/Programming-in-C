/*
CH-230-A
a6_p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Define a list
struct list
{
	int info;
	struct list *next;
};

// Inserts an element to the beginning of the list
// and returns the updated list
struct list* push_front(struct list* userList, int val)
{
	struct list *newel;
	newel = (struct list*)malloc(sizeof(struct list));
	if (newel == NULL)
	{
		printf("Error allocating memory\n");
		exit(1);
	}

	newel->info = val;
	newel->next = userList;

	return newel;
}

// Adds a new element to the bottom of the list
struct list* push_back(struct list* userList, int val)
{
	struct list *cursor, *newel;
	cursor = userList;

	newel = (struct list*)malloc(sizeof(struct list));
	if (newel == NULL)
	{
		printf("Error allocating memory\n");
		return userList;
	}

	newel->info = val;
	newel->next = NULL;
	// Case: we have an empty list
	if (userList == NULL)
		return newel;

	// Walk the list till we get to the last element
	// make the (old) last element in the list point
	// to the added element
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = newel;

	return userList;
}

// Removes the first elements from a list
struct list* remove_first(struct list* userList)
{
	// Case: the list is empty
	if (userList == NULL) {
		return userList;
	}

	struct list* cursor;
	// Make cursor point to the first element
	// and shift the beginning of the list to the second
	cursor = userList->next;
	free(userList);
	userList = cursor;	

	return userList;
}

// Remove the list
struct list* dispose_list(struct list* userList)
{
	struct list* cursor;
	// Make cursor point to the second element, then free the first
	// and assign the second to the list.
	// Repeat untill list is empty
	while (userList != NULL)
	{
		cursor = userList->next;
		free(userList);
		userList = cursor;
	}
	return userList;
}

// Print the list
 void print_list(struct list* userList)
{
	 struct list* cursor;
	 for (cursor = userList; cursor != NULL; cursor = cursor->next)
	 {
		 printf("%d ", cursor->info);
	 }
	 printf("\n");
}

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