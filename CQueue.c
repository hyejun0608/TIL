#include <stdio.h>
int rear = 0;
int front = 0;
int addq(int* queue, int value);
int deleteq(int* queue);

int main() {
	int cqueue[10];
	for (int i = 0; i < 10; i++) addq(cqueue, i);
	for (int i = front + 1; i < 10; i++) printf("%d ", cqueue[i]);
	printf("\nrear: %d", rear);
	return 0;
}

int addq(int* queue, int value) {
	if (front == (rear + 1) % 10) {
		return printf("Queue is Full\n");
	}
	else {
		rear = (rear + 1) % 10;
		queue[rear] = value;
	}
}

int deleteq(int* queue) {
	if (front == rear) return printf("Queue is Empty!\n");
	else {
		front = (front + 1 ) % 10;
		int temp = queue[front];
		queue[front] = 0;
		return temp;
	}
}