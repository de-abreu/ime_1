# include <stdio.h>

float potencia (float base, int expoente) {
	int i, pot;
	float result = 1;

	if (expoente < 0)
		pot = -expoente;
	else
		pot = expoente;

	for (i = 1; i <= pot; i++)
		result *= base;

	if (expoente < 0)
		result = 1 / result;

	return result; 
}

int main () {
	int a, b;
	float x, y;

	printf ("Este programa calcula o valor da expressão x^a + y^b + (x - y)^(a + b). Onde x e y são números reais e a e b são números inteiros.\n");
	printf ("Descreva, separados por um espaço, valores para x, y, a e b respectivamente: ");
	scanf ("%f %f %d %d", &x, &y, &a, &b);
		
	printf ("%f^%d + %f^%d + %f^%d = %f\n", x, a, y, b, x - y, a + b, potencia (x,a) + potencia (y,b) + potencia (x - y,a + b));
	return 0;
}
