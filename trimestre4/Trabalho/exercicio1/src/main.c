#include <stdio.h>
#include <stdlib.h>
#include "../include/bola.h"

void main() {
    float diametro, massa;

    while (1) {
        system("clear");
        do
        {
            printf("Digite o diametro da bola [cm] >> ");
            scanf("%f", &diametro);
        } while (diametro < 0);
        do
        {
            printf("Digite a massa em grama [g] >> ");
            scanf("%f", &massa);
        } while (massa < 0);

        printf("A area da bola eh: %.2f\n", area(diametro/2));
        printf("O volume da bola eh: %.2f\n", volume(diametro/2));
        printf("A densidade da bola eh: %.2f\n", densidade(massa, volume(diametro/2)));
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}