# include <stdio.h>

int main () {

	int num, dig, cont, i;
	num = 0;
	dig = -1;
	cont = 0;
	
	printf ("Este programa contabiliza as ocorrências de um digito qualquer em um número positivo e não nulo.\n");

	while (num <= 0) {
		printf ("Digite um número: ");
		scanf ("%d", &num);
		if (num <= 0)
			printf ("Número inválido\n");
		else
			i = num;
		
	}

	while (dig < 0 || dig > 9) {
		printf ("Dê um dígito a ser contabilizado: ");
		scanf ("%d", &dig);
		if (dig < 0 || dig > 9)
			printf ("Número inválido\n");
	}

	while (i != 0) {
		if (i % 10 == dig)
			cont = cont + 1;
		i = i / 10;
	}

	printf("Número de vezes em que o dígito %d aparece no número %d: %d\n", dig, num, cont);
	return 0;	
}
