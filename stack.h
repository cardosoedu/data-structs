/* Stack operations header file */
#ifndef _STACK_H
#define _STACK_H
#include <stdbool.h>

typedef struct stack {
	int data;
	struct stack *next;
} Stack;

bool push(Stack **head, int data);

int pop(Stack **head);

int peek(Stack *head);

#endif /* _STACK_H */
