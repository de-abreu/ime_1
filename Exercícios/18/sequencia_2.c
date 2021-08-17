# include <stdio.h>
# include <math.h>

int main () {
	int i, j, k, l, sequence, selection[4], v[8];

	printf ("Este programa identifica a presença de sequências iguais dentro de uma sequência maior, de 8 números inteiros.\n");
	printf ("Digite oito números inteiros, separados entre si por espaços: ");
	scanf ("%d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7]);

	for (i = 0; i < 7; i++) {
		k = 0;
		for (j = i + 1; j < 8; j++) {
			if (v[i] != v[j])
				continue;
			while (j < 8) {
				if (v[i] == v[j]) {
					selection[k] = v[i];
					i++;
					j++;
					k++;
				}
				else {
					sequence = 0;
					for (l = 0; l < k; l++)
						sequence += selection[l] * pow(10, k - l - 1);
					printf ("A sequência \"%d\" se repete à partir dos índices %d e %d\n", sequence, i - k, j - k);
					break;
				}
			}
		}
	}	
	return 0;
}
