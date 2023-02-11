# include <stdio.h>

int main() {
	int n, k, seq, resultado;
	k = -1;
	seq = 1;

	printf ("Este programa calcula o valor de um número inteiro n elevado à potência doutro número inteiro k.\nDigite um valor para n: ");
	scanf ("%d", &n);
	resultado = n;

	while (k < 0) {
		printf ("Digite um valor positivo para k: ");
		scanf ("%d", &k);
		if (k < 0) {
			printf ("O valor %d não é maior ou igual à 0.\n", k);
		}
	}

	if (k == 0) {
		if (n >= 0){
			resultado = 1;
		}
		else {
			resultado = -1;
		}

	}

	while (seq < k) {
		resultado = resultado * n;
		seq = seq + 1;
	}
	printf ("%d^%d = %d\n", n, k, resultado);
	return 0;
}
