# include <stdio.h>

int main () {
	int n = 0, i = 0, j = 0, k = 1, cont = 0;

	printf ("Este programa imprime os n primeiros números, em ordem crescente, que são múltiplos de dois números positivos e não nulos quaisquer. ");

	while (n <= 0 || i <= 0 || j <= 0) {
		printf ("Dê um valor para n, e mais dois números, separados por espaços: ");
		scanf ("%d %d %d", &n, &i, &j);
		if (n <= 0 || i <= 0 || j <= 0)
			printf("Valor inválido detectado.\n");
	}

	while (cont < n) {
		if (k % i == 0 || k % j == 0) {
			printf ("%d ", k);
			cont++;
		}
		k++;	
	}
	
	printf ("\n");
	return 0;
}
