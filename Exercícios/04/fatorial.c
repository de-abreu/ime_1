# include <stdio.h>

int main () {
	int n, i, fatorial;
	n = -1;
	
	printf ("este programa calcula o valor do fatorial n!, para qualquer valor de n positivo.\n");
	while (n < 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n < 0) {
			printf ("O valor %d não é igual ou maior que 0.\n", n);
		}
	}
	fatorial = n;
	i = n;

	if (fatorial == 0) {
		fatorial = 1;
	}

	while (i > 2) {
		i = i - 1;
		fatorial = fatorial * i;
	}

	printf ("%d! = %d\n", n, fatorial);
	return 0;
}
