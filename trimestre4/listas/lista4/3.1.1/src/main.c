#include <stdio.h>
#include <stdlib.h>
#include "../include/volume.h"

void main() {
    double raio;

    while(1) {
        do
        {
            system("cls");
            printf("Digite aqui seu raio >> ");
            scanf("%lf", &raio);
        } while (raio < 0);
        printf("O volume da esfera = %.6lf", volume(raio));
        setbuf(stdin, NULL);
        getchar();
    }
}
