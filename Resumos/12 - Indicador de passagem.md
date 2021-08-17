# Indicador de passagem

Padrão bastante utilizado em computação para identificar a ocorrência de um
evento que ajuda no controle do seu programa. O indicador de passagem é uma variável que inicia com um determinado valor, e caso o evento que ele marca ocorra, seu valor é alterado e não muda mais.

```c
i = n % 10;
n /= 10;
while (n != 0) {
	if (n % 10 == i) {
    	adjacente = true;
		break;
	}
	i = n % 10;
	n /= 10;
}
```