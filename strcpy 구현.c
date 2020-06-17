#include <stdio.h>

int strcpy(char* dest, char* src) {
	int i;
	for (i = 0; dest[i]; i++) {
		src[i] = dest[i];
	}
	src[i] = '\0';
	return 0;
}

int main() {
	char dest[100], src[100];
	gets(dest);
	strcpy(dest, src);
	printf("%s", src);
	return 0;
}