#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {

	setlocale(LC_CTYPE, "pt_BR.UTF-8");
	wchar_t caractere;
	int maiúsculos, minúsculos;
	maiúsculos = minúsculos = 0;

	printf("Este programa lê um parágrafo de texto e calcula o número de caracteres maiúsculos e minúsculos neste. Escreva algo e pressione ENTER:\n");

	while ((caractere = getwchar()) != WEOF) {
		if ((caractere >= 'a' && caractere <= 'z')
		|| (caractere >= L'à' && caractere <= L'ä')
		|| (caractere >= L'è' && caractere <= L'ë')
		|| (caractere >= L'ì' && caractere <= L'ï')
		|| (caractere >= L'ò' && caractere <= L'ö')
		|| (caractere >= L'ù' && caractere <= L'ü')
		|| (caractere == L'ç'))
			minúsculos++;
		else if ((caractere >= 'A' && caractere <= 'Z')
		|| (caractere >= L'À' && caractere <= L'Ä')
		|| (caractere >= L'È' && caractere <= L'Ë')
		|| (caractere >= L'Ì' && caractere <= L'Ï')
		|| (caractere >= L'Ò' && caractere <= L'Ö')
		|| (caractere >= L'Ù' && caractere <= L'Ü')
		|| (caractere == L'Ç'))
			maiúsculos++;
		else if (caractere == '\n')
			break;
	}
	
	if (minúsculos == 0 && maiúsculos == 0)
		return 1;
	printf("\nMaiúsculos: %d\nMinúsculos: %d\n", maiúsculos, minúsculos);
	return 0;
}
