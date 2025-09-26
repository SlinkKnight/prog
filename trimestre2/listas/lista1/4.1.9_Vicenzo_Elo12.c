#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int numero, soma = 0, i = 0;

    while (1) {

        printf("digite um valor [use -69 para parar o programa] >> ");
        scanf("%d", &numero);

        if (numero == -69) break;

        soma += numero;
        i++;
    }

    if (i > 0) {
        printf("soma = %d, media = %.2f\n", soma, (float)soma/i);
    } else {
        printf("nenhum valor digitado\n");
    }

    return 0;
}
