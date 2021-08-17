# Definição e uso de funções em programas

## Estrutura de um programa

A estrutura de um programa com funções deve seguir a seguinte forma:

- Includes;

- Protótipos das funções[^1];

- Definição das funções;

- Função principal

Por exemplo, para o seguinte programa:

```c
/* Includes */

# include <stdio.h>

/* Protótipos das funções */

int fatorial (int n);
int comb (int m, int n);

/* Definição das funções */

int fatorial (int n) {
    int i, result = 1;
    for (i = n; i > 1; i--)
        result *= i;
    return result;    
}

int comb (int m, int n) {
    return fatorial (m) / (fatorial (n) * fatorial (m - n));
}

/* Função principal */

int main () {
    int n = -1, p;
    printf ("Este programa imprime os coeficientes da expansão (a + b)^n, para um valor inteiro n >= 0.\n");

    while (n < 0) {
        printf ("Digite um valor para n: ");
        scanf ("%d", &n);
        if (n < 0)
            printf ("Valor inválido.\n");
    }

    for (p = 0; p <= n; p++)
        printf("%d ", comb (n,p));

    printf ("\n");
    return 0;
}
```

## Funções que fazem parte de alguma Biblioteca

As seguintes funções fazem parte da biblioteca `math.h`. Estas podem ser utilizadas estando presente a instrução `# include <math.h>` e compilando-se o programa com a opção `-lm`.

### Trigonométricas

- Seno: `double sin (double x);`

- Cosseno: `double cos (double x);`

- Tangente: `double tan (double x);`

### Exponenciais e logarítmicas

- Exponencial: `double exp (double x);`

> Uso típico: `y = exp (x);`. Devolve $e^x$, ou seja, o número de Euler elevado à potencia $x$.

- Logaritmo com base $e$: `double log (double x);`

> Uso típico: `y = log (x);`. Devolve o logaritmo de $x$ na base $e$.[^2]

- Logaritmo com base 10: `double log10 (double x);`

> Uso típico: `y = log10 (x);`. Devolve o logaritmo de $x$ na base 10.[^2]

### Raiz e potência

- Raiz quadrada: `double sqrt (double x);`

> Uso típico: `y = sqrt (x);`.[^2]

- Potência: `double pow (double x, double y);`

### Valor Absoluto

- `double fabs (double x);`

> Uso típico: `i = fabs (x);`

### Arredondamentos

- `double floor(double x);`

> Uso típico: `i = floor (x)`.  Devolve o maior número inteiro que seja menor que ou igual a x. Por exemplo:
> 
> - `floor (1.8) = 1`;
> 
> - `floor (2.0) = 2`.

- `double ceil (double x);`

> Uso típico : `j = ceil (x)`. Devolve o maior número inteiro que seja maior que ou igual a x. Por exemplo:
> 
> - `floor (1.8) = 2`;
> 
> - `floor (2.0) = 2`.

[^1]: Na realidade, a declaração explicita dos protótipos da funções não é necessária, mas é uma boa prática de programação pois permite que você defina as funções em qualquer ordem.
Caso os protótipos não sejam declarados, as funções precisam ser definidas antes de serem utilizadas por outras funções.

[^2]: Não devem ser utilizados com valores negativos para x.