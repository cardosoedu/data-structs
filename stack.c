/****************************
 *
 *  Stack implementation
 *  Push: insert a node at the start of the stack
 *  Pop: delete the first node at the stack
 *  Peek: return the first node of the stack without removing it
 *
*****************************/

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

bool push(Stack **stack, int data) {
	Stack *node = (Stack *) malloc(sizeof(Stack));
	node->data = data;
	node->next = NULL;

	if(!(*stack)) {
		if(*stack = node)
			return true;
	} else {
		Stack *temp = *stack;
		node->next = temp;
		*stack = node;
		return true;
	}

	return  false;
}

int pop(Stack **stack) {
	if(!stack) return -9999;
	
	int num = (*stack)->data;
	Stack *temp = *stack;
	temp = temp->next;
	*stack = temp;
	return num;
}

int peek(Stack *stack) {
	if(!stack) return -9999;
	else return stack->data;
}

// delete  THis
void transversal(Stack *stack) {
	if(!stack) return;

	Stack *temp = stack;
	while(temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}

	printf("\n");
}
