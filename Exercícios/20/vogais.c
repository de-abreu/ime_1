#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {

	setlocale(LC_CTYPE, "pt_BR.UTF-8");
    int vowel_count, character_count, i, j, accent;
    wchar_t character, vowel[] = {'a', 'e', 'i', 'o', 'u', L'à', L'è', L'ì', L'ò', L'ù', L'ä', L'ë', L'ï', L'ö', L'ü'};
    vowel_count = character_count = 0;

    printf ("Este programa lê uma sequência de texto escrita em português, terminada por uma quebra de linha, e relata a frequência relativa de vogais pelo total de caracteres desta.\n");
    printf("Escreva algo e então pressione ENTER: ");

    while ((character = getwchar()) != WEOF && character != '\n') {
        if (!((character >= 'A' && character <= 'Z')
        || (character >= 'a' && character <= 'z')
        || (character >= L'À' && character <= L'Ä')
        || (character >= L'à' && character <= L'ä')
        || (character >= L'È' && character <= L'Ë')
        || (character >= L'è' && character <= L'ë')
        || (character >= L'Ì' && character <= L'Ï')
        || (character >= L'ì' && character <= L'ï')
        || (character >= L'Ò' && character <= L'Ö')
        || (character >= L'ò' && character <= L'ö')
        || (character >= L'Ù' && character <= L'Ü')
        || (character >= L'ù' && character <= L'ü')
        || (character == L'ç') || (character == L'Ç')
        ))
            continue;
        character_count++;

        for (i = 0; i < 10; i++){
            accent = (i < 5) ? i : i + 5;
            for (j = 0; j <= vowel[accent] - vowel[i]; j++) {
                if (character == vowel[i] + j
                || character == vowel[i] + j - ('a' - 'A')) {
                    vowel_count++;
                    break;
                }
            }
        }
    }        

    printf("Frequência de vogais = %d / %d\n", vowel_count, character_count);
    return 0;
}
