#include <stdio.h>
#include <locale.h>

int main() {
	//Вариант 12
	char *locale = setlocale(LC_ALL, "");

	int a;

	printf("--1--\n");
	scanf("%d", &a);

    int res = a > 21 && a < 56;
	printf("%d\n", res);

	printf("--2--\n");
	scanf("%d", &a);
	int b = (a >> 11) % 2;
	printf("%d", b);

	return 0;
}
