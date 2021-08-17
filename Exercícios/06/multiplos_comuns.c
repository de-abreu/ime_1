# include <stdio.h>

int main () {
	int n, i, j, k, cont;
	n = 0;
	i = 0;
	j = 0;
	cont = 0;

	printf ("Este programa imprime um número de múltiplos comuns, em ordem crescente, entre dois números inteiros, positivos e não nulos. ");

	while (n <= 0 || i <= 0 || j <= 0) {
		printf ("Digite, separados por espaços, dois números seguidos da quantidade de múltiplos comuns entre eles que se deseja calcular: ");
		scanf("%d %d %d", &i, &j, &n);
		if (n <= 0 || i <= 0 || j <= 0)
			printf ("Foi encontrado um valor inválido.\n");
	}

	if (i >= j)
		k = i;
	else
		k = j;
	while (cont < n) {
		if (k % i == 0 && k % j == 0){
			printf ("%d ", k);
			cont = cont + 1;
		}
		k = k + 1;
	}
	printf ("\n");
	return 0;
}
