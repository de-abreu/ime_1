# include <stdio.h>

# define true 1
# define false 0

int main () {
	int n = 0, i = 1, quant_divs_pares = 0, soma_divs = 0, test_soma = false;
	printf ("Este programa determina, no âmbito dos números naturais e não nulos, a soma dos divisores e a quantidade de divisores pares de um número n.\n");

	while (n <= 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	printf ("Soma dos divisores de n: ");
	while (i <= n) {
		if (n % i == 0) {
			if (test_soma == true)
				printf(" + ");
			else
				test_soma = true;
			printf("%d", i);
			soma_divs += i;
			if (i % 2 == 0)
				quant_divs_pares++;
		}
		i++;		
	}

	printf (" = %d\nQuantidade de divisores pares: %d\n", soma_divs, quant_divs_pares);
	return 0;
}
