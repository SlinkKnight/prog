#include <stdio.h>
#include <stdlib.h>
#include "../include/matemagica.h"

void main() {
    float n1, n2, n3, n4, n5, somatorio, mediatorio, mediatorioQuadratorio, eficaz;

    while (1) {
        system("cls");
        printf("Digite o numero 1 >> ");
        do {scanf("%f", &n1);} while (n1 < 0);
        printf("Digite o numero 2 >> ");
        do {scanf("%f", &n2);} while (n2 < 0);
        printf("Digite o numero 3 >> ");
        do {scanf("%f", &n3);} while (n3 < 0);
        printf("Digite o numero 4 >> ");
        do {scanf("%f", &n4);} while (n4 < 0);
        printf("Digite o numero 5 >> ");
        do {scanf("%f", &n5);} while (n5 < 0);

        somatorio = soma(n1, n2, n3, n4, n5);
        mediatorio = media(somatorio);
        mediatorioQuadratorio = mediaQuadratica(n1, n2, n3, n4, n5);
        eficaz = valorEficaz(mediatorioQuadratorio);

        printf("O resultado da soma eh: %.2f\n", somatorio);
        printf("O resultado da media eh: %.2f\n", mediatorio);
        printf("O resultado da media quadratica eh: %.2f\n", mediatorioQuadratorio);
        printf("O resultado do valor eficaz eh: %.2f\n", eficaz);
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}