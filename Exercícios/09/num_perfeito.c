# include <stdio.h>

int main () {
	int n = 0, i = 1, cont = 0, j, soma;
	printf ("Este programa imprime, em ordem crescente, todos os números perfeitos até a enésima unidade.\n");

	while (n <= 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	while (cont < n) {
		j = 1;
		soma = 0;
		while (j < i) {
			if (i % j == 0)
				soma += j;
			j++;
		}
		if (soma == i) {
			printf ("%d ", i);
			cont++;
		}
		i++;
	}

	printf("\n");
	return 0;
}
