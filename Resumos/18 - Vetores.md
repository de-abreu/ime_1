# Vetores

Vetores são estruturas indexadas utilizadas para armazenar dados de um mesmo tipo (seja `int`, `float`, `char`, etc.). O exemplo à seguir trata-se de um vetor de valores inteiros:

| 0   | 1   | 2   | 3   | ... | 78  | 79  |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| 10  | 12  | 17  | 12  |     | -42 | 34  |

## Declaração de vetores

A sintaxe da declaração de um vetor é a seguinte:

```c
<tipo_do_vetor> <nome_do_vetor>[<tamanho_do_vetor>];
```

Por exemplo:

- `int v[80];` cria um vetor `v` capaz de armazenar 80 valores inteiros;

- `float x[20];` cria um vetor `x` capaz de armazenar 20 valores reais;

int

## O uso de vetores

Pelo uso de vetores torna-se possível armazenar múltiplos valores e ter acesso à estes por meio do índice destes no vetor. O índice sendo um número inteiro e positivo[^1].

### Percorrimento de vetores

Por "percorrer um vetor" significa acessar um vetor índice à índice em uma sequência. Muitos problemas computacionais que envolvem vetores têm como solução o uso de um padrão para percorrimento de vetores.

```c
for (indice = 0; indice < n; indice++) {
    <algum, ou alguns, comandos usando o valor armazenado em vetor[i]>
}
```

> Exemplo de percorrimento de um vetor de tamanho `n` do primeiro ao último índice.

[^1]: Note-se: um vetor de tamanho 80 pode armazenar 80 valores com índices de 0 à 79.