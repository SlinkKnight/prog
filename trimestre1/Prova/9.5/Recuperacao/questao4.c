#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <locale.h>

int main() {

    char codigo;
    float volumeMensal, fatura, taxa, tarifa;

    printf("Digite seu codigo >> ");
    scanf("%c", &codigo);

    if (codigo == 'C' || codigo == 'c' || codigo == 'I' || codigo == 'i' || codigo == 'R' || codigo == 'r') {

        printf("Digite o volume mensal consumido >> ");
        scanf("%f", &volumeMensal);

        if (volumeMensal > 0.0F) {

            if (codigo == 'C' || codigo == 'c') {

                if (volumeMensal <= 20.0F) {
                    taxa = 4.0F * volumeMensal;
                } else {
                    taxa = 4.0F * 20.0F + (volumeMensal - 20.0F) * 3.5F;
                }

                fatura = 32.5F + taxa;

                printf("Tipo de consumidor: Comercial\n");
                printf("tarifa basica de: R$32.5\n");


            } else if (codigo == 'R' || codigo == 'r') {

                if (volumeMensal <= 20.0F) {
                    taxa = 3.10F * volumeMensal;
                } else {
                    taxa = 3.1F * 20.0F + (volumeMensal - 20.0F) * 2.5F;
                }

                fatura = 10.5F + taxa;

                printf("Tipo de consumidor: Residencial\n");
                printf("tarifa basica de: R$10.5\n");


            } else {

                fatura = 45.0F + volumeMensal * 5.5F;

                printf("Tipo de consumidor: Industrial\n");
                printf("tarifa basica de: R$45.0\n");

            }

            printf("Conta de gas: %.2f\n", fatura);

        } else printf("Volume invalido\n");
    } else printf("codigo invalido\n");

    return 0;
}