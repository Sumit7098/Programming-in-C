/*
CH-230-A
a6_p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// Define a list
struct list
{
	int info;
	int count;      /*Keeps track of number of elements in the list*/
	struct list* next;
};

// Inserts an element to the beginning of the list
// and returns the updated list
struct list* push_front(struct list* userList, int val)
{
	struct list* newel;
	newel = (struct list*)malloc(sizeof(struct list));
	if (newel == NULL)
	{
		printf("Error allocating memory\n");
		exit(1);
	}

	if (userList == NULL)     /*Increment number of elements in the list*/
	{
		newel->count = 0;
	}
	newel->info = val;
	newel->next = userList;
	newel->count = newel->count + 1;

	return newel;
}

// Adds a new element to the bottom of the list
struct list* push_back(struct list* userList, int val)
{
	struct list* cursor, * newel;
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
	if (userList == NULL) {
		newel->count = 1;
		return newel;
	}
	// Walk the list till we get to the last element
	// make the (old) last element in the list point
	// to the added element
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = newel;
	userList->count = userList->count + 1;      /*Increment number of elements in the list*/

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
	userList->count--;      /*Decrement number of elements in the list*/

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

// Inserts a new element in a certain position in a list
struct list* insert_at(struct list* userList, int pos, int val)
{
	/*int count = 0;
	for (struct list* p = userList; p != NULL; p = p->next) {
		count++;
	}

	if ((pos < 0) || (pos > count)) {
		printf("Invalid position!\n");
		return userList;
	}*/
	struct list* newval, * cursor;
	newval = (struct list*)malloc(sizeof(struct list));
	if (newval == NULL)
	{
		exit(1);
	}

	cursor = userList;
	for (int i = 0; i < pos - 1; i++)/*Keeps cursor on the previous element*/
	{
		cursor = cursor->next;
	}

	newval->info = val;
	if (pos == 0)/*Cursor will be pointing to the beginning of the list*/
	{
		newval->next = userList;
		userList->count++;
		return newval;
	}
	newval->next = cursor->next;
	cursor->next = newval;
	userList->count = userList->count + 1;

	return userList;
}
// 1 2 3 4 => 2  1 4   
struct list* reverse(struct list* my_list)
{
	struct list* prev = NULL;
	struct list* cursor = my_list;
	struct list* ahead = NULL;
	while (cursor != NULL) {
		ahead = cursor->next;
		cursor->next = prev;
		prev = cursor;
		cursor = ahead;
	}
	return prev;
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
		scanf_s(" %c", &myChar);
		int myInt, myPos;

		switch (myChar)
		{
			// Add element to the beginning of the list
		case 'a':
			scanf_s(" %d", &myInt);
			myList = push_back(myList, myInt);
			break;

			// Add element to the end of the list
		case 'b':
			scanf_s(" %d", &myInt);
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

		case 'i':
			scanf_s(" %d", &myPos);
			scanf_s("%d", &myInt);
			insert_at(myList, myPos, myInt);
			break;

		case 'R':
			myList = reverse(myList);
			break;
		}

		
	}
	return 0;
}