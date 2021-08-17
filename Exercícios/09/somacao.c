# include <stdio.h>

int main () {
	int n = -1, i = 0, soma = 0;
	printf ("Este programa calcula, para um número inteiro e positivo n, a soma dos n primeiros números naturais.\n");

	while (n < 0) {
		printf ("Digite um valor para n: ");
		scanf ("%d", &n);
		if (n < 0)
			printf ("Valor inválido");
	}

	while (i <= n){
		soma += i;
		i++;
	}
	printf ("A soma de todos os valores desde 0 até %d é %d\n", n, soma);
	return 0;
}
