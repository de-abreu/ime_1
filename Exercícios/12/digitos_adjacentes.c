# include <stdio.h>
# define true 1
# define false 0

int main () {
	int adjacente = false, n, i;

	printf ("Este programa verifica se uma dado número possui dígitos adjacentes iguais.\nDigite um número: ");
	scanf ("%d", &n);

	i = n % 10;
	n /= 10;
	while (n != 0) {
		if (n % 10 == i) {
			adjacente = true;
			break;
		}
		i = n % 10;
		n /= 10;
	}

	if (adjacente == true)
		printf ("O número possui dígitos adjacentes iguais\n");
	else
		printf ("O número não possui dígitos adjacentes iguais\n");
	return 0;
}
