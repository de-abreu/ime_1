# include <stdio.h>

int main () {
	int num, soma, n;
	num = 1;
	soma = 0;
	n = 120;

	while (num < n) {
		if (n % num == 0)
			soma = soma + num;
		num = num + 1;
	}

	if (soma == n)
		printf ("Número perfeito\n");
	else
		printf ("Número imperfeito: soma igual à %d\n", soma);
	return 0;
}
