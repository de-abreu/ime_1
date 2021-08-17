# include <stdio.h>

int main () {
	int num, i, result;
	num = 0;
	result = 0;

	printf ("Este programa calcula a soma dos dígitos pares de um número positivo e não nulo");

	while (num <= 0) {
		printf ("Digite um número: ");
		scanf ("%d", &num);
		if (num <= 0)
			printf ("Número inválido.\n");
	}

	i = num;
	while (i != 0) {
		if ( i % 2 == 0)
			result = result + i % 10;
		i = i / 10;
	}

	printf ("A soma dos dígitos pares em %d é %d.\n", num, result);
	return 0;
}
