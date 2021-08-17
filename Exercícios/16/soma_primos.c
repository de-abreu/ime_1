# include <stdio.h>
# define true 1
# define false 0

int is_prime (int num) {
	int i, cont = 0;
	if (num == 0)
		return false;
	for (i = 1; i <= num; i++)
		if (num % i == 0)
			cont++;
	if (cont == 2)
		return true;
	return false;
}

int main () {
	int i, j, n = 0, found = false;
	printf ("Este programa calcula se um dado número n, positivo e não nulo, pode ser representado pela soma de dois números primos.\n");

	while (n <= 0) {
		printf ("Dê um valor para n: ");
		scanf ("%d", &n);
		if (n <= 0)
			printf ("Valor inválido.\n");
	}

	for (i = 2; i < n; i++) {
		if (is_prime(i) == false)
			continue;
		for (j = 2; j < n; j++){
			if (is_prime(j) == false || i + j != n)
				continue;
			printf ("%d + %d = %d\n", i, j, n);
			found = true;
		}
			
	}
	
	if (found == false)
		printf ("Não é possível obter %d à partir da soma de números primos.\n", n);
	return 0;
}
