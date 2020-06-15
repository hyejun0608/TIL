#include <stdio.h>

void bubble_sort(int arr[], int count) {
	int temp, i, j;

	for (i = 0; i < count; i++) {
		for (j = 0; j < count - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int numArr[10], i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &numArr[i]);
	}
	bubble_sort(numArr, sizeof(numArr) / sizeof(int));

	for (i = 0; i < 10; i++) {
		printf("%d ", numArr[i]);
	}
	printf("\n");

	return 0;
}