#include <stdlib.h>
#include <stdio.h>
#include "binarytree.h"

int main() {
	Tree *arvore = NULL;
	pushTo(&arvore, 50);
	pushTo(&arvore, 25);
	pushTo(&arvore, 75);
	pushTo(&arvore, 20);
	pushTo(&arvore, 30);
	preOrder(arvore);
	return 0;
}
