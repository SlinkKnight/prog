#include <stdio.h>
#include <stdlib.h>
#include "../include/salario.h"

int main() {
    int filhos;
    float salarioBruto, imposto, auxilio, salarioFinal;

    while (1) {
        do
        {
            printf("Digite a quantidade de filhos >> ");
            scanf("%d", &filhos);
        } while (filhos < 0);
        do
        {
            printf("Digite o salario >> ");
            scanf("%f", &salarioBruto);
        } while (salarioBruto < 0);

        printf("Auxilio Familia: R$ %.2f\n",auxilioFamilia(filhos));
        printf("Imposto de Renda: R$ %.2f\n",calculaImposto(salarioBruto));
        printf("Salario Final: R$ %.2f\n",calculaSalarioFinal(salarioBruto, auxilio, imposto));
        return 0;
    }



}
