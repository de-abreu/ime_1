#include <stdio.h>
#include <stdlib.h>

int * fibonacci (int n) {
	int i, *A = malloc(n * sizeof(int));

	for (i = 0; i < n && i < 2; i++)
		A[i] = 1;
	if (n > 2)
		while (i < n)
			A[i++] = A[i - 1] + A[i - 2];
	return A;	
}

int main () {
	int n, i, *A;

	printf("Este programa calcula os valores até o enésimo número na sequência Fibonacci.\nDigite um valor inteiro e positivo para n tal que n < 45: ");
	if (!scanf(" %d", &n) || n < 0 || n > 45) {
		printf("Valor inválido.\n");
		return 1;
	}
	A = fibonacci(n);

	printf("Sequência Fibonacci até o %dº elemento:", n);
	for (i = 0; i < n; i++)
		printf(" %d", A[i]);
	printf("\n");
	free(A);
	return 0;
}
