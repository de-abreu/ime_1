# Comando de seleção simples e composta

## Sintaxe

### Seleção simples

```c
if (<condição>)
    <comando>;
```

ou

```c
if (<condição>) {
    <comando_1>
    <comando_2>
    ...
    <comando_n>
}
```

### Seleção composta

```c
if (<condição>)
    <comando>;
else
    <comando>;
```

ou

```c
if (<condição>) {
    <comando_1>
    <comando_2>
    ...
    <comando_n>
}
else {
    <comando_n+1>
    <comando_n+2>
    ...
    <comando_n+k>
}
```