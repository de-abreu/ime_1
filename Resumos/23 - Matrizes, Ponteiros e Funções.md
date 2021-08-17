# Matrizes, Ponteiros e Funções

## Como matrizes são alocadas na memória

Não obstante a utilidade da representação gráfica de uma matriz enquanto uma tabela, na realidade a memória computacional é *linear*. Assim o sendo, matrizes são armazenadas na memória com cada uma de suas sucessivas linhas concatenadas uma seguida da outra.

<img src="file:///home/user/Documents/Drives/USP/Introdução%20a%20Ciência%20da%20Computação/Imagens/2021-08-17-12-03-35-image.png" title="" alt="" data-align="center">

Assim o sendo, o endereço do índice `&m[y][x]` em uma matriz `int m[a][l]` é:

```c
&m[y][x] == &m[0][0] + ((y * l + x) * sizeof(int));
/* ou */
&m[y][x] == m[y * l + x]
```

Fica demonstrado que enquanto vetores são ponteiros que apontam para uma sequência contínua de variáveis de determinado tipo (`&p[x] == *p + sizeof(type)`), uma matriz é um ponteiro que aponta para uma sequência contínua de vetores.

### *Segmentation fault*

Na linguagem C não existe verificação de ı́ndices fora da matriz. Quem deve controlar o uso correto dos ı́ndices é o programador. Se o acesso à memória é indevido, ao executar o programa recebe-se a mensagem de erro `segmantation fault`.

## Matrizes como parâmetro de funções




