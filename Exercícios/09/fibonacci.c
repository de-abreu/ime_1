# include <stdio.h>

int main () {
	int n = 0, i = 0, f1 = 1, f2 = 1, f3;
	printf ("Este programa calcula os valores até o enésimo número na sequência Fibonacci.\n");

	while (n <= 3) {
		printf ("Digite um valor inteiro para n maior ou igual à 3: ");
		scanf ("%d", &n);
		if (n <= 3)
			printf ("Valor inválido.\n");
	}

	printf("%d %d", f1, f2);
	while (i <= n){
		f3 = f2 + f1;
		printf(" %d", f3);
		f1 = f2;
		f2 = f3;
		i++;
	}
	
	printf("\n");
	return 0;
}
