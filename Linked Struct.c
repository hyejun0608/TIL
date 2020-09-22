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

// 스택이 비어있는지 확인하는 함수
int isEmpty() {
	if (!top) return 1;
	else return 0;
}
// 스택을 생성하고 값을 넣어주는 함수
// 스택이 공백일 때, 아닐 때 둘 다 사용할 수 있다
void push(int value) {
	Nodepointer temp = (Nodepointer)malloc(sizeof(Nodepointer));
	temp->data = value;
	temp->link = top;
	top = temp;
}
// 스택을 삭제하는 함수
void pop() {
	if (isEmpty()) return printf("Stack is empty!\n");
	int item;
	Nodepointer temp = top;
	item = top->data;
	top = top->link;
	free(temp);
	return item;
}
// 스택 데이터 값을 출력하는 함수
void print() {
	for (Nodepointer ptr = top; ptr != NULL; ptr = ptr->link) {
		printf("%d\n", ptr->data);
	}
}