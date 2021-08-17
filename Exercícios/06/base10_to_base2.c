# include <stdio.h>

int main () {
	int num, result, pot, i, j;
	num = -1;
	result = 0;

	printf("Este programa converte um número em base decimal no seu equivalente binário.\n");
	while (num < 0)  {
		printf ("Digite um número natural e positivo: ");
		scanf("%d", &num);
		if (num <= 0)
			printf ("Número inválido\n");
	}

	i = num;
	while (i != 0) {
		j = 1;
		pot = 1;
		if (i > 1){
			while (j * 2 <= i) {
				j = j * 2;
				pot = pot * 10;
			}
		}
		i = i - j;
		result = result + pot;
	}

	printf ("O número %d pode ser representado pelo binário %d.\n", num, result);
	return 0;
}
