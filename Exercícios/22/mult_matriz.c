#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, k, lin[2], col[2], number, length, max_length = 0;
    float *** matrices;

    printf("Este programa lê duas matrizes e devolve o resultado da multiplicação destas.\n");

    for (i = 0; i < 2; i++) {
        printf("Digite, separadas por espaço, as dimenções em linhas e colunas da %dª matriz: ", i + 1);
        if (!(scanf("%d %d", &lin[i], &col[i])) || lin[i] <= 0 || col[i] <= 0) {
            printf("Valor inválido\n");
            return 1;
        }
    }

    if (col[0] != lin[1]) {
        printf("Matrizes de tamanho incorreto: a largura da 1ª matriz (%d) é diferente da altura da 2ª (%d). Estas matrizes não podem ser multiplicadas entre si.)\n", col[0], lin[1]);
        return 1;
    }

    matrices = malloc (3 * sizeof(matrices));
    for (i = 0; i < 2; i++) {
        matrices[i] = malloc (lin[i] * sizeof(matrices[i]));
        for (j = 0; j < lin[i]; j++)
            matrices[i][j] = malloc (col[i] * sizeof(matrices[i][j]));

        printf("Digite, separados por espaço ou quebra de linha, os %d valores a serem depositados na %dª matriz:\n", lin[i] * col[i], i + 1);
        for (j = 0; j < lin[i] * col[i]; j++)
            scanf(" %f", &matrices[i][j / col[i]][j % col[i]]);
    }

    matrices[2] = malloc (lin[0] * sizeof(matrices[2]));
    for (i = 0; i < lin[0]; i++) {
        matrices[2][i] = malloc (col[1] * sizeof(matrices[2][i]));
        for (j = 0; j < col[1]; j++) {
            matrices[2][i][j] = 0;
            for (k = 0; k < col[0]; k++)
                matrices[2][i][j] += matrices[0][i][k] * matrices[1][k][j];

            number = matrices[2][i][j];
            length = 0;
            do {
                number /= 10;
                length++;
            } while (number != 0);
            if (length > max_length)
                max_length = length;
        }
    }

    printf("Resultado:\n");
    for (i = 0; i < lin[0]; i++) {
        for (j = 0; j < col[1]; j++){
            if (matrices[2][i][j] < 0)
                printf("%*.2f ", max_length, matrices[2][i][j]);
            else
                printf(" %*.2f ", max_length, matrices[2][i][j]);
        }
        printf("\n");
    }
    return 0;
}
