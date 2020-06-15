#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;

	return 0;
}

int main() {
	int numArr[10], i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &numArr[i]);
	}

	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

	for (i = 0; i < 10; i++) {
		printf("%d ", numArr[i]);
	} printf("\n");

	return 0;
}