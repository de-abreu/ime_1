# Vetores, ponteiros e funções

## Como vetores são armazenados na memória

A organização das variáveis na memória depende de como o sistema operacional faz gerenciamento da memória. Em geral, para ser mais eficiente, o sistema operacional tende a colocar as variáveis sucessivamente. Assim, a  alocação do vetor na memória é feita de forma sucessiva, ou seja, `v[0]` antes de `v[1]`, que por sua vez antes de `v[2]`, e assim por diante.

Na linguagem C não existe verificação de ı́ndices fora do vetor. Quem deve controlar o uso correto dos ı́ndices é o programador. Além disso, o acesso utilizando um ı́ndice errado pode ocasionar o acesso de outra variável
na memória.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-04-20-15-28-25-image.png" title="" alt="" data-align="center">

No exemplo acima, `v[80]` acessaria a variável n. Se o acesso à memória é indevido recebe-se a mensagem `segmentation fault`.

## Vetores e ponteiros

Podemos apontar um ponteiro ao índice inicial de um vetor utilizando a sintaxe comum para apontar um ponteiro à demais tipos de variáveis:

```c
p = &v[0];
```

Doutra forma, podemos utilizar a **sintaxe especial para ponteiros e vetores**:

```c
p = v;
```

Esta é a única situação em que o nome do vetor tem sentido sem os colchetes. À partir de então, pode-se utilizar a sintaxe de vetores (`nome_do_vetor[índice]`) como ponteiro, e pode-se acessar o valor em `v[i]` utilizando `p[i]` .

Mas se utiliza-se

```c
p = &v[3];
```

então, `p[0]` é o elemento `v[3]`, `p[1]` é o elemento `v[4]`, `p[2]` é o elemento `v[5]`, e assim por diante.

### Operações aritméticas com ponteiros apontados para vetores

Quando somamos 1 a um ponteiro para int ou para float (por exemplo, p) ele passa a apontar para o endereço de memória logo após a memória reservada para este inteiro. Exemplo, se `p = &v[4]`, então `p + 1` é o endereço de `v[5]`, `p + 2` é o endereço de `v[6]`, `p + i` é o endereço de `v[4 + i]`.

É possível se fazer também operações aritméticas entre os índices para os quais os ponteiros encontram-se apontados:

```c
p = &v[20];
q = &v[31];
n = q - p /* O resultado é a diferença entre os índices, neste caso, 11. */
```

## Vetores como parâmetros de funções

Quando se declara uma função que tem como parâmetro um vetor, este vetor é declarado somente com abre e fecha colchetes. Exemplo:

```c
# include <math.h>

float modulo (float v[], int n) {
    int i ;
    float r = 0;
    for (i = 0; i  < n; i++) {
        r = r + v[i] ∗ v[i];
    }
    r = sqrt (r);
    return r;
}
```

Esta função recebe um vetor de reais `v` com `n` elementos e devolve o seu módulo via `return`. A declaração acima é equivalente a

```c
# include <math.h>

float modulo (float *p, int n) {
    int i ;
    float r = 0;
    for (i = 0; i  < n; i++) {
        r = r + p[i] ∗ p[i];
    }
    r = sqrt (r);
    return r;
}
```

Na verdade, a declaração no argumento `float v[]` é a mesma coisa que `float ∗ p`, ou seja, `v` é um ponteiro.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-04-20-17-10-26-image.png" title="" alt="" data-align="center">

> Exemplo de declaração de funções com vetores como parâmetros