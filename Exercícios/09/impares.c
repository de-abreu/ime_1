# include <stdio.h>

int main () {
	int n = 0, i = 1, cont = 0;
	printf ("Este programa imprime, em ordem crescente, todos os números ímpares até a enésima unidade.\n");

	while (n <= 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	while (cont < n) {
		if (i % 2 != 0) {
			printf("%d ", i);
			cont++;
		}
		i ++;
	}

	printf("\n");
	return 0;
}
