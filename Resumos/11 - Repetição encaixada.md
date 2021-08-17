# Repetição encaixada

Denominação dada à repetição no interior doutra repetição.

```c
for (i = 4; count < n; i++) {
    for (j = 3; j < i; j++) {
        if ((j - 2) * (j - 1) * j != i)
            continue;
        printf ("%d * %d * %d = %d\n", j - 2, j - 1, j, i);
        count ++;
    }
}
```
