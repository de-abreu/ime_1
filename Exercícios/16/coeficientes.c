# include <stdio.h>

int fatorial (int n) {
	int i, result = 1;
	for (i = n; i > 1; i--)
		result *= i;
	return result;	
}

int comb (int m, int n) {
	return fatorial (m) / (fatorial (n) * fatorial (m - n));
}

int main () {
	int n = -1, p;
	printf ("Este programa imprime os coeficientes da expansão (a + b)^n, para um valor inteiro n >= 0.\n");

	while (n < 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n < 0)
			printf ("Valor inválido.\n");
	}

	for (p = 0; p <= n; p++)
		printf("%d ", comb (n,p));
		
	printf ("\n");
	return 0;
}
