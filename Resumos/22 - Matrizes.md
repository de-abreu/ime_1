# Matrizes

Estruturas indexadas em forma matricial, como ilustra a figura abaixo.

<img src="file:///home/user/Public/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-08-16-23-37-32-image.png" title="" alt="" data-align="center">

Estas armazenam em cada índice diferentes valores de um mesmo tipo (seja este `int`, `char`, `float`, etc.).

## Declaração

```c
<tipo da matriz> <nome da matriz>[<número de "linhas">][<número de "colunas">]
```

> Exemplo:
> 
> `int matriz[100][200]`

## Percorrimento de Matrizes

O seguinte loop de repetição acessa a todos os valores de uma matriz `m[l][c]`

```c
for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
        /* Código a ser executado na posição m[l][c] */    
    }
}
```