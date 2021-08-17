#include <stdio.h>

int main() {
    char i;
    printf ("Este programa lê um caractere minúsculo e apresenta sua versão maiúscula.\n");
    printf("Digite um caractere minúsculo e pressione ENTER: ");
    if (!(scanf(" %c", &i)) || i < 'a' || i > 'z') {
        printf("Caractere inválido\n");
        return 1;
    }
    printf("→ %c\n", i - ('a' - 'A'));
    return 0;
}
