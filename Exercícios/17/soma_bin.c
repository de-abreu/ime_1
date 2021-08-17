# include <stdio.h>
# include <math.h>
# define true 1
# define false 0

int is_bin (int bin) {
	if (bin < 0)
		bin = -bin;
	while (bin != 0) {
		if (bin % 10 > 1)
			return false;
		bin /= 10;
	}
	return true;
}

int base2_to_base10 (int bin) {
	int i = fabs((float)bin), pot = 1, result = 0;
	while (i != 0) {
		result = result + i % 10 * pot; 
		i = i / 10;
		pot = pot * 2;		
	}
	if (bin < 0)
		return -result;
	return result;
}

int base10_to_base2 (int num) {
	int i = fabs((float)num), j, pot, result = 0;
	while (i != 0) {
		j = 1;
		pot = 1;
		if (i > 1){
			while (j * 2 <= i) {
				j *= 2;
				pot *= 10;
			}
		}
		i -= j;
		result += pot;
	}
	if (num < 0)
		return -result;
	return result;
}

int main () {
	int bin_1 = 0, bin_2 = 0, test = false;

	printf ("Este programa calcula a soma entre dois números binários, sejam estes positivos ou negativos (indicados pelo sinal de menos).\n");
	
	while (test == false) {
		printf ("Digite dois números binários separados por espaço: ");
		scanf ("%d %d", &bin_1, &bin_2);
		if (is_bin(bin_1) == false)
			printf ("O número %d não é binário.\n", bin_1);
		if (is_bin(bin_2) == false)
				printf ("O número %d não é binário.\n", bin_2);
		if (is_bin(bin_1) == true && is_bin(bin_2) == true)
				test = true;
	}

	printf ("(%d) + (%d) = %d\n", bin_1, bin_2, base10_to_base2(base2_to_base10(bin_1) + base2_to_base10(bin_2)));
	printf ("Ou, em decimais: (%d) + (%d) = %d\n", base2_to_base10(bin_1), base2_to_base10(bin_2), base2_to_base10(bin_1) + base2_to_base10(bin_2));
	return 0;
}
