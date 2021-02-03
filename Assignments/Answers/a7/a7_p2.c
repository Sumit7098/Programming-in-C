/*
CH-230-A
a7_p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Define a doublt list
struct list
{
	char info;
	struct list* next;
	struct list* prev;
};



// Insert character to the beginning of a doubly list
struct list* push_front(struct list* userList, char val)
{
	// Define a new element
	struct list* newel;
	newel = (struct list*)malloc(sizeof(struct list));
	if (newel == NULL)
	{
		printf("Error allocating memory\n");
		return userList;
	}

	// Assign value to the new element
	newel->info = val;

	// Assign next and prev of the new element
	newel->next = userList;
	newel->prev = NULL;

	// Assign prev of the old head
	if (userList != NULL)
		userList->prev = newel;

	// Make the new element head of the list
	userList = newel;

	return userList;
}

// Remove a specific character from the list
struct list* remove_char(struct list* userList, char c)
{
	// Case: The list is empty
	if (userList == NULL)
		return userList;

	
	struct list *remove, *cursor = userList;
	int index = 0; /* Keeps track of how many nodes we deleted*/

	// Go through the list and delete all the nodes that have the character c
	while (cursor != NULL)
	{
		if (cursor->info == c)
		{
			// If the last node holds the character to be deleted
			if (cursor->next == NULL)
			{
				cursor->prev->next = cursor->next;
			}
			// If the head node holds the character to be deleted
			if (cursor->prev == NULL)
			{
				userList = cursor->next;
				cursor->next->prev = cursor->prev;
			}
			// If the node is neither
			if (cursor->prev != NULL && cursor->next != NULL)
			{
				cursor->next->prev = cursor->prev;
				cursor->prev->next = cursor->next;
			}
			
			remove = cursor;
			// To iterate the while loop
			cursor = cursor->next;
			free(remove);
			index++;
			
		}
		else
		{
			cursor = cursor->next;
		}
	}

	if (index == 0)
		printf("The element is not in the list!\n");

	return userList;
}

// Prints list in forward order
void print_forward(struct list* userList)
{
	struct list* cursor;

	if (userList == NULL)
	{
		printf("List is empty... Nothing to print...");
		return;
	}

	for (cursor = userList; cursor != NULL; cursor = cursor->next)
	{
		printf("%c ", cursor->info);
	}
	printf("\n");
}


// Prints list in reverse order
void print_reverse(struct list* userList)
{
	struct list* cursor, * last;

	if (userList == NULL)
	{
		printf("List is empty... Nothing to print...");
		return;
	}

	// Set the last node in 'last'
	cursor = userList;
	last = cursor;
	while (cursor != NULL)
	{
		last = cursor;
		cursor = cursor->next;
	}

	// Set cursor to point to the last element
	cursor = last;

	// Print the values from last node to first
	while (cursor != NULL)
	{
		printf("%c ", cursor->info);
		cursor = cursor->prev;
	}

	printf("\n");
}

// Empty the list and free the memory
void dispose_list(struct list* userList)
{
	struct list* cursor;
	cursor = userList->next;

	// Empty the list
	while (cursor != NULL)
	{
		cursor = userList->next;
		free(userList);
		userList = cursor;
	}
	// Free the memory used by the doubly linked list
	free(userList);

}

int main()
{
	// Define and initialize a list
	struct list* myList = NULL;

	// Keep reading characters till q is entered
	while (1)
	{
		// Define and read a character and an integer
		int myInt;
		scanf(" %d", &myInt);
		char myChar;

		switch (myInt)
		{
			// Add element to the beginning of the list
		case 1:
			scanf(" %c", &myChar);
			myList = push_front(myList, myChar);
			break;

			// Remove all elements with myChar from the list
		case 2:
			scanf(" %c", &myChar);
			myList = remove_char(myList, myChar);
			break;

			// Print list in forward order
		case 3:
			print_forward(myList);
			break;

			// Print the list in reverse order
		case 4:
			print_reverse(myList);
			break;

			// Dispose list, free memory and exit execution
		case 5:
			dispose_list(myList);
			exit(0);
			break;
			
		default:
			break;

		}
	}

	return 0;
}
