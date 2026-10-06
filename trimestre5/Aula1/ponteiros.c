#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    int *pX;

    x = 35425;
    printf("Quantidade de bytes de INT: %d\n", sizeof(int));
    printf("Valor armazenado em x: %d\n", x);
    printf("Endereço de x na RAM: %d ou %p\n", &x, &x);

    pX = &x; // px = endereço de x

    *pX = 25; //modifica o valor de x

    x = *pX + 10;

    return 0;
}