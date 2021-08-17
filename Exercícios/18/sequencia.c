# include <stdio.h>

int main () {
	int i, j, k, inicial, final;
	float soma, soma_max = 0, v[12];

	printf ("Este programa calcula, para uma sequência de 12 números inteiros, o segmento mais longo de soma máxima.\n");
	printf ("Digite 12 números, positivos ou negativos, separados uns dos outros por um espaço: ");
	scanf ("%f %f %f %f %f %f %f %f %f %f %f %f", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9], &v[10], &v[11]);

	 for (i = 0; i < 12; i++) {
	 	k = 12;
	 	while (k > i) {
	 		soma = 0;
	 		for (j = i; j < k; j++)
	 			soma += v[j];
	 		if (soma > soma_max) {
	 			soma_max = soma;
	 			inicial = i + 1;
	 			final = j;
	 		}
	 		k--;
	 	}
	 }
	 printf ("O segmento mais longo e de soma máxima é aquele iniciado no %d° número e terminado no %d°, totalizando %f.\n", inicial, final, soma_max);
	 return 0;
}
