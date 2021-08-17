# include <stdio.h>

int mdc (int a, int b) {
	int i, limite;
	if (a > b)
		limite = a;
	else
		limite = b;
	for (i = 1; i <= limite; i++) {
		if (a % i == 0 || a % i == 0)
			return i;
	}
	return 0;
}

int main () {
	int m = -1, n = -1, mmc;
	printf ("Este programa calcula o mínimo múltiplo comum (mmc) entre dois números inteiros e positivos m e n.\n");
	while (m < 0 || n < 0) {
		printf ("Digite valores para m e n, respectivamente, divididos por espaço: ");
		scanf ("%d %d", &m, &n);
		if (m < 0 || n < 0)
			printf ("Valor inválido detectado.\n");
	}

	if (mdc(m,n) == 0) {
		if (m == 0 && n == 0)
			printf ("mmc = 0\n");
		else
			printf ("Não há mmc entre %d e %d\n", m, n);
		return 0;
	}

	if (m > n)
		mmc = m;
	else
		mmc = n;
	while (mmc % m != 0 || mmc % n != 0)
		mmc++;

	printf ("mmc = %d\n", mmc);
	return 0;	
}
