#include <stdio.h>

int main () {
	float soma, t, x = -1, eps = 0, t_ant;
	int k;
	soma = t_ant = t = k = 1;
	
	printf ("Este programa apresenta uma aproximação da série e^x = 1 + x + x^2 / 2! + x^3 / 3! + ... + x^k / k! + ..., para um número real x ≥ 0, com uma precisão eps, de valor 0 < eps < 1.\n");

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
		t = t * x / k;
		soma += t;
		k++;
		t_ant = t;
		if (t_ant < 0)
			t_ant = -t_ant;
	}

	printf ("exp(%f) = %f\n", x, soma);
	return 0;
}
