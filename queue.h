/**********************
 * QUEUE HEADER
***********************/

#ifndef _QUEUE_H_
#define _QUEUE_H
#include <stdbool.h>

typedef struct queue {
	int data;
	struct queue *next;
} Queue;

bool enqueue(Queue **queue, int data);

int dequeue(Queue **queue);

int peek(Queue *queue);

int transversal(Queue *queue);

#endif /* _QUEUE_H */
