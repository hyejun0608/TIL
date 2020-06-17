#include <stdio.h>

int strcmp(char* dest, char* src) {
	int i;
	for (i = 0; dest[i]||src[i]; i++) {
		if (dest[i] > src[i]) {
			return 1;
		}
		else if (dest[i] < src[i]) {
			return -1;
		}
	}
	if (dest[i]) return 1;
	else if (src[i]) return -1;
	return 0;
}

int main() {
	char dest[100], src[100];
	int i;
	gets(dest);
	gets(src);
	printf("%d", strcmp(dest, src));
}