#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0, j, k, l = 1;
    char div;
    float * input, * heap, * output;

    printf("Este programa recebe uma lista de valores reais e elimina repetições nesta.\n");

    printf("Digite uma sequência de valores separadas por espaço e, ao final, pressione ENTER:\n");
    input = malloc(sizeof(input));
    do {
        if (i == l - 1) {
            l *= 2;
            input = realloc(input, l * sizeof(input));
        }
        if (!(scanf("%f%c", &input[i], &div))) {
            printf("Valor inválido passado.\n");
            return 1;
        }
        i++;
    } while(div != '\n');

    /* Algoritmo para exclusão de repetições */
    output = malloc(i * sizeof(output));
    for (j = 0; i > 0; j++) {
        l = 0;
        output[j] = input[l];
        heap = malloc(i * sizeof(heap));

        for (k = 1; k < i; k++) {
            if (output[j] == input[k])
                continue;
            heap[l] = input[k];
            l++;
        }

        free(input);
        input = heap;
        i = l;
    }

    printf("\nLista de valores sem repetições:\n");
    for (i = 0; i < j; i++)
        printf("%.2g ", output[i]);
    printf("\n");
    return 0;
}
