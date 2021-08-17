# Fórmula de recorrência e séries (Somas Infinitas)

## Fórmula de recorrência

Uma fórmula de recorrência é uma relação entre os termos sucessivos de uma sequência numérica. Dessa forma, usando uma fórmula de recorrência, é possı́vel obter o próximo termo da sequência usando o valor de termos anteriores. Um exemplo clássico é a sequência de Fibonacci definida pela fórmula de recorrência:

$$
\begin{cases} F_1 = 1;\\ F_2 = 1\\ F_i = F_{i - 1} + F_{i - 2}\ \text{para } i \le 3. \end{cases}
$$

## Erro absoluto

O módulo da diferença entre um valor aproximado e um valor real. Isto é, dado um número $x$ e uma aproximação $y$, o erro (também chamado erro absoluto) $E_{abs}$ é definido como $E_{abs} = | y - x|$.

## Erro relativo

O módulo $E_{rel}$ o módulo da divisão da diferença entre um valor aproximado e um valor real, e o valor real.

$$
E_{rel} = \left| \dfrac{y - x}x \right|
$$

O erro relativo é adequado para aferir a qualidade da aproximação nos casos em que o valor de $x$ não é próximo de 1. Por exemplo, o erro absoluto entre 1.01 e 1.00 é idêntico àquele entre 0.01 e 0.02, mas podemos afirmar que o primeiro caso é uma aproximação muito mais precisa pois tem um erro relativo de 0.01 (1%), enquanto o segundo caso tem um erro relativo de 1.00 (100%).

### Nos casos em que $\bm{x = 0}$

A definição de erro relativo é incompleta, pois não se aplica quando $x = 0$ (0 não pode ser denominador). Nestes casos, um valor arbitrário para $E_{rel}$ é adotado.

Assim sendo, se:

-  $x = 0 = y$, a aproximação é dita perfeita, $E_{rel} = 0$;

- $x = 0 \not = y $, a aproximação é dita insatisfatória, $E_{rel} = 1$;

Ou seja, uma definição mais completa do erro relativo seria

$$
E_{rel} (y, x) =
\begin{cases}
    \begin{matrix}
        \left| \dfrac{y - x}x \right| & \text{se } x \not = 0 \\
        0 & \text{se } x = 0 = y \\
        1 & \text{se } x = 0 \not = y \\
    \end{matrix}
\end{cases}
$$