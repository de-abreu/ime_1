#include <stdio.h>
#include <locale.h>
#include <wchar.h>

/* Largura da maior palavra no idioma português, "Pneumoultramicroscopicossilicovulcanoconiótico" */
#define MAX 46 

int main() {

	setlocale(LC_CTYPE, "pt_BR.UTF-8");
	wchar_t caractere, palavra[MAX], maiores_palavras[MAX][MAX];
	int i, maior_comprimento, palavras;
	i = maior_comprimento = palavras = 0;
	
	wprintf (L"Este programa lê uma sequência de texto escrita em português, terminada por uma quebra de linha, e relata a palavra mais longa nesta.\n");
	wprintf(L"Escreva algo e então pressione ENTER: ");
	
	while ((caractere = getwchar()) != WEOF) {

		/* Ler o input caractere por caractere e copiá-lo à string "palavra", até deparar-se com um caractere que não seja uma letra */
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
        || (caractere == L'ç') || (caractere == L'Ç')
        ) {
			palavra[i] = caractere;
			i++;
			continue;
		}

		/* Término da leitura de uma palavra, avaliá-la um função do seu comprimento */
		if (i >= maior_comprimento && i > 0) {

			/* Se a palavra é a maior até então, armazene seu comprimento e reinicie a contagem de palavras mais longas */
			if (i > maior_comprimento) {
				maior_comprimento = i;
				palavras = 1;
			}

			/* Se ela for tão longa quanto outra, apenas a adicione a contagem */
			else
				palavras++;

			/* Armazene a palavra */
			palavra[i] = '\0';
			wcscpy(maiores_palavras[palavras - 1], palavra);
		}
		i = 0;

		/* Terminar a leitura ao alcançar a quebra de linha */
		if (caractere == '\n')
			break;
	}

	if (palavras == 0)
		return 1;
	if (palavras == 1)
		wprintf(L"Maior palavra (%d caracteres): %ls\n", maior_comprimento, maiores_palavras[0]);
	else {
		wprintf(L"Maiores palavras (%d caracteres):\n", maior_comprimento);
		for (; i < palavras; i++)
			wprintf(L"%ls\n", maiores_palavras[i]);
	}
	return 0;
}
