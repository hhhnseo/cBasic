#include <stdio.h>
#include <string.h>

int main() {

	char src[100];
	char dest[100];
	// int length;
	int result;

	gets_s(src);
	gets_s(dest);

	/*
	length = strlen(src);
	printf("length of src = %d\n", length);
	strcpy(dest, src);
	printf("src = %s, dest = %s\n", src, dest);
	strcat(dest, src);
	printf("src = %s, dest = %s\n", src, dest);
	*/

	result = strcmp(src, dest);

	printf("result = %d\n", result);
	return 0;
}