/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// Check if queue is full
	if (queue_is_full(pq) == 1)
		return -1;

	// Define a new node for the new item
	Node* newNode = NULL;
	newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		printf("Error allocating memory...");
		exit(-1);
	}

	// Assign the value to the new node and set its next to NULL
	newNode->item = item;
	newNode->next = NULL;

	// If queue is empty, set the new node as the front and rear of the queue
	if (queue_is_empty(pq) == 1)
	{
		pq->front = newNode;
		pq->rear = newNode;

		// Increment the number of items in queue
		pq->items = pq->items + 1;
	}
	else /* If the queue already has items*/
	{
		pq->rear->next = newNode;
		pq->rear = newNode;

		// Increment the number of items in queue
		pq->items = pq->items + 1;
	}

	return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// Check if queue is full
	if (queue_is_full(pq) == 1)
		return -1;

	// Copy front of the queue to the waiting variable
	pitem = pq->front;

	// Reset the front pointer to the next item in queue
	pq->front = pq->front->next;

	// Remove item
	free(pitem);

	// Check if queue is now empty
	if (queue_is_empty(pq) == 1)
	{
		pq->front = NULL;
		pq->rear = NULL;
	}

	// Decrement item count
	pq->items = pq->items - 1;

	return 0;

}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
