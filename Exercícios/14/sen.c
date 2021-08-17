#include <stdio.h>

int main () {
	float soma, t, x = -1, eps = 0, t_ant;
	int k;
	soma = t_ant = t = k = 1;
	
	printf ("Este programa apresenta uma aproximação do seno de x, para um número real x ≥ 0, com uma precisão eps, de valor 0 < eps < 1.\n");

	while (x < 0) {
		printf ("Digite um valor para x: ");
		scanf ("%f", &x);
		if (x < 0)
			printf ("Valor inválido \n");
	}

	while (eps >= 1 || eps <= 0) {
		printf ("Digite um valor para eps: ");
		scanf ("%f", &eps);
		if (eps >= 1 || eps <= 0)
			printf ("Valor inválido \n");
	}

	while (t_ant >= eps) {
		t = - t * x * x / ((2 * k) * ( 2 * k + 1));
		soma += t;
		k++;
		t_ant = t;
		if (t_ant < 0)
			t_ant = -t_ant;
	}

	printf ("sen(%f) = %f\n", x, soma);
	return 0;
}
