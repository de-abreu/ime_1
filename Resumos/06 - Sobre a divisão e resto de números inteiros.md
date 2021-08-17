# Sobre a divisão e resto de números inteiros

## Divisão inteira

Sabe-se que o resultado de uma divisão inteira é, sempre, um número inteiro. Assim, o resultado de 

- `3 / 4 = 0`;

- `9 / 4 = 2`;

- `9 / 2 = 4`;

- etc.

Ou seja, a parte fracionária é simplesmente eliminada, ou "**truncada**".

Não obstante, existem situações em que é a necessidade de se manipular os dígitos de um número inteiro e, nestas, pode ser útil dividir um número por um múltiplo de 10. Por exemplo, qualquer número de dois ou mais dígitos terá truncado seu último dígito ao ser dividido por 10, ou seus dois últimos dígitos ao ser dividido por 100, e assim por diante.

## Resto de uma divisão inteira

Como visto anteriormente, a operação `a % b` resulta no resto da divisão de `a` por `b`. Tal que:

- `10 % 4 = 2`;

- `3 % 10 = 3`;

- `3 % 2 = 1`;

- etc.

Ou seja, esta operação pode ser utilizada, dividindo-se por um múltiplo de 10 para **extrair** (em vez de truncar) os últimos dígitos de um número. Feito este procedimento com o último digito de um número, pode-se determinar se este número é par ou ímpar se o resto da divisão do dígito por 2 é 0 ou 1, respectivamente.