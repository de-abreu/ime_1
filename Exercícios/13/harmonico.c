# include <stdio.h>

int main () {
	int n = 0;
	float k, result = 0;

	printf ("Este programa calcula o harmônico para um número natural n.\n");
	while (n <= 0) {
		printf ("Dê um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	printf ("O harmônico de %d é igual à: ", n);
	for (k = 1; k <= n; k++) {
		printf ("(1 / %d)", (int) k);
		result += 1 / k;
		if (k < n)
			printf (" + ");
		else
			printf (" = ");
	}

	printf ("%f\n", result);
	return 0;		
}
