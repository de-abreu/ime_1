# include <stdio.h>
# define true 1
# define false 0

int has_0 (int number) {
	if (number == 0)
		return true;
	while (number != 0) {
		if (number % 10 == 0)
			return true;
		number /= 10;
	}
	return false;	
}

int digit_count (int digit, int number) {
	int count = 0;

	while (number != 0) {
		if (number % 10 == digit)
			count ++;
		number /= 10;
	}
	return count;
}

int main () {
	int a, b, i;
	a = b = 0;

	printf("Este programa confirma ou nega se dois números a e b, que não possuem o dígito 0, são permutáveis entre si.\n");
	while (has_0 (a) == true || has_0 (b) == true) {
		printf ("Digite, separados por um espaço, dois números a e b: ");
		scanf ("%d %d", &a, &b);
		if (has_0 (a) == true || has_0 (b) == true)
			printf ("Valor inválido detectado.\n");
	}

	for (i = 0; i <= 9; i++) {
		if (digit_count (i,a) == digit_count (i,b))
			continue;
		printf ("%d não é uma permutação de %d.\n", a, b);
		return 0;
	}

	printf ("%d é uma permutação de %d.\n", a, b);
	return 0;
}
