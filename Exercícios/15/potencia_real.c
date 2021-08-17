# include <stdio.h>

int main () {
	int k, i, pot;
	float x, result = 1;

	printf ("Este programa calcula o valor do número real x quando elevado à potência do número inteiro k.\n");
	printf ("Descreva, separados por um espaço, valores para x e k, respectivamente: ");
	scanf ("%f %d", &x, &k);

	if (k < 0)
		pot = -k;
	else
		pot = k;

	for (i = 1; i <= pot; i++)
		result *= x;

	if (k < 0)
		result = 1 / result;

	printf ("%f^%d = %f\n", x, k, result);
	
	return 0;
}
