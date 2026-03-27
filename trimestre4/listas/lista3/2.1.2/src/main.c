#include <stdio.h>
#include <stdlib.h>
#include "../include/reajuste.h"

int main() {

    float salAtual;
    float servico;

    while(1) {
        system("cls");
        do {
            printf("Digite o salario atual >> ");
            scanf("%f", &salAtual);
        } while(salAtual < 1.0);

        do {
            printf("Digite o tempo de servico em anos >> ");
            scanf("%f", &servico);
        } while(servico <= 0.0);

        printf("O reajuste ficou como: R$%.2f", reajuste(salAtual, servico));
    }
}
