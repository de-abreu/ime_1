#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int i = 0, j;
    matrix a;
    greatest k;

    printf("Este programa lista em ordem decrescente os valores depositados em uma matriz, e suas respectivas coordenadas.\n");

    printf("Digite o tamano n da matriz: ");
    if (!(scanf("%d", &a.size)) || a.size <= 0) {
        printf("Tamanho inválido\n");
        return 1;
    }

    printf("Digite, separados por espaço ou quebra de linha, os %d valores inteiros e positivos a serem depositados na matriz:\n", a.size * a.size);
    a.values = malloc (a.size * sizeof(a.values));
    while (i < a.size * a.size) {
        a.values[i / a.size] = malloc (a.size * sizeof(a.values[0]));
        do {
            if (!(scanf(" %d", &a.values[i / a.size][i % a.size]))
            || a.values[i / a.size][i % a.size] < 0) {
                printf("Valor inválido\n");
                return 1;
            }
            i++;
        } while (i % a.size != 0);
    }

    printf("Elemento | Linha | Coluna\n");
    printf("-------------------------\n");
    for (i = 0; i < a.size * a.size;) {
        k = find_in(a);
        for (j = 0; j < k.quantity; j++) {
            printf("%-*d | %-*d | %-*d\n",
            (int) strlen("Elemento"), k.value,
            (int) strlen("Linha"), k.positions[j][0],
            (int) strlen("Coluna"), k.positions[j][1]
            );
            a.values[k.positions[j][0]][k.positions[j][1]] = -1;
        }
        i += k.quantity;
    }
    return 0;
}
