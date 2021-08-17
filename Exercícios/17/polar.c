# include <stdio.h>
# include <math.h>
# define pi 3.14159265358979323846

void polar (float x, float y, float * raio, float * angulo) {
	* raio = sqrt(pow(x, 2) + pow(y, 2));

	if (x == 0 && y != 0) {
		if (y > 0)
			* angulo = pi / 2;
		else
			* angulo = 3 * pi / 2;
	}

	else if (y == 0 && x != 0) {
		if (x > 0)
			* angulo = 0;
		else
			* angulo = pi;
	}

	else {
		* angulo = atan (y/x);
		if (x < 0 && y > 0)
			* angulo  = pi - * angulo;
		else if (x < 0 && y < 0)
			* angulo += pi;
		else if (x > 0 && y < 0)
			* angulo = 2 * pi - * angulo;
	}
}

int main () {
	float x, y, r, s;
	printf ("Este programa converte a coordenada cartesiana (x, y) em coordenada polar (r, s).\n");
	printf ("Digite valores para x e y, respectivamente, separados por um espaço: ");
	scanf ("%f %f", &x, &y);
	polar (x, y, &r, &s);
	printf ("O valor (%f, %f), em coordenada cartesiana, equivalem à (%f, %f), em coordenada polar.\n", x, y, r, s);
	return 0;
}
