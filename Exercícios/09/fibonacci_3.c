#include <stdio.h>

void printFibonacci (int n) {
	int i = 0, A[3] = {1,1,1};

	for (i = 0; i < n && i < 2; i++)
		printf("%d ", A[i]);
	while (n-- > 2){
		A[i - 2] = A[i - 1];
		A[i - 1] = A[i];
		A[i] += A[i - 2];
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main () {
	int n;

	printf("Este programa calcula os valores até o enésimo número na sequência Fibonacci.\nDigite um valor inteiro e positivo para n tal que n < 45: ");
	if (!scanf(" %d", &n) || n < 0 || n > 45) {
		printf("Valor inválido.\n");
		return 1;
	}
	printFibonacci(n);
	return 0;
}
