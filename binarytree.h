/* Binary Search Tree prototype */
#ifndef _BINTREE_H
#define _BINTREE_H
#include <stdbool.h>

typedef struct tree {
	int data;
	struct tree *right, *left;
} Tree;

bool pushTo(Tree **root, int data);

bool removeFrom(Tree **root, int data);

bool search(Tree *root, int data);

void preOrder(Tree *root);

void inOrder(Tree *root);

void postOrder(Tree *root);

#endif /* binarytree.h */
