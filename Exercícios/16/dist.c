# include <stdio.h>
# include <math.h>

int main () {
	double x_a, x_b, y_a, y_b;

	printf ("Este programa calcula a distância entre dois pontos cartesianos a e b, definidos por suas coordenadas reais x e y.\n");
	printf ("Dê as coordenadas x e y do ponto a, separadas por espaço: ");
	scanf ("%lf %lf", &x_a, &y_a);
	printf ("Dê as coordenadas x e y do ponto a, separadas por espaço: ");
	scanf ("%lf %lf", &x_b, &y_b);

	printf ("sqrt[(%f - %f)^2 + (%f - %f)^2] = %f\n", x_b, x_a, y_a, y_b, sqrt(pow(x_b - x_a,2) + pow(y_b - y_a,2)));
	return 0;
}
