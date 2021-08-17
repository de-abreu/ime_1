# Strings

Sequências de caracteres contidas em um vetor de caracteres `char[]` terminadas por `\0`, o caractere nulo.

## Leitura

Uma forma de se ler uma sequência de caracteres terminadas com `\n` (ENTER, nova linha) e armazená-la em uma variável `string` é:

```c
scanf("%[^\n]", string);
```

## Impressão

Enquanto uma forma de se imprimir uma variável `string` é:

```c
printf("%s\n", string);
```

Onde `%s` é substituído pelo conteúdo da string na tela.

## Biblioteca `<string.h>`

A biblioteca `<string.h>` contém algumas funções para manipular strings, tais quais:

- `int strlen (char s[])`: devolve via `return` o comprimento do vetor `s` até seu final ou caractere nulo;

- `void strcpy (char s1[], char s2[])`: copia o string armazenado em `s2` para `s1`.
