#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, k, n, width, max, ** pascal;
    width = k = 0;

    printf("Este programa imprime as primeiras n linhas do triângulo de pascal.\nDê um valor positivo e não nulo para n: ");
    if (!(scanf("%d", &n)) || n <= 0){
        printf("Valor inválido\n");
        return 1;
    }

    pascal = (int **) malloc (n * sizeof(int *));
    for (i = 0; i < n; i++) {
        pascal[i] = (int *) malloc (n * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= k; j++) {
            if (i - 1 < 0 || j - 1 < 0 || j == k)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
        k++;
    }

    max = pascal[i - 1][k / 2];
    do {
        max /= 10;
        width++;
    } while (max != 0);

    k = 0;
    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= k; j++)
            printf("%*d ", width, pascal[i][j]);
        printf("\n");
        k++;
    }
    return 0;
}
