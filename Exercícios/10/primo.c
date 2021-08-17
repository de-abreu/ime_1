# include <stdio.h>

int main () {
	int num = 0, i, j, count = 0;
	printf ("Este programa testa se um dado número inteiro e não nulo é primo.\n");

	while (num == 0) {
		printf ("Dê um número inteiro: ");
		scanf ("%d", &num);
		if (num == 0)
			printf ("Valor inválido.\n");		
	}

	if (num < 0)
		j = -num;
	else
		j = num;

	printf ("São os divisores positivos de %d: 1", num);
	for (i = 2; i <= j; i++) {
		if (j % i != 0)
			continue;
		printf (", %d", i);
		count++;
	}

	if (count == 1)
		printf(". Logo, %d é um número primo.\n", num);
	else
		printf(". Logo, %d não é um número primo.\n", num);
		
	return 0;
}
