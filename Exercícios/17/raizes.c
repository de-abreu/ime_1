# include <stdio.h>
# include <math.h>

int main () {
	float a, b, c, delta, r_1, r_2;

	printf ("Este programa encontra as raízes reais de uma equação do segundo grau ax^2 + bx + c = 0, para quaisquer valores de a, b e c.\n");
	printf ("Dê valores para a, b e c, respectivamente, separados por espaços: ");
	scanf ("%f %f %f", &a, &b, &c);

	delta = pow(b,2) - 4 * a * c;

	if (delta < 0)
		printf ("%fx^2 + (%f)x + (%f) = 0 não possui raízes reais.\n", a, b, c);
	else {
		r_1 = (- b + sqrt(delta)) / (2 * a);
		r_2 = (- b - sqrt(delta)) / (2 * a);
		if (r_1 == r_2)
			printf ("%fx^2 + (%f)x + (%f) = 0 possui uma única raiz real: %f\n", a, b, c, r_1);
		else
			printf ("%fx^2 + (%f)x + (%f) = 0 possui duas raizes reais: %f e %f\n", a, b, c, r_1, r_2);
	}
	return 0;
}
