#include <stdio.h>

void strcat(char* dest, char* src) {
	int i, j;
	for (i = 0; dest[i]; i++);
	for (j = 0; src[j]; j++) {
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
}

int main() {
	char dest[100], src[100];
	gets(dest);
	gets(src);
	strcat(&dest, &src);
	printf("%s", dest);
}