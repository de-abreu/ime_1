#include <stdio.h>
#include <stdlib.h>

void read_matrix(double ** matrix, int * x, int * y) {
    int i, j, j_max = 0, lin, col;
    char div;
    lin = col = 1;

    /* Inicializa a matriz (vetor de vetores) antes do loop começar e, após este ter iniciado, redimenciona o número de linhas (vetores) conforme estas são acrescentadas */
    matrix = (double **) malloc (sizeof(double *));
    for (i = 0; div != '\n' || j != 0; i++){
        if (i == lin) {
            lin *= 2;
            matrix = (double **) realloc (matrix, lin * sizeof(double *));
        }

        /* Inicializa a linha (vetor) antes do loop começar e, após este ter iniciado, redimenciona o número de colunas (índices) conforme estas são acrescentadas*/
        matrix[i] = (double *) malloc (col * sizeof(double *));
        for (j = 0; div != '\n'; j++) {
            if (j == col) {
                col *= 2;
                matrix[i] = (double *) realloc (matrix[i], col * sizeof(double));
            }

            if (scanf("%d%c\n", &matrix[i][j], &div)) {
                if (j > j_max)
                    j_max = j;
                if (div == '\n')
                    break;
            }
            else {
                if (j > 0 && j < j_max)
                    for (; j <= j_max; j++)
                        matrix[i][j] = 0;
                *x = i;
                *y = j_max + 1;
                return
            }
        }
    }
}

int main () {
    int i, lenght, xa, ya, xb, yb;
    double ** matrixA, **matrixB;
    printf("Este programa lê duas matrizes e devolve o resultado da multiplicação destas. Digite, separados por espaços, os valores a serem armazenados na matriz. Pressione ENTER para iniciar uma nova linha, e pressione ENTER duas vezes para encerrar a matriz.\n");
    for (i = 0; i < 2; i++){
        printf("Descreva a %dª matriz\n", i + 1);
        if (i == 0)
            read_matrix (matrixA, &xa, &ya);
        else
            read_matrix (matrixB, &xb, &yb)/
    }
    return 0;
}
