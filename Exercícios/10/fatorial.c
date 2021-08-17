# include <stdio.h>

int main () {
	int n = -1, i, fatorial;
	printf ("Este programa calcula do valor fatorial n!.\n");

	while (n < 0) {
		printf ("Digite um valor positivo e inteiro para n: ");
		scanf ("%d", &n);
		if (n < 0)
			printf ("Valor inválido.\n");
	}

	printf ("%d! = ", n);
	if (n < 2)
		fatorial = 1;
	else
		fatorial = n;

	printf ("%d", fatorial);
	for (i = fatorial - 1; i > 0; i--) {
			printf(" * %d", i);
			fatorial *= i;
			if (i == 1)
				printf (" = %d", fatorial);
	}

	printf ("\n");
	return 0;
}
