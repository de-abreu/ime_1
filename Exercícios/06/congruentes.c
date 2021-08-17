# include <stdio.h>

int main () {
	int n, j, m, i, count;
	n = 0;
	j = 0;
	m = 0;
	count = 0;
	i = 1;

	printf ("Este programa imprime n números, em ordem crescente, que produzem o mesmo resto de um número j dividido pelo módulo m, quando divididos por este mesmo módulo. ");

	while (n == 0 || j == 0 || m == 0) {
		printf ("Dê um valor inteiro, positivo, e não nulo, para n, j e m: ");
		scanf ("%d %d %d", &n, &j, &m);
		if (n == 0 || j == 0 || m == 0)
			printf ("Valor inválido.\n");
	}

	while (count < n) {
		if (i % m == j % m && i != j) {
			printf("%d ", i);
			count = count + 1;
		}
		i = i + 1;
	}

	printf ("\n");
	return 0;
}
