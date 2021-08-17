# include <stdio.h>

int main () {
	int num, i, j, k, cont;
	num = 0;

	printf ("Este é um programa que verifica se um número inteiro maior que 10 é palíndrome.\n");

	while (num <= 10) {
		printf ("Digite um número: ");
		scanf ("%d", &num);
		if (num <= 10)
			printf ("Número inválido\n");
	}

	i = num;
	while (i != 0) {
		cont = 1;
		j = i % 10;
		if (j == 0) {
			printf ("%d não é palindrome.\n", num);
			return 0;
		}
		k = i;
		while (k > 9) {
			k = k / 10;
			cont = cont * 10;
		}
		if (j != k) {
			printf ("%d não é palindrome.\n", num);
			return 0;
		}

		i = i % cont / 10;	
	}

	printf ("%d é palindrome.\n", num);
	return 0;
}
