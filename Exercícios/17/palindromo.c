# include <stdio.h>
# define true 1
# define false 0

void palindromo (int * number, int * first, int * last) {
	int pot = 10;
	* first = 0;
	* last = * number % 10;
	while (* number != 0) {
		* first = * number % 10;
		* number /= 10;
		pot *= 10;
	}
	* number = * number % pot / 10;
}

int main () {
	int n, n_2, f, l, is_palindromo = true;
	printf ("Este programa verifica se um número inteiro n é palíndromo.\n");
	printf ("Dê um valor para n: ");
	scanf ("%d", &n);
	n_2 = n;
	while (n_2 != 0) {
		palindromo (&n_2, &f, &l);
		if (f == l)
			continue;
		is_palindromo = false;
		break;
	}

	if (is_palindromo == true)
		printf ("O número %d é palíndromo.\n", n);
	else
		printf ("O número %d não é palíndromo.\n", n);
	return 0;	
}
