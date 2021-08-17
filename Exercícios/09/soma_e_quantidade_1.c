# include <stdio.h>

int main () {
	int n = 0, i = 1, soma_pares = 0, quant_impares = 0;
	printf ("Este programa determina, para uma sequência de n números positivos consecutivos, inteiros, iniciada em 1, a soma dos números pares e a quantidade de números ímpares.\n");

	while (n <= 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	printf ("Soma dos números pares: ");
	while (i <= n) {
		if (i % 2 == 0) {
			if (i != 2)
				printf (" + ");
			printf ("%d", i);
			soma_pares += i;
		}
		else
			quant_impares++;
		i++;		
	}

	printf (" = %d\nQuantidade de número ímpares: %d\n", soma_pares, quant_impares);
	return 0;
}
