/**********************
 * QUEUE HEADER
***********************/

#ifndef _QUEUE_H_
#define _QUEUE_H
#include <stdlib.h>

typedef struct queue {
	int data;
	struct stack *next;
} Queue;

bool append(Queue **queue, int data);

int pop(Queue **queue);

int peek(Queue *queue);

int transversal(Queue *queue);

#endif /* _QUEUE_H */
