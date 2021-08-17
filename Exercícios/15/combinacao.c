# include <stdio.h>

int main () {
	int m, n, i;
	float result = 1;
	m = n = 0;
	printf ("Este programa calcula o número de possibilidades de combinação de m elementos distintos em um subconjunto com n elementos de tamanho. Isto é, C(m,n) = m! / [n! (m - n)!], onde m e n são números inteiros e positivos, e m ≥ n.\n");

	while (m <= n || m < 0 || n < 0) {
		printf ("Digite valores para m e n, respectivamente, separados por espaço: ");
		scanf ("%d %d", &m, &n);
		if (m <= n || m < 0 || n < 0)
			printf ("Valor inválido detectado.\n");
	}

	if (m - n > n) {
		for (i = m; i > m - n; i--)
			result *= i;
		for (i = n; i > 1; i--)
			result /=i;
	}
	else {
		for (i = m; i > n; i--)
			result *= i;
		for (i = m - n; i > 1; i--)
			result /=i;
	}

	printf ("C(%d,%d) = %d! / (%d! %d!) = %f\n", m, n, m, n, m - n, result);
	return 0;
}
