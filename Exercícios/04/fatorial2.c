#include <stdio.h>

int factorial(int n) {
    if (n < 2)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Este programa calcula o valor do fatorial n!, para qualquer valor "
           "de n positivo.\nDigite um valor para n e presione ENTER: ");

    if (!scanf("%d", &n) || n < 0) {
        printf("Valor inválido.\n");
        return 1;
    }

    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
