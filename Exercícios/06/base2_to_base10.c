# include <stdio.h>

int main () {
	int num, i, j, pot, result, test;
	pot = 1;
	test = 1;
	result = 0;	

	printf ("Este programa converte um número natural em base binária em seu equivalente em base decimal.\n");

	/* Solicite um número e teste se este é válido */
	while (test == 1) {
		test = 0;
		printf ("Digite um número natural binário: ");
		scanf ("%d", &num);
		i = num;
		while (i != 0 && test == 0) {
			if (i % 10 != 0 && i % 10 != 1)
				test = 1;
			else
				i = i / 10;
		}
		if (test == 1)
			printf ("Número inválido.\n");
	}
	

	/* Converta o número */
	j = num;
	while (j != 0) {
		result = result + j % 10 * pot; 
		j = j / 10;
		pot = pot * 2;		
	}
	printf ("O número binário %d é representado em base decimal por %d.\n", num, result);
	return 0;
}
