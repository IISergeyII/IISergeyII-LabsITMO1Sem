#include <stdio.h>
#include <locale.h>

int main() {
	//Вариант 12
	char *locale = setlocale(LC_ALL, "");

	int a, b, t;

	printf("--1--\n");
	scanf("%x", &a);

	printf("--2--\n");
	printf("%o\n", a);

	printf("--3--\n");
	printf("%x\n", a);
	t = a << 4;
	printf("%x\n", t);

	printf("--4--\n ");
	printf("%x\n", a);
	t = ~a;
	printf("%x\n", t);

	printf("--5--\n");
	scanf("%x", &b);
	t = a & b;
	printf("%x\n", t);

	return 0;
}
