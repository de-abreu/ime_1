# include <stdio.h>

int main () {
	int mdc, min, i, j, k;
	i = 0;
	j = 0;
	k = 1;

	printf ("Este programa calcula o maior divisor comum (mdc) entre dois números positivos, inteiros e não nulos.");

	while (i == 0 || j == 0) {
		printf ("Digite dois números ineiros, separados por um espaço: ");
		scanf ("%d %d", &i, &j);
		if (i == 0 || j == 0)
			printf ("Número inválido.\n");
	}

	if (i <= j)
		min = i;
	else
		min = j;

	mdc = k;
	while (k < min) {
		k = k + 1;
		if (i % k == 0 && j % k == 0)
			mdc = k;
	}

	printf ("O maior divisor comum entre %d e %d é %d.\n", i, j, mdc);	
	return 0;
}
