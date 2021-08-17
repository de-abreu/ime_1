# Como funciona um computador

## As partes de um computador

A maioria dos computadores encaixa-se na descrição denominada "**arquitetura de von Neumann**", que os descreve enquanto um conjunto de três partes principais ligadas entre si por cabos (o "**barramento**"):

- Unidade Central de Processamento (UCP, ou *CPU*);

- Memória;

- Dispositivos de Entrada e Saída.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-03-30-21-52-08-image.png" title="" alt="" data-align="center">

> Esquematização da arquitetura de von Neumann

### Unidade Central de Processamento (UCP, ou *CPU*)

De forma geral, a CPU pode ser compreendida em duas partes relacionadas entre si:

#### Unidade Lógica e Aritmética (ULA)

O componente que realiza

- operações aritméticas, como somas e subtrações;

- comparações, como *igual* ou *maior que*.

#### Unidade de Controle (UC)

O componente que lê as instruções e dados da **memória**, ou dos **dispositivos de entrada**, decodifica-os e, segundo estes,

- alimenta dados à ULA, nas entradas adequadas;

- recebe resultados da ULA e os encaminha à **memória** ou aos **dispositivos de saída**.

##### Registradores

Circuitos digitais da UC capazes de armazenar e deslocar informações binárias, tipicamente usados como dispositivos de armazenamento temporário. Alguns registros são particularmente importantes:

- O **Contador de Programa** (*Program Counter*, ou *PC*), que armazena o endereço de uma dada instrução corrente, assim permitindo que esta seja realizada múltiplas vezes (isto é, até esta mesma indicar o endereço de uma instrução seguinte);

- O **Registrador de Instruções (RI)**, que define a operação a ser executada.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/a1856b5e80d31b9b0e1c532abcc4a1b97ffd0f2f.png" title="" alt="" data-align="center">

> Esquematização da integração entre ULA e UCP

#### Microprocessadores

Desde a década de 1980, os componentes da CPU encontram-se inseridos em um único circuito: o **microprocessador**. Cada microprocessador possui um conjunto de instruções finito, executado a uma determinada frequência[^1], em um ciclo infinito — ou até que o computador seja desligado.

<img title="" src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01 - Introdução a Ciência da Computação/Resumos/Imagens/0587b4f3cf045d37f3d1136da10fd9275d48b2f3.JPG" alt="" data-align="center">

> Microprocessador Athlon XP 1800+

### Memória

Conceitualmente, a memória do computador pode ser vista como uma lista de células, numeradas sequencialmente, capaz de armazenar uma quantidade fixa e pequena de informação. A numeração de uma célula corresponde ao seu **endereço**.

A **informação** armazenada pode ser de **dois tipos**:

- instruções, as quais descrevem a execução de uma função do computador;

- dados, os quais são processados da realização de instruções.

Enquanto a memória pode ser classificada em dois grupos:

- **voláteis** (tipo *RAM ‒ Random Access Memory*), as quais necessitam ser abastecidas com energia para manter seu conteúdo (ou seja, que só funcionam enquanto o computador estiver ligado);

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/824f897975e229bdbfe16beb171ee01e267000db.png" title="" alt="" data-align="center">

> Chips de memória RAM

- e **não voláteis**, que não necessitam, como o disco rígido.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/2021-03-30-22-13-11-image.png" title="" alt="" data-align="center">

> Um disco rígido moderno aberto

A memória não volátil possui maior capacidade de armazenamento e é relativamente mais barata, por volume de informação; não obstante, a memória RAM pode ser reescrita muito mais rapidamente, tornando possível o computador realizar o processamento de informações de forma mais eficiente.

### Dispositivos de Entrada e Saída - E/S[^2]

Os dispositivos aqueles por meio dos quais o computador recebe e emite, respectivamente, informação ao meio que o circunda. Alguns destes, como discos rígidos e placas de rede, que permitem conexões entre computadores, podem atuar tanto como dispositivos de entrada como de saída.

<img src="file:///home/user/Documents/Drives/USP/Transferência%20Interna/01%20-%20Introdução%20a%20Ciência%20da%20Computação/Resumos/Imagens/3f1634311dffcc6d793fd5fb64d837fcd7f606ca.jpg" title="" alt="" data-align="center">

> Placa de rede Wi-Fi com antena, soldada em outro componente.

## Linguagens de programação

Uma **linguagem de programação** é um método de escrita padronizado, formando um conjunto de regras sintáticas e semânticas, por meio do qual **algoritmos** —um conjunto de instruções finitas, executáveis, e não ambíguas — são descritos. Um texto escrito em linguagem de programação é denominado **código-fonte**. Esse pode ser traduzido em um conjunto de instruções de processamento executável por um computador (isto é, um programa, ou *software*), por meio de um programa denominado **compilador**; ou mesmo ser lido e executado pelo computador após ser por este **interpretado**, como é o caso com *scripts*.

Uma das principais metas das linguagens de programação é que programadores tenham uma maior produtividade, permitindo expressar suas intenções mais facilmente do que quando comparado com a linguagem que um computador entende nativamente (código de máquina). Assim, linguagens de programação são projetadas para adotar uma sintaxe de **nível mais alto**, que pode ser mais facilmente entendida por programadores humanos.

## Distinção entre *Hardware* e *Software*

O ***hardware*** é um termo técnico (e anglicismo de engenharia eletrônica e engenharia mecânica) que foi traduzido para a língua portuguesa como **equipamento**, pode ser definido como um termo geral da língua inglesa que se refere a equipamentos físicos como chaves, fechaduras, dobradiças, etc. Este é bastante utilizado no âmbito da engenharia de computação para referir-se ao conjunto dos componentes do computador: a CPU, a memória, os dispositivos de entrada e saída.

Enquanto o ***software*** é a parte "lógica": o conjunto de instruções e dados processados pelos circuitos eletrônicos do *hardware*.

[^1]: Usualmente entre 1 e 3 GHz (Giga Hertz)

[^2]: Ou i/o ‒*input/output*