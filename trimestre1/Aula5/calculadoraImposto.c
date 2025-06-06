#include <stdlib.h>
#include <stdio.h>

int main() {

    float salario, imposto;

    printf("Insira seu salario >> R$");
    scanf("%f", &salario);

    if(salario >= 0) {
        if(salario <= 5000.0) {
            imposto = salario * 0.1;
        } else {
            imposto = salario * 0.15;
        }
        salario = salario - imposto;
        printf("seu salario corrigido é de R$%.2f\n", salario);
        printf("seu imposto de renda é de R$%.2f\n", imposto);

    } else printf("salario invalido\n");
    
    return 0;
}