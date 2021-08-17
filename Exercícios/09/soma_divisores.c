# include <stdio.h>

int main () {
	int i = 1, n = 0, soma = 0;
	printf ("Este programa calcula a soma dos divisores de um número qualquer, postitivo e não nulo.\n");

	while (n <= 0) {
		printf ("Digite um número: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Número inválido.\n") ;
		
	}

	while (i <= n) {
		if (n % i == 0) {
			if (i > 1)
				printf(" + ");
			printf ("%d", i);
			soma += i;
		}
		i++;
	}

	printf(" = %d\n", soma);
	
	return 0;
}
