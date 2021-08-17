#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main () {

    int i, size = 1;
    wchar_t character, * output;
    output = (wchar_t *) malloc (sizeof(wchar_t));


    setlocale(LC_CTYPE, "pt_BR.UTF-8");
    wprintf(L"Este programa lê um dado texto e devolve ele próprio em caixa-alta. Escreva algo:\n");

    for (i = 0; (character = getwchar()) != WEOF && character != '\n'; i++) {
        if (i + 1 == size) {
            size *= 2;
            output = (wchar_t *) realloc (output, size * sizeof(wchar_t));
        }
        if ((character >= 'a' && character <= 'z')
        || (character >= L'à' && character <= L'ä')
        || (character >= L'è' && character <= L'ë')
        || (character >= L'ì' && character <= L'ï')
        || (character >= L'ò' && character <= L'ö')
        || (character >= L'ù' && character <= L'ü')
        || (character == L'ç'))
            character -= 'a' - 'A';

        output[i] = character;
    }
    output[i] = '\0';
    wprintf (L"%ls\n", output);
    return 0;
}
