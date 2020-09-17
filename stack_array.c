#include <stdio.h>

int push(int* stack, int value);
int pop(int* stack);
int isFull();
int isEmpty();
int top = -1;

int main() {
	int stack[10] = { 0 };
	pop(stack);
	for (int i = 0; i < 10; i++) {
		push(stack, i);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", stack[i]);
	}
	push(stack, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", stack[i]);
	}
	printf("top: %d", top);
}

int push(int* stack, int value) {
	if(isFull()) return printf("Stack is full\n");
	else stack[++top] = value;
}

int pop(int* stack) {
	if (isEmpty()) return printf("Stack is empty\n");
	else stack[top--] = 0;
}

int isFull() {
	if (top >= 9) return 1;
	else return 0;
}

int isEmpty() {
	if (top < 0) return 1;
	else return 0;
}