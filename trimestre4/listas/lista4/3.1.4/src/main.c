#include <stdio.h>
#include <stdlib.h>
#include "../include/fatorial.h"

int main() {

    int inteiro;

    while (1)
    {
        do {
            system("cls");
            printf("Digite o seu numero >> ");
            scanf("%d", &inteiro);
        } while (inteiro<0);
        printf("O fatorial eh %i", fatorar(inteiro));
        setbuf(stdin, NULL);
        getchar();
    }
}
