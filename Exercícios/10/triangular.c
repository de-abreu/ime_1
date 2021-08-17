# include <stdio.h>

int main () {
	int n = 0, i, j, count = 0;
	printf ("Este programa imprime os n primeiros números triangulares, em ordem crescente.\n");

	while (n <= 0) {
		printf ("Dê um valor inteiro, positivo e não nulo à n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	for (i = 4; count < n; i++) {
		for (j = 3; j < i; j++) {
			if ((j - 2) * (j - 1) * j != i)
				continue;
			printf ("%d * %d * %d = %d\n", j - 2, j - 1, j, i);
			count ++;
		}
	}
		
	return 0;
}
