#include <stdio.h>
#include <locale.h>
#include <malloc.h>

const int N = 4;

int main() {
	//Вариант 12


	double a[] = {56.4, 36.5, 7.7, 44.3};

	printf("--1--\n");
	double *b = a;
	for (int i = 0; i < N; ++i) {
        printf("%lf ", *(b+i);
	}

	printf("\n--2--\n");
	double *m;
	m =  (double*)malloc(N * sizeof(double));
    m[0] = 56.4;
    m[1] = 36.5;
    m[2] = 7.7;
    m[3] = 44.3;
    for (int i = 0; i < N; ++i) {
        printf("%lf ", m[i]);
    }

	return 0;
}
