# Fundamentos

## Declaração de variáveis

A declaração de uma variável que guarda números inteiros em C de nome `num` é feita da seguinte forma:

```c
int num;
```

É possível declarar mais de uma variável em um único comando:

```c
int num1, num2, num3;
```

## Expressões aritméticas

As expressões matemáticas envolvendo números inteiros e pelo menos um dos seguintes operadores:

- **Soma:** `num1 + num2`

- **Subtração:** `num1 - num2`

- **Multiplicação:** `num1 * num2`

- **Quociente de uma divisão inteira:** `num1 / num2`

- **Resto de uma divisão inteira:** `num1 % num2`

> Onde `num1` e `num2` podem ser tanto variáveis inteiras, ou números, ou outras expressões aritméticas.

### Precedência de operadores

Expressões aritméticas são calculadas *uma a uma*[^1], da esquerda para a direita, sendo que os operadores `*`, `/` e `%` são calculados antes de `+` e `-`. O uso de parenteses pode ser feito para separar expressões aritméticas distintas.

## Expressão relacional

As expressões que envolvem comparações simples, de resultado **verdadeiro** ou **falso**, por meio dos seguintes operadores:

- **Menor:** <

- **Maior:** >

- **Menor ou igual:** <=

- **Maior ou igual:** >=

- **Diferente:** !=

- **Igual:** ==

## Leitura do teclado

O comando `scanf` pode ser utilizado para armazenar um número inteiro fornecido pelo usuário em uma variável `num` quando descrito da seguinte forma:

```c
scanf ("%d", &num);
```

Não obstante, é possível armazenar mais de um número, os quais o usuário fornece cada qual separadamente (seja por espaços brancos, ou quebras de linha):

```c
scanf ("%d %d %d", &num1, &num2, num3);
```

## Impressão na tela

A impressão de uma mensagem na tela pode ser feita pelo comando `printf`, da seguinte forma:

```c
printf ("mensagem");
```

### Caracteres especiais

#### `%d`

É substituído na mensagem impressa pelo resultado de expressões aritméticas subsequentes contidas no printf e separadas por vírgula. Por exemplo, para

```c
printf ("A soma dos números %d e %d é %d.\n", 12, 23, 35);
```

a mensagem impressa será

```
A soma dos números 12 e 23 é 35.
```

#### `\n`

Caractere que indica uma quebra de linha. Por exemplo, para

```c
printf ("Linha 1\nLinha 2\n")
```

a mensagem impressa será

```
Linha 1
Linha 2
```

## Atribuição

O armazenamento em **uma** variável (previamente declarada) do resultado de uma expressão aritmética. Por exemplo, em

```c
int soma;
soma = 3 + 2;
```

Armazena-se o valor inteiro `5` na variável `soma`.

### Atribuição e comparação

Note a diferença entre o operador de atribuição `=` e o operador relacional `==`. Observe os comandos:

1. `a = b`
2. `a == b`

O primeiro armazena o conteúdo da variável `b` na variável `a`. O segundo, com significado bem diferente, compara se o conteúdo da variável `a` é igual ao conteúdo da variável `b`.

[^1]: Por exemplo, o valor da expressão (3/4 * 100*) é **zero**. Como todas as operações são inteiras, o resultado de 3/4 é zero (e não 0.75, que é um número real), e multiplicado por 100 continua sendo zero. Isso, mesmo que, intuitivamente, fosse a presença de números reais como um todo permitida, o resultado ao final fosse outro numero inteiro: 75.