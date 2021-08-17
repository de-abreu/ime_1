# include <stdio.h>

int main () {
	int n = 0, k;
	float result = 0;

	printf ("Este programa calcula o valor da somação S_n, onde S_n = (1 / n) + [2 / (n - 1)] + [3 / (n - 2)] + ... + n / 1, para um número inteiro e não nulo n.\n");
	while (n <= 0) {
		printf ("Dê um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}
	printf ("S_n = ");

	for (k = 1; k <= n; k++) {
		printf ("[%d / %d]", k, n - k + 1);
		result += k / (n - k + 1);
		if (k < n)
			printf (" + ");
		else
			printf (" = ");
	}

	printf ("%f\n", result);
	return 0;		
}
