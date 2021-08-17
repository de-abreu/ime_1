# Dicas de programação

## Padrões de programação

Denomina-se um padrão o trecho de código-fonte que tem uma utilidade bem definida e, para tal, pode ser reutilizado noutros contextos.

### Padrão sequência numérica lida

Denominação dada ao padrão utilizado para a obtenção de valores à partir da leitura do teclado. Por exemplo:

```c
...
printf ("Digite um número: ");
scanf ("%d", &num);
...
```

### Padrão sequência numérica gerada

Denominação dada ao padrão utilizado para a geração de valores. Por exemplo:

```c
if (n < 2)
    fatorial = 1;
else
    fatorial = n;
while (n > 2) {
    n--;
    fatorial *= n;
}
```

### Padrão sequência numérica selecionada

Denominação dada ao padrão que seleciona uma amostra de números dentre aqueles gerados por um padrão de repetição. Por exemplo:

```c
while (cont < n) {
    j = 1;
    soma = 0;
    while (j < i) {
        if (i % j == 0)
            soma += j;
        j++;
    }
    if (soma == i) {
        printf ("%d ", i);
        cont++;
    }
    i++;
}
```

### Padrão sequência numérica alternadamente selecionada

Denominação dada ao padrão que seleciona **mais de uma** amostra de números dentre aqueles gerados por um padrão de repetição. Por exemplo:

```c
# include <stdio.h>

int main () {
    int n = 0, i = 1, soma_pares = 0, quant_impares = 0;
    printf ("Este programa determina, para uma sequência de n números positivos consecutivos, inteiros, iniciada em 1, a soma dos números pares e a quantidade de números ímpares.\n");

    while (n <= 0) {
        printf ("Digite um valor para n: ");
        scanf ("%d", &n);
        if (n <= 0)
            printf ("Valor inválido.\n");
    }

    printf ("Soma dos números pares: ");
    while (i <= n) {
        if (i % 2 == 0) {
            if (i != 2)
                printf (" + ");
            printf ("%d", i);
            soma_pares += i;
        }
    }

    printf (" = %d\nQuantidade de número ímpares: %d\n", soma_pares, quant_impares);
    return 0;
}
```