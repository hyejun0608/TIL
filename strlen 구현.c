#include <stdio.h>

int strlen(char* dest) {
	int i;
	for (i = 0; dest[i]; i++);
	return i;
}

int main()
{
	char dest[100];
	scanf("%s", dest);
	printf("%d", strlen(dest));
	return 0;
}