#include <stdio.h>
#include <locale.h>
#include <wchar.h>

# define TRUE 1
# define FALSE 0

int main() {

	setlocale(LC_CTYPE, "pt_BR.UTF-8");
	wchar_t caractere;
	int letras, palavra, palavras;
	letras = palavra = palavras = 0;

	printf("Este programa lê um paragrafo de texto e contabiliza o número de letras e palavras neste. Escreva algo e então pressione ENTER:\n");

	while ((caractere = getwchar()) != WEOF) {
		if (caractere != ' ' && caractere != '\n') {
			palavra = TRUE;
			if ((caractere >= 'A' && caractere <= 'Z')
	        || (caractere >= 'a' && caractere <= 'z')
	        || (caractere >= L'À' && caractere <= L'Ä')
	        || (caractere >= L'à' && caractere <= L'ä')
	        || (caractere >= L'È' && caractere <= L'Ë')
	        || (caractere >= L'è' && caractere <= L'ë')
	        || (caractere >= L'Ì' && caractere <= L'Ï')
	        || (caractere >= L'ì' && caractere <= L'ï')
	        || (caractere >= L'Ò' && caractere <= L'Ö')
	        || (caractere >= L'ò' && caractere <= L'ö')
	        || (caractere >= L'Ù' && caractere <= L'Ü')
	        || (caractere >= L'ù' && caractere <= L'ü')
	        || (caractere == L'ç') || (caractere == L'Ç'))
	        	letras++;
		}
		else if (palavra == TRUE) {
			palavras++;
			palavra = FALSE;
		}
		if (caractere == '\n')
			break;
	}

	if (letras == 0 && palavras == 0)
		return 1;
	printf("\nLetras: %d\nPalavras: %d\n", letras, palavras);
	return 0;
}
