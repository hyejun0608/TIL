#include <stdio.h>
#include <stdlib.h>

int isEmpty();
void push(int data);
void pop();
void print();

typedef struct Node* Nodepointer;
typedef struct Node {
	int data;
	Nodepointer link;
} Node;
Nodepointer top = NULL;

int main() {
	push(1);
	push(2);
	print();
	pop();
	print();
	pop();

	return 0;
}

// ������ ����ִ��� Ȯ���ϴ� �Լ�
int isEmpty() {
	if (!top) return 1;
	else return 0;
}
// ������ �����ϰ� ���� �־��ִ� �Լ�
// ������ ������ ��, �ƴ� �� �� �� ����� �� �ִ�
void push(int value) {
	Nodepointer temp = (Nodepointer)malloc(sizeof(Nodepointer));
	temp->data = value;
	temp->link = top;
	top = temp;
}
// ������ �����ϴ� �Լ�
void pop() {
	if (isEmpty()) return printf("Stack is empty!\n");
	int item;
	Nodepointer temp = top;
	item = top->data;
	top = top->link;
	free(temp);
	return item;
}
// ���� ������ ���� ����ϴ� �Լ�
void print() {
	for (Nodepointer ptr = top; ptr != NULL; ptr = ptr->link) {
		printf("%d\n", ptr->data);
	}
}