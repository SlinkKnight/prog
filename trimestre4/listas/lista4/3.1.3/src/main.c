#include <stdio.h>
#include <stdlib.h>
#include "../include/separador.h"

int main() {

    int inteiro;

    while (1)
    {
        do {
            system("cls");
            printf("Digite o seu numero >> ");
            scanf("%d", &inteiro);
        } while (inteiro<0);
        printf("A soma dos algarismos é de %d", separar(inteiro));
    }
}
