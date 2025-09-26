#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int numero;

    do {
        printf("digite um numero [para sair use 0] >> ");
        scanf("%d", &numero);

        if (numero > 10)
            printf("maior que 10\n");
        else if (numero > 0)
            printf("menor ou igual a 10\n");

    } while (numero != 0);

    return 0;
}
