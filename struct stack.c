#include <stdio.h>

typedef struct Stack {
	int arr[10];
	int top;
}Stack;

void push(Stack* stack, int data) {
	stack->arr[++stack->top] = data;
}

int pop(Stack* stack) {
	return stack->arr[stack->top--];
}

int main() {
	Stack h;
	h.top = -1;
	push(&h, 0);
	int a = pop(&h);
	printf("%d\n", a);
}
