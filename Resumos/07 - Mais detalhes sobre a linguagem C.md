# Mais detalhes sobre a linguagem C

## Abreviaturas do comando de atribuição

- `num = num + 1` é equivalente à `num++`, tal qual `num--` implica `num = num - 1`;

- `soma = soma + num` pode ser abreviado como `soma += num`, tal qual
  
  - `mult = mult * num` :arrow_right: `mult *= num`;
  
  - `div = div / num` :arrow_right: `div /= num`;
  
  - `rest %= rest * num` :arrow_right: `rest %= num`.

## Atribuição múltipla

```c
i = 0;
soma = 0;
count = 0;
```

Pode ser abreviado como

```c
i = soma = count = 0;
```

Tendo em vista que atribuições são lidas da **direita** para a **esquerda**.

## Atribuição na declaração de variáveis

```c
int num, soma, n;
num = 0;
soma = 0;
```

Pode ser abreviado como

```c
int num = 0, soma = 0, n;
```

## Definição de constantes

É possı́vel definir constantes na linguagem C. Uma constante em um programa é um valor que não muda durante a sua execução. Diferente de uma variável, que durante a execução do programa pode assumir diferentes valores. Os seguintes comandos definem duas constantes, `ZERO` e `UM` de valor 0 e 1, respectivamente.

```c
# define true 1
# define false 0
```