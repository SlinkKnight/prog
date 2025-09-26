#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int numero, soma = 0, i = 0;

    while (1) {
        printf("digite um valor positivo [negativo para sair] >> ");
        scanf("%d", &numero);

        if (numero < 0) break;

        soma += numero;
        i++;
    }

    if (i > 0) {
        printf("\033[41;37m");
        printf("total de valores: %d\n", i);
        printf("somatorio: %d\n", soma);
        printf("media: %.2f\n", (float)soma/i);
        printf("\033[0m");
    } else printf("nenhum valor positivo\n");

    return 0;
}
