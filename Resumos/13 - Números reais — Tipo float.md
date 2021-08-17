# Números reais — Tipo *float*

## Representação de números inteiros

Os circuitos eletrônicos do computador armazenam a informação na forma binária (também chamada de digital). Um dı́gito binário pode assumir apenas 2 valores, representados pelos sı́mbolos 0 (zero) e 1 (um), e que nos circuitos podem corresponder, por exemplo, a uma chave aberta/fechada, a um capacitor carregado/descarregado, etc. Esse elemento básico é conhecido como **bit**.

Os bits (dı́gitos binários) podem ser combinados para representar números da mesma forma que os dı́gitos decimais (dı́gitos de zero a nove), através de uma notação posicional, ou seja, o número 12 na base decimal equivale ao resultado da expressão 1 × 10^1^ + 2 × 10^0^ . Essa mesma quantia pode ser representada por 1100 na base binária pois equivale ao resultado da expressão 1 × 2^3^ + 1 × 2^2^ + 0 × 2^1^ + 0 × 2^0^.

Por razões históricas, a memória do computador é dividida em bytes (conjunto de 8 bits), por isso a memória do seu computador pode ter, por exemplo, 128 MB (mega bytes, onde 1MB = 220 bytes) e o disco rígido 40 GB (giga bytes, onde 1GB = 230 bytes). Com um byte, é possı́vel representar 2^8^ = 256 valores (todas as possíveis configurações de 8 bits de 00000000 a 1111111).

Nos computadores digitais, para representar de números negativos, é comum usar um bit para sinal. Se o bit de sinal é 0 (zero), então o número é positivo; caso contrário, o número é negativo. O bit de sinal é o bit **mais à esquerda possı́vel**. Considerando um byte com o bit de sinal é possı́vel representar 2^8^ = 256 valores (de −128 a +127).

## Representação de números reais

Na memória do computador não podemos armazenar 1/2 bit (apenas os zeros e uns). Como então representar um número fracionário, ou real? A representação é análoga à notação científica, feita em ponto flutuante da seguinte forma:

$$
0.x_1x_2x_3\dots x_k \cdot B^e
$$

Onde:

- **x~1~x~2~x~3~...x~k~** é a *mantissa* (os *k* dígitos mais significativos do número);

- **B** é a base; 

- **e** é o expoente (por meio do qual se determina a posição correta do dı́gito mais significativo do número em ponto flutuante);

Por exemplo,

| Número | Notação Científica           | Mantissa | Base | Expoente |
| ------ | ---------------------------- | -------- | ---- | -------- |
| 456.78 | 0.45678 × 10^3^, ou 4.5678E2 | 45678    | 10   | 3        |

Não obstante, em um computador os valores da mantissa, da base, e do expoente são todos binários.

## Variável do tipo real

Na linguagem C, podemos usar dois tipos de variáveis para representar números reais: `float` e `double`. A diferença entre esses estes dois tipos é que no tipo de dado `double`, podemos representar uma quantidade maior de números reais que no tipo `float` . O tipo `double` usa 8 bytes para guardar um número em ponto flutuante (53 bits para a mantissa e 11 para o expoente); enquanto o float usa 4 bytes (24 bits para a mantissa e 8 para o expoente).

| Variável | Valor mínimo   | Valor máximo  |
| -------- | -------------- | ------------- |
| `float`  | 3.4 × 10^-38^  | 3.4 × 10^38^  |
| `double` | 1.7 × 10^-308^ | 1.7 × 10^308^ |

A declaração destas variáveis pode ser feita das mesmas formas que para variáveis de tipo `int`, ainda que para valores que podem, ou não, ser fracionais.

## Leitura de um número real pelo teclado

Para ler um número real pelo teclado, você deve utilizar `%f` dentro do comando scanf. Por exemplo:

```c
float x;
printf ("Digite um número real: ");
scanf ("%f", &x);
```

## Impressão de números reais

É possível imprimir números reais em mais de uma forma:

| Indicador | Representação                                                                    |
| --------- | -------------------------------------------------------------------------------- |
| `%e`      | imprime um valor real em **notação científica**                                  |
| `%f`      | imprime um valor real em **notação decimal**                                     |
| `%g`      | imprime um valor real na notação cientifica ou decimal, como for mais apropriada |

Por exemplo, no seguinte programa,

```c
# include <stdio.h>

int main () {
    float f = 3.141592654;

    printf ("formato e: f = %e\n", f);
    printf ("formato f: f = %f\n", f);
    printf ("formato e: f = %g\n", f);
    return = 0;
}
```

A saída é:

```
formato e: f = 3.141593e+000
formato f: f = 3.141593
formato g: f = 3.14159
```

### Formatação para impressão de números reais

Muitas vezes, para facilitar a visualização dos resultados, é necessário formatar os dados na saı́da do programa. Tanto o formato `%d` quanto o `%f` podem ser formatados no sentido de reservar um número de dı́gitos para impressão. Para usar formatação, pode-se colocar entre o % e o caractere definindo o tipo (`d` ou `f`) o seguinte:

- **um sinal de menos:** especifica o alinhamento à esquerda (o normal é à direita);

- **um número inteiro:** especifica o tamanho mínimo do campo numérico.[^1]

- **um ponto seguido de um número:** especifica o tamanho máximo de casas decimais a serem impressos após o ponto decimal.[^2]

Por exemplo, no seguinte programa,

```c
# include <stdio.h>

int main () {
    float cempi = 314.159542;

    printf ("cempi = |%-8.2f|\n", cempi);
    printf ("cempi = |%8.2f|\n", cempi);
    printf ("cempi = |%8.4f|\n", cempi);
    printf ("cempi = |%8.4f|\n", cempi * 1000);

    return = 0;
}
```

a saída é:

```
cempi = |314.16  |
cempi = |  314.16|
cempi = |314.1595|
cempi = |314159.5313|
```

## Expressões aritméticas envolvendo reais

Ao utilizarmos números reais em nossos programas, é comum misturar números e variáveis inteiras com reais em nossas expressões aritméticas. Para cada operador (+, -, *, /, etc) da expressão, o compilador precisa decidir se a operação deve ser realizada como inteira ou como real, pois como a forma de representação de inteiros e reais é diferente, as operações precisam ser feitas usando a mesma representação. A regra básica é, se os operandos tiverem tipos diferentes, a representação real é preferida.

### Exemplo no âmbito da divisão

```c
# include <stdio.h>

int main () {
    int i,j;
    float y;

    i = 5 / 3; /* divisão inteira, de resultado igual à 1 */
    y = 5 / 3; /* divisão inteira, de resultado igual à 1.0 (y é real) */
    y = 5.0 / 2; /* divisão em ponto flutuante com resultado 2.5 (o numerador é real) */
    y = 5 / 2.0; /* divisão em ponto flutuante com resultado 2.5 (o denominador é real) */

    y = i /2; /* divisão inteira (i e 2 são inteiros) */
    y = i / 2.0; /* divisão em ponto flutuante (o denominador é real) */
    y = i / j; /* divisão inteira (i e j são inteiros) */
    y = (1.0 * i) / j; /* divisão em ponto flutuante (o numerador é real) */
    y = 1.0 * (i / j); /* divisão inteira (i e j são inteiros) */
    i = y / 2; /* Parte inteira da divisão real (a divisão real é real, mas i é inteiro) */
}
```

Observe que o tipo da variável que recebe a atribuição **não** influencia a forma de calcular as expressões. Após o cálculo, o resultado é convertido ao tipo da  variável (ou seja, inteiro 6 passa a real 6.0 e real 7.5 passa a inteiro 7). É possı́vel forçar a mudança de tipos de um termo dentro de expressão através de definições explícitas conhecidas como *type casting*. Observe o exemplo abaixo:

```c
int i = 4, j = 5;
ff loat f = 5.0, g;

g = 6 * ((int) f / i);
// Variável real g recebe resultado de expressão inteira (6),
// pois a variável f foi explicitamente convertida para o tipo int.

g = (float) 6 * j / i

// O número 6 é convertido à float, e portanto o resultado é real (7.5).
// Uma forma mais simples de obter o mesmo resultado seria definir o
// número 6 como 6.0.
```

[^1]: Se o número a ser impresso ocupar menos espaço, o espaço restante é preenchido com brancos para completar o tamanho desejado, mas se o número ocupar um espaço maior, o limite definido não é respeitado.

[^2]: A precisão padrão para números reais é de **6** casas decimais.