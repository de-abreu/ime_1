# include <stdio.h>

int main () {
	int a, b, i, pot;
	float x, y, x_y, x_2 = 1, y_2 = 1, x_y_2 = 1;

	printf ("Este programa calcula o valor da expressão x^a + y^b + (x - y)^(a + b). Onde x e y são números reais e a e b são números inteiros.\n");
	printf ("Descreva, separados por um espaço, valores para x, y, a e b respectivamente: ");
	scanf ("%f %f %d %d", &x, &y, &a, &b);

	/* Calcular o valor de x^a */

	if (a < 0)
		pot = -a;
	else
		pot = a;

	for (i = 1; i <= pot; i++)
		x_2 *= x;

	if (a < 0)
		x_2 = 1 / x_2;

	/* Calcular o valor de y^b */

	if (b < 0)
		pot = -b;
	else
		pot = b;

	for (i = 1; i <= pot; i++)
		y_2 *= y;

	if (b < 0)
		y_2 = 1 / y_2;

	/* Calcular o valor de (x - y)^(a + b) */
	
	x_y = x - y;
	pot = a + b;
	
	if (pot < 0)
		pot = -pot;

	for (i = 1; i <= pot; i++)
		x_y_2 *= x_y;

	if (a + b < 0)
		x_y_2 = 1/ x_y_2;

	/* Apresentar resultado */
		
	printf ("%f^%d + %f^%d + %f^%d = %f\n", x, a, y, b, x_y, a + b, x_2 + y_2 + x_y_2);
	return 0;
}
