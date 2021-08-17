# include <stdio.h>

int main () {
	int m = -1, n = -1, i, j, x, y, x_2, y_2, max;
	printf ("Dados dois naturais n > 0 e m > 0, este programa determina entre todos os pares de números inteiros (x,y) tais que 0 ≤ x ≤ n e 0 ≤ y ≤ m, o par para o qual o valor da expressão -x² + yx + y seja máximo.\n");

	while (n < 0 || m < 0) {
		printf ("Dê valores inteiros, e positivos à n e m, separados por espaço: ");
		scanf ("%d %d", &n, &m);
		if (n < 0 || m < 0)
			printf ("Valor inválido detectado.\n");
	}

	max = n * m - n * n + m;
	x = n;
	y = m;
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= m; j++) {
			if (i * j - i * i + j <= max || (i == n && j == m))
				continue;
			max = i * j - i * i + j;
			x = i;
			y = j;
		}
	}

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= m; j++) {
			if (i * j - i * i + j < max || (i == x && j == y))
				continue;
			x_2 = i;
			y_2 = j;
		}
	}

	printf ("O valor de -x² + yx + y é máximo quando x = %d e y = %d: -(%d)² + %d + %d = %d\n", x, y, x, y * x, y, max);
	if (x_2 != x || y_2 != y)
		printf ("Também, quando x = %d e y = %d: -(%d)² + %d + %d = %d\n", x_2, y_2, x_2, y_2 * x_2, y_2, max);
	return 0;
}
