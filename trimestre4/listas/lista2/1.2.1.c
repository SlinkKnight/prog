#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float serie(float num1, float num2, float num3);
float paralelo(float num1, float num2, float num3);

int main() {

    float num1, num2, num3;
    char tipo;

    while(1) {
        do {
            system("cls");
            printf("Diga o valor de R1 >> ");
            scanf("%f", &num1);
        } while (num1 <= 0);

        do {
            system("cls");
            printf("Diga o valor de R2 >> ");
            scanf("%f", &num2);
        } while (num2 <= 0);

        do {
            system("cls");
            printf("Diga o valor de R3 >> ");
            scanf("%f", &num3);
        } while (num3 <= 0);

        do {
            system("cls");
            printf("Diga o tipo de associacao, [S] ou [P] >> ");
            scanf(" %c", &tipo);
        } while (tipo != 'S' && tipo != 'P');

        system("cls");
        if(tipo == 'S') printf("Resultado da associacao em serie: %.3f", serie(num1, num2, num3));
        else printf("Resultado da associacao em paralelo: %.3f", paralelo(num1, num2, num3));
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}

float serie(float num1, float num2, float num3) { return num1 + num2 + num3; }

float paralelo(float num1, float num2, float num3) { return 1.0/(1.0/num1 + 1.0/num2 + 1.0/num3); }