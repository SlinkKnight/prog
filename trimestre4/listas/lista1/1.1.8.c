#include <stdlib.h>
#include <stdio.h>

int main() {

    float salario = 0.0, taxad;
    while(1) {
        do {
            printf("Digite seu salario >> ");
            scanf("%f", &salario);
        } while (salario <= 0.0);

        if(salario < 1000) taxad = 0.05;
        else if(salario < 5000) taxad = 0.11;
        else taxad = 0.35;

        printf("Salario bruto eh: %.2f\n", salario);
        printf("Salario liquido eh: %.2f\n", salario - salario * taxad);
        printf("Imposto pago eh: %.2f\n", salario * taxad);
    }
}