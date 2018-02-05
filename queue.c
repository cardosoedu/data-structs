/****************************
 * 
 * Queue implementation
 * Basic Queue operations
 * Append: insert a node at the end of the queue
 * Pop: return and remove the first node of the queue
 * Peek: only return the first node of the queue
 * Transversal: list every node in the queue
 *
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

bool enqueue(Queue **queue, int data) {
	// We create a new Queue node
	Queue *node = (Queue*) malloc(sizeof(Queue));
	node->data = data;
	node->next = NULL;

	// If there isn't a queue, we create one based on this node
	if(!*queue) {
		if(*queue = node)
			return true;
	} else {
		// If there is one, we'll iterate over it
		Queue *temp = *queue;
		while(temp->next != NULL)
			temp = temp->next;
		// And now we add the new node after the last node of the original queue
		temp->next = node;
		return true;
	}
	return false;
}

int dequeue(Queue **queue) {
	// if there isn't a queue, we return some garbage int
	if(!*queue) return -999;

	// We create a temp queue
	Queue *temp = *queue;
	// Save the data of the first node
	int num = temp->data;
	// Our new queue is going to start at the next node of the original queue
	(*queue) = temp->next;
	// We free the temp queue
	free(temp);

	return num;
}

int peek(Queue *queue){
	// Return the first node of the queue if there is one
	if(!queue) return -999;
	else return queue->data;
}

int transversal(Queue *queue) {
	// if there isn't a queue, we return some garbage int
	if(!queue) return -999;

	// Creating a temp queue to iterate over it and print the nodes
	Queue *temp = queue;
	while(temp != NULL){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}
