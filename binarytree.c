// Binary Tree 

#include <stdlib.h>
#include <stdio.h>
#include "binarytree.h"

bool pushTo(Tree **root, int data) {
	Tree *newnode = (Tree *) malloc(sizeof(Tree));
	newnode->data = data;
	newnode->right = newnode->left = NULL;

	if(!*root) {
		return *root = newnode;
	} else {
		Tree *temp = *root;
		while(temp) {
			if(temp->data == data)
				return false;
			if(temp->data > data) {
				if(temp->left == NULL) {
					return temp->left = newnode;
				}
				temp = temp->left;
			} else {
				if(temp->right == NULL) {
					return temp->right = newnode;
				}
				temp = temp->right;
			}
		}
					
	}
	return false;
}

bool search(Tree *root, int data) {
	if(!root) return false;
	Tree * temp = root;
	while(temp != NULL) {
		if(temp->data == data)
			return true;
		else if(temp->data > data)
			temp = temp->left;
		else
			temp = temp->right;
	}
	return false;
}

void preOrder(Tree *root) {
	if(!root) return;

	printf("%d ", root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Tree *root) {
	if(!root) return;
	
	inOrder(root->left);
	printf("%d ", root->data);
	inOrder(root->right);
}

void postOrder(Tree *root) {
	if(!root) return;
	
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ", root->data);
}