# include <stdio.h>

int main () {
	int i, j, k, raiz;
	i = 1000;

	printf("Este programa imprime todos os milhares cuja raiz quadrada seja a soma das duas dezenas formadas pelos seus dois primeiros e dois últimos algarismos.\n");

	while (i < 10000) {
		raiz = 10;
		while (raiz * raiz != i && raiz < 100)
			raiz = raiz + 1;
		if (raiz != 100) {
			j = i / 100;
			k = i % 100;
			if (k + j == raiz)
				printf("Raiz de %d: %d = %d + %d\n", i, raiz, j, k);
		}
		i = i + 1;
	}
	return 0;
}
