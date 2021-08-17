# include <stdio.h>
# define true 1
# define false 0

int main () {
	int i, j, k, found, inicial[10], final[10];
	printf ("Este programa reproduz uma sequềncia original de 10 números inteiros excluindo desta números repetidos.\n");
	printf ("Digite 10 números separados entre si por espaços: ");
	scanf ("%d %d %d %d %d %d %d %d %d %d", &inicial[0], &inicial[1], &inicial[2], &inicial[3], &inicial[4], &inicial[5], &inicial[6], &inicial[7], &inicial[8], &inicial[9]);

	final[0] = inicial[0];
	k = 1;
	for (i = 1; i < 10; i++) {
		found = false;
		for (j = 0; j < k; j++) {
			if (inicial[i] != final[j])
				continue;
			found = true;
			break;
		}
		if (found == true)
			continue;
		final[k] = inicial[i];
		k++;
	}

	printf ("A sequência passada excluidas as repetições: ");
	for (i = 0; i < k; i++) {
		printf("%d ", final[i]);
	}
	printf ("\n");
	return 0;
}
