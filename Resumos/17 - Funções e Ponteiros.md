# Funções e Ponteiros

## Memória

![](/home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-04-17-22-16-29-image.png)

> Esquematização da memória de um computador.

Pode-se dizer que a memória RAM de um computador é constituída por unidades denominadas **gavetas**. Cada gaveta possui 8 regiões: os bits, o bit mais a esquerda sendo o **bit de sinal**. Cada gaveta constitui, portanto, um *byte*. Em código binário, valores podem ser armazenados nas diferentes gavetas.

Para cada gaveta na memória é associada uma identificação numérica (no exemplo, de 00 à 99, mas em computadores reais o último número pode ser muito maior), o respectivo **endereço**.

## Declaração de variáveis

Quando declara-se uma variável, reserva-se espaço suficiente na memória para armazenar seu valor. À depender da variável, uma ou mais gavetas são reservadas[^1]. Não obstante, sendo armazenada, a variável que ocupa tais gavetas adquire um **único endereço**.

## Ponteiros (ou apontadores)

Ponteiros são um tipo de variável que armazena endereços doutras variáveis quaisquer. Por exemplo, para armazenar no ponteiro `pon` o endereço da variável inteira `n` utiliza-se:

```c
pon = &n;
```

Onde o `&` antes do nome da variável `n` indica "endereço de".

Se uma variável do tipo ponteiro `pon` armazena o endereço doutra variável `n`, diz-se `pon` *aponta para* `n` .

### Declaração de variáveis do tipo ponteiro

Existem ponteiros distintos para armazenar o endereço de variáveis de tipos distintos. Por exemplo, nos seguintes comandos criam-se ponteiros para armazenar o endereço de variáveis do tipo

- `int`: `int * pon;`

- `float`: `float * pon;`

- `char`: `char * pon;`

- etc.

Onde o `*` antes da variável `pon` e após o tipo da variável indica "vai para".

### Uso do operador "vai para"

Uma vez que um ponteiro aponta para uma variável é possível ter acesso à esta usando o operador `*`. Por exemplo, no seguinte no seguinte comando:

```c
* pon = 10
```

Armazena-se o valor 10 na variável para qual o ponteiro encontra-se apontado. Assim sendo, ponteiros quando utilizados como **parâmetros de uma função** podem servir a modificar variáveis as quais encontram-se fora desta. Por exemplo:

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-04-18-12-32-32-image.png" title="" alt="" data-align="center">

No código acima vemos a função `f`, por meio do ponteiro `*y` alterar o valor de da variável `b` declarada na função principal.

## Funções do tipo *void*

As funções aquelas que não retorna um valor pelo comando `return`.

[^1]: Para variáveis inteiras são reservadas 4 gavetas (bytes). Para float e double são reservadas 4 e 8 bytes, respectivamente.