#include <stdio.h>
#include <stdlib.h>

void test(int* p, char* cp) {
	printf("test : p = %p, cp = %p\n", p, cp);
	printf("test : *p = %p, *cp = %p\n", *p, *cp);
	*p = 60;
	p++;
	cp++;
	printf("test : p = %p, cp = %p\n", p, cp);
}

int main() {
	int a = 50;
	char ch = '*';
	printf("main : a = %d, ch = %d\n", a, ch);
	test(&a, &ch);
	printf("main : a = %d, ch = %d\n", a, ch);

	return 0;
}