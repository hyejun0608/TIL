#include <stdio.h>
#include <stdlib.h>

typedef struct Node* Nodepointer;
typedef struct Node {
	int data;
	Nodepointer link;
}Node;
Nodepointer func();

int main() {
	Nodepointer ptr = func();
	printf("%d", ptr->data);
}

Nodepointer func() {
	Nodepointer temp = (Nodepointer)malloc(sizeof(Node));
	temp->data = 1;
	temp->link = NULL;
	return temp;
}