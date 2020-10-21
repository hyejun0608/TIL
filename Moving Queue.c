#include <stdio.h>
int rear = -1;
int front = -1;
int addq(int* queue, int value);
int deleteq(int* queue);

int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) addq(arr, i);
	for (int i = front + 1; i < 10; i++) printf("%d ", arr[i]);
	printf("\nrear: %d", rear);
	return 0;
}

int addq(int* queue, int value) {
	if (rear >= 9) {
		if (front == -1) return printf("Queue is Full");
		for (int i = front + 1; i <= rear; i++) queue[i - front - 1] = queue[i];
		rear = rear - front - 1;
		front = -1;
		queue[++rear] = value;
	}
	else queue[++rear] = value;
}

int deleteq(int* queue) {
	if (front == rear) return printf("Queue is Empty");
	return queue[++front];
}