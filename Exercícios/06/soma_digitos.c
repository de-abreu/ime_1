# include <stdio.h>

int main () {
	int num, i, cont;
	num = 0;
	cont = 0;

	printf("Este programa calcula a soma dos dígitos de um número positivo e não nulo.\n");

	while (num <= 0) {
		printf ("Digite um número: ");
		scanf ("%d", &num);
		if (num <= 0)
			printf ("Número inválido\n");
		else
			i = num;
	}

	while (i != 0) {
		cont = cont + i % 10;
		i = i / 10;
	}

	printf("A soma dos dígitos de %d é %d.\n", num, cont);
	return 0;
}
