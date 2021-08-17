#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main () {

    int i, j, found = 0, size;
    wchar_t character, ** strings;
    strings = (wchar_t **) malloc (2 * sizeof(wchar_t *));

    setlocale(LC_CTYPE, "pt_BR.UTF-8");
    wprintf(L"Este programa contabiliza o número de ocorrências de um termo em um texto, com distinção entre letras maiúsculas e minúsculas.\n");

    /* Leitura dos parâmetros */
    for (i = 0; i < 2; i++) {
        size = 1;
        strings[i] = (wchar_t *) malloc (sizeof(wchar_t));

        if (i == 0)
            wprintf(L"Digite um termo a ser contabilizado: ");
        else
            wprintf(L"Digite um texto no qual buscá-lo: ");

        for (j = 0; (character = getwchar()) != WEOF && character != '\n'; j++) {
            if (j + 1 == size) {
                size *= 2;
                strings[i] = (wchar_t *) realloc (strings[i], size * sizeof(wchar_t));
            }
            strings[i][j] = character;
        }
        strings[i][j] = '\0';
    }

    /* Comparação dos parâmetros */
    size = wcslen(strings[0]);
    for (i = 0; strings[1][i] != '\0'; i++)
        for (j = 0; strings[0][j] != '\0'
        && strings[0][j] == strings[1][i + j]; j++)
            if (j == size - 1)
                found++;

    /* Retorno e término do programa */
    wprintf(L"Número de ocorrências de \"%ls\" em \"%ls\": %d\n", strings[0], strings[1], found);
    return 0;
}
