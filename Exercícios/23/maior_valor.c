#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size, ** values;
} matrix;

typedef struct {
    int value, quantity, ** positions;
} greatest;

greatest find_in (matrix a) {
    int i;
    greatest k = {0};

    for (i = 0; i < a.size * a.size; i++) {
        if (a.values[i / a.size][i % a.size] < k.value)
            continue;
        if (a.values[i / a.size][i % a.size] > k.value) {
            k.value = a.values[i / a.size][i % a.size];
            k.quantity = 0;
        }
        k.positions = realloc(k.positions, (k.quantity + 1) * sizeof(k.positions));
        k.positions[k.quantity] = realloc(k.positions[k.quantity], 2 * sizeof(k.positions[0]));
        k.positions[k.quantity][0] = i / a.size;
        k.positions[k.quantity][1] = i % a.size;
        k.quantity++;
    }
    return k;
}

int main () {
    int i = 0;
    matrix a;
    greatest k;

    printf("Este programa encontra o maior valor em uma matriz quadrada e exibe sua coordenada, ou coordenadas.\n");

    printf("Digite o tamano n da matriz: ");
    if (!(scanf("%d", &a.size)) || a.size <= 0) {
        printf("Tamanho inválido\n");
        return 1;
    }

    printf("Digite, separados por espaço ou quebra de linha, os %d valores inteiros a serem depositados na matriz:\n", a.size * a.size);
    a.values = malloc (a.size * sizeof(a.values));
    while (i < a.size * a.size) {
        a.values[i / a.size] = malloc (a.size * sizeof(a.values[0]));
        do {
            if (!(scanf(" %d", &a.values[i / a.size][i % a.size]))) {
                printf("Valor inválido\n");
                return 1;
            }
            i++;
        } while (i % a.size != 0);
    }

    k = find_in(a);
    printf("Maior valor: %d\n", k.value);
    if (k.quantity == 1)
        printf("Encontrado em: ");
    else
        printf("Encontrado %d vezes em, respectivamente: ", k.quantity);
    for (i = 0; i < k.quantity; i++) {
        if (i == 0)
            printf("(%d,%d)", k.positions[i][0], k.positions[i][1]);
        else
            printf(", (%d,%d)", k.positions[i][0], k.positions[i][1]);
    }
    printf("\n");
    return 0;
}
