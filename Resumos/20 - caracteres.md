# Caracteres (o tipo char)

Na linguagem C, caracteres são armazenados na memória como números inteiros e convertidos para exibição enquanto caracteres conforme a **Tabela ASCII** (American Standard Code for Information Interchange).

## Tabela ASCII

Lista 128 caracteres ordenados alfanuméricamente e numerados de 0 à 127. Esta pode ser estendida de maneira a acomodar valores de -1 a -128 e, assim, acomodar caracteres acentuados, os quais estão ausentes na tabela original.

### Caracteres de controle

Os caracteres de código 0 à 31 são denominados como "de controle" pois indicam um comando o qual a impressora ou monitor devem executar. Tais quais:

| Caractere | Código ASCII | Significado |
| --- | --- | --- |
nulo | 0 | indica o término de uma sequência de caracteres
backspace | 8 | apaga um caractere
line feed | 10 | pula uma linha
carriage return | 13 | retorna o cursor ao início da linha

### Conversão entre caracteres e números inteiros

Na linguagem C, escrever um caractere entre apóstrofes equivale a escrever seu código ASCII. Assim, `'A' == 65`.

## A variável do tipo `char`

Trata-se de uma variável capaz de armazenar um número inteiro de -128 a 127. Adequada, portanto, para armazenar códigos ASCII com um consumo adequado de memória (1 byte).

### Leitura ou impressão de Caracteres

É feito no `scanf` e `printf` com `%c`. No scanf, este deve encontrar-se precedido por um espaço em branco (`scanf (" %c", &caractere)`) para evitar-se de ler este caractere ou o `<ENTER>`.
