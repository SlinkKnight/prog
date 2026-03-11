#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divd(float num1, float num2);

int main() {
    float num1, num2;
    char tipo;
    float res;

    while(1) {
        do {
            system("cls");
            printf("Digite num1 >> ");
            scanf("%f", &num1);
            printf("Digite num2 >> ");
            scanf("%f", &num2);

            do {
                printf("Digite a operacaoo [+], [-], [*], [/] >> ");
                scanf(" %c", &tipo);
            } while (tipo != '+' && tipo != '-' && tipo != '*' && tipo != '/');

            if (tipo == '/' && num2 == 0) {
                system("cls");
                printf("Operacao nao permitida\n");
                setbuf(stdin, NULL);
                fflush(stdin);
                getchar();
            }
        } while (tipo == '/' && num2 == 0);

        if (tipo == '+') {
            res = soma(num1, num2);
        } else if(tipo == '-') {
            res = sub(num1, num2);
        } else if (tipo == '*') {
            res = mult(num1, num2);
        } else res = divd(num1, num2);

        system("cls");
        printf("Resultado = %.3f", res);
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}

float soma(float num1, float num2) { return num1 + num2; }

float sub(float num1, float num2) { return num1 - num2; }

float mult(float num1, float num2) { return num1 * num2; }

float divd(float num1, float num2) { return num1 / num2;} 